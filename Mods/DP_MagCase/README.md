# DP Magazine Case

A hard case for carrying magazines and ammo. It reuses the vanilla **Protector Case** model, so the mod ships no new models or textures.

| Feature | Value |
|---|---|
| Classname | `DP_MagCase` |
| Size in inventory | 3x3 |
| Magazine attachment slots | 20 (any magazine, from any weapon or mod) |
| Speed loader slot | 1 |
| Cargo | 20 slots (5x4); ammo, magazines and ammo boxes only |

## How it works

- **Any magazine from any mod.** Every DayZ magazine inherits from `Magazine_Base`. The config appends the 21 case slots to `Magazine_Base` with `inventorySlot[] +=`, so every magazine that inherits from it, vanilla or modded, can go into the case.
- Loose rounds (`Ammunition_Base`) are blocked from the magazine slots and belong in the cargo.
- **Speed loader slot.** This slot accepts any magazine whose classname contains `speedloader`, `speed_loader` or `speedload` (not case-sensitive). To add keywords for a mod that names its speed loaders differently, edit `dpSpeedLoaderKeywords[]` in `config.cpp`.
- **Cargo.** By default the cargo only accepts magazines, loose ammo and `AmmoBox_*` boxes. To allow any item, set `CARGO_AMMO_ONLY = false` in `scripts/4_World/DP_MagCase/DP_MagCase.c`.

## Building

1. Pack the `DP_MagCase/` folder into a PBO with DayZ Tools Addon Builder (or pboProject). Use the prefix `DP_MagCase`.
2. Arrange the files like this:
   ```
   @DP_MagCase/
     mod.cpp
     Addons/DP_MagCase.pbo
     Keys/<your>.bikey      (if you sign the PBO)
   ```
3. Add `@DP_MagCase` to both `-mod=` (client and server) and copy the `.bikey` into the server's `keys/` folder.
4. Merge `ServerFiles/types.xml` into your mission's `db/types.xml` so the case spawns as loot. To test it, spawn it with an admin tool: `DP_MagCase`.

## Compatibility note

If a mod's magazine overrides `inventorySlot[]` with `=` (rather than inheriting it), that magazine loses the case slots. Fix it with a small patch addon that loads after that mod:

```cpp
class CfgPatches { class DP_MagCase_Compat_X { requiredAddons[] = {"DP_MagCase","<OtherModPatch>"}; units[]={}; weapons[]={}; }; };
class CfgMagazines
{
	class Magazine_Base;
	class Some_Modded_Mag: Magazine_Base
	{
		inventorySlot[] += {"DP_MagCase_Mag01","DP_MagCase_Mag02", /* ...through Mag20 */ "DP_MagCase_SpeedLoader"};
	};
};
```
