class CfgPatches
{
	class 80s_tanoa_characters_gendarmerie
	{
		units[]=
        {
            "80s_tanoa_gendarme_base",
            "80s_tanoa_gendarme_p1",
            "80s_tanoa_gendarme_mp5_gear",
            "80s_tanoa_gendarme_mp16a1_gear"        
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
    class gm_ge_uniform_blouse_80_base;
    class gm_ge_pol_uniform_blouse_80_blk: gm_ge_uniform_blouse_80_base
    {
        class ItemInfo;
    }
	class 80s_tanoa_gendarmerie_patrol_uniform: gm_ge_pol_uniform_blouse_80_blk
	{
		scope=2;
        scopeArsenal=2;
		displayName="Gendarmerie Uniform (80s)";
        picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_pol_uniform_blouse_80_blk_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_gendarme_base";
        };
	};
    // SIU 1
    class 80s_tanoa_gendarmerie_uniform_blouse_brn: gm_ge_pol_uniform_blouse_80_blk
	{
		scope=2;
        scopeArsenal=2;
		displayName="SIU Clothes (Jacket)";
        picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_pol_uniform_blouse_80_blk_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_gendarmerie_siu_blouse_brn_p1";
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
    // SIU 2
    class Uniform_Base
    class U_C_Man_casual_2_F: Uniform_Base
    {
        class ItemInfo;
    };
    class 80s_tanoa_gendarmerie_uniform_casual_hawaiian_blk: U_C_Man_casual_2_F
    {
        scope=2;
        scopeArsenal=2;
		displayName="SIU Clothes (Casual)";
        picture="\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_2_F_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_gendarmerie_siu_casual_hawaiian_blk_mp5";
            containerClass="Supply40";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_casual_hawaiian_co.paa"
		};
    };
    class gm_ge_vest_80_mp_base;
    class 80s_tanoa_gendarmerie_vest: gm_ge_vest_80_mp_base
    {
        scope=2;
        scopeArsenal=2;
		displayName="Gear (Gendarmerie, 80s)";
        picture = "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_pol_vest_80_wht_ca";
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\gendarmerie\data\80s_tanoa_gendarmerie_vest01.paa",
            ""
		};
        hiddenSelectionsMaterials[]=
        {
            //"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_mp_80",
            "",
            ""
        };
    };
    class gm_ge_vest_pilot_base;
    class 80s_tanoa_gendarmerie_ballistic_vest: gm_ge_vest_pilot_base
    {
        scope=2;
        scopeArsenal=2;
		displayName="Ballistic Vest (Gendarmerie, 80s)";
        picture = "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_vest_pilot_oli_ca";
        hiddenSelectionsTextures[]=
		{
            "#(rgb,8,8,3)color(0.0,0.0,0.0,1,CO)"
		};
    };
    class gm_ge_headgear_sph4_base;
    class 80s_tanoa_gendarmerie_pilot_helmet: gm_ge_headgear_sph4_base
    {
        scope=2;
        scopeArsenal=2;
		displayName="Pilot Helmet (Gendarmerie, 80s)";
        picture = "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_headgear_sph4_oli_ca";
        hiddenSelectionsTextures[]=
		{
            "#(rgb,8,8,3)color(0.75,0.75,0.75,1,CO)"
		};
    };
};

/////////////////////////
// Units                /
/////////////////////////
class CfgVehicles
{
    //////////////////////////
    // Infantry             //
    //////////////////////////
	class gm_ge_pol_patrol_80_blk;
    class 80s_tanoa_gendarme_base: gm_ge_pol_patrol_80_blk
    {
        faction="80s_tanoa_gendarmerie";
        displayName="Gendarme (Unarmed)";
        uniformClass="80s_tanoa_gendarmerie_patrol_uniform";
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
            "H_Beret_gen_F",
            "80s_tanoa_gendarmerie_vest"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Beret_gen_F",
            "80s_tanoa_gendarmerie_vest"
		};
		identityTypes[]=
		{
			"LanguageENGFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\gendarmerie\data\80s_tanoa_gendarmerie_uniform01.paa",
            ""
		};
	};
    class 80s_tanoa_gendarme_p1: 80s_tanoa_gendarme_base
    {
        displayName="Gendarme (P1)";
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
    class 80s_tanoa_gendarme_mp5_gear: 80s_tanoa_gendarme_base
    {
        displayName="Gendarme (MP5, Gear)";
        scope=2;
        scopeArsenal=2;
		weapons[]=
		{
			"Throw",
			"Put",
            "gm_mp5a2_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
            "gm_mp5a2_blk"
		};
        magazines[]=
		{
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Beret_gen_F",
            "gm_ge_bgs_vest_80_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Beret_gen_F",
            "gm_ge_bgs_vest_80_rifleman"
		};
	};
    class 80s_tanoa_gendarme_m16a1_gear: 80s_tanoa_gendarme_base
    {
        displayName="Gendarme (M16A1, Gear)";
        scope=2;
        scopeArsenal=2;
		weapons[]=
		{
			"Throw",
			"Put",
            "gm_m16a1_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
            "gm_m16a1_blk"
		};
        magazines[]=
		{
			"gm_30Rnd_556x45mm_b_M855_stanag_gry",
			"gm_30Rnd_556x45mm_b_M855_stanag_gry",
			"gm_30Rnd_556x45mm_b_M855_stanag_gry",
			"gm_30Rnd_556x45mm_b_M855_stanag_gry",
            "gm_30Rnd_556x45mm_b_M855_stanag_gry",
            "gm_30Rnd_556x45mm_b_M855_stanag_gry"
		};
		respawnMagazines[]=
		{
			"gm_30Rnd_556x45mm_b_M855_stanag_gry",
			"gm_30Rnd_556x45mm_b_M855_stanag_gry",
			"gm_30Rnd_556x45mm_b_M855_stanag_gry",
			"gm_30Rnd_556x45mm_b_M855_stanag_gry",
            "gm_30Rnd_556x45mm_b_M855_stanag_gry",
            "gm_30Rnd_556x45mm_b_M855_stanag_gry"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Beret_gen_F",
            "gm_ge_bgs_vest_80_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "H_Beret_gen_F",
            "gm_ge_bgs_vest_80_rifleman"
		};
	};
    class 80s_tanoa_gendarme_pilot_p1: 80s_tanoa_gendarme_base
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
            "80s_tanoa_gendarmerie_vest"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_gendarmerie_pilot_helmet",
            "80s_tanoa_gendarmerie_vest"
		};
	};
    class 80s_tanoa_gendarmerie_siu_blouse_brn_p1: 80s_tanoa_gendarme_base
    {
        displayName="Agent (P1)";
        scope=2;
        scopeArsenal=2;
        uniformClass="80s_tanoa_gendarmerie_uniform_blouse_brn";
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
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_blouse_brn_co.paa",
            "",
            "",
            ""
		};
    };
    class 80s_tanoa_gendarmerie_siu_blouse_brn_mp5: 80s_tanoa_gendarmerie_siu_blouse_brn_p1
    {
        displayName="Agent (Blouse, MP5)";
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
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk"
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
    class C_Man_casual_2_F;
    class 80s_tanoa_civ_man_casual_hawaiian_blk: C_Man_casual_2_F
    {
        displayName="Agent (MP5)";
        uniformClass="80s_tanoa_gendarmerie_uniform_casual_hawaiian_blk";
        faction="80s_tanoa_gendarmerie";
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
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
			"gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk",
            "gm_30rnd_9x19mm_b_dm51_mp5a3_blk"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_hia_specops_boonie",
            "gm_ge_bgs_vest_80_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_hia_specops_boonie",
            "gm_ge_bgs_vest_80_rifleman"
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
};
class CfgGroups
{
	class West
	{
		class 80s_tanoa_gendarmerie
		{
			name="Gendarmerie (80s)";
			class gm_infantry
			{
				name="Infantry";
                class 80s_tanoa_gendarmerie_infantry_swat_team
				{
					name="SWAT Team";
					side=1;
					faction="80s_tanoa_gendarmerie";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=1;
						vehicle="80s_tanoa_gendarme_mp5_gear";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_gendarme_m16a1_gear";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_gendarme_mp5_gear";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Rifleman3: Rifleman1
					{
						vehicle="80s_tanoa_gendarme_mp5_gear";
						position[]={10,-10,0};
					};
				};
                class 80s_tanoa_gendarmerie_infantry_patrol
				{
					name="Patrol";
					side=1;
					faction="80s_tanoa_gendarmerie";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=1;
						vehicle="80s_tanoa_gendarme_p1";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_gendarme_p1";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
			};
		};
	};
};