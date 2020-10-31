class CfgPatches
{
	class 80s_tanoa_characters_tucanoil
	{
		units[]=
        {
            "80s_tanoa_tucanoil_worker_base",
            "80s_tanoa_tucanoil_worker_blouse_base",
            "80s_tanoa_tucanoil_worker_cbrn_base",
            "80s_tanoa_tucanoil_operator_g3a4",
            "80s_tanoa_tucanoil_officer_mp5",
            "80s_tanoa_tucanoil_operator_mp5",
            "80s_tanoa_tucanoil_operator_akm",
            "80s_tanoa_tucanoil_pilot_p1",
            "80s_tanoa_tucanoil_civ_worker_base",
            "80s_tanoa_tucanoil_civ_worker_suit_base",
            "80s_tanoa_tucanoil_civ_cbrn_base",
            "80s_tanoa_tucanoil_civ_pilot"
        };
		weapons[]=
        {
            "80s_tanoa_tucanoil_uniform",
            "80s_tanoa_tucanoil_hat",
            "80s_tanoa_tucanoil_blouse",
            "80s_tanoa_tucanoil_cbrn_suit",
            "80s_tanoa_tucanoil_construction_hat",
            "80s_tanoa_tucanoil_construction_hat_earprot",
            "80s_tanoa_tucanoil_construction_hat_headset"
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
            containerClass="Supply80";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_suit_co.paa",
            "",
            "",
            ""
		};
	};
    // Military cap
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
    // Tucan Oil (Civilian)
    class gm_ge_uniform_blouse_80_base;
    class gm_ge_pol_uniform_blouse_80_blk: gm_ge_uniform_blouse_80_base
    {
        class ItemInfo;
    }
	class 80s_tanoa_tucanoil_blouse: gm_ge_pol_uniform_blouse_80_blk
	{
		scope=2;
        scopeArsenal=2;
		displayName="Tucan Oil Uniform (80s, Civilian)";
        picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_pol_uniform_blouse_80_blk_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_tucanoil_worker_blouse_base";
            containerClass="Supply80";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_blouse_co.paa",
            "",
            "",
            ""
		};
	};
    // CBRN Suit
    class Uniform_Base;
    class U_C_CBRN_Suit_01_White_F: Uniform_Base
    {
        class ItemInfo;
    }
    class 80s_tanoa_tucanoil_cbrn_suit: U_C_CBRN_Suit_01_White_F
    {
        scope=2;
        scopeArsenal=2;
		displayName="Tucan Oil CBRN Suit (80s)";
        picture="\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_C_CBRN_Suit_01_White_F_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_tucanoil_worker_cbrn_base";
            containerClass="Supply80";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_cbrn_suit_co.paa"
		};
    };
    // Hard Hat
    class H_Construction_basic_base_F;
    class 80s_tanoa_tucanoil_construction_hat: H_Construction_basic_base_F
    {
        scope=2;
        scopeArsenal=2;
		displayName="Hard Hat (Tucan Oil, 80s)";
        picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_Construction_basic_white_F_CA.paa";
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_construction_hat_co.paa"
		}; 
    };
    class H_Construction_earprot_base_F;
    class 80s_tanoa_tucanoil_construction_hat_earprot: H_Construction_earprot_base_F
    {
        scope=2;
        scopeArsenal=2;
		displayName="Hard Hat (Tucan Oil, 80s, Ear Protection)";
        picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_Construction_basic_white_F_CA.paa";
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_construction_hat_co.paa"
		}; 
    };
    class H_Construction_headset_base_F;
    class 80s_tanoa_tucanoil_construction_hat_headset: H_Construction_headset_base_F
    {
        scope=2;
        scopeArsenal=2;
		displayName="Hard Hat (Tucan Oil, 80s, Headset)";
        picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_Construction_basic_white_F_CA.paa";
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_construction_hat_co.paa"
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
        displayName="Worker (Unarmed)";
        uniformClass="80s_tanoa_tucanoil_uniform";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=2;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=2;
        scopeArsenal=2;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        editorPreview="\gm\gm_characters\gm_gc_characters\data\ui\editor\gm_gc_pol_officer_80_blu.jpg";
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
    class gm_ge_pol_patrol_80_blk;
    class 80s_tanoa_tucanoil_worker_blouse_base: gm_ge_pol_patrol_80_blk
    {
        faction="80s_tanoa_fc_tucanoil";
        displayName="Worker (Blouse, Unarmed)";
        uniformClass="80s_tanoa_tucanoil_blouse";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=2;
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
            "H_Cap_blu"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Cap_blu"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_blouse_co.paa",
            "",
            "",
            ""
		};
	};
    class C_CBRN_Man_Oversuit_01_White_F;
    class 80s_tanoa_tucanoil_worker_cbrn_base: C_CBRN_Man_Oversuit_01_White_F
    {
        faction="80s_tanoa_fc_tucanoil";
        displayName="Worker (CBRN, Unarmed)";
        uniformClass="80s_tanoa_tucanoil_cbrn_suit";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=2;
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
            "gm_ge_facewear_m65",
            "80s_tanoa_tucanoil_construction_hat"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "gm_ge_facewear_m65",
            "80s_tanoa_tucanoil_construction_hat"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\tucanoil\data\80s_tanoa_tucanoil_cbrn_suit_co.paa"
		};
    };
    class 80s_tanoa_tucanoil_operator_g3a4: 80s_tanoa_tucanoil_worker_blouse_base
    {
        displayName="Security Operator (G3A4)";
        scope=2;
        scopeArsenal=2;
		weapons[]=
		{
			"Throw",
			"Put",
			"gm_g3a4_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_g3a4_blk"
		};
		magazines[]=
		{
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk"
		};
		respawnMagazines[]=
		{
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk"
		};
	};
    class 80s_tanoa_tucanoil_officer_mp5: 80s_tanoa_tucanoil_worker_base
    {
        displayName="Security Officer (MP5)";
        scope=2;
        scopeArsenal=2;
		weapons[]=
		{
			"Throw",
			"Put",
			"gm_mp5a3_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_mp5a3_blk"
		};
		magazines[]=
		{
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk"
		};
	};
    class 80s_tanoa_tucanoil_operator_mp5: 80s_tanoa_tucanoil_worker_blouse_base
    {
        displayName="Security Operator (MP5)";
        scope=2;
        scopeArsenal=2;
		weapons[]=
		{
			"Throw",
			"Put",
			"gm_mp5a3_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_mp5a3_blk"
		};
		magazines[]=
		{
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk",
			"gm_30rnd_9x19mm_b_dm11_mp5_blk"
		};
	};
    class 80s_tanoa_tucanoil_operator_akm: 80s_tanoa_tucanoil_worker_blouse_base
    {
        displayName="Security Operator (AKM)";
        scope=2;
        scopeArsenal=2;
		weapons[]=
		{
			"Throw",
			"Put",
			"gm_akm_wud"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_akm_wud"
		};
		magazines[]=
		{
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk"
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
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_gendarmerie_pilot_helmet",
            "G_Spectacles_tinted"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_gendarmerie_pilot_helmet",
            "G_Spectacles_tinted"
		};
	};
    // Tucan Oil (Civilian)
    class 80s_tanoa_tucanoil_civ_worker_base: 80s_tanoa_tucanoil_worker_blouse_base
    {
        faction="80s_tanoa_fc_tucanoil_civ";
        displayName="Worker";
		side=3;
        scope=2;
        scopeArsenal=2;
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_tucanoil_construction_hat",
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_tucanoil_construction_hat",
		};
	};
    class 80s_tanoa_tucanoil_civ_worker_suit_base: 80s_tanoa_tucanoil_worker_base
    {
        faction="80s_tanoa_fc_tucanoil_civ";
        displayName="Worker (Suit)";
		side=3;
        scope=2;
        scopeArsenal=2;
	};
    class 80s_tanoa_tucanoil_civ_cbrn_base: 80s_tanoa_tucanoil_worker_cbrn_base
    {
        faction="80s_tanoa_fc_tucanoil_civ";
        displayName="Worker (CBRN)";
		side=3;
        scope=2;
        scopeArsenal=2;
    };
    class 80s_tanoa_tucanoil_civ_pilot: 80s_tanoa_tucanoil_civ_worker_base
    {
        displayName="Pilot";
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_gendarmerie_pilot_helmet",
            "G_Spectacles_tinted"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_gendarmerie_pilot_helmet",
            "G_Spectacles_tinted"
		};
    };
};
// CfgGroups
class CfgGroups
{
	class Indep
	{
		class 80s_tanoa_tucanoil_security
		{
			name="Tucan Oil Security Services(80s)";
			class gm_infantry
			{
				name="Infantry";
                class 80s_tanoa_tucanoil_response_team
				{
					name="Response Team";
					side=2;
					faction="80s_tanoa_fc_tucanoil";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Leader1
					{
						side=2;
						vehicle="80s_tanoa_tucanoil_officer_mp5";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_tucanoil_operator_akm";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_tucanoil_operator_mp5";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Marksman: Rifleman1
					{
						vehicle="80s_tanoa_tucanoil_operator_mp5";
						position[]={10,-10,0};
					};
				};
			};
		};
	};
};