class DP_MagCase extends ProtectorCase
{
	static const string SPEEDLOADER_SLOT = "DP_MagCase_SpeedLoader";

	// Set to false to allow any item in the 20-slot cargo, not just ammo/magazines.
	static const bool CARGO_AMMO_ONLY = true;

	protected static ref array<string> m_DPSpeedLoaderKeywords;

	static bool DP_IsSpeedLoader(EntityAI item)
	{
		if (!item)
			return false;

		if (!m_DPSpeedLoaderKeywords)
		{
			m_DPSpeedLoaderKeywords = new array<string>;
			GetGame().ConfigGetTextArray("CfgVehicles DP_MagCase dpSpeedLoaderKeywords", m_DPSpeedLoaderKeywords);
			if (m_DPSpeedLoaderKeywords.Count() == 0)
				m_DPSpeedLoaderKeywords.Insert("speedloader");
		}

		string type = item.GetType();
		type.ToLower();
		foreach (string keyword : m_DPSpeedLoaderKeywords)
		{
			string kw = keyword;
			kw.ToLower();
			if (type.Contains(kw))
				return true;
		}
		return false;
	}

	static bool DP_IsAmmoItem(EntityAI item)
	{
		if (!item)
			return false;
		// Magazines, speed loaders and loose ammo piles all derive from Magazine.
		if (item.IsInherited(Magazine))
			return true;
		// Boxed ammunition (AmmoBox_*).
		if (item.IsKindOf("Box_Base"))
			return true;
		return false;
	}

	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (!super.CanReceiveAttachment(attachment, slotId))
			return false;

		// Only real magazines go in the slots, not loose rounds.
		if (!attachment.IsInherited(Magazine) || attachment.IsInherited(Ammunition_Base))
			return false;

		bool isSpeedLoader = DP_IsSpeedLoader(attachment);
		if (InventorySlots.GetSlotName(slotId) == SPEEDLOADER_SLOT)
			return isSpeedLoader;

		return true;
	}

	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
			return false;

		if (CARGO_AMMO_ONLY)
			return DP_IsAmmoItem(item);

		return true;
	}

	override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
	{
		if (!super.CanSwapItemInCargo(child_entity, new_entity))
			return false;

		if (CARGO_AMMO_ONLY)
			return DP_IsAmmoItem(new_entity);

		return true;
	}
};
