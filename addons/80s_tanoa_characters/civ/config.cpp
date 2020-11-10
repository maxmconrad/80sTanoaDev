class CfgPatches
{
	class 80s_tanoa_characters_civ
	{
		units[]=
        {
            "80s_tanoa_civ_miner_base",
            "80s_tanoa_civ_miner_daltgreen_base",
            "80s_tanoa_civ_hunter_base",
            "80s_tanoa_civ_man_shorts_trq",
            "80s_tanoa_civ_man_shorts_hawaiian_blk",
            "80s_tanoa_civ_man_shorts_hawaiian_trq",
            "80s_tanoa_civ_man_shorts_hawaiian_red",
            "80s_tanoa_civ_man_casual_hawaiian_blk",
            "80s_tanoa_civ_man_casual_flowers_grn",
            "80s_tanoa_civ_man_blouse_grn",
            "80s_tanoa_civ_man_blouse_brn",
            "80s_tanoa_civ_private_investigator_pm",
            "80s_tanoa_civ_man_manager_wht"
        };
		weapons[]=
        {
            "80s_tanoa_civ_uniform_miner",
            "80s_tanoa_civ_uniform_miner_grn",
            "80s_tanoa_civ_uniform_hunter",
            "80s_tanoa_civ_construction_hat_grn",
            "80s_tanoa_civ_uniform_shorts_trq",
            "80s_tanoa_civ_uniform_shorts_hawaiian_blk",
            "80s_tanoa_civ_uniform_shorts_hawaiian_trq",
            "80s_tanoa_civ_uniform_shorts_hawaiian_red",
            "80s_tanoa_civ_uniform_casual_hawaiian_blk",
            "80s_tanoa_civ_uniform_casual_flowers_grn",
            "80s_tanoa_civ_uniform_blouse_grn",
            "80s_tanoa_civ_uniform_blouse_brn",
            "80s_tanoa_civ_uniform_suit_wht"
        };
		requiredAddons[]=
		{
            "gm_characters_ge_characters",
			"gm_characters_gc_characters",
			"gm_characters_dk_characters"
		};
	};
};

/////////////////////////
// Uniforms/Weapons     /
/////////////////////////
class CfgWeapons
{
    // Mine worker
    class gm_xx_civ_uniform_man_01_base;
    class gm_gc_civ_uniform_man_01_80_base: gm_xx_civ_uniform_man_01_base
    {
        class ItemInfo;
    };
	class 80s_tanoa_civ_uniform_miner: gm_gc_civ_uniform_man_01_80_base
	{
		scope=2;
        scopeArsenal=2;
		displayName="Miner Clothes (Tanoa, 80s)";
        picture="\gm\gm_characters\gm_xx_characters\data\ui\picture_gm_gc_civ_uniform_man_01_80_blu_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_miner_base";
            containerClass="Supply80";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_co.paa",
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_co.paa"
		};
	};
    // Mine worker (Daltgreen)
	class 80s_tanoa_civ_uniform_miner_grn: gm_gc_civ_uniform_man_01_80_base
	{
		scope=2;
        scopeArsenal=2;
		displayName="Miner Clothes (Daltgreen, 80s)";
        picture="\gm\gm_characters\gm_xx_characters\data\ui\picture_gm_gc_civ_uniform_man_01_80_blu_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_miner_daltgreen_base";
            containerClass="Supply80";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_grn_co.paa",
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_grn_co.paa"
		};
	};
    // Crocodile hunter
    class 80s_tanoa_civ_uniform_hunter: gm_gc_civ_uniform_man_01_80_base
	{
		scope=2;
        scopeArsenal=2;
		displayName="Hunting Clothes (Tanoa, 80s)";
        picture="\gm\gm_characters\gm_xx_characters\data\ui\picture_gm_gc_civ_uniform_man_01_80_blu_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_hunter_base";
            containerClass="Supply80";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_hunter_co.paa",
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_hunter_co.paa"
		};
	};
    // Headgear
    class H_Construction_basic_base_F;
    class 80s_tanoa_civ_construction_hat_grn: H_Construction_basic_base_F
    {
        scope=2;
        scopeArsenal=2;
		displayName="Hard Hat (Daltgreen)";
        picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_Construction_basic_white_F_CA.paa";
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_helmet_miner_grn_co.paa"
		}; 
    };
    // Civilian (Shorts, Turqoise)
    class Uniform_Base;
    class U_C_Poloshirt_blue: Uniform_Base
    {
        class ItemInfo;
    };
    class 80s_tanoa_civ_uniform_shorts_trq: U_C_Poloshirt_blue
    {
        scope=2;
        scopeArsenal=2;
		displayName="Civilian Clothes ('80s Tanoa, Shorts, Turqoise)";
        picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_blue_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_man_shorts_trq";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_shorts_trq_co.paa"
		};
    };
    // Civilian (Shorts, Hawaiian)
    class 80s_tanoa_civ_uniform_shorts_hawaiian_blk: U_C_Poloshirt_blue
    {
        scope=2;
        scopeArsenal=2;
		displayName="Civilian Clothes ('80s Tanoa, Shorts, Hawaiian - Black)";
        picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_blue_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_man_shorts_hawaiian_blk";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_shorts_hawaiian_co.paa"
		};
    };
    // Civilian (Shorts, Hawaiian - Turqoise)
    class 80s_tanoa_civ_uniform_shorts_hawaiian_trq: U_C_Poloshirt_blue
    {
        scope=2;
        scopeArsenal=2;
		displayName="Civilian Clothes ('80s Tanoa, Shorts, Hawaiian - Turqoise)";
        picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_blue_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_man_shorts_hawaiian_trq";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_shorts_hawaiian_trq_co.paa"
		};
    };
    // Civilian (Shorts, Hawaiian - Red)
    class 80s_tanoa_civ_uniform_shorts_hawaiian_red: U_C_Poloshirt_blue
    {
        scope=2;
        scopeArsenal=2;
		displayName="Civilian Clothes ('80s Tanoa, Shorts, Hawaiian - Red)";
        picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_blue_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_man_shorts_hawaiian_red";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_shorts_hawaiian_red_co.paa"
		};
    };
    // Civilian (Casual, Hawaiian - Black)
    class U_C_Man_casual_2_F: Uniform_Base
    {
        class ItemInfo;
    };
    class 80s_tanoa_civ_uniform_casual_hawaiian_blk: U_C_Man_casual_2_F
    {
        scope=2;
        scopeArsenal=2;
		displayName="Civilian Clothes ('80s Tanoa, Casual, Hawaiian - Black)";
        picture="\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_2_F_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_man_casual_hawaiian_blk";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_casual_hawaiian_co.paa"
		};
    };
    // Civilian (Casual, Flowers - Green)
    class 80s_tanoa_civ_uniform_casual_flowers_grn: U_C_Man_casual_2_F
    {
        scope=2;
        scopeArsenal=2;
		displayName="Civilian Clothes ('80s Tanoa, Casual, Flowers - Green)";
        picture="\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_2_F_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_man_casual_flowers_grn";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_casual_flowers_co.paa"
		};
    };
    // Civilian (Jacket, Green)
    class gm_ge_uniform_blouse_80_base;
    class gm_ge_pol_uniform_blouse_80_blk: gm_ge_uniform_blouse_80_base
    {
        class ItemInfo;
    }
	class 80s_tanoa_civ_uniform_blouse_grn: gm_ge_pol_uniform_blouse_80_blk
	{
		scope=2;
        scopeArsenal=2;
		displayName="Civilian Clothes ('80s Tanoa, Jacket - Green)";
        picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_pol_uniform_blouse_80_blk_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_man_blouse_grn";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_blouse_grn_co.paa",
            "",
            "",
            ""
		};
	};
    // Civilian (Jacket, Brown)
    class 80s_tanoa_civ_uniform_blouse_brn: gm_ge_pol_uniform_blouse_80_blk
	{
		scope=2;
        scopeArsenal=2;
		displayName="Civilian Clothes ('80s Tanoa, Jacket - Brown)";
        picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_pol_uniform_blouse_80_blk_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_man_blouse_brn";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_blouse_brn_co.paa",
            "",
            "",
            ""
		};
	};
    // Resort Manager (Suit, White)
    class gm_uniform_unarmored_base;
    class gm_ge_uniform_suit_80_base: gm_uniform_unarmored_base
    {
        class ItemInfo;
    }
	class 80s_tanoa_civ_uniform_suit_wht: gm_ge_uniform_suit_80_base
	{
		scope=2;
        scopeArsenal=2;
		displayName="Resort Manager Suit ('80s Tanoa)";
        picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_dbp_uniform_suit_80_blu_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_civ_man_manager_wht";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_suit_wht_co.paa",
            "",
            "",
            ""
		};
	};
};

/////////////////////////
// Units                /
/////////////////////////
class CfgVehicles
{
    // Miner
    class gm_gc_civ_man_01_80_base;
    class 80s_tanoa_civ_miner_base: gm_gc_civ_man_01_80_base
    {
        faction="80s_tanoa_fc_civ";
        displayName="Miner";
        uniformClass="80s_tanoa_civ_uniform_miner";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_miner_base.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Construction_basic_white_F"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Construction_basic_white_F"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_co.paa",
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_co.paa"
		};
	};
    // Miner (Daltgreen)
    class 80s_tanoa_civ_miner_daltgreen_base: gm_gc_civ_man_01_80_base
    {
        faction="80s_tanoa_fc_civ";
        displayName="Miner (Daltgreen)";
        uniformClass="80s_tanoa_civ_uniform_miner_grn";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_miner_daltgreen_base.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_civ_construction_hat_grn"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_civ_construction_hat_grn"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_grn_co.paa",
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_grn_co.paa"
		};
	};
    // Crocodile Hunter
    class 80s_tanoa_civ_hunter_base: gm_gc_civ_man_01_80_base
    {
        faction="80s_tanoa_fc_civ";
        displayName="Crocodile Hunter";
        uniformClass="80s_tanoa_civ_uniform_hunter";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_hunter_base.jpg";
		weapons[]=
		{
			"Throw",
			"Put",
            "sgun_HunterShotgun_01_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
            "sgun_HunterShotgun_01_F"
		};
        magazines[]=
		{
			"2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets"
		};
		respawnMagazines[]=
		{
			"2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Aviator",
            "H_Hat_Safari_olive_F"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Aviator",
            "H_Hat_Safari_olive_F"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_hunter_co.paa",
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_hunter_co.paa"
		};
	};
    // Civilian (Shorts, Turqoise)
    class C_man_polo_1_F;
    class 80s_tanoa_civ_man_shorts_trq: C_man_polo_1_F
    {
        faction="80s_tanoa_fc_civ";
        displayName="Civilian (Shorts)";
        uniformClass="80s_tanoa_civ_uniform_shorts_trq";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_man_shorts_trq.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Spectacles_tinted"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Spectacles_tinted"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_shorts_trq_co.paa"
		};
        // Remove EventHandlers to disable Randomization
        class EventHandlers
        {
                init="";
        };
	};
    // Civilian (Shorts, Hawaiian)
    class 80s_tanoa_civ_man_shorts_hawaiian_blk: C_man_polo_1_F
    {
        faction="80s_tanoa_fc_civ";
        displayName="Civilian (Shorts)";
        uniformClass="80s_tanoa_civ_uniform_shorts_hawaiian_blk";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_man_shorts_hawaiian_blk.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Booniehat_oli"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Booniehat_oli"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_shorts_hawaiian_co.paa"
		};
        // Remove EventHandlers to disable Randomization
        class EventHandlers
        {
                init="";
        };
	};
    // Civilian (Shorts, Hawaiian, Turqoise)
    class 80s_tanoa_civ_man_shorts_hawaiian_trq: C_man_polo_1_F
    {
        faction="80s_tanoa_fc_civ";
        displayName="Civilian (Shorts)";
        uniformClass="80s_tanoa_civ_uniform_shorts_hawaiian_trq";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_man_shorts_hawaiian_trq.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_StrawHat_dark"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_StrawHat_dark"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_shorts_hawaiian_trq_co.paa"
		};
        // Remove EventHandlers to disable Randomization
        class EventHandlers
        {
                init="";
        };
	};
    // Civilian (Shorts, Hawaiian, Red)
    class 80s_tanoa_civ_man_shorts_hawaiian_red: C_man_polo_1_F
    {
        faction="80s_tanoa_fc_civ";
        displayName="Civilian (Shorts)";
        uniformClass="80s_tanoa_civ_uniform_shorts_hawaiian_red";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_man_shorts_hawaiian_red.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Aviator"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Aviator"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_shorts_hawaiian_red_co.paa"
		};
        // Remove EventHandlers to disable Randomization
        class EventHandlers
        {
                init="";
        };
	};
    // Civilian (Casual, Hawaiian - Black)
    class C_Man_casual_2_F;
    class 80s_tanoa_civ_man_casual_hawaiian_blk: C_Man_casual_2_F
    {
        faction="80s_tanoa_fc_civ";
        displayName="Civilian (Casual)";
        uniformClass="80s_tanoa_civ_uniform_casual_hawaiian_blk";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_man_casual_hawaiian_blk.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Aviator"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Aviator"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_casual_hawaiian_co.paa"
		};
	};
    // Civilian (Casual, Flowers - Green)
    class 80s_tanoa_civ_man_casual_flowers_grn: C_Man_casual_2_F
    {
        faction="80s_tanoa_fc_civ";
        displayName="Civilian (Casual)";
        uniformClass="80s_tanoa_civ_uniform_casual_flowers_grn";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_man_casual_flowers_grn.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_casual_flowers_co.paa"
		};
	};
    // Civilian (Casual, Jacket - Green)
    class gm_ge_pol_patrol_80_blk;
    class 80s_tanoa_civ_man_blouse_grn: gm_ge_pol_patrol_80_blk
    {
        faction="80s_tanoa_fc_civ";
        displayName="Civilian (Jacket)";
        uniformClass="80s_tanoa_civ_uniform_blouse_grn";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_man_blouse_grn.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_blouse_grn_co.paa",
            "",
            "",
            ""
		};
    };
    // Civilian (Casual, Jacket - Brown)
    class 80s_tanoa_civ_man_blouse_brn: gm_ge_pol_patrol_80_blk
    {
        faction="80s_tanoa_fc_civ";
        displayName="Civilian (Jacket)";
        uniformClass="80s_tanoa_civ_uniform_blouse_brn";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_man_blouse_brn.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_blouse_brn_co.paa",
            "",
            "",
            ""
		};
    };
    // Private investigator
    class 80s_tanoa_civ_private_investigator_pm: 80s_tanoa_civ_man_blouse_brn
    {
        displayName="Private Investigator (Makarov)";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_private_investigator_pm.jpg";
        weapons[]=
		{
			"Throw",
			"Put",
            "gm_pm_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
            "gm_pm_blk"
		};
        magazines[]=
		{
			"gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk"
		};
		respawnMagazines[]=
		{
			"gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Spectacles_tinted"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Spectacles_tinted"
		};
    };
    // Resort Manager
    class gm_ge_pol_officer_80_base;
    class 80s_tanoa_civ_man_manager_wht: gm_ge_pol_officer_80_base
    {
        faction="80s_tanoa_fc_civ";
        displayName="Resort Manager";
        uniformClass="80s_tanoa_civ_uniform_suit_wht";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=3;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_characters\civ\data\editorpreview\80s_tanoa_civ_man_manager_wht.jpg";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Spectacles_tinted"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Spectacles_tinted"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_suit_wht_co.paa",
            "",
            "",
            ""
		};
    };
};