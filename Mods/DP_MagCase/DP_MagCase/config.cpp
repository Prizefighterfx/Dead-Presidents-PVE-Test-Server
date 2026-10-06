// Dead Presidents - Magazine Case
// A 3x3 hard case (vanilla Protector Case model) with 20 magazine attachment
// slots, 1 speed loader slot and 20 slots of cargo for ammo.

class CfgPatches
{
	class DP_MagCase
	{
		units[] = {"DP_MagCase"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Containers",
			"DZ_Weapons_Magazines"
		};
	};
};

class CfgMods
{
	class DP_MagCase
	{
		dir = "DP_MagCase";
		name = "DP Magazine Case";
		author = "Dead Presidents";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"DP_MagCase/scripts/4_World"};
			};
		};
	};
};

class CfgSlots
{
	class Slot_DP_MagCase_Mag01
	{
		name = "DP_MagCase_Mag01";
		displayName = "Magazine 1";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag02
	{
		name = "DP_MagCase_Mag02";
		displayName = "Magazine 2";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag03
	{
		name = "DP_MagCase_Mag03";
		displayName = "Magazine 3";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag04
	{
		name = "DP_MagCase_Mag04";
		displayName = "Magazine 4";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag05
	{
		name = "DP_MagCase_Mag05";
		displayName = "Magazine 5";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag06
	{
		name = "DP_MagCase_Mag06";
		displayName = "Magazine 6";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag07
	{
		name = "DP_MagCase_Mag07";
		displayName = "Magazine 7";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag08
	{
		name = "DP_MagCase_Mag08";
		displayName = "Magazine 8";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag09
	{
		name = "DP_MagCase_Mag09";
		displayName = "Magazine 9";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag10
	{
		name = "DP_MagCase_Mag10";
		displayName = "Magazine 10";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag11
	{
		name = "DP_MagCase_Mag11";
		displayName = "Magazine 11";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag12
	{
		name = "DP_MagCase_Mag12";
		displayName = "Magazine 12";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag13
	{
		name = "DP_MagCase_Mag13";
		displayName = "Magazine 13";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag14
	{
		name = "DP_MagCase_Mag14";
		displayName = "Magazine 14";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag15
	{
		name = "DP_MagCase_Mag15";
		displayName = "Magazine 15";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag16
	{
		name = "DP_MagCase_Mag16";
		displayName = "Magazine 16";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag17
	{
		name = "DP_MagCase_Mag17";
		displayName = "Magazine 17";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag18
	{
		name = "DP_MagCase_Mag18";
		displayName = "Magazine 18";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag19
	{
		name = "DP_MagCase_Mag19";
		displayName = "Magazine 19";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_Mag20
	{
		name = "DP_MagCase_Mag20";
		displayName = "Magazine 20";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
	class Slot_DP_MagCase_SpeedLoader
	{
		name = "DP_MagCase_SpeedLoader";
		displayName = "Speed Loader";
		ghostIcon = "set:dayz_inventory image:magazine";
	};
};

// Every magazine (vanilla or modded) inherits from Magazine_Base, so appending
// the case slots here makes any magazine attachable to the case. Ammo piles
// also inherit Magazine_Base; they are rejected from the slots in script.
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		inventorySlot[] +=
		{
			"DP_MagCase_Mag01",
			"DP_MagCase_Mag02",
			"DP_MagCase_Mag03",
			"DP_MagCase_Mag04",
			"DP_MagCase_Mag05",
			"DP_MagCase_Mag06",
			"DP_MagCase_Mag07",
			"DP_MagCase_Mag08",
			"DP_MagCase_Mag09",
			"DP_MagCase_Mag10",
			"DP_MagCase_Mag11",
			"DP_MagCase_Mag12",
			"DP_MagCase_Mag13",
			"DP_MagCase_Mag14",
			"DP_MagCase_Mag15",
			"DP_MagCase_Mag16",
			"DP_MagCase_Mag17",
			"DP_MagCase_Mag18",
			"DP_MagCase_Mag19",
			"DP_MagCase_Mag20",
			"DP_MagCase_SpeedLoader"
		};
	};
};

class CfgVehicles
{
	class Container_Base;
	class ProtectorCase: Container_Base {};
	class DP_MagCase: ProtectorCase
	{
		scope = 2;
		displayName = "Magazine Case";
		descriptionShort = "A rugged hard case fitted with foam cut-outs for 20 magazines and a speed loader, with extra room for loose ammunition.";
		itemSize[] = {3,3};
		itemsCargoSize[] = {5,4};
		attachments[] =
		{
			"DP_MagCase_Mag01",
			"DP_MagCase_Mag02",
			"DP_MagCase_Mag03",
			"DP_MagCase_Mag04",
			"DP_MagCase_Mag05",
			"DP_MagCase_Mag06",
			"DP_MagCase_Mag07",
			"DP_MagCase_Mag08",
			"DP_MagCase_Mag09",
			"DP_MagCase_Mag10",
			"DP_MagCase_Mag11",
			"DP_MagCase_Mag12",
			"DP_MagCase_Mag13",
			"DP_MagCase_Mag14",
			"DP_MagCase_Mag15",
			"DP_MagCase_Mag16",
			"DP_MagCase_Mag17",
			"DP_MagCase_Mag18",
			"DP_MagCase_Mag19",
			"DP_MagCase_Mag20",
			"DP_MagCase_SpeedLoader"
		};
		// Class-name keywords (case-insensitive) that identify a speed loader.
		// Add keywords here if a mod uses different naming.
		dpSpeedLoaderKeywords[] = {"speedloader","speed_loader","speedload"};
		class GUIInventoryAttachmentsProps
		{
			class Magazines
			{
				name = "Magazines";
				description = "";
				attachmentSlots[] =
				{
					"DP_MagCase_Mag01",
			"DP_MagCase_Mag02",
			"DP_MagCase_Mag03",
			"DP_MagCase_Mag04",
			"DP_MagCase_Mag05",
			"DP_MagCase_Mag06",
			"DP_MagCase_Mag07",
			"DP_MagCase_Mag08",
			"DP_MagCase_Mag09",
			"DP_MagCase_Mag10",
			"DP_MagCase_Mag11",
			"DP_MagCase_Mag12",
			"DP_MagCase_Mag13",
			"DP_MagCase_Mag14",
			"DP_MagCase_Mag15",
			"DP_MagCase_Mag16",
			"DP_MagCase_Mag17",
			"DP_MagCase_Mag18",
			"DP_MagCase_Mag19",
			"DP_MagCase_Mag20"
				};
				icon = "set:dayz_inventory image:magazine";
			};
			class SpeedLoader
			{
				name = "Speed Loader";
				description = "";
				attachmentSlots[] = {"DP_MagCase_SpeedLoader"};
				icon = "set:dayz_inventory image:magazine";
			};
		};
	};
};
