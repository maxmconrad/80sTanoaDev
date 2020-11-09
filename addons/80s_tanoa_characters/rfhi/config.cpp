class CfgPatches
{
	class 80s_tanoa_characters_rfhi
	{
		units[]=
        {
            "80s_tanoa_insurgents_rifleman_akm",
            "80s_tanoa_insurgents_rifleman_uzi",
            "80s_tanoa_insurgents_rifleman_g3a3",
            "80s_tanoa_insurgents_rifleman_aks74u",
            "80s_tanoa_insurgents_sharpshooter_svd",
            "80s_tanoa_insurgents_machinegunner_pkm",
            "80s_tanoa_insurgents_at_rpg7_aks74u",
            "80s_tanoa_insurgents_at_assistant_akm",
            "80s_tanoa_insurgents_medic_akm",
            "80s_tanoa_insurgents_ammobearer_akm",
            "80s_tanoa_insurgents_saboteur_plnp_akm",
            "80s_tanoa_insurgents_elite_base",
            "80s_tanoa_insurgents_elite_rifleman_ak74s",
            "80s_tanoa_insurgents_elite_at_ak74s",
            "80s_tanoa_insurgents_elite_demolition_pm63",
            "80s_tanoa_insurgents_elite_shocktrooper_pm63",
            "80s_tanoa_insurgents_elite_marksman_aks74",
            "80s_tanoa_insurgents_elite_sharpshooter_svd",
            "80s_tanoa_insurgents_elite_squadleader_aks74u",
            "80s_tanoa_insurgents_elite_squadleader_pm63"
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

// EventHandlers for headgear randomization
class EventHandlers;

/////////////////////////
// Uniforms/Weapons     /
/////////////////////////
class CfgWeapons
{
    class Uniform_Base;
    class U_I_C_Soldier_Bandit_1_F: Uniform_Base
    {
        class ItemInfo;
    }
    class 80s_tanoa_insurgents_uniform01: U_I_C_Soldier_Bandit_1_F
    {
        displayName="Insurgent Outfit (Polo)";
        scope=2;
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_insurgents_type01";
        };
    };
    class U_I_C_Soldier_Para_3_F: Uniform_Base
    {
        class ItemInfo;
    };
    class 80s_tanoa_insurgents_uniform02: U_I_C_Soldier_Para_3_F
    {
        displayName="Insurgent Outfit (Pants & Shirt)";
        scope=2;
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_insurgents_type02";
        };
    };
    class U_I_C_Soldier_Para_5_F: Uniform_Base
    {
        class ItemInfo;
    };
    class 80s_tanoa_insurgents_uniform03: U_I_C_Soldier_Para_5_F
    {
        displayName="Insurgent Outfit (Shorts & Jacket)";
        scope=2;
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_insurgents_type03";
        };
    };
    class U_I_C_Soldier_Para_2_F: Uniform_Base
    {
        class ItemInfo;
    };
    class 80s_tanoa_insurgents_uniform04: U_I_C_Soldier_Para_2_F
    {
        displayName="Insurgent Outfit (Pants & Jacket)";
        scope=2;
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_insurgents_type04";
        };
    };
    // RFHI Elite
    class gm_gc_uniform_soldier_80_base;
    class gm_gc_army_uniform_soldier_80_str: gm_gc_uniform_soldier_80_base
    {
        class ItemInfo;
    };
    class 80s_tanoa_insurgents_elite_uniform: gm_gc_army_uniform_soldier_80_str
    {
        displayName="RFHI Elite Uniform";
        scope=2;
        scopeArsenal=2;
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_insurgents_elite_base";
        };
    };
    // Miner's Union
    class gm_xx_civ_uniform_man_01_base;
    class gm_gc_civ_uniform_man_01_80_base: gm_xx_civ_uniform_man_01_base
    {
        class ItemInfo;
    };
	class 80s_tanoa_insurgents_uniform_miner: gm_gc_civ_uniform_man_01_80_base
	{
		scope=2;
        scopeArsenal=2;
		displayName="Miner Clothes (Tanoa, 80s)";
        picture="\gm\gm_characters\gm_xx_characters\data\ui\picture_gm_gc_civ_uniform_man_01_80_blu_ca";
        class ItemInfo: ItemInfo
        {
            uniformClass="80s_tanoa_rfhi_miner_base";
            containerClass="Supply80";
        };
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_co.paa",
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_miner_co.paa"
		};
	};
    // Headgear
    class gm_ge_headgear_beret_blk;
    class 80s_tanoa_rfhi_headgear_beret_blk: gm_ge_headgear_beret_blk
    {
        displayName="Beret (RFHI)";
        scope=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.0666667,0.0666667,0.0666667,1.0,co)",
            "\80s_tanoa\80s_tanoa_core\data\80s_tanoa_rfhi_marking_01.paa"
		};
    };
    class gm_gc_headgear_beret_blk;
    class 80s_tanoa_rfhi_elite_headgear_beret_blk: gm_gc_headgear_beret_blk
    {
        displayName="Beret (RFHI Elite)";
        scope=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.12,0.12,0.12,1.0,CO)",
            ""
		};
        hiddenSelectionsMaterials[]=
        {
            "\gm\gm_characters\gm_gc_characters\data\headgear\gm_gc_headgear_beret",
            ""
        };
    };
    class gm_gc_army_headgear_hat_80_grn;
    class 80s_tanoa_rfhi_headgear_sidecap: gm_gc_army_headgear_hat_80_grn
    {
        displayName="Side Cap (RFHI Elite)";
        scope=2;
        scopeArsenal=2;
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\rfhi\data\80s_tanoa_rfhi_headgear_sidecap.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            ""
        };
    };
    class HeadgearItem;
    class H_Watchcap_blk;
    class 80s_tanoa_rfhi_headgear_beanie_blk: H_Watchcap_blk
	{
		displayName="Beanie (Black, no headset)";
        scope=2;
        scopeArsenal=2;
		model="\A3\Characters_F\Common\woolhat";
		class ItemInfo: HeadgearItem
		{
			mass=2;
			uniformModel="\A3\Characters_F\Common\woolhat";
		};
	};
    class gm_ge_headgear_hat_80_gry;
    class 80s_tanoa_rfhi_headgear_miner_blu: gm_ge_headgear_hat_80_gry
    {
        scope=2;
        scopeArsenal=2;
		displayName="Miner Cap (80s)";
        picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_headgear_hat_80_gry_ca";
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\rfhi\data\80s_tanoa_rfhi_miner_hat_co.paa"
		};
    };
    // Weapons
    class gm_mpiaks74n_brn;
    class 80s_tanoa_aks74n_zfk: gm_mpiaks74n_brn
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot="CowsSlot";
                item="gm_zfk4x25_blk";
            };
        };
    };
    class gm_mpiaks74nk_brn;
    class 80s_tanoa_aks74u_bayonet: gm_mpiaks74nk_brn
    {
        scope=1;
        scopeArsenal=1;
        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "gm_bayonet_6x3_blk";
            };
        };
    };
    class gm_pm63_blk;
    class 80s_tanoa_pm63_suppressor: gm_pm63_blk
    {
        scope=1;
        scopeArsenal=1;
        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "gm_suppressor_safloryt_blk";
            };
        };
    };
};

/////////////////////////
// Units                /
/////////////////////////
class CfgVehicles
{
    //////////////////////////
    // Backpacks            //
    //////////////////////////
    class gm_ge_backpack_satchel_80_blk;
    class 80s_tanoa_backpack_satchel_insurgents_san: gm_ge_backpack_satchel_80_blk
    {
        scope=1;
        scopeArsenal=1;
        class TransportItems
        {
            class _xx_medikit
            {
                name = "gm_ge_army_medkit_80";
                count = 1;
            }
            class _xx_burnBandage
            {
                name = "gm_ge_army_burnBandage";
                count = 2;
            }
            class _xx_gauzeBandage
            {
                name = "gm_ge_army_gauzeBandage";
                count = 2;
            }
        };
    };
    class gm_pl_army_backpack_80_oli;
    class 80s_tanoa_backpack_insurgent_at: gm_pl_army_backpack_80_oli
    {
        scope=1;
        scopeArsenal=1;
        class TransportItems
        {
            class _xx_rpg7rockets
            {
                name = "gm_1rnd_40mm_heat_pg7v_rpg7";
                count = 3;
            };
        };
    };
    class 80s_tanoa_backpack_insurgent_saboteur: gm_pl_army_backpack_80_oli
    {
        scope=1;
        scopeArsenal=1;
        class TransportItems
        {
            class _xx_plnpcharge
            {
                name = "gm_explosive_plnp_charge";
                count = 3;
            };
        };
    };
    class gm_dk_army_backpack_73_oli;
    class 80s_tanoa_backpack_insurgent_ammo: gm_dk_army_backpack_73_oli
    {
        scope=1;
        scopeArsenal=1;
        class TransportItems
        {
            class _xx_pkmammo
            {
                name = "gm_100rnd_762x54mm_b_t_t46_pk_grn";
                count = 4;
            };
            class _xx_akmammo
            {
                name = "gm_30rnd_762x39mm_b_m43_ak47_blk";
                count = 6;
            };
        };
    };
    class 80s_tanoa_backpack_insurgents_elite_demolition: gm_ge_backpack_satchel_80_blk
    {
        scope=1;
        scopeArsenal=1;
        class TransportItems
        {
            class _xx_plnpcharge
            {
                name = "gm_explosive_plnp_charge";
                count = 3;
            };
        };
    };
    //////////////////////////
    // Infantry             //
    //////////////////////////
    class I_C_Soldier_Bandit_1_F;
    class I_C_Soldier_Para_3_F;
    class I_C_Soldier_Para_5_F;
    class I_C_Soldier_Para_2_F;
    class 80s_tanoa_insurgents_type01: I_C_Soldier_Bandit_1_F
    {
        faction="80s_tanoa_insurgents";
        displayName="Insurgent (Type 1)";
		serviceBranch="";
		rankInsignias="army_yel";
        faceType="Man_A3";
		side=0;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=1;
		scopeCurator=0;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        backpack="";
        icon="iconMan";
        picture="";
        role="Rifleman";
        headgearList[] = {"",1,"gm_gc_army_headgear_m56_net",2,"gm_gc_army_headgear_m56",2,"H_Beret_blk",1,"H_FakeHeadgear_Syndikat_F",1,"H_Bandanna_gry",1,"H_Bandanna_cbr",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_camo",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1};
        uniformClass="80s_tanoa_insurgents_uniform01";
        textSingular="$STR_A3_nameSound_veh_infantry_s";
		textPlural="$STR_A3_nameSound_veh_infantry_p";
		nameSound="veh_infantry_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_s"
				};
				speechPlural[]=
				{
					"veh_infantry_p"
				};
			};
		};
		armbands[]=
		{
			""
		};
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
        magazines[]=
		{
		};
		respawnMagazines[]=
		{
		};
		Items[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		RespawnItems[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_pl_army_vest_80_rifleman_gry"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_pl_army_vest_80_rifleman_gry"
		};
		identityTypes[]=
		{
			"LanguageFRE_F",
			"Head_Tanoan",
		};
    };
    class 80s_tanoa_insurgents_type02: I_C_Soldier_Para_3_F
    {
        faction="80s_tanoa_insurgents";
        displayName="Insurgent (Type 2)";
		serviceBranch="";
		rankInsignias="army_yel";
        faceType="Man_A3";
		side=0;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=1;
		scopeCurator=0;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        backpack="";
        icon="iconMan";
        picture="";
        role="Rifleman";
        headgearList[] = {"",1,"gm_gc_army_headgear_m56_net",2,"gm_gc_army_headgear_m56",2,"H_Beret_blk",1,"H_FakeHeadgear_Syndikat_F",1,"H_Bandanna_gry",1,"H_Bandanna_cbr",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_camo",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1};
        uniformClass="80s_tanoa_insurgents_uniform02";
        textSingular="$STR_A3_nameSound_veh_infantry_s";
		textPlural="$STR_A3_nameSound_veh_infantry_p";
		nameSound="veh_infantry_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_s"
				};
				speechPlural[]=
				{
					"veh_infantry_p"
				};
			};
		};
		armbands[]=
		{
			""
		};
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
        magazines[]=
		{
		};
		respawnMagazines[]=
		{
		};
		Items[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		RespawnItems[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_dk_army_vest_54_rifleman"
		};
		identityTypes[]=
		{
			"LanguageFRE_F",
			"Head_Tanoan",
		};
    };
    class 80s_tanoa_insurgents_type03: I_C_Soldier_Para_5_F
    {
        faction="80s_tanoa_insurgents";
        displayName="Insurgent (Type 3)";
		serviceBranch="";
		rankInsignias="army_yel";
        faceType="Man_A3";
		side=0;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=1;
		scopeCurator=0;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        backpack="";
        icon="iconMan";
        picture="";
        role="Rifleman";
        headgearList[] = {"",1,"gm_gc_army_headgear_m56_net",2,"gm_gc_army_headgear_m56",2,"H_Beret_blk",1,"H_FakeHeadgear_Syndikat_F",1,"H_Bandanna_gry",1,"H_Bandanna_cbr",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_camo",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1};
        uniformClass="80s_tanoa_insurgents_uniform03";
        textSingular="$STR_A3_nameSound_veh_infantry_s";
		textPlural="$STR_A3_nameSound_veh_infantry_p";
		nameSound="veh_infantry_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_s"
				};
				speechPlural[]=
				{
					"veh_infantry_p"
				};
			};
		};
		armbands[]=
		{
			""
		};
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
        magazines[]=
		{
		};
		respawnMagazines[]=
		{
		};
		Items[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		RespawnItems[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_dk_army_vest_54_crew"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_dk_army_vest_54_crew"
		};
		identityTypes[]=
		{
			"LanguageFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\rfhi\data\80s_tanoa_rfhi_farmer_uniform01.paa",
            "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_5_F_2_co.paa"
		};
    };
    class gm_gc_civ_man_01_80_base;
    class 80s_tanoa_insurgents_type04: gm_gc_civ_man_01_80_base
    {
        faction="80s_tanoa_insurgents";
        displayName="Insurgent (Type 4)";
		serviceBranch="";
		rankInsignias="army_yel";
        faceType="Man_A3";
		side=0;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_80";
        scope=1;
		scopeCurator=0;
		isgmContent=1;
		dlc="gm";
        author="quarren";
        backpack="";
        icon="iconMan";
        picture="";
        role="Rifleman";
        headgearList[] = {"",1,"gm_gc_army_headgear_m56_net",2,"gm_gc_army_headgear_m56",2,"H_Beret_blk",1,"H_Bandanna_gry",1,"H_Bandanna_cbr",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_camo",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1};
        uniformClass="80s_tanoa_civ_uniform_hunter";
        textSingular="$STR_A3_nameSound_veh_infantry_s";
		textPlural="$STR_A3_nameSound_veh_infantry_p";
		nameSound="veh_infantry_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_s"
				};
				speechPlural[]=
				{
					"veh_infantry_p"
				};
			};
		};
		armbands[]=
		{
			""
		};
		weapons[]=
		{
		};
		respawnWeapons[]=
		{
		};
        magazines[]=
		{
		};
		respawnMagazines[]=
		{
		};
		Items[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		RespawnItems[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_dk_army_vest_54_rifleman"
		};
		identityTypes[]=
		{
			"LanguageFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_hunter_co.paa",
            "\80s_tanoa\80s_tanoa_characters\civ\data\80s_tanoa_civ_outfit_hunter_co.paa"
		};
        class EventHandlers: EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };
    class 80s_tanoa_insurgents_rifleman_akm: 80s_tanoa_insurgents_type04
    {
        displayName="Insurgent (AKM)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_rifleman_akm.jpg";
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
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5"
		};
    };
    class 80s_tanoa_insurgents_rifleman_uzi: 80s_tanoa_insurgents_type03
    {
        displayName="Insurgent (Uzi)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_rifleman_uzi.jpg";
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_mp2a1_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_mp2a1_blk"
		};
		magazines[]=
		{
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
    };
    class 80s_tanoa_insurgents_rifleman_g3a3: 80s_tanoa_insurgents_type02
    {
        displayName="Insurgent (G3A3)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_rifleman_g3a3.jpg";
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_g3a3_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_g3a3_blk"
		};
		magazines[]=
		{
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_20rnd_762x51mm_b_dm41_g3_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
    };
    class 80s_tanoa_insurgents_rifleman_aks74u: 80s_tanoa_insurgents_type01
    {
        displayName="Insurgent (AKS-74U)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_rifleman_aks74u.jpg";
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74nk_brn"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74nk_brn"
		};
		magazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
    };
    class 80s_tanoa_insurgents_sharpshooter_svd: 80s_tanoa_insurgents_type03
    {
        displayName="Insurgent Sharpshooter (SVD)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_sharpshooter_svd.jpg";
        role="Marksman";
        headgearList[] = {};
        textSingular="$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural="$STR_A3_nameSound_veh_infantry_sniper_p";
        nameSound="veh_infantry_sniper_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_sniper_s"
				};
				speechPlural[]=
				{
					"veh_infantry_sniper_p"
				};
			};
		};
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_svd_wud_pso1"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_svd_wud_pso1"
		};
		magazines[]=
		{
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
            "gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
            "gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_ge_headgear_hat_boonie_oli",
            "G_Spectacles_tinted",
            "gm_pl_army_vest_80_rifleman_gry"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_ge_headgear_hat_boonie_oli",
            "G_Spectacles_tinted",
            "gm_pl_army_vest_80_rifleman_gry"
		};
    };
    class 80s_tanoa_insurgents_machinegunner_pkm: 80s_tanoa_insurgents_type02
    {
        displayName="Insurgent Machinegunner (PKM)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_machinegunner_pkm.jpg";
        icon="iconManMG";
		role="MachineGunner";
        backpack="80s_tanoa_backpack_insurgent_ammo";
        textSingular="$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural="$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound="veh_infantry_MG_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_MG_s"
				};
				speechPlural[]=
				{
					"veh_infantry_MG_p"
				};
			};
		};
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_hmgpkm_prp"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_hmgpkm_prp"
		};
		magazines[]=
		{
			"gm_100rnd_762x54mm_b_t_t46_pk_grn",
			"gm_100rnd_762x54mm_b_t_t46_pk_grn",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_100rnd_762x54mm_b_t_t46_pk_grn",
			"gm_100rnd_762x54mm_b_t_t46_pk_grn",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
    };
    class 80s_tanoa_insurgents_at_rpg7_aks74u: 80s_tanoa_insurgents_type01
    {
        displayName="Insurgent AT (RPG-7 & AKS-74U)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_at_rpg7_aks74u.jpg";
        icon="iconManAT";
		role="MissileSpecialist";
        backpack="80s_tanoa_backpack_insurgent_at";
        textSingular="$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural="$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound="veh_infantry_AT_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74nk_brn",
            "gm_rpg7_wud"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74nk_brn",
            "gm_rpg7_wud"
		};
		magazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
            "gm_30rnd_545x39mm_b_7n6_ak74_org",
            "gm_30rnd_545x39mm_b_7n6_ak74_org",
            "gm_30rnd_545x39mm_b_7n6_ak74_org",
            "gm_1rnd_40mm_heat_pg7v_rpg7"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
			"gm_30rnd_545x39mm_b_7n6_ak74_org",
            "gm_30rnd_545x39mm_b_7n6_ak74_org",
            "gm_30rnd_545x39mm_b_7n6_ak74_org",
            "gm_30rnd_545x39mm_b_7n6_ak74_org",
            "gm_1rnd_40mm_heat_pg7v_rpg7"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_pl_army_vest_80_at_gry"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_pl_army_vest_80_at_gry"
		};
    };
    class 80s_tanoa_insurgents_at_assistant_akm: 80s_tanoa_insurgents_type03
    {
        displayName="Insurgent AT Assistant (AKM)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_at_assistant_akm.jpg";
        backpack="80s_tanoa_backpack_insurgent_at";
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
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_pl_army_vest_80_rifleman_gry"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_pl_army_vest_80_rifleman_gry"
		};
    };
    class 80s_tanoa_insurgents_medic_akm: 80s_tanoa_insurgents_type04
    {
        displayName="Insurgent Medic (AKM)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_medic_akm.jpg";
        icon="iconManMedic";
		role="CombatLifeSaver";
        picture="pictureHeal";
        backpack="80s_tanoa_backpack_satchel_insurgents_san";
        textSingular="$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural="$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound="veh_infantry_medic_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_medic_s"
				};
				speechPlural[]=
				{
					"veh_infantry_medic_p"
				};
			};
		};
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
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5"
		};
    };
    class 80s_tanoa_insurgents_ammobearer_akm: 80s_tanoa_insurgents_type01
    {
        displayName="Insurgent Ammo Bearer (AKM)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_ammobearer_akm.jpg";
        role="Rifleman";
        backpack="80s_tanoa_backpack_insurgent_ammo";
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
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "V_Pocketed_olive_F"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "V_Pocketed_olive_F"
		};
    };
    class 80s_tanoa_insurgents_saboteur_plnp_akm: 80s_tanoa_insurgents_type02
    {
        displayName="Insurgent Saboteur (PLNP Charge)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_saboteur_plnp_akm.jpg";
        Icon="iconManExplosive";
		role="Sapper";
		picture="pictureExplosive";
		cost=115000;
		canDeactivateMines=1;
        backpack="80s_tanoa_backpack_insurgent_saboteur";
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
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_pl_army_vest_80_rifleman_gry"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_pl_army_vest_80_rifleman_gry"
		};
    };
    // RFHI Elite
    class gm_gc_army_rifleman_80_str_base;
    class 80s_tanoa_insurgents_elite_base: gm_gc_army_rifleman_80_str_base
    {
        faction="80s_tanoa_insurgents";
        displayName="Elite (Unarmed)";
		serviceBranch="";
		rankInsignias="";
        gm_rankPatchTexture="";
        faceType="Man_A3";
		side=0;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="gm_esc_men_special_80";
        scope=2;
        scopeArsenal=2;
		scopeCurator=0;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_elite_base.jpg";
		isgmContent=1;
		dlc="gm";
        author="quarren";
        backpack="";
        icon="iconMan";
        picture="";
        role="Rifleman";
        uniformClass="80s_tanoa_insurgents_elite_uniform";
		armbands[]=
		{
			""
		};
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
        magazines[]=
		{
		};
		respawnMagazines[]=
		{
		};
		Items[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		RespawnItems[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "gm_dk_army_vest_54_rifleman"
		};
		identityTypes[]=
		{
			"LanguageFRE_F",
			"Head_Tanoan",
		};
        hiddenSelectionsTextures[]=
		{
            "\80s_tanoa\80s_tanoa_characters\rfhi\data\80s_tanoa_rfhi_paramilitary_uniform.paa",
		};
    };
    class 80s_tanoa_insurgents_elite_rifleman_ak74s: 80s_tanoa_insurgents_elite_base
    {
        displayName="Elite Rifleman (AKS-74)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_elite_rifleman_ak74s.jpg";
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74n_brn"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74n_brn"
		};
		magazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_sidecap",
            "G_Bandanna_blk",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_sidecap",
            "G_Bandanna_blk",
            "gm_dk_army_vest_54_rifleman"
		};
    };
    class 80s_tanoa_insurgents_elite_at_ak74s: 80s_tanoa_insurgents_elite_base
    {
        displayName="Elite AT (RPG-7)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_elite_at_ak74s.jpg";
        icon="iconManAT";
		role="MissileSpecialist";
        backpack="80s_tanoa_backpack_insurgent_at";
        textSingular="$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural="$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound="veh_infantry_AT_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74n_brn",
            "gm_rpg7_wud_pgo7v"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74n_brn",
            "gm_rpg7_wud_pgo7v"
		};
		magazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
            "gm_1rnd_40mm_heat_pg7v_rpg7",
            "gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
            "gm_1rnd_40mm_heat_pg7v_rpg7",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_beanie_blk",
            "gm_pl_army_vest_80_at_gry"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_beanie_blk",
            "gm_pl_army_vest_80_at_gry"
		};
    };
    class 80s_tanoa_insurgents_elite_marksman_aks74: 80s_tanoa_insurgents_elite_base
    {
        displayName="Elite Marksman(AKS-74)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_elite_marksman_aks74.jpg";
        weapons[]=
		{
			"Throw",
			"Put",
			"80s_tanoa_aks74n_zfk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"80s_tanoa_aks74n_zfk"
		};
		magazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_sidecap",
            "G_Bandanna_blk",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_sidecap",
            "G_Bandanna_blk",
            "gm_dk_army_vest_54_rifleman"
		};
    };
    class 80s_tanoa_insurgents_elite_sharpshooter_svd: 80s_tanoa_insurgents_elite_base
    {
        displayName="Elite Sharpshooter (SVD)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_elite_sharpshooter_svd.jpg";
        role="Marksman";
        cost=250000;
        textSingular="$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural="$STR_A3_nameSound_veh_infantry_sniper_p";
        nameSound="veh_infantry_sniper_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_sniper_s"
				};
				speechPlural[]=
				{
					"veh_infantry_sniper_p"
				};
			};
		};
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_svd_wud_pso1"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_svd_wud_pso1"
		};
		magazines[]=
		{
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
            "gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
            "gm_10Rnd_762x54mmR_b_t_7t2_svd_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_sidecap",
            "G_Spectacles_tinted",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_sidecap",
            "G_Spectacles_tinted",
            "gm_dk_army_vest_54_rifleman"
		};
    };
    class 80s_tanoa_insurgents_elite_demolition_pm63: 80s_tanoa_insurgents_elite_base
    {
        displayName="Elite Demolition (PM-63)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_elite_demolition_pm63.jpg";
        Icon="iconManExplosive";
		role="Sapper";
		picture="pictureExplosive";
		cost=115000;
		canDeactivateMines=1;
        backpack="80s_tanoa_backpack_insurgents_elite_demolition";
        weapons[]=
		{
			"Throw",
			"Put",
			"80s_tanoa_pm63_suppressor"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"80s_tanoa_pm63_suppressor"
		};
		magazines[]=
		{
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_beanie_blk",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_beanie_blk",
            "gm_dk_army_vest_54_rifleman"
		};
    };
    class 80s_tanoa_insurgents_elite_shocktrooper_pm63: 80s_tanoa_insurgents_elite_base
    {
        displayName="Elite Shock Trooper (PM-63)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_elite_shocktrooper_pm63.jpg";
        weapons[]=
		{
			"Throw",
			"Put",
			"80s_tanoa_pm63_suppressor"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"80s_tanoa_pm63_suppressor"
		};
		magazines[]=
		{
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_beanie_blk",
            "G_Bandanna_blk",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "80s_tanoa_rfhi_headgear_beanie_blk",
            "G_Bandanna_blk",
            "gm_dk_army_vest_54_rifleman"
		};
    };
    class 80s_tanoa_insurgents_elite_squadleader_pm63: 80s_tanoa_insurgents_elite_base
    {
        displayName="Elite Squadleader (PM-63)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_elite_squadleader_pm63.jpg";
        icon="iconManLeader";
		role="Rifleman";
        textSingular="$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural="$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound="veh_infantry_officer_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_officer_s"
				};
				speechPlural[]=
				{
					"veh_infantry_officer_p"
				};
			};
		};
        weapons[]=
		{
			"Throw",
			"Put",
            "gm_df7x40_blk",
			"80s_tanoa_pm63_suppressor"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
            "gm_df7x40_blk",
			"80s_tanoa_pm63_suppressor"
		};
		magazines[]=
		{
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_25Rnd_9x18mm_b_pst_pm63_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Bandanna_blk",
            "gm_ge_headgear_beret_blk",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Bandanna_blk",
            "gm_ge_headgear_beret_blk",
            "gm_df7x40_blk",
            "gm_dk_army_vest_54_rifleman"
		};
    };
    class 80s_tanoa_insurgents_elite_squadleader_aks74u: 80s_tanoa_insurgents_elite_base
    {
        displayName="Elite Squadleader (AKS-74U)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_insurgents_elite_squadleader_aks74u.jpg";
        icon="iconManLeader";
		role="Rifleman";
        textSingular="$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural="$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound="veh_infantry_officer_s";
        class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_officer_s"
				};
				speechPlural[]=
				{
					"veh_infantry_officer_p"
				};
			};
		};
        weapons[]=
		{
			"Throw",
			"Put",
            "gm_df7x40_blk",
            "gm_pm_blk",
			"80s_tanoa_aks74u_bayonet"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
            "gm_df7x40_blk",
            "gm_pm_blk",
			"80s_tanoa_aks74u_bayonet"
		};
		magazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
			"gm_30rnd_545x39mm_b_7n6_ak74_prp",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
            "gm_8rnd_9x18mm_b_pst_pm_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
        linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "gm_ge_headgear_beret_blk",
            "gm_dk_army_vest_54_rifleman"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "gm_ge_headgear_beret_blk",
            "gm_df7x40_blk",
            "gm_dk_army_vest_54_rifleman"
		};
    };
    // Miners' Union
    class gm_gc_civ_man_01_80_base;
    class 80s_tanoa_rfhi_miner_base: gm_gc_civ_man_01_80_base
    {
        faction="80s_tanoa_insurgents";
        displayName="Miner";
        uniformClass="80s_tanoa_insurgents_uniform_miner";
		rankInsignias="army_wht";
        faceType="Man_A3";
		side=0;
		genericNames="TanoanMen";
		vehicleClass="Men";
		editorSubcategory="80s_tanoa_esc_miners_union";
        scope=1;
        scopeArsenal=0;
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
            "G_Bandanna_blk",
            "80s_tanoa_rfhi_headgear_miner_blu"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
            "itemMap",
            "gm_watch_kosei_80",
            "G_Bandanna_blk",
            "80s_tanoa_rfhi_headgear_miner_blu"
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
    // Units
    class 80s_tanoa_rfhi_miner_akm: 80s_tanoa_rfhi_miner_base
    {
        displayName="Miner (AKM)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_rfhi_miner_akm.jpg";
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
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_30rnd_762x39mm_b_m43_ak47_blk",
			"gm_handGrenade_frag_rgd5",
            "gm_handGrenade_frag_rgd5"
		};
    };
    class 80s_tanoa_rfhi_miner_uzi: 80s_tanoa_rfhi_miner_base
    {
        displayName="Miner (Uzi)";
        scope=2;
		scopeCurator=2;
        editorPreview="\80s_tanoa\80s_tanoa_characters\rfhi\data\editorpreview\80s_tanoa_rfhi_miner_uzi.jpg";
        weapons[]=
		{
			"Throw",
			"Put",
			"gm_mp2a1_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_mp2a1_blk"
		};
		magazines[]=
		{
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_32rnd_9x19mm_b_dm51_mp2_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
    };
};
class CfgGroups
{
	class East
	{
		class 80s_tanoa_insurgents
		{
			name="Revolutionary Forces of the Horizon Islands (80s)";
			class gm_infantry
			{
				name="Infantry";
                class 80s_tanoa_rfhi_infantry_fireteam
				{
					name="Insurgent Team";
					side=0;
					faction="80s_tanoa_insurgents";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=0;
						vehicle="80s_tanoa_insurgents_rifleman_akm";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_insurgents_rifleman_aks74u";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_machinegunner_pkm";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Rifleman3: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_rifleman_uzi";
						position[]={10,-10,0};
					};
				};
                class 80s_tanoa_rfhi_infantry_fireteam_at
				{
					name="Insurgent Team (AT)";
					side=0;
					faction="80s_tanoa_insurgents";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=0;
						vehicle="80s_tanoa_insurgents_rifleman_akm";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_insurgents_rifleman_g3a3";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_at_rpg7_aks74u";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Rifleman3: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_at_assistant_akm";
						position[]={10,-10,0};
					};
				};
                class 80s_tanoa_rfhi_infantry_fireteam_ammo
				{
					name="Insurgent Team (with Ammobearer)";
					side=0;
					faction="80s_tanoa_insurgents";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=0;
						vehicle="80s_tanoa_insurgents_rifleman_g3a3";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_insurgents_machinegunner_pkm";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_ammobearer_akm";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Rifleman3: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_rifleman_akm";
						position[]={10,-10,0};
					};
                    class Rifleman4: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_rifleman_uzi";
						position[]={-10,-10,0};
					};
				};
                class 80s_tanoa_rfhi_infantry_sniper_sentry
				{
					name="Insurgent Sharpshooter Sentry";
					side=0;
					faction="80s_tanoa_insurgents";
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Leader1
					{
						side=0;
						vehicle="80s_tanoa_insurgents_sharpshooter_svd";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_insurgents_rifleman_g3a3";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
                };
                class 80s_tanoa_rfhi_infantry_fireteam_demolitions
				{
					name="Insurgent Team (Demolition)";
					side=0;
					faction="80s_tanoa_insurgents";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=0;
						vehicle="80s_tanoa_insurgents_rifleman_akm";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_insurgents_rifleman_g3a3";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_at_rpg7_aks74u";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Rifleman3: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_saboteur_plnp_akm";
						position[]={10,-10,0};
					};
				};
                class 80s_tanoa_rfhi_elite_team_demolitions
				{
					name="Elite Team (Demolition)";
					side=0;
					faction="80s_tanoa_insurgents";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=0;
						vehicle="80s_tanoa_insurgents_elite_squadleader_aks74u";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_insurgents_elite_demolition_pm63";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_elite_rifleman_ak74s";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Rifleman3: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_elite_marksman_aks74";
						position[]={10,-10,0};
					};
				};
                class 80s_tanoa_rfhi_elite_team_at
				{
					name="Elite Team (AT)";
					side=0;
					faction="80s_tanoa_insurgents";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=0;
						vehicle="80s_tanoa_insurgents_elite_squadleader_aks74u";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_insurgents_elite_at_ak74s";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_elite_rifleman_ak74s";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Rifleman3: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_elite_marksman_aks74";
						position[]={10,-10,0};
					};
				};
                class 80s_tanoa_rfhi_elite_team_sniper
				{
					name="Elite Team (Sharpshooter)";
					side=0;
					faction="80s_tanoa_insurgents";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=0;
						vehicle="80s_tanoa_insurgents_elite_squadleader_aks74u";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_insurgents_elite_sharpshooter_svd";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_elite_rifleman_ak74s";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Rifleman3: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_elite_shocktrooper_pm63";
						position[]={10,-10,0};
					};
				};
                class 80s_tanoa_rfhi_elite_team_shock
				{
					name="Elite Team (Black Ops)";
					side=0;
					faction="80s_tanoa_insurgents";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Leader1
					{
						side=0;
						vehicle="80s_tanoa_insurgents_elite_squadleader_pm63";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_insurgents_elite_demolition_pm63";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_elite_shocktrooper_pm63";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Rifleman3: Rifleman1
					{
						vehicle="80s_tanoa_insurgents_elite_shocktrooper_pm63";
						position[]={10,-10,0};
					};
				};
			};
		};
	};
};