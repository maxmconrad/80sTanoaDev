class CfgPatches
{
	class 80s_tanoa_characters_rfhi
	{
		units[]=
        {
        };
		weapons[]=
        {
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
        editorPreview="\gm\gm_characters\gm_xx_characters\gm_gc_civilians\data\ui\editor\gm_gc_civ_man_01_80_blu.jpg";
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
    // Crocodile Hunter
    class gm_gc_civ_man_01_80_base;
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
        editorPreview="\gm\gm_characters\gm_xx_characters\gm_gc_civilians\data\ui\editor\gm_gc_civ_man_01_80_blu.jpg";
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
            "H_Hat_Safari_olive_F"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Hat_Safari_olive_F"
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
};