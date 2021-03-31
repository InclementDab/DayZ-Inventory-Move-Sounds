class CfgPatches
{
	class IMS_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
		author = "Niphoria";
		name = "InventoryMove Sound FX";
	};
};

class CfgSoundShaders
{
    class IMS_SoundShader_Base
    {
        volume = 3;
		range = 7.5;
        radius = 1.5;
    };
	
	class IMS_ShotgunShell_Move_SoundShader: IMS_SoundShader_Base
    {
		volume = 1; // Too loud otherwise
        samples[] = 
        {
            {"DZ\sounds\weapons\shells\shell_12ga_default_1", 1},
            {"DZ\sounds\weapons\shells\shell_12ga_default_2", 1},
            {"DZ\sounds\weapons\shells\shell_12ga_default_3", 1},
            {"DZ\sounds\weapons\shells\shell_12ga_default_4", 1},
			{"DZ\sounds\weapons\shells\shell_12ga_default_5", 1}
        };
    };
	
	class IMS_Bullet_Move_SoundShader: IMS_SoundShader_Base
    {
        samples[] = 
        {
            {"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_01", 1},
            {"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_02", 1},
			{"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_03", 1},
			{"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_04", 1},
			{"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_05", 1}
			// This is srsly the only sounds that fit to bullets moving
        };
    };
	
	
    class IMS_Item_Move_Small_SoundShader: IMS_SoundShader_Base
    {
        samples[] = 
        {
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_1", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_2", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_3", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_4", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_5", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_6", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_7", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_8", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_1", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_2", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_3", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_4", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_5", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_6", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_7", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_8", 1}
        };
    };

    class IMS_Item_Move_Regular_SoundShader: IMS_SoundShader_Base
    {
        range = 13.5;
        samples[] = 
        {
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_1", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_2", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_3", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_4", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_5", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_6", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_7", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_8", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_1", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_2", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_3", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_4", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_5", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_6", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_7", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_8", 1}
        };
    };
};

class CfgSoundSets
{
    class IMS_SoundSet_Base
    {
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
        distanceFilter = "defaultDistanceFilter";
    };

	class IMS_ShotgunShell_Move_Smoll: IMS_SoundSet_Base
    {
        soundShaders[] = {"IMS_ShotgunShell_Move_SoundShader"};
    };
	
	class IMS_Bullet_Move_Smoll: IMS_SoundSet_Base
    {
        soundShaders[] = {"IMS_Bullet_Move_SoundShader"};
    };

    class IMS_Item_Move_Small: IMS_SoundSet_Base
    {
        soundShaders[] = {"IMS_Item_Move_Small_SoundShader"};
    };
    
    class IMS_Item_Move_Regular: IMS_SoundSet_Base
    {
        soundShaders[] = {"IMS_Item_Move_Regular_SoundShader"};
    };
};
