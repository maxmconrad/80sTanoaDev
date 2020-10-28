class CfgPatches
{
	class 80s_tanoa_characters_tucanoil
	{
		units[]=
        {
            "80s_tanoa_tucanoil_worker_base"
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
    // Tucan Oil Security Services
    class gm_uniform_unarmored_base;
    class gm_ge_uniform_suit_80_base: gm_uniform_unarmored_base
    {
        class ItemInfo;
    }
	class 80s_tanoa_tucanoil_uniform: gm_ge_uniform_suit_80_base
	{
		scope=2;
        scopeArsenal=2;
		displayName="Tucan Oil Uniform (80s)";
        picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_dbp_uniform_suit_80_blu_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_tucanoil_worker_base";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_suit_co.paa",
            "",
            "",
            ""
		};
	};
    class gm_ge_headgear_hat_80_gry;
    class 80s_tanoa_tucanoil_hat: gm_ge_headgear_hat_80_gry
    {
        scope=2;
        scopeArsenal=2;
		displayName="Tucan Oil Hat (80s)";
        picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_headgear_hat_80_gry_ca";
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_hat_co.paa"
		};
    };
};

/////////////////////////
// Units                /
/////////////////////////
class CfgVehicles
{
    // Tucan Oil Security Services
    class gm_ge_pol_officer_80_base;
    class 80s_tanoa_tucanoil_worker_base: gm_ge_pol_officer_80_base
    {
        faction="80s_tanoa_fc_tucanoil";
        displayName="Tucan Oil Worker (Unarmed)";
        uniformClass="80s_tanoa_tucanoil_uniform";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=1;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
		weapons[]=
		{
			"Throw",
			"Put",
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_tucanoil_hat"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_tucanrail_hat"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_suit_co.paa",
            "",
            "",
            ""
		};
	};
    class 80s_tanoa_tucanoil_pilot_p1: 80s_tanoa_tucanoil_worker_base
    {
        displayName="Pilot (P1)";
        scope=2;
        scopeArsenal=2;
		weapons[]=
		{
			"Throw",
			"Put",
            "gm_p1_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
            "gm_p1_blk"
		};
        magazines[]=
		{
			"gm_8rnd_9x19mm_b_dm11_p1_blk",
            "gm_8rnd_9x19mm_b_dm11_p1_blk",
            "gm_8rnd_9x19mm_b_dm11_p1_blk",
            "gm_8rnd_9x19mm_b_dm11_p1_blk",
            "gm_8rnd_9x19mm_b_dm11_p1_blk"
		};
		respawnMagazines[]=
		{
			"gm_8rnd_9x19mm_b_dm11_p1_blk",
            "gm_8rnd_9x19mm_b_dm11_p1_blk",
            "gm_8rnd_9x19mm_b_dm11_p1_blk",
            "gm_8rnd_9x19mm_b_dm11_p1_blk",
            "gm_8rnd_9x19mm_b_dm11_p1_blk"
		};
	};
};