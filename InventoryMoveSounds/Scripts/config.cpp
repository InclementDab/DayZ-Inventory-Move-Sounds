
class CfgPatches
{
	class InventoryMoveSounds_Scripts
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class DZ_InventoryMoveSounds
	{
		name = "Inventory Move Sounds";
		dir = "InventoryMoveSounds";
		credits = "";
		author = "";
		creditsJson = "InventoryMoveSounds/Scripts/Data/Credits.json";
		versionPath = "InventoryMoveSounds/scripts/Data/Version.hpp";
		inputs = "InventoryMoveSounds/Scripts/Data/Inputs.xml";
		type = "mod";
		dependencies[] =
		{
			"Game", "World", "Mission"
		};
		class defs
		{
			class imageSets
			{
				files[]=
				{
					"InventoryMoveSounds/gui/imagesets/dayz_editor_gui.imageset"
				};
			};
			class engineScriptModule
			{
				value = "";
				files[] =
				{
					"InventoryMoveSounds/scripts/common",
					"InventoryMoveSounds/scripts/1_core"
				};
			};

			class gameScriptModule
			{
				value="";
				files[] = 
				{
					"InventoryMoveSounds/scripts/common",
					"InventoryMoveSounds/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"InventoryMoveSounds/scripts/common",
					"InventoryMoveSounds/scripts/4_World"
				};
			};

			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					"InventoryMoveSounds/scripts/common",
					"InventoryMoveSounds/scripts/5_Mission"
				};
			};
		};
	};
};
