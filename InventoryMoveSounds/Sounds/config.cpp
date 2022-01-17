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
	class IMS_PipeWrench_SoundSet: IMS_Soundset_Base
	{
		soundShaders[]=
		{
			"IMS_PipeWrench_Soundshader"
		};
		frequencyFactor=0.15;
	};
	class IMS_CombinationLock_SoundSet: IMS_Soundset_Base
	{
		soundShaders[]=
		{
			"IMS_CombinationLock_Soundshader"
		};
	};
	class IMS_SmallCan_SoundSet: IMS_Soundset_Base
	{
		soundShaders[]=
		{
			"IMS_SmallCan_Soundshader"
		};
		frequencyRandomizer=0.5;
		frequencyFactor=1.50;
		volumeRandomizer=1;
	};
	class IMS_TinyCan_SoundSet: IMS_Soundset_Base
	{
		soundShaders[]=
		{
			"IMS_TinyCan_Soundshader"
		};
		frequencyRandomizer=0.5;
		frequencyFactor=3.00;
		volumeRandomizer=1;
	};
	class IMS_MagazineBase_Soundset: IMS_Soundset_Base
	{
		soundShaders[]=
		{
			"IMS_Magazine_DropMag_SoundShader",
			"IMS_Magazine_DropAmmo_SoundShader"
		};
		frequencyFactor=0.75;
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
	
	class IMS_GrenadeBop_Metal: IMS_SoundSet_Base
    {
        soundShaders[] = {"IMS_GrenadeBop_Metal_SoundShader"};
    };
	
    class IMS_GrenadeBop_Concrete: IMS_SoundSet_Base
    {
        soundShaders[] = {"IMS_GrenadeBop_Concrete_SoundShader"};
    };
	
    class IMS_GrenadeBop_Dirt: IMS_SoundSet_Base
    {
        soundShaders[] = {"IMS_Grebadenop_Dirt_SoundShader"};
    };
	
    class IMS_GrenadeBop_Gravel: IMS_SoundSet_Base
    {
        soundShaders[] = {"IMS_Grebadenop_Gravel_SoundShader"};
    };
	
    class IMS_GrenadeBop_Grass: IMS_SoundSet_Base
    {
        soundShaders[] = {"IMS_Grebadenop_Grass_SoundShader"};
    };
};

class CfgSoundShaders
{
    class IMS_SoundShader_Base
	{
		range=25;
	};
	class IMS_MagazineMove_Base
    {
		range = 12;
        radius = 1.5;
    };
	class IMS_BulletMove_Base
    {
        volume = 3;
		range = 7.5;
        radius = 1.5;
    };
	class IMS_GrenadeBop_Base
    {
        volume = 3;
		range = 25;
        radius = 0.01;
    };
	
	class IMS_PipeWrench_Soundshader: IMS_SoundShader_Base
	{
		samples[]=
		{			
			{"DZ\sounds\Characters\actions\items\wrench\wrench_drop", 1}
		};
	};
	class IMS_CombinationLock_Soundshader: IMS_SoundShader_Base
	{
		samples[]=
		{			
			{"\DZ\sounds\Characters\actions\pickup\pickUpBackpackMetal_1",1},
			{"\DZ\sounds\Characters\actions\pickup\pickUpBackpackMetal_2",1},
			{"\DZ\sounds\Characters\actions\pickup\pickUpBackpackMetal_3",1},
			{"\DZ\sounds\Characters\actions\pickup\pickUpBackpackMetal_4",1},
			{"\DZ\sounds\Characters\actions\pickup\pickUpBackpackMetal_5",1},
			{"\DZ\sounds\Characters\actions\pickup\pickUpBackpackMetal_6",1}
		};
	};
	class IMS_SmallCan_Soundshader: IMS_SoundShader_Base
	{
		samples[]=
		{			
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_1",1},
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_2",1},
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_3",1},
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_4",1},
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_5",1}
		};
		volume=0.80;
	};
	class IMS_TinyCan_Soundshader: IMS_SoundShader_Base
	{
		samples[]=
		{			
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_1",1},
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_2",1},
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_3",1},
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_4",1},
			{"DZ\sounds\Characters\actions\items\BakedBeansCan\BakedBeansCan_pickup_5",1}
		};
		volume=0.70;
	};
	
	class IMS_Magazine_DropMag_SoundShader: IMS_MagazineMove_Base
	{
		samples[]=
		{			
			{"DZ\sounds\Characters\movement\weapons\Base_Tail_1", 1},
			{"DZ\sounds\Characters\movement\weapons\Base_Tail_3", 1},
			{"DZ\sounds\Characters\movement\weapons\Base_Tail_4", 1},
			{"DZ\sounds\Characters\movement\weapons\Base_Tail_5", 1},
			{"DZ\sounds\Characters\movement\weapons\Base_Tail_6", 1},
			{"DZ\sounds\Characters\movement\weapons\Base_Tail_7", 1}
		};
		volume = 1.50;
	};
	class IMS_Magazine_DropAmmo_SoundShader: IMS_MagazineMove_Base
	{
		samples[]=
		{			
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_1",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_2",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_3",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_4",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_5",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_6",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_7",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_8",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_9",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_10",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_11",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_12",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_13",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_14",1},
			{"DZ\sounds\Characters\movement\weapons\MagPistol_empty_loop_15",1}
		};
		volume = 0.25;
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
	
	
    class IMS_Item_Move_Small_SoundShader: IMS_BulletMove_Base
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

    class IMS_Item_Move_Regular_SoundShader: IMS_BulletMove_Base
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
	
	class IMS_GrenadeBop_Concrete_SoundShader: IMS_GrenadeBop_Base
    {
        samples[] = 
        {
            {"DZ\sounds\Characters\movement\footstep\asphalt_ext\shared\sprinterc_7", 1},
            {"DZ\sounds\Characters\movement\footstep\asphalt_ext\shared\sprinterc_5", 1},
            {"DZ\sounds\Characters\movement\footstep\asphalt_ext\shared\walkerc_5", 1},
            {"DZ\sounds\Characters\movement\footstep\asphalt_ext\shared\sprinterc_2", 1},
            {"DZ\sounds\Characters\movement\footstep\asphalt_ext\shared\sprinterc_6", 1}
        };
    };
	
	class IMS_GrenadeBop_Metal_SoundShader: IMS_GrenadeBop_Base
    {
        samples[] = 
        {
            {"DZ\sounds\Characters\movement\footstep\metal_thick_int\shared\sprinterc_3", 1},
            {"DZ\sounds\Characters\movement\footstep\metal_thick_int\shared\sprinterc_4", 1},
            {"DZ\sounds\Characters\movement\footstep\metal_thick_int\shared\sprinterc_6", 1},
            {"DZ\sounds\Characters\movement\footstep\metal_thick_int\shared\sprinterc_7", 1},
            {"DZ\sounds\Characters\movement\footstep\metal_thick_int\shared\sprinterc_5", 1}
        };
    };
	
	class IMS_Grebadenop_Dirt_SoundShader: IMS_GrenadeBop_Base
    {
        volume = 50;
        samples[] = 
        {
            {"DZ\sounds\Characters\movement\footstep\dirt_int\shared\runerc_8", 1},
            {"DZ\sounds\Characters\movement\footstep\dirt_int\shared\sprinterc_1", 1},
			{"DZ\sounds\Characters\movement\footstep\dirt_int\shared\walkerc_3", 1},
			{"DZ\sounds\Characters\movement\footstep\dirt_int\shared\runerc_3", 1},
			{"DZ\sounds\Characters\movement\footstep\dirt_int\shared\sprinterc_4", 1}
        };
    };
	
	class IMS_Grebadenop_Gravel_SoundShader: IMS_GrenadeBop_Base
    {
        samples[] = 
        {
            {"DZ\sounds\Characters\movement\footstep\gravel_small_ext\shared\runerc_1", 1},
            {"DZ\sounds\Characters\movement\footstep\gravel_small_ext\shared\runerc_2", 1},
            {"DZ\sounds\Characters\movement\footstep\gravel_small_ext\shared\sprinterc_3", 1},
            {"DZ\sounds\Characters\movement\footstep\gravel_small_ext\shared\sprinterc_3", 1},
            {"DZ\sounds\Characters\movement\footstep\gravel_small_ext\shared\sprinterc_2", 1}
        };
    };
	
	class IMS_Grebadenop_Grass_SoundShader: IMS_GrenadeBop_Base
    {
        samples[] = 
        {
            {"DZ\sounds\Characters\movement\footstep\cp_grass_tall\boots\scufferc_1", 1},
            {"DZ\sounds\Characters\movement\footstep\cp_grass_tall\boots\scufferc_3", 1},
			{"DZ\sounds\Characters\movement\footstep\cp_grass_tall\boots\scufferc_5", 1},
			{"DZ\sounds\Characters\movement\footstep\cp_grass_tall\boots\scufferc_7", 1},
			{"DZ\sounds\Characters\movement\footstep\cp_grass_tall\boots\scufferc_8", 1}
        };
    };
};