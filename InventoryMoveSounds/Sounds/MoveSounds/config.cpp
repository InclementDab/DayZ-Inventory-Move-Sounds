////////////////////////////////////////////////////////////
// Niphoria's sick edits below                            //
// beware!!! reading could cause massive headache         // 
// Viewer discretion is advised                           //
////////////////////////////////////////////////////////////
class CfgPatches
{
	class IMS_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Belts",
			"DZ_Characters_Glasses",
			"DZ_Characters_Gloves",
			"DZ_Characters_Headgear",
			"DZ_Characters_Masks",
			"DZ_Characters_Pants",
			"DZ_Characters_Shoes",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests",
			"DZ_Gear_Books",
			"DZ_Gear_Camping",
			"DZ_Gear_Consumables",
			"DZ_Gear_Containers",
			"DZ_Gear_Cooking",
			"DZ_Gear_Crafting",
			"DZ_Gear_Cultivation",
			"DZ_Gear_Drinks",
			"DZ_Gear_Food",
			"DZ_Gear_Medical",
			"DZ_Gear_Navigation",
			"DZ_Gear_Optics",
			"DZ_Radio",
			"DZ_Gear_Tools",
			"DZ_Gear_Traps",
			"DZ_Vehicles_Parts",
			"DZ_Vehicles_Wheeled",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Lights",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics",
			"DZ_Weapons_Supports",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Melee_Blade",
			"DZ_Weapons_Melee_Blunt",
			"DZ_Weapons_Melee_Powered"
		};
		author = "Niphoria";
		name = "CreatorZ Professionally hired monkey";
	};
};
// Adding semicolons in case i forget any
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
class CfgVehicles
{
	class Static;
	class Inventory_Base: Static
	{
		ItemMoveSounds[] = 
		{
			"IMS_Item_Move_Small",
			"IMS_Item_Move_Regular"
		};
		
		ItemMoveSoundVolume = 0.85;
	};
	class ItemOptics: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
			//"PSO11Optic_drop_SoundSet" Too loud
		};
	};
	class Clothing_Base;
	class Edible_Base;
	class Book_Base;
	class Clothing: Clothing_Base{};
	class Switchable_Base;
	class Container_Base;
	class HouseNoDestruct;
	class TentBase;
	class Box_Base;
	class WorldContainer_Base;
	class Bottle_Base;
	class Transmitter_Base;
	class FishingRod_Base;
	class Powered_Base;
	class Trap_Base;
	// class ItemBarrel;
	class ItemSuppressor;
	class FishingRod_Base_New: FishingRod_Base
	{
	};
	class BaseBuildingBase: Inventory_Base{};
	

//	██████╗░░█████╗░░█████╗░██╗░░██╗██████╗░░█████╗░░█████╗░██╗░░██╗░██████╗
//	██╔══██╗██╔══██╗██╔══██╗██║░██╔╝██╔══██╗██╔══██╗██╔══██╗██║░██╔╝██╔════╝
//	██████╦╝███████║██║░░╚═╝█████═╝░██████╔╝███████║██║░░╚═╝█████═╝░╚█████╗░
//	██╔══██╗██╔══██║██║░░██╗██╔═██╗░██╔═══╝░██╔══██║██║░░██╗██╔═██╗░░╚═══██╗
//	██████╦╝██║░░██║╚█████╔╝██║░╚██╗██║░░░░░██║░░██║╚█████╔╝██║░╚██╗██████╔╝
//	╚═════╝░╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝╚═════╝░

	class TaloonBag_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class TortillaBag: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class CourierBag: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class FurCourierBag: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class ImprovisedBag: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class FurImprovisedBag: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class DryBag_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class HuntingBag: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class MountainBag_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"taloonbag_drop_SoundSet"
		};
	};
	class SmershBag: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class ChildBag_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class GhillieBushrag_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Cloth_Back_walkCro_ghillie_Soundset",
			"Cloth_Back_runCro_ghillie_Soundset",
			"Cloth_Back_walkErc_ghillie_Soundset",
			"Cloth_Back_walkRasErc_ghillie_Soundset",
			"Cloth_Back_runErc_ghillie_Soundset",
			"Cloth_Back_runRasErc_ghillie_Soundset",
			"Cloth_Back_sprintErc_ghillie_Soundset",
			"Cloth_Back_shortmove_ghillie_Soundset"
		};
	};
	class GhillieTop_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Cloth_Back_walkCro_ghillie_Soundset",
			"Cloth_Back_runCro_ghillie_Soundset",
			"Cloth_Back_walkErc_ghillie_Soundset",
			"Cloth_Back_walkRasErc_ghillie_Soundset",
			"Cloth_Back_runErc_ghillie_Soundset",
			"Cloth_Back_runRasErc_ghillie_Soundset",
			"Cloth_Back_sprintErc_ghillie_Soundset",
			"Cloth_Back_shortmove_ghillie_Soundset"
		};
	};
	class GhillieSuit_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Cloth_Back_walkCro_ghillie_Soundset",
			"Cloth_Back_runCro_ghillie_Soundset",
			"Cloth_Back_walkErc_ghillie_Soundset",
			"Cloth_Back_walkRasErc_ghillie_Soundset",
			"Cloth_Back_runErc_ghillie_Soundset",
			"Cloth_Back_runRasErc_ghillie_Soundset",
			"Cloth_Back_sprintErc_ghillie_Soundset",
			"Cloth_Back_shortmove_ghillie_Soundset"
		};
	};
	class LeatherSack_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"taloonbag_drop_SoundSet"
		};
	};
	class AssaultBag_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"taloonbag_drop_SoundSet"
		};
	};
	class CoyoteBag_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"taloonbag_drop_SoundSet"
		};
	};
	class AliceBag_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"taloonbag_drop_SoundSet"
		};
	};
	class LargeTentBackPack: Clothing
	{
		// In case they ever add it
		ItemMoveSounds[] = 
		{
			"mediumtent_drop_SoundSet"
		};
	};


//	██████╗░███████╗██╗░░░░░████████╗░██████╗
//	██╔══██╗██╔════╝██║░░░░░╚══██╔══╝██╔════╝
//	██████╦╝█████╗░░██║░░░░░░░░██║░░░╚█████╗░
//	██╔══██╗██╔══╝░░██║░░░░░░░░██║░░░░╚═══██╗
//	██████╦╝███████╗███████╗░░░██║░░░██████╔╝
//	╚═════╝░╚══════╝╚══════╝░░░╚═╝░░░╚═════╝░
// Belts oh no i get PTSD from daddy spanking me with it

	class CivilianBelt: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class MilitaryBelt: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class LeatherKnifeSheath: Clothing
	{	// does this even work ?
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class NylonKnifeSheath: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class LeatherBelt_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};


//	░██████╗░██╗░░░░░░█████╗░░██████╗░██████╗███████╗░██████╗
//	██╔════╝░██║░░░░░██╔══██╗██╔════╝██╔════╝██╔════╝██╔════╝
//	██║░░██╗░██║░░░░░███████║╚█████╗░╚█████╗░█████╗░░╚█████╗░
//	██║░░╚██╗██║░░░░░██╔══██║░╚═══██╗░╚═══██╗██╔══╝░░░╚═══██╗
//	╚██████╔╝███████╗██║░░██║██████╔╝██████╔╝███████╗██████╔╝
//	░╚═════╝░╚══════╝╚═╝░░╚═╝╚═════╝░╚═════╝░╚══════╝╚═════╝░

	class SportGlasses_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SportGlasses_pickup_SoundSet",
			"SportGlasses_drop_SoundSet"
		};
	};
	class AviatorGlasses: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SportGlasses_pickup_SoundSet",
			"SportGlasses_drop_SoundSet"
		};
	};
	class DesignerGlasses: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SportGlasses_pickup_SoundSet",
			"SportGlasses_drop_SoundSet"
		};
	};
	class ThickFramesGlasses: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SportGlasses_pickup_SoundSet",
			"SportGlasses_drop_SoundSet"
		};
	};
	class ThinFramesGlasses: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SportGlasses_pickup_SoundSet",
			"SportGlasses_drop_SoundSet"
		};
	};
	class TacticalGoggles: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SportGlasses_pickup_SoundSet",
			"SportGlasses_drop_SoundSet"
		};
	};
	class NVGHeadstrap: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class NVGoggles: ItemOptics
	{
		
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};
	};


//	░██████╗░██╗░░░░░░█████╗░██╗░░░██╗███████╗░██████╗
//	██╔════╝░██║░░░░░██╔══██╗██║░░░██║██╔════╝██╔════╝
//	██║░░██╗░██║░░░░░██║░░██║╚██╗░██╔╝█████╗░░╚█████╗░
//	██║░░╚██╗██║░░░░░██║░░██║░╚████╔╝░██╔══╝░░░╚═══██╗
//	╚██████╔╝███████╗╚█████╔╝░░╚██╔╝░░███████╗██████╔╝
//	░╚═════╝░╚══════╝░╚════╝░░░░╚═╝░░░╚══════╝╚═════╝░
//	Wish we had long gloves in dayz love them irl

	class WorkingGloves_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class TacticalGloves_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class NBCGloves_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class SurgicalGloves_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class LeatherGloves_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class OMNOGloves_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};


//	██╗░░██╗███████╗░█████╗░██████╗░░██╗░░░░░░░██╗███████╗░█████╗░██████╗░
//	██║░░██║██╔════╝██╔══██╗██╔══██╗░██║░░██╗░░██║██╔════╝██╔══██╗██╔══██╗
//	███████║█████╗░░███████║██║░░██║░╚██╗████╗██╔╝█████╗░░███████║██████╔╝
//	██╔══██║██╔══╝░░██╔══██║██║░░██║░░████╔═████║░██╔══╝░░██╔══██║██╔══██╗
//	██║░░██║███████╗██║░░██║██████╔╝░░╚██╔╝░╚██╔╝░███████╗██║░░██║██║░░██║
//	╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═════╝░░░░╚═╝░░░╚═╝░░╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝
//	HEADWEAR IMA WEAR YOUR HEAD

	class BallisticHelmet_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"BallisticHelmet_drop_SoundSet"
		};
	};
	class BaseballCap_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ZSh3PilotHelmet: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class ConstructionHelmet_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class BurlapSackCover: Clothing
	{ // Kinky
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class BeanieHat_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class Ushanka_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class PumpkinHelmet: Clothing
	{ // even more kinky if you think about it
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class MotoHelmet_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class DarkMotoHelmet_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class Headtorch_ColorBase: Switchable_Base
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class Bandana_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class RadarCap_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class MilitaryBeret_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class FlatCap_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ZmijovkaCap_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class CowboyHat_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class BoonieHat_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class OfficerHat: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class PoliceCap: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class PilotkaCap: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class TankerHelmet: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class GorkaHelmet: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class FirefightersHelmet_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class SkateHelmet_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class WeldingMask: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class PrisonerCap: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class GhillieHood_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Cloth_Back_walkCro_ghillie_Soundset",
			"Cloth_Back_runCro_ghillie_Soundset",
			"Cloth_Back_walkErc_ghillie_Soundset",
			"Cloth_Back_walkRasErc_ghillie_Soundset",
			"Cloth_Back_runErc_ghillie_Soundset",
			"Cloth_Back_runRasErc_ghillie_Soundset",
			"Cloth_Back_sprintErc_ghillie_Soundset",
			"Cloth_Back_shortmove_ghillie_Soundset"
		};
	};
	class LeatherHat_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class MedicalScrubsHat_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class GreatHelm: Clothing
	{
		ItemMoveSounds[] = 
		{
			"pickUpPot_SoundSet"
		};
		ItemMoveSoundVolume = 1.25;
	};
	class Ssh68Helmet: Clothing
	{ // Penis helmet
		ItemMoveSounds[] = 
		{
			"BallisticHelmet_drop_SoundSet"
		};
	};
	class DirtBikeHelmet_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class DirtBikeHelmet_Visor: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_pickup_SoundSet"
		};
	};
	class DirtBikeHelmet_Mouthguard: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_pickup_SoundSet"
		};
	};
	class NBCHoodBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class HockeyHelmet_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_drop_SoundSet"
		};
	};
	class SantasHat: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class WitchHood_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class WitchHat: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class Mich2001Helmet: Clothing
	{
		ItemMoveSounds[] = 
		{
			"BallisticHelmet_drop_SoundSet"
		};
	};


//	███╗░░░███╗░█████╗░░██████╗██╗░░██╗░██████╗
//	████╗░████║██╔══██╗██╔════╝██║░██╔╝██╔════╝
//	██╔████╔██║███████║╚█████╗░█████═╝░╚█████╗░
//	██║╚██╔╝██║██╔══██║░╚═══██╗██╔═██╗░░╚═══██╗
//	██║░╚═╝░██║██║░░██║██████╔╝██║░╚██╗██████╔╝
//	╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═════╝░╚═╝░░╚═╝╚═════╝░

	class GasMask: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_pickup_SoundSet"
		};
	};
	class BandanaMask_ColorBase: Clothing
	{	// why am i even adding these AFAIK it just uses selections now
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class NioshFaceMask: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class BalaclavaMask_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class GP5GasMask: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_pickup_SoundSet"
		};
	};
	class AirborneMask: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_pickup_SoundSet"
		};
	};
	class GP5GasMask_Filter: Inventory_Base
	{	// i will have these in my mod so ima add them here already C:
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_pickup_SoundSet"
		};
	};
	class Balaclava3Holes_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class SantasBeard: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class MouthRag: Clothing
	{	//Kinky
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class SurgicalMask: Clothing
	{ // cOWOna 
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class HockeyMask: Clothing
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_pickup_SoundSet"
		};
	};
	class CrookedNose: Clothing
	{	//Kinky
	};


//	██████╗░░█████╗░███╗░░██╗████████╗░██████╗
//	██╔══██╗██╔══██╗████╗░██║╚══██╔══╝██╔════╝
//	██████╔╝███████║██╔██╗██║░░░██║░░░╚█████╗░
//	██╔═══╝░██╔══██║██║╚████║░░░██║░░░░╚═══██╗
//	██║░░░░░██║░░██║██║░╚███║░░░██║░░░██████╔╝
//	╚═╝░░░░░╚═╝░░╚═╝╚═╝░░╚══╝░░░╚═╝░░░╚═════╝░
//	Onee-chan i can see your pantsu >////<

	class Jeans_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class CargoPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class TTSKOPants: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class HunterPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class CanvasPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class CanvasPantsMidi_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class TrackSuitPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class GorkaPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class PolicePants: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class PolicePantsOrel: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ParamedicPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class FirefightersPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SmershVest_pickup_SoundSet",
			"SmershVest_drop_SoundSet"
		};
	};
	class PrisonUniformPants: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class LeatherPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class MedicalScrubsPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class USMCPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class SlacksPants_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class BDUPants: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class NBCPantsBase: Clothing
	{	
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class Breeches_ColorBase: Clothing
	{	
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ShortJeans_ColorBase: Clothing
	{	
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class Skirt_ColorBase: Clothing
	{	
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class JumpsuitPants_ColorBase: Clothing
	{	
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};


//	░██████╗██╗░░██╗░█████╗░███████╗░██████╗
//	██╔════╝██║░░██║██╔══██╗██╔════╝██╔════╝
//	╚█████╗░███████║██║░░██║█████╗░░╚█████╗░
//	░╚═══██╗██╔══██║██║░░██║██╔══╝░░░╚═══██╗
//	██████╔╝██║░░██║╚█████╔╝███████╗██████╔╝
//	╚═════╝░╚═╝░░╚═╝░╚════╝░╚══════╝╚═════╝░
//	can we dig with shoes in dayz ? -- should add that to my servermod its a good idea

//	hmm... and what about kicking someone's ass with a shoe... That would be good too, wouldn't it?
//	Personally, I would use it daily and with pleasure =) - George

	class AthleticShoes_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_pickup_SoundSet"
		};
	};
	class HikingBoots_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_drop_SoundSet"
		};
	};
	class HikingBootsLow_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_pickup_SoundSet"
		};
	};
	class Wellies_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_drop_SoundSet"
		};
	};
	class WorkingBoots_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_pickup_SoundSet"
		};
	};
	class JungleBoots_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_drop_SoundSet"
		};
	};
	class DressShoes_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_pickup_SoundSet"
		};
	};
	class MilitaryBoots_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_drop_SoundSet"
		};
	};
	class CombatBoots_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_drop_SoundSet"
		};
	};
	class JoggingShoes_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_pickup_SoundSet"
		};
	};
	class LeatherShoes_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class Sneakers_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_pickup_SoundSet"
		};
	};
	class NBCBootsBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_pickup_SoundSet"
		};
	};
	class Ballerinas_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_pickup_SoundSet"
		};
	};
	class TTSKOBoots: Clothing
	{
		ItemMoveSounds[] = 
		{
			"AthleticShoes_drop_SoundSet"
		};
	};


//	████████╗░█████╗░██████╗░░██████╗
//	╚══██╔══╝██╔══██╗██╔══██╗██╔════╝
//	░░░██║░░░██║░░██║██████╔╝╚█████╗░
//	░░░██║░░░██║░░██║██╔═══╝░░╚═══██╗
//	░░░██║░░░╚█████╔╝██║░░░░░██████╔╝
//	░░░╚═╝░░░░╚════╝░╚═╝░░░░░╚═════╝░
//	personally im a bottom but everyone to themself

	class Armband_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class Sweater_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class Shirt_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class TShirt_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class Hoodie_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class TacticalShirt_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class HikingJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class Raincoat_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class M65Jacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class TTsKOJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class GorkaEJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class RidersJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class WoolCoat_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class TrackSuitJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class PoliceJacket: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class PoliceJacketOrel: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ParamedicJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class FirefighterJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SmershVest_pickup_SoundSet",
			"SmershVest_drop_SoundSet"
		};
	};
	class PrisonUniformJacket: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};		
	class MiniDress_ColorBase: Clothing
	{	
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class QuiltedJacket_ColorBase: Clothing
	{	
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class BomberJacket_ColorBase: Clothing
	{	
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};	
	class LeatherJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class HuntingJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class MedicalScrubsShirt_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class LabCoat: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class NurseDress_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class USMCJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class Blouse_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class NBCJacketBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class DenimJacket: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class TelnyashkaShirt: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ChernarusSportShirt: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class JumpsuitJacket_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class BDUJacket: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ManSuit_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class WomanSuit_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class LeatherShirt_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};	


//	██╗░░░██╗███████╗░██████╗████████╗░██████╗
//	██║░░░██║██╔════╝██╔════╝╚══██╔══╝██╔════╝
//	╚██╗░██╔╝█████╗░░╚█████╗░░░░██║░░░╚█████╗░
//	░╚████╔╝░██╔══╝░░░╚═══██╗░░░██║░░░░╚═══██╗
//	░░╚██╔╝░░███████╗██████╔╝░░░██║░░░██████╔╝
//	░░░╚═╝░░░╚══════╝╚═════╝░░░░╚═╝░░░╚═════╝░

	class PlateCarrierVest: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SmershVest_pickup_SoundSet",
			"SmershVest_drop_SoundSet"
		};
	};	
	class SmershVest: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SmershVest_pickup_SoundSet",
			"SmershVest_drop_SoundSet"
		};
	};	
	class PressVest_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SmershVest_pickup_SoundSet",
			"SmershVest_drop_SoundSet"
		};
	};	
	class UKAssVest_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SmershVest_pickup_SoundSet",
			"SmershVest_drop_SoundSet"
		};
	};
	class PoliceVest: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SmershVest_pickup_SoundSet",
			"SmershVest_drop_SoundSet"
		};
	};
	class PlateCarrierHolster: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ChestHolster: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class HighCapacityVest_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"SmershVest_pickup_SoundSet",
			"SmershVest_drop_SoundSet"
		};
	};
	class LeatherStorageVest_ColorBase: Clothing
	{
		ItemMoveSounds[] = 
		{
			"WorkingGloves_pickup_SoundSet",
			"WorkingGloves_drop_SoundSet"
		};
	};
	class HuntingVest: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ReflexVest: Clothing
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};


//	██████╗░░█████╗░░█████╗░██╗░░██╗░██████╗
//	██╔══██╗██╔══██╗██╔══██╗██║░██╔╝██╔════╝
//	██████╦╝██║░░██║██║░░██║█████═╝░╚█████╗░
//	██╔══██╗██║░░██║██║░░██║██╔═██╗░░╚═══██╗
//	██████╦╝╚█████╔╝╚█████╔╝██║░╚██╗██████╔╝
//	╚═════╝░░╚════╝░░╚════╝░╚═╝░░╚═╝╚═════╝░

	class ItemBook: Book_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPaper_SoundSet"
		};
	};


//	░█████╗░░█████╗░███╗░░░███╗██████╗░██╗███╗░░██╗░██████╗░
//	██╔══██╗██╔══██╗████╗░████║██╔══██╗██║████╗░██║██╔════╝░
//	██║░░╚═╝███████║██╔████╔██║██████╔╝██║██╔██╗██║██║░░██╗░
//	██║░░██╗██╔══██║██║╚██╔╝██║██╔═══╝░██║██║╚████║██║░░╚██╗
//	╚█████╔╝██║░░██║██║░╚═╝░██║██║░░░░░██║██║░╚███║╚██████╔╝
//	░╚════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚═╝░░░░░╚═╝╚═╝░░╚══╝░╚═════╝░

	class MediumTent: TentBase
	{
		ItemMoveSounds[] = 
		{
			"pickUpTent_SoundSet",
			"pickUpTentLight_SoundSet",
			"mediumtent_drop_SoundSet"
		};
	};
	class LargeTent: TentBase
	{
		ItemMoveSounds[] = 
		{
			"mediumtent_movement_sprint_SoundSet",
			"mediumtent_drop_SoundSet"
		};
	};
	class CarTent: TentBase
	{
		ItemMoveSounds[] = 
		{
			"mediumtent_movement_sprint_SoundSet",
			"mediumtent_drop_SoundSet"
		};
	};
	class PartyTent: TentBase
	{
		ItemMoveSounds[] = 
		{
			"pickUpTent_SoundSet",
			"pickUpTentLight_SoundSet",
			"mediumtent_drop_SoundSet"
		};
	};
	class CamoNetShelter: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};
	class FenceKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};
	class WatchtowerKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};
	class BarbedWire: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"barbedwire_putdown_1_SoundSet",
			"FenceKit_crafting_1_SoundSet"
		};
	};
	class CombinationLock: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_CombinationLock_SoundSet"
		};
	};
	class CamoNet: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet",
			"pickUpCourierBag_SoundSet"
		};
	};
	class SeaChest: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpSeaChest_SoundSet",
			"seachest_movement_SoundSet"
		};
	};
	class WoodenCrate: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpSeaChest_SoundSet",
			"seachest_movement_SoundSet"
		};
	};
	class Spotlight: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"powergenerator_movement_walk_SoundSet"
		};
	};
	class XmasLights: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};
	};
	class Refridgerator: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"powergenerator_movement_walk_SoundSet",
			"pickUpPowerGenerator_SoundSet",
			// "powergenerator_drop_SoundSet"	Too loud when just moving item around and plus on that it plays 2 same loud sounds when you drop it on the ground, earrape ftw O.O		 
		};
	};
	class PowerGenerator: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"powergenerator_movement_walk_SoundSet",
			"pickUpPowerGenerator_SoundSet",
			// "powergenerator_drop_SoundSet"	earrape again O.O
		};
	};
	class CableReel: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"cablereel_drop_SoundSet"
		};
	};
	class BatteryCharger: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"batterycharger_drop_SoundSet"
		};
	};
	class HescoBox: Inventory_Base  // I hope they add it back someday :(
	{
		ItemMoveSounds[] = 
		{
			"powergenerator_movement_walk_SoundSet"
		};
	};
	class Fabric: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};
	class ShelterKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};
	class ShelterBase: TentBase
	{
		ItemMoveSounds[] = 
		{
			"mediumtent_movement_walk_SoundSet"
		};
	};
	class TerritoryFlagKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};
	class Flag_Base: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"Shirt_pickup_SoundSet",
			"Shirt_drop_SoundSet"
		};
	};


//	░█████╗░░█████╗░███╗░░██╗░██████╗██╗░░░██╗███╗░░░███╗░█████╗░██████╗░██╗░░░░░███████╗░██████╗
//	██╔══██╗██╔══██╗████╗░██║██╔════╝██║░░░██║████╗░████║██╔══██╗██╔══██╗██║░░░░░██╔════╝██╔════╝
//	██║░░╚═╝██║░░██║██╔██╗██║╚█████╗░██║░░░██║██╔████╔██║███████║██████╦╝██║░░░░░█████╗░░╚█████╗░
//	██║░░██╗██║░░██║██║╚████║░╚═══██╗██║░░░██║██║╚██╔╝██║██╔══██║██╔══██╗██║░░░░░██╔══╝░░░╚═══██╗
//	╚█████╔╝╚█████╔╝██║░╚███║██████╔╝╚██████╔╝██║░╚═╝░██║██║░░██║██████╦╝███████╗███████╗██████╔╝
//	░╚════╝░░╚════╝░╚═╝░░╚══╝╚═════╝░░╚═════╝░╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═════╝░╚══════╝╚══════╝╚═════╝░

	class Paper: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPaper_SoundSet"
		};
	};
	class GiftWrapPaper: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPaper_SoundSet"
		};
	};
	class DuctTape: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"rope_tieup_back_SoundSet"
		};
	};
	class Rag: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"Bandage_loop_SoundSet"
		};
	};
	class BurlapStrip: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet"
		};
	};
	class Stone: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"cp_rock_drop_Soundset"		// there are no stone sounds in the game
		};								// I'm claustrophobic, you know... I just dug some up for you.
	};
	class SmallStone: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"cp_rock_drop_Soundset"
		};
		ItemMoveSoundVolume = 0.5;
	};
	class Firewood: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"bark_drop_SoundSet"
		};
	};
	class Battery9V: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};
	};
	class LargeGasCanister: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpShovelLight_SoundSet"
		};
	};
	class MediumGasCanister: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpShovelLight_SoundSet"
		};
	};
	class SmallGasCanister: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpShovelLight_SoundSet"
		};
	};
	class ButaneCanister: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpShovelLight_SoundSet"
		};
	};
	class Spraycan_ColorBase: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"SodaCan_pickup_SoundSet"
		};
	};
	class Matchbox: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"MatchOut_SoundSet"
		};
	};
	class NailBox: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
	};
	class Roadflare: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};
	};
	class Chemlight_ColorBase: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};
	};
	class Pelt_Base: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet"
		};
	};
	class TannedLeather: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet"
		};
	};
	class Hook: Inventory_Base
	{
	};
	class BoneHook: Inventory_Base
	{
	};
	class Bark_ColorBase: Inventory_Base
	{	// woof
		// *MEEOOOOOWW* *SCRATCH* *SCRATCH*
		ItemMoveSounds[] = 
		{
			"bark_drop_SoundSet"
		};
	};
	class Nail: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Bullet_Move_Smoll"
		};
	};
	class Bone: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"baseballbat_drop_SoundSet"
		};
	};
	class Bait: Inventory_Base
	{
		// Empty on purpose
	};
	class BoneBait: Inventory_Base
	{
		// Empty on purpose
	};
	class GardenLime: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpGardenLimeLight_SoundSet",
			"pickUpGardenLime_SoundSet"
		};
	};
	class Netting: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPlantMaterial_SoundSet"
		};
	};
	class WoodenPlank: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"woodenlog_pickup_SoundSet"
		};
	};
	class MetalPlate: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBarrelLight_SoundSet"
		};
	};
	class WoodenLog: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"bark_drop_SoundSet"
		};
	};
	class EasterEgg: Inventory_Base
	{
	};


//	░█████╗░░█████╗░███╗░░██╗████████╗░█████╗░██╗███╗░░██╗███████╗██████╗░░██████╗
//	██╔══██╗██╔══██╗████╗░██║╚══██╔══╝██╔══██╗██║████╗░██║██╔════╝██╔══██╗██╔════╝
//	██║░░╚═╝██║░░██║██╔██╗██║░░░██║░░░███████║██║██╔██╗██║█████╗░░██████╔╝╚█████╗░
//	██║░░██╗██║░░██║██║╚████║░░░██║░░░██╔══██║██║██║╚████║██╔══╝░░██╔══██╗░╚═══██╗
//	╚█████╔╝╚█████╔╝██║░╚███║░░░██║░░░██║░░██║██║██║░╚███║███████╗██║░░██║██████╔╝
//	░╚════╝░░╚════╝░╚═╝░░╚══╝░░░╚═╝░░░╚═╝░░╚═╝╚═╝╚═╝░░╚══╝╚══════╝╚═╝░░╚═╝╚═════╝░
//	Containers to contain your contaigous containus

	class Barrel_ColorBase: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"barrel_drop_SoundSet"
		};
	};
	class Refrigerator: WorldContainer_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBarrelLight_SoundSet"
		};
	};
		
	class RefrigeratorMinsk: WorldContainer_Base
	{
		ItemMoveSounds[] = 
		{
			"barrel_drop_SoundSet"
		};
	};
	class TrashCan: WorldContainer_Base
	{ // didnt knew they added my home to dayz
		ItemMoveSounds[] = 
		{
			"pickUpBarrelLight_SoundSet"
		};
	};
	class FirstAidKit: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet"
		};
	};
	class SmallProtectorCase: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"smallprotectorcase_pickup_SoundSet"
		};
	};
	class PlateCarrierPouches: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_SoundSet"
		};
	};
	class AmmoBox: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"ammobox_drop_SoundSet"
		};
	};
	class Bear_ColorBase: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_SoundSet"
		};
	};
	class WaterproofBag_ColorBase: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpGardenLimeLight_SoundSet"
		};
	};
	class GiftBox_Base: Container_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_SoundSet"
		};
	};


//	░█████╗░░█████╗░░█████╗░██╗░░██╗██╗███╗░░██╗░██████╗░
//	██╔══██╗██╔══██╗██╔══██╗██║░██╔╝██║████╗░██║██╔════╝░
//	██║░░╚═╝██║░░██║██║░░██║█████═╝░██║██╔██╗██║██║░░██╗░
//	██║░░██╗██║░░██║██║░░██║██╔═██╗░██║██║╚████║██║░░╚██╗
//	╚█████╔╝╚█████╔╝╚█████╔╝██║░╚██╗██║██║░╚███║╚██████╔╝
//	░╚════╝░░╚════╝░░╚════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░╚═════╝░

	class FireplaceBase: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpFireplaceLight_SoundSet",
			"pickUpFireplace_SoundSet"
		};
	};
	class BarrelHoles_ColorBase: FireplaceBase
	{
		ItemMoveSounds[] = 
		{
			"barrel_drop_SoundSet"
		};
	};
	class Pot: Bottle_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPot_SoundSet",
			"pickUpPotLight_SoundSet"
		};
	};
	class FryingPan: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPot_SoundSet",
			"pickUpPotLight_SoundSet"
		};
	};
	class Cauldron: Bottle_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPotLight_SoundSet"
		};
		ItemMoveSoundVolume = 1.50;
	};
	class PortableGasStove: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpShovelLight_SoundSet"
		};
	};
	class PortableGasLamp: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpShovelLight_SoundSet"
		};
	};
	class Candle: Inventory_Base
	{	// i want to get this to work one day lol
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};
	};
	class PetrolLighter: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};
	};
	class Tripod: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"crowbar_drop_SoundSet"
		};
	};


//	░█████╗░██████╗░░█████╗░███████╗████████╗██╗███╗░░██╗░██████╗░
//	██╔══██╗██╔══██╗██╔══██╗██╔════╝╚══██╔══╝██║████╗░██║██╔════╝░
//	██║░░╚═╝██████╔╝███████║█████╗░░░░░██║░░░██║██╔██╗██║██║░░██╗░
//	██║░░██╗██╔══██╗██╔══██║██╔══╝░░░░░██║░░░██║██║╚████║██║░░╚██╗
//	╚█████╔╝██║░░██║██║░░██║██║░░░░░░░░██║░░░██║██║░╚███║╚██████╔╝
//	░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░░░░░░░╚═╝░░░╚═╝╚═╝░░╚══╝░╚═════╝░

	class BurlapSack: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet"
		};
	};
	class Rope: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"rope_struggle_SoundSet"
		};
	};
	class MetalWire: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"barbedwire_putdown_1_SoundSet",
			"FenceKit_crafting_1_SoundSet"
		};
	};
	class WoodenStick: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"bark_pickup_SoundSet"
		};
	};
	class Torch: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};
	class ChickenFeather: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPlantMaterial_SoundSet"
		};
	};
	class LongWoodenStick: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};
	class SharpWoodenStick: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};
	class GorkaHelmetVisor: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"DarkMotoHelmet_pickup_SoundSet"
		};
	};
	class HandDrillKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"bark_drop_SoundSet"
		};
	};
	class Spear: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};


//	░█████╗░██╗░░░██╗██╗░░░░░████████╗██╗██╗░░░██╗░█████╗░████████╗██╗░█████╗░███╗░░██╗
//	██╔══██╗██║░░░██║██║░░░░░╚══██╔══╝██║██║░░░██║██╔══██╗╚══██╔══╝██║██╔══██╗████╗░██║
//	██║░░╚═╝██║░░░██║██║░░░░░░░░██║░░░██║╚██╗░██╔╝███████║░░░██║░░░██║██║░░██║██╔██╗██║
//	██║░░██╗██║░░░██║██║░░░░░░░░██║░░░██║░╚████╔╝░██╔══██║░░░██║░░░██║██║░░██║██║╚████║
//	╚█████╔╝╚██████╔╝███████╗░░░██║░░░██║░░╚██╔╝░░██║░░██║░░░██║░░░██║╚█████╔╝██║░╚███║
//	░╚════╝░░╚═════╝░╚══════╝░░░╚═╝░░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝░░░╚═╝░░░╚═╝░╚════╝░╚═╝░░╚══╝

	class SeedBase: Inventory_Base
	{	// gimme your seed onii-chan
		ItemMoveSounds[] = 
		{
			"seeds_pickup_SoundSet"
		};
	};
	class TomatoSeedsPack: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"seedpack_pickup_SoundSet"
		};
	};
	class PepperSeedsPack: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"seedpack_pickup_SoundSet"
		};
	};
	class PumpkinSeedsPack: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"seedpack_pickup_SoundSet"
		};
	};
	class ZucchiniSeedsPack: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"seedpack_pickup_SoundSet"
		};
	};
	class CannabisSeedsPack: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"seedpack_pickup_SoundSet"
		};
	};
	class PlantMaterial: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPlantMaterial_SoundSet"
		};
	};
	class AntiPestsSpray: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBackPack_Plastic_Light_SoundSet"
		};
	};


//	██████╗░██████╗░██╗███╗░░██╗██╗░░██╗░██████╗
//	██╔══██╗██╔══██╗██║████╗░██║██║░██╔╝██╔════╝
//	██║░░██║██████╔╝██║██╔██╗██║█████═╝░╚█████╗░
//	██║░░██║██╔══██╗██║██║╚████║██╔═██╗░░╚═══██╗
//	██████╔╝██║░░██║██║██║░╚███║██║░╚██╗██████╔╝
//	╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚══╝╚═╝░░╚═╝╚═════╝░
//	MY BLADE BE THIRSTY - Hearthstone joke in dayz code ?

	class Canteen: Bottle_Base
	{
		ItemMoveSounds[] = 
		{
			"WaterBottle_pickup_SoundSet"
		};
	};
	class WaterBottle: Bottle_Base
	{
		ItemMoveSounds[] = 
		{
			"WaterBottle_pickup_SoundSet"
		};
	};
	class Vodka: Bottle_Base
	{
		ItemMoveSounds[] = 
		{
			"GlassBottle_in_C_SoundSet"
		};
	};
	class WaterPouch_ColorBase: Bottle_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCourierBag_Light_SoundSet"
		};
	};
	class SodaCan_ColorBase: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"SodaCan_pickup_SoundSet"
		};
	};
	class SodaCan_Empty: Inventory_Base
	{	// OwO ?
		ItemMoveSounds[] = 
		{
			"SodaCan_pickup_SoundSet"
		};
	};


//	███████╗░█████╗░░█████╗░██████╗░
//	██╔════╝██╔══██╗██╔══██╗██╔══██╗
//	█████╗░░██║░░██║██║░░██║██║░░██║
//	██╔══╝░░██║░░██║██║░░██║██║░░██║
//	██║░░░░░╚█████╔╝╚█████╔╝██████╔╝
//	╚═╝░░░░░░╚════╝░░╚════╝░╚═════╝░
//	FUUUUD

	class BoxCerealCrunchin: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			//"BoxCerealCrunchin_pickup_SoundSet"
			"Eating_BoxShake_Soundset"
		};
	};
	class PowderedMilk: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_SoundSet"
		};
	};
	class SmallGuts: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class Guts: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class Rice: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class Marmalade: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Marmalade_pickup_SoundSet"
		};
	};
	class Honey: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Marmalade_pickup_SoundSet"
		};
	};
	class Zagorky_ColorBase: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class Snack_ColorBase: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_Soundshader"
		};
	};	
	class BakedBeansCan: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class BakedBeansCan_Opened: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class PeachesCan: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class PeachesCan_Opened: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class TacticalBaconCan: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class TacticalBaconCan_Opened: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class SpaghettiCan: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class SpaghettiCan_Opened: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class SardinesCan: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_SmallCan_SoundSet"
		};
	};
	class SardinesCan_Opened: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_SmallCan_SoundSet"
		};
	};
	class TunaCan: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_SmallCan_SoundSet"
		};
	};
	class TunaCan_Opened: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_SmallCan_SoundSet"
		};
	};
	class FoodCan_250g_ColorBase: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_SmallCan_SoundSet"
		};
	};
	class FoodCan_250g_Opened_ColorBase: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_SmallCan_SoundSet"
		};
	};
	class UnknownFoodCan: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class UnknownFoodCan_Opened: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"BakedBeansCan_pickup_SoundSet"
		};
	};
	class FoodCan_100g_ColorBase: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_TinyCan_SoundSet"
		};
	};
	class FoodCan_100g_Opened_ColorBase: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_TinyCan_SoundSet"
		};
	};
	class Apple: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Apple_pickup_SoundSet"
		};
	};
	class Plum: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class Pear: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class Banana: Edible_Base
	{ // I love bananya C:
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class Orange: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class Tomato: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class GreenBellPepper: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class Zucchini: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class Pumpkin: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class SlicedPumpkin: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class Potato: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class Kiwi: Edible_Base
	{	// Rotten Kiwi
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class SambucusBerry: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class CaninaBerry: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class Cannabis: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Zucchini_pickup_SoundSet"
		};
	};
	class HumanSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class GoatSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class MouflonSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class BoarSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class PigSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class DeerSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class WolfSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class BearSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class CowSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class SheepSteakMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class FoxSteakMeat: Edible_Base
	{	// i miss foxes ...
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class ChickenBreastMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class RabbitLegMeat: Edible_Base
	{	// i miss rabbits
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class CarpFilletMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class MackerelFilletMeat: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class Lard: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class Carp: Edible_Base
	{	// FISH
		// ... Our only wish, To catch a fish, So juicy-sweet! =)
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class Sardines: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class Mackerel: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class Worm: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class DeadChicken_ColorBase: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class DeadRabbit: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};
	class MushroomBase: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"Eating_TakeFood_Soundset"
		};
	};


//	███╗░░░███╗███████╗██████╗░██╗░█████╗░░█████╗░██╗░░░░░
//	████╗░████║██╔════╝██╔══██╗██║██╔══██╗██╔══██╗██║░░░░░
//	██╔████╔██║█████╗░░██║░░██║██║██║░░╚═╝███████║██║░░░░░
//	██║╚██╔╝██║██╔══╝░░██║░░██║██║██║░░██╗██╔══██║██║░░░░░
//	██║░╚═╝░██║███████╗██████╔╝██║╚█████╔╝██║░░██║███████╗
//	╚═╝░░░░░╚═╝╚══════╝╚═════╝░╚═╝░╚════╝░╚═╝░░╚═╝╚══════╝

	class BandageDressing: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"Bandage_loop_SoundSet"
		};
	};
	class DisinfectantSpray: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBackPack_Plastic_Light_SoundSet"
		};
	};
	class DisinfectantAlcohol: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"GlassBottle_in_C_SoundSet"
		};
	};
	class PurificationTablets: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"purificationtablets_pickup_SoundSet"
		};
	};
	class CharcoalTablets: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"purificationtablets_pickup_SoundSet"
		};
	};
	class PainkillerTablets: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"purificationtablets_pickup_SoundSet"
		};
	};
	class VitaminBottle: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"vitaminbottle_pickup_SoundSet"
		};
	};
	class IodineTincture: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"GlassBottle_in_C_SoundSet"
		};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		ItemMoveSounds[] = 
		{
			"purificationtablets_pickup_SoundSet"
		};
	};
	class Epinephrine: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBackPack_Plastic_Light_SoundSet"
		};
	};
	class Morphine: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBackPack_Plastic_Light_SoundSet"
		};
	};
	class AntiChemInjector: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBackPack_Plastic_Light_SoundSet"
		};
	};
	class Syringe: Epinephrine
	{
		ItemMoveSounds[] = 
		{
			"Syringe_splash_SoundSet"
		};
	};
	class ClearSyringe: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"Syringe_splash_SoundSet"
		};
	};
	class BloodSyringe: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"Syringe_splash_SoundSet"
		};
	};
	class InjectionVial: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"injectionvial_pickup_SoundSet"
		};
	};
	class SalineBag: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_SoundSet"
		};
	};
	class StartKitIV: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_SoundSet"
		};
	};
	class SalineBagIV: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_SoundSet"
		};
	};
	class BloodBagEmpty: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_SoundSet"
		};
	};
	class BloodBagFull: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_SoundSet"
		};
	};
	class BloodBagIV: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_SoundSet"
		};
	};
	class BloodTestKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_SoundSet"
		};
	};
	class Splint: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};
	};
	class Thermometer: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"injectionvial_pickup_SoundSet"
		};
	};
	class Defibrillator: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"sewingkit_pickup_SoundSet"
		};
	};
	class CigarettePack_ColorBase: Inventory_Base
	{	// actually not used ingame
		ItemMoveSounds[] = 
		{
			"sewingkit_pickup_SoundSet"
		};
	};


//	███╗░░██╗░█████╗░██╗░░░██╗██╗░██████╗░░█████╗░████████╗██╗░█████╗░███╗░░██╗
//	████╗░██║██╔══██╗██║░░░██║██║██╔════╝░██╔══██╗╚══██╔══╝██║██╔══██╗████╗░██║
//	██╔██╗██║███████║╚██╗░██╔╝██║██║░░██╗░███████║░░░██║░░░██║██║░░██║██╔██╗██║
//	██║╚████║██╔══██║░╚████╔╝░██║██║░░╚██╗██╔══██║░░░██║░░░██║██║░░██║██║╚████║
//	██║░╚███║██║░░██║░░╚██╔╝░░██║╚██████╔╝██║░░██║░░░██║░░░██║╚█████╔╝██║░╚███║
//	╚═╝░░╚══╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░╚═════╝░╚═╝░░╚═╝░░░╚═╝░░░╚═╝░╚════╝░╚═╝░░╚══╝

	class ItemMap: Inventory_Base
	{
	};
	class ItemCompass: Inventory_Base
	{
	};
	class ChernarusMap: ItemMap
	{
		ItemMoveSounds[] = 
		{
			"pickUpPaper_SoundSet"
		};	
	};
	class Compass: ItemCompass
	{
		ItemMoveSounds[] = 
		{
			"compass_close_SoundSet"
		};	
	};
	class OrienteeringCompass: ItemCompass
	{
		ItemMoveSounds[] = 
		{
			"compass_close_SoundSet"
		};	
	};


//	░█████╗░██████╗░████████╗██╗░█████╗░░██████╗
//	██╔══██╗██╔══██╗╚══██╔══╝██║██╔══██╗██╔════╝
//	██║░░██║██████╔╝░░░██║░░░██║██║░░╚═╝╚█████╗░
//	██║░░██║██╔═══╝░░░░██║░░░██║██║░░██╗░╚═══██╗
//	╚█████╔╝██║░░░░░░░░██║░░░██║╚█████╔╝██████╔╝
//	░╚════╝░╚═╝░░░░░░░░╚═╝░░░╚═╝░╚════╝░╚═════╝░

	class Rangefinder: ItemOptics
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class Binoculars: ItemOptics
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};


//	██████╗░░█████╗░██████╗░██╗░█████╗░
//	██╔══██╗██╔══██╗██╔══██╗██║██╔══██╗
//	██████╔╝███████║██║░░██║██║██║░░██║
//	██╔══██╗██╔══██║██║░░██║██║██║░░██║
//	██║░░██║██║░░██║██████╔╝██║╚█████╔╝
//	╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░╚═╝░╚════╝░

	class PersonalRadio: Transmitter_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class BaseRadio: Transmitter_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class Megaphone: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_drop_SoundSet"
		};	
	};
	class Radio: Inventory_Base
	{	// wish this would work
		ItemMoveSounds[] = 
		{
			"PSO11Optic_drop_SoundSet"
		};	
	};


//	████████╗░█████╗░░█████╗░██╗░░░░░░██████╗
//	╚══██╔══╝██╔══██╗██╔══██╗██║░░░░░██╔════╝
//	░░░██║░░░██║░░██║██║░░██║██║░░░░░╚█████╗░
//	░░░██║░░░██║░░██║██║░░██║██║░░░░░░╚═══██╗
//	░░░██║░░░╚█████╔╝╚█████╔╝███████╗██████╔╝
//	░░░╚═╝░░░░╚════╝░░╚════╝░╚══════╝╚═════╝░

	class Flashlight: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class Pen_ColorBase: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class CanOpener: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class Heatpack: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBloodBag_SoundSet"
		};	
	};
	class MessTin: Inventory_Base
	{ // Isnt in anyway
		ItemMoveSounds[] = 
		{
			"PSO11Optic_drop_SoundSet"
		};	
	};
	class Pliers: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPliers_SoundSet"
		};	
	};
	class Lockpick: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"lockpicker_move_in_SoundSet",
			"lockpicker_move_out_SoundSet"
		};	
	};
	class WeaponCleaningKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"sewingkit_drop_SoundSet"
		};	
	};
	class SewingKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"sewingkit_pickup_SoundSet"
		};	
	};
	class LeatherSewingKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"sewingkit_pickup_SoundSet"
		};	
	};
	class Handcuffs: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"lockpicker_move_in_SoundSet",
			"lockpicker_move_out_SoundSet"
		};
	};
	class HandcuffKeys: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"lockpicker_move_in_SoundSet",
			"lockpicker_move_out_SoundSet"
		};
	};
	class Cassette: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class Shovel: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"shovel_drop_SoundSet"
		};	
	};
	class FieldShovel: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"shovel_drop_SoundSet"
		};	
	};
	class Crowbar: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"crowbar_drop_SoundSet"
		};	
	};
	class FireExtinguisher: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCanisterGasolineLight_SoundSet"
		};	
	};
	class Hammer: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};
	class MeatTenderizer: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"woodaxe_drop_SoundSet"
		};	
	};
	class Wrench: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"wrench_drop_SoundSet"
		};	
	};
	class LugWrench: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"crowbar_drop_SoundSet"
		};
	};
	class Pipe: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"crowbar_drop_SoundSet"
		};	
	};
	class Screwdriver: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"wrench_drop_SoundSet"
		};	
	};
	class Sickle: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"wrench_drop_SoundSet"
		};	
	};
	class Hacksaw: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"crowbar_drop_SoundSet"
		};	
	};
	class KitchenKnife: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"combatknife_drop_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class SteakKnife: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"combatknife_drop_SoundSet"
		};
		ItemMoveSoundVolume = 0.55;
	};
	class HayHook: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};
	class StoneKnife: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"gravel_small_ext_drop_Soundset"	// there are no stone sounds in the game
		};										// Let me guess... diggin' ...
		ItemMoveSoundVolume = 0.35;
	};
	class Mace: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"crowbar_drop_SoundSet"
		};
		ItemMoveSoundVolume = 0.15;
	};
	class FarmingHoe: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpShovel_SoundSet"
		};	
	};
	class ImprovisedFishingRod: FishingRod_Base_New
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};	
	};
	class ObsoleteFishingRod: FishingRod_Base_New
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class FishingRod: FishingRod_Base_New
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class SledgeHammer: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"woodaxe_drop_SoundSet"
		};	
	};
	class Iceaxe: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"wrench_drop_SoundSet"
		};	
	};
	class Broom: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"baseballbat_drop_SoundSet"
		};	
	};
	class Paddle: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"baseballbat_drop_SoundSet"
		};	
	};
	class ElectronicRepairKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_drop_SoundSet"
		};
	};
	class EpoxyPutty: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBackPack_Plastic_Light_SoundSet"
		};	
	};
	class Whetstone: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"gravel_small_ext_drop_Soundset"	// There are no useable stone sounds in the game
		};										// digging is my best friend, LOL - George
		ItemMoveSoundVolume = 0.8;
	};
	class HandSaw: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpBackPack_Plastic_Light_SoundSet"
		};	
	};


//	████████╗██████╗░░█████╗░██████╗░░██████╗
//	╚══██╔══╝██╔══██╗██╔══██╗██╔══██╗██╔════╝
//	░░░██║░░░██████╔╝███████║██████╔╝╚█████╗░
//	░░░██║░░░██╔══██╗██╔══██║██╔═══╝░░╚═══██╗
//	░░░██║░░░██║░░██║██║░░██║██║░░░░░██████╔╝
//	░░░╚═╝░░░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░░░░╚═════╝░
//	Traps no not the ones where you ask if its gay or not to jack off to them - the ones that hurt you if step over them

	class BearTrap: Trap_Base
	{
		ItemMoveSounds[] = 
		{
			"beartrap_movement_walk_SoundSet"
		};	
	};
	class LandMineTrap: Trap_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class SmallFishTrap: Trap_Base
	{
		ItemMoveSounds[] = 
		{
			"WaterBottle_pickup_SoundSet"
		};	
	};
	class FishNetTrap: Trap_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPlantMaterial_SoundSet"
		};	
	};
	class TripwireTrap: Trap_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};	
	};
	class RabbitSnareTrap: Trap_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"baseballbat_drop_SoundSet"
		};	
	};


//	██╗░░░██╗███████╗██╗░░██╗██╗░█████╗░██╗░░░░░███████╗	██████╗░░█████╗░██████╗░████████╗░██████╗
//	██║░░░██║██╔════╝██║░░██║██║██╔══██╗██║░░░░░██╔════╝	██╔══██╗██╔══██╗██╔══██╗╚══██╔══╝██╔════╝
//	╚██╗░██╔╝█████╗░░███████║██║██║░░╚═╝██║░░░░░█████╗░░	██████╔╝███████║██████╔╝░░░██║░░░╚█████╗░
//	░╚████╔╝░██╔══╝░░██╔══██║██║██║░░██╗██║░░░░░██╔══╝░░	██╔═══╝░██╔══██║██╔══██╗░░░██║░░░░╚═══██╗
//	░░╚██╔╝░░███████╗██║░░██║██║╚█████╔╝███████╗███████╗	██║░░░░░██║░░██║██║░░██║░░░██║░░░██████╔╝
//	░░░╚═╝░░░╚══════╝╚═╝░░╚═╝╚═╝░╚════╝░╚══════╝╚══════╝	╚═╝░░░░░╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═════╝░

	class TruckBattery: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"carbattery_drop_SoundSet"
		};	
	};
	class CarBattery: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"carbattery_drop_SoundSet"
		};
		ItemMoveSoundVolume = 0.5;
	};
	class BrakeFluid: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"engineoil_pickup_SoundSet"
		};	
	};
	class EngineOil: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"engineoil_pickup_SoundSet"
		};	
	};
	class CarRadiator: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCanisterGasolineLight_SoundSet"
		};	
	};
	class HeadlightH7: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class HeadlightH7_Box: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};	
	};
	class SparkPlug: Inventory_Base
	{	// Buttplug - need to ask mass to add a "attachmentslot" onto the character for this for easier transportation
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"	
		};	
	};
	class TireRepairKit: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"smallprotectorcase_pickup_SoundSet"	
		};	
	};
	class CanisterGasoline: Bottle_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCanisterGasolineLight_SoundSet",
			"pickUpCanisterGasoline_SoundSet"
		};	
	};


//	██╗░░░██╗███████╗██╗░░██╗██╗░█████╗░██╗░░░░░███████╗	░█████╗░████████╗████████╗░█████╗░░█████╗░██╗░░██╗███╗░░░███╗███████╗███╗░░██╗████████╗░██████╗
//	██║░░░██║██╔════╝██║░░██║██║██╔══██╗██║░░░░░██╔════╝	██╔══██╗╚══██╔══╝╚══██╔══╝██╔══██╗██╔══██╗██║░░██║████╗░████║██╔════╝████╗░██║╚══██╔══╝██╔════╝
//	╚██╗░██╔╝█████╗░░███████║██║██║░░╚═╝██║░░░░░█████╗░░	███████║░░░██║░░░░░░██║░░░███████║██║░░╚═╝███████║██╔████╔██║█████╗░░██╔██╗██║░░░██║░░░╚█████╗░
//	░╚████╔╝░██╔══╝░░██╔══██║██║██║░░██╗██║░░░░░██╔══╝░░	██╔══██║░░░██║░░░░░░██║░░░██╔══██║██║░░██╗██╔══██║██║╚██╔╝██║██╔══╝░░██║╚████║░░░██║░░░░╚═══██╗
//	░░╚██╔╝░░███████╗██║░░██║██║╚█████╔╝███████╗███████╗	██║░░██║░░░██║░░░░░░██║░░░██║░░██║╚█████╔╝██║░░██║██║░╚═╝░██║███████╗██║░╚███║░░░██║░░░██████╔╝
//	░░░╚═╝░░░╚══════╝╚═╝░░╚═╝╚═╝░╚════╝░╚══════╝╚══════╝	╚═╝░░╚═╝░░░╚═╝░░░░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚═╝░░╚══╝░░░╚═╝░░░╚═════╝░
//	DZ_Vehicles_Wheeled - Merkava MKII when ?

	class CarWheel: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchbackwheel_drop_SoundSet"
		};	
	};
	class CarDoor: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchbackdoors_driver_pickup_SoundSet"
		};	
	};


//	░█████╗░███╗░░░███╗███╗░░░███╗░█████╗░██████╗░░█████╗░██╗░░██╗███████╗░██████╗
//	██╔══██╗████╗░████║████╗░████║██╔══██╗██╔══██╗██╔══██╗╚██╗██╔╝██╔════╝██╔════╝
//	███████║██╔████╔██║██╔████╔██║██║░░██║██████╦╝██║░░██║░╚███╔╝░█████╗░░╚█████╗░
//	██╔══██║██║╚██╔╝██║██║╚██╔╝██║██║░░██║██╔══██╗██║░░██║░██╔██╗░██╔══╝░░░╚═══██╗
//	██║░░██║██║░╚═╝░██║██║░╚═╝░██║╚█████╔╝██████╦╝╚█████╔╝██╔╝╚██╗███████╗██████╔╝
//	╚═╝░░╚═╝╚═╝░░░░░╚═╝╚═╝░░░░░╚═╝░╚════╝░╚═════╝░░╚════╝░╚═╝░░╚═╝╚══════╝╚═════╝░
//	need to add each one manually ... OOF

	class AmmoBox_556x45_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_556x45Tracer_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_308Win_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_308WinTracer_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_762x54_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_762x54Tracer_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_762x39_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_762x39Tracer_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_22_50Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_357_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_45ACP_25rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_9x19_25rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_380_35rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_00buck_10rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_12gaSlug_10Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_12gaRubberSlug_10Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_12gaBeanbag_10Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_545x39_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_545x39Tracer_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_9x39AP_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class AmmoBox_9x39_20Rnd: Box_Base
	{
		ItemMoveSounds[] = 
		{
			"ammoboxUnpack_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};


//	░██╗░░░░░░░██╗███████╗░█████╗░██████╗░░█████╗░███╗░░██╗		██╗░░░░░██╗░██████╗░██╗░░██╗████████╗░██████╗
//	░██║░░██╗░░██║██╔════╝██╔══██╗██╔══██╗██╔══██╗████╗░██║		██║░░░░░██║██╔════╝░██║░░██║╚══██╔══╝██╔════╝
//	░╚██╗████╗██╔╝█████╗░░███████║██████╔╝██║░░██║██╔██╗██║		██║░░░░░██║██║░░██╗░███████║░░░██║░░░╚█████╗░
//	░░████╔═████║░██╔══╝░░██╔══██║██╔═══╝░██║░░██║██║╚████║		██║░░░░░██║██║░░╚██╗██╔══██║░░░██║░░░░╚═══██╗
//	░░╚██╔╝░╚██╔╝░███████╗██║░░██║██║░░░░░╚█████╔╝██║░╚███║		███████╗██║╚██████╔╝██║░░██║░░░██║░░░██████╔╝
//	░░░╚═╝░░░╚═╝░░╚══════╝╚═╝░░╚═╝╚═╝░░░░░░╚════╝░╚═╝░░╚══╝		╚══════╝╚═╝░╚═════╝░╚═╝░░╚═╝░░░╚═╝░░░╚═════╝░

	class UniversalLight: Switchable_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class TLRLight: Switchable_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};


//	███╗░░░███╗██╗░░░██╗███████╗███████╗██╗░░░░░███████╗░██████╗
//	████╗░████║██║░░░██║╚════██║╚════██║██║░░░░░██╔════╝██╔════╝
//	██╔████╔██║██║░░░██║░░███╔═╝░░███╔═╝██║░░░░░█████╗░░╚█████╗░
//	██║╚██╔╝██║██║░░░██║██╔══╝░░██╔══╝░░██║░░░░░██╔══╝░░░╚═══██╗
//	██║░╚═╝░██║╚██████╔╝███████╗███████╗███████╗███████╗██████╔╝
//	╚═╝░░░░░╚═╝░╚═════╝░╚══════╝╚══════╝╚══════╝╚══════╝╚═════╝░

	class AK_Bayonet: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"CombatKnife_drop_SoundSet"
		};
	};
	class M9A1_Bayonet: Inventory_Base
	{	// I actually own this in reallife
		ItemMoveSounds[] = 
		{
			"CombatKnife_drop_SoundSet"
		};	
	};
	class Mosin_Bayonet: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"CombatKnife_drop_SoundSet"
		};	
	};
	class SKS_Bayonet: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"CombatKnife_drop_SoundSet"
		};	
	};
	class Mosin_Compensator: ItemSuppressor	// why are they classed as a supressor ?
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class MP5_Compensator: ItemSuppressor
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class ImprovisedSuppressor: ItemSuppressor
	{
		ItemMoveSounds[] = 
		{
			"WaterBottle_pickup_SoundSet"
		};	
	};
	class M4_Suppressor: ItemSuppressor
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class AK_Suppressor: ItemSuppressor
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class PistolSuppressor: ItemSuppressor
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class MakarovPBSuppressor: ItemSuppressor
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	

//	░█████╗░██████╗░████████╗██╗░█████╗░░██████╗
//	██╔══██╗██╔══██╗╚══██╔══╝██║██╔══██╗██╔════╝
//	██║░░██║██████╔╝░░░██║░░░██║██║░░╚═╝╚█████╗░
//	██║░░██║██╔═══╝░░░░██║░░░██║██║░░██╗░╚═══██╗
//	╚█████╔╝██║░░░░░░░░██║░░░██║╚█████╔╝██████╔╝
//	░╚════╝░╚═╝░░░░░░░░╚═╝░░░╚═╝░╚════╝░╚═════╝░
//	lol all included with ItemOptics



//	░█████╗░████████╗████████╗░█████╗░░█████╗░██╗░░██╗███╗░░░███╗███████╗███╗░░██╗████████╗░██████╗
//	██╔══██╗╚══██╔══╝╚══██╔══╝██╔══██╗██╔══██╗██║░░██║████╗░████║██╔════╝████╗░██║╚══██╔══╝██╔════╝
//	███████║░░░██║░░░░░░██║░░░███████║██║░░╚═╝███████║██╔████╔██║█████╗░░██╔██╗██║░░░██║░░░╚█████╗░
//	██╔══██║░░░██║░░░░░░██║░░░██╔══██║██║░░██╗██╔══██║██║╚██╔╝██║██╔══╝░░██║╚████║░░░██║░░░░╚═══██╗
//	██║░░██║░░░██║░░░░░░██║░░░██║░░██║╚█████╔╝██║░░██║██║░╚═╝░██║███████╗██║░╚███║░░░██║░░░██████╔╝
//	╚═╝░░╚═╝░░░╚═╝░░░░░░╚═╝░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚═╝░░╚══╝░░░╚═╝░░░╚═════╝░
// god ... none of these have dropsounds ... WHO NEEDS DROPSOUNDS IF YOU CAN JUST HAVE NONE

	class M4_OEBttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class M4_MPBttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class M4_CQBBttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AK_WoodBttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AK74_WoodBttstck: Inventory_Base
	{	// why is this a different classname ?
		// bcs of different "recoilModifier" and "swayModifier" :)
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AK_FoldingBttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AK_PlasticBttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AKS74U_Bttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class MP5k_StockBttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class Red9Bttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class Fal_OeBttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class Fal_FoldingBttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class Saiga_Bttstck: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class M4_PlasticHndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class M4_RISHndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class M4_MPHndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AK_WoodHndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AK74_Hndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AK_RailHndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AK_PlasticHndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class MP5_PlasticHndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class MP5_RailHndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class M249_Hndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class M249_RisHndgrd: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class AtlasBipod: Inventory_Base
	{	// I miss it ..
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class M249_Bipod: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpCableReelLight_SoundSet"
		};	
	};
	class GhillieAtt_ColorBase: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"Cloth_Back_walkCro_ghillie_Soundset",
			"Cloth_Back_runCro_ghillie_Soundset",
			"Cloth_Back_walkErc_ghillie_Soundset",
			"Cloth_Back_walkRasErc_ghillie_Soundset",
			"Cloth_Back_runErc_ghillie_Soundset",
			"Cloth_Back_runRasErc_ghillie_Soundset",
			"Cloth_Back_sprintErc_ghillie_Soundset",
			"Cloth_Back_shortmove_ghillie_Soundset"
		};	
	};


//	███████╗██╗░░██╗██████╗░██╗░░░░░░█████╗░░██████╗██╗██╗░░░██╗███████╗░██████╗
//	██╔════╝╚██╗██╔╝██╔══██╗██║░░░░░██╔══██╗██╔════╝██║██║░░░██║██╔════╝██╔════╝
//	█████╗░░░╚███╔╝░██████╔╝██║░░░░░██║░░██║╚█████╗░██║╚██╗░██╔╝█████╗░░╚█████╗░
//	██╔══╝░░░██╔██╗░██╔═══╝░██║░░░░░██║░░██║░╚═══██╗██║░╚████╔╝░██╔══╝░░░╚═══██╗
//	███████╗██╔╝╚██╗██║░░░░░███████╗╚█████╔╝██████╔╝██║░░╚██╔╝░░███████╗██████╔╝
//	╚══════╝╚═╝░░╚═╝╚═╝░░░░░╚══════╝░╚════╝░╚═════╝░╚═╝░░░╚═╝░░░╚══════╝╚═════╝░

	class Grenade_Base: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"MagRifle_empty_in_SoundSet",
			"Zucchini_pickup_SoundSet"
		};	
	};


//	░██████╗██╗░░██╗░█████╗░██████╗░██████╗░  ███╗░░░███╗███████╗██╗░░░░░███████╗███████╗
//	██╔════╝██║░░██║██╔══██╗██╔══██╗██╔══██╗  ████╗░████║██╔════╝██║░░░░░██╔════╝██╔════╝
//	╚█████╗░███████║███████║██████╔╝██████╔╝  ██╔████╔██║█████╗░░██║░░░░░█████╗░░█████╗░░
//	░╚═══██╗██╔══██║██╔══██║██╔══██╗██╔═══╝░  ██║╚██╔╝██║██╔══╝░░██║░░░░░██╔══╝░░██╔══╝░░
//	██████╔╝██║░░██║██║░░██║██║░░██║██║░░░░░  ██║░╚═╝░██║███████╗███████╗███████╗███████╗
//	╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░░░░  ╚═╝░░░░░╚═╝╚══════╝╚══════╝╚══════╝╚══════╝
 
	class WoodAxe: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};
	class Hatchet: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_light_SoundSet"
		};	
	};
	class FirefighterAxe: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};
	class Cleaver: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_light_SoundSet"
		};	
	};
	class CombatKnife: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"combatknife_drop_SoundSet"
		};
		ItemMoveSoundVolume = 0.45;
	};
	class HuntingKnife: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"combatknife_drop_SoundSet"
		};
		ItemMoveSoundVolume = 0.55;
	};
	class Machete: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"combatknife_drop_SoundSet"
		};	
	};
	class Pitchfork: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};
	class Pickaxe: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};
	class Sword: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"p_2hd_erc_medievalsword_suicide_cancelled_c"
		};
	};
	class KukriKnife: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"combatknife_drop_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class FangeKnife: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"combatknife_drop_SoundSet"
		};
		ItemMoveSoundVolume = 0.75;
	};
	class CrudeMachete: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"combatknife_drop_SoundSet"
		};
	};
	class OrientalMachete: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"combatknife_drop_SoundSet"
		};
	};


//	██████╗░██╗░░░░░██╗░░░██╗███╗░░██╗████████╗  ███╗░░░███╗███████╗██╗░░░░░███████╗███████╗
//	██╔══██╗██║░░░░░██║░░░██║████╗░██║╚══██╔══╝  ████╗░████║██╔════╝██║░░░░░██╔════╝██╔════╝
//	██████╦╝██║░░░░░██║░░░██║██╔██╗██║░░░██║░░░  ██╔████╔██║█████╗░░██║░░░░░█████╗░░█████╗░░
//	██╔══██╗██║░░░░░██║░░░██║██║╚████║░░░██║░░░  ██║╚██╔╝██║██╔══╝░░██║░░░░░██╔══╝░░██╔══╝░░
//	██████╦╝███████╗╚██████╔╝██║░╚███║░░░██║░░░  ██║░╚═╝░██║███████╗███████╗███████╗███████╗
//	╚═════╝░╚══════╝░╚═════╝░╚═╝░░╚══╝░░░╚═╝░░░  ╚═╝░░░░░╚═╝╚══════╝╚══════╝╚══════╝╚══════╝

	class BaseballBat: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"hatchet_pickup_light_SoundSet"
		};	
	};
	class NailedBaseballBat: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"hatchet_pickup_light_SoundSet"
		};	
	};
	class BarbedBaseballBat: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"hatchet_pickup_light_SoundSet"
		};	
	};
	class PipeWrench: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_PipeWrench_SoundSet"
		};
		ItemMoveSoundVolume = 0.60;
	};
	class BrassKnuckles_ColorBase: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"wrench_drop_SoundSet"
		};	
	};
	class TelescopicBaton: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"Baton_deploy_SoundSet"
		};
		ItemMoveSoundVolume = 0.1;
	};
	class HockeyStick: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};
	class NewHockeyStick: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};
	class PoliceBaton: Inventory_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};


//	██████╗░░█████╗░░██╗░░░░░░░██╗███████╗██████╗░███████╗██████╗░  ███╗░░░███╗███████╗██╗░░░░░███████╗███████╗
//	██╔══██╗██╔══██╗░██║░░██╗░░██║██╔════╝██╔══██╗██╔════╝██╔══██╗  ████╗░████║██╔════╝██║░░░░░██╔════╝██╔════╝
//	██████╔╝██║░░██║░╚██╗████╗██╔╝█████╗░░██████╔╝█████╗░░██║░░██║  ██╔████╔██║█████╗░░██║░░░░░█████╗░░█████╗░░
//	██╔═══╝░██║░░██║░░████╔═████║░██╔══╝░░██╔══██╗██╔══╝░░██║░░██║  ██║╚██╔╝██║██╔══╝░░██║░░░░░██╔══╝░░██╔══╝░░
//	██║░░░░░╚█████╔╝░░╚██╔╝░╚██╔╝░███████╗██║░░██║███████╗██████╔╝  ██║░╚═╝░██║███████╗███████╗███████╗███████╗
//	╚═╝░░░░░░╚════╝░░░░╚═╝░░░╚═╝░░╚══════╝╚═╝░░╚═╝╚══════╝╚═════╝░  ╚═╝░░░░░╚═╝╚══════╝╚══════╝╚══════╝╚══════╝

	class Chainsaw: Switchable_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpPowerGenerator_SoundSet"
		};	
	};
	class CattleProd: Powered_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet"
		};	
	};
	class StunBaton: Powered_Base
	{
		ItemMoveSounds[] = 
		{
			"hatchet_pickup_SoundSet",
			"hatchet_pickup_light_SoundSet"
		};	
	};
};

class CfgMagazines
{


//	░█████╗░███╗░░░███╗███╗░░░███╗██╗░░░██╗███╗░░██╗██╗████████╗██╗░█████╗░███╗░░██╗
//	██╔══██╗████╗░████║████╗░████║██║░░░██║████╗░██║██║╚══██╔══╝██║██╔══██╗████╗░██║
//	███████║██╔████╔██║██╔████╔██║██║░░░██║██╔██╗██║██║░░░██║░░░██║██║░░██║██╔██╗██║
//	██╔══██║██║╚██╔╝██║██║╚██╔╝██║██║░░░██║██║╚████║██║░░░██║░░░██║██║░░██║██║╚████║
//	██║░░██║██║░╚═╝░██║██║░╚═╝░██║╚██████╔╝██║░╚███║██║░░░██║░░░██║╚█████╔╝██║░╚███║
//	╚═╝░░╚═╝╚═╝░░░░░╚═╝╚═╝░░░░░╚═╝░╚═════╝░╚═╝░░╚══╝╚═╝░░░╚═╝░░░╚═╝░╚════╝░╚═╝░░╚══╝

	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		ItemMoveSounds[] = 
		{
			"IMS_MagazineBase_Soundset"
		};	
	};
	class Ammunition_Base: Magazine_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Bullet_Move_Smoll"
		};	
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_ShotgunShell_Move_Smoll"
		};	
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_ShotgunShell_Move_Smoll"
		};	
	};
	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_ShotgunShell_Move_Smoll"
		};	
	};
	class Ammo_12gaBeanbag: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_ShotgunShell_Move_Smoll"
		};	
	};
	class Ammo_Flare: Ammunition_Base
	{	// Basically a 12 gauge round
		ItemMoveSounds[] = 
		{
			"IMS_ShotgunShell_Move_Smoll"
		};	
	};
	// The year is 2033 we are in dayz version 1.99.999994
	// Bows and crossbows still havent been added 
	// But they finally fixed cars by removing them and giving us rollerskates (1 in 5 chance to die when putting them on)
	class Ammo_ArrowComposite: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Item_Move_Small"
		};	
	};
	class Ammo_SharpStick: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Item_Move_Small"
		};	
	};
	class Ammo_ArrowPrimitive: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Item_Move_Small"
		};	
	};
	class Ammo_ArrowBoned: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Item_Move_Small"
		};	
	};
	class Ammo_ArrowBolt: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Item_Move_Small"
		};	
	};
	class Ammo_DartSyringe: Ammunition_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Item_Move_Small"
		};	
	};
	

//	███╗░░░███╗░█████╗░░██████╗░░█████╗░███████╗██╗███╗░░██╗███████╗░██████╗
//	████╗░████║██╔══██╗██╔════╝░██╔══██╗╚════██║██║████╗░██║██╔════╝██╔════╝
//	██╔████╔██║███████║██║░░██╗░███████║░░███╔═╝██║██╔██╗██║█████╗░░╚█████╗░
//	██║╚██╔╝██║██╔══██║██║░░╚██╗██╔══██║██╔══╝░░██║██║╚████║██╔══╝░░░╚═══██╗
//	██║░╚═╝░██║██║░░██║╚██████╔╝██║░░██║███████╗██║██║░╚███║███████╗██████╔╝
//	╚═╝░░░░░╚═╝╚═╝░░╚═╝░╚═════╝░╚═╝░░╚═╝╚══════╝╚═╝╚═╝░░╚══╝╚══════╝╚═════╝░

	class Mag_357Speedloader_6Rnd: Magazine_Base
	{
		ItemMoveSounds[] = 
		{
			"PSO11Optic_pickup_SoundSet"
		};	
	};
	class Mag_CLIP762x54_5Rnd: Magazine_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Bullet_Move_Smoll"
		};	
	};
	class Mag_762x54Snaploader_2Rnd: Magazine_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Bullet_Move_Smoll"
		};	
	};
	class Mag_308WinSnaploader_2Rnd: Magazine_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Bullet_Move_Smoll"
		};	
	};
	class Mag_CLIP762x39_10Rnd: Magazine_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Bullet_Move_Smoll"
		};	
	};
	class Mag_CLIP9x19_10Rnd: Magazine_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_Bullet_Move_Smoll"
		};	
	};
	class Mag_12gaSnaploader_2Rnd: Magazine_Base
	{
		ItemMoveSounds[] = 
		{
			"IMS_ShotgunShell_Move_Smoll"
		};	
	};
};


class cfgWeapons
{
	class RifleCore;
	class PistolCore;
	class Rifle_Base: RifleCore
	{
		ItemMoveSounds[] = 
		{
			"pickUpRifle_SoundSet"
		};	
	};
	class BoltActionRifle_Base: Rifle_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpRifleLight_SoundSet"
		};	
	};
	class BoltActionRifle_InnerMagazine_Base: BoltActionRifle_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpRifleLight_SoundSet"
		};	
	};
	class Shotgun_Base: Rifle_Base
	{
		ItemMoveSounds[] = 
		{
			"pickUpRifle_SoundSet"
		};	
	};
	class Pistol_Base: PistolCore
	{
		ItemMoveSounds[] = 
		{
			"pickUpPistol_SoundSet"
		};	
	};
};