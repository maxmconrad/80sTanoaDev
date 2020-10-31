class CfgPatches
{
	class 80s_tanoa_vehicles_tucanoil_unimog
	{
		units[]=
        {
            "80s_tanoa_tucanoil_unimog_armed",
            "80s_tanoa_tucanoil_unimog_container"
        };
		weapons[]=
        {
        };
		requiredAddons[]=
		{
			"gm_core_vehicles"
		};
	};
};

/////////////////////////
// Unimog               /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_u1300l_base;
    // MG3
	class gm_u1300l_cargo_base: gm_u1300l_base
	{
		class TextureSources
		{
			class 80s_tanoa_tucanoil_ylw: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_fc_tucanoil"
				};
				displayname="Tucan Oil (Yellow)";
				textures[]=
				{
					"#(rgb,8,8,3)color(0.25,0.25,0.25,1,CO)",
					"\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_02_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_02_co.paa",
					"\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\80s_tanoa_tucanoil_iltis_ext_02_co.paa"
				};
			};
		};
	};
	class 80s_tanoa_tucanoil_unimog_armed_base: gm_u1300l_cargo_base
	{
		side=2;
		faction="80s_tanoa_fc_tucanoil";
		gm_InsigniasDefaultNation="gm_insignia_none";
		gm_LicensePlate="80s_tanoa_licenseplate";
		gm_LicensePlateSelectionsDigits[]=
		{
			"LicensePlate_01",
			"LicensePlate_02",
			"LicensePlate_03",
			"LicensePlate_04",
			"LicensePlate_05",
			"LicensePlate_06",
			"LicensePlate_07",
			"LicensePlate_08"
		};
		gm_TacticalSignsDefaultIcon="";
		gm_TacticalNumbersFontNumbers="";
		gm_TacticalNumbersDefaultNumber="##";
		gm_LicensePlateDefaultDigits="########";
		crew="80s_tanoa_tucanoil_worker_base";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\ui\preview_gm_ge_army_u1300l_cargo.jpg";
	};
	class 80s_tanoa_tucanoil_unimog_armed: 80s_tanoa_tucanoil_unimog_armed_base
	{
        displayName="Unimog (MG3)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        class TransportItems
        {
            class _xx_burnBandage
            {
                name="gm_ge_army_burnBandage";
                count=2;
            };
            class _xx_gauzeBandage
            {
                name="gm_ge_army_gauzeBandage";
                count=2;
            };
            class _xx_gm_repairkit_01
            {
                name="gm_repairkit_01";
                count=1;
            };
        };
        class TransportWeapons
        {
            class _xx_binoculars
            {
                weapon="gm_df7x40_grn";
                count=1;
            };
        };
        class TransportMagazines
        {
            class _xx_gm_20Rnd_762x51mm_b_DM41_g3_blk
            {
                magazine="gm_20Rnd_762x51mm_b_DM41_g3_blk";
                count=2;
            };
            class _xx_gm_30rnd_762x39mm_b_m43_ak47_blk
            {
                magazine="gm_30rnd_762x39mm_b_m43_ak47_blk";
                count=2;
            };
            class _xx_gm_30rnd_9x19mm_b_dm11_mp5_blk
            {
                magazine="gm_30rnd_9x19mm_b_dm11_mp5_blk";
                count=4;
            };
            class _xx_gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn
            {
                magazine="gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn";
                count=2;
            };
        };
		hiddenSelectionsTextures[]=
		{
			"#(rgb,8,8,3)color(0.25,0.25,0.25,1,CO)",
			"\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_02_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_02_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\80s_tanoa_tucanoil_iltis_ext_02_co.paa"
		};
	};
    // Unarmed
    class gm_u1300l_container_base;
    class gm_u1300l_container_civ_base: gm_u1300l_container_base
	{
		class TextureSources
		{
			class 80s_tanoa_tucanoil_ylw: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_fc_tucanoil"
				};
				displayname="Tucan Oil (Yellow)";
				textures[]=
				{
					"#(rgb,8,8,3)color(0.25,0.25,0.25,1,CO)",
					"\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_02_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_02_co.paa",
					"\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\80s_tanoa_tucanoil_iltis_ext_02_co.paa"
				};
			};
		};
	};
    class 80s_tanoa_tucanoil_unimog_container_base: gm_u1300l_container_civ_base
	{
		side=2;
		faction="80s_tanoa_fc_tucanoil";
		gm_InsigniasDefaultNation="gm_insignia_none";
		gm_LicensePlate="80s_tanoa_licenseplate";
		gm_LicensePlateSelectionsDigits[]=
		{
			"LicensePlate_01",
			"LicensePlate_02",
			"LicensePlate_03",
			"LicensePlate_04",
			"LicensePlate_05",
			"LicensePlate_06",
			"LicensePlate_07",
			"LicensePlate_08"
		};
		gm_TacticalSignsDefaultIcon="";
		gm_TacticalNumbersFontNumbers="";
		gm_TacticalNumbersDefaultNumber="##";
		gm_LicensePlateDefaultDigits="########";
		crew="80s_tanoa_tucanoil_worker_base";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\ui\preview_gm_ge_army_u1300l_cargo.jpg";
	};
	class 80s_tanoa_tucanoil_unimog_container: 80s_tanoa_tucanoil_unimog_container_base
	{
        displayName="Unimog (Unarmed)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        class TransportItems
        {
            class _xx_burnBandage
            {
                name="gm_ge_army_burnBandage";
                count=2;
            };
            class _xx_gauzeBandage
            {
                name="gm_ge_army_gauzeBandage";
                count=2;
            };
            class _xx_gm_repairkit_01
            {
                name="gm_repairkit_01";
                count=1;
            };
        };
        class TransportWeapons
        {
            class _xx_binoculars
            {
                weapon="gm_df7x40_grn";
                count=1;
            };
        };
        class TransportMagazines
        {
            class _xx_gm_20Rnd_762x51mm_b_DM41_g3_blk
            {
                magazine="gm_20Rnd_762x51mm_b_DM41_g3_blk";
                count=2;
            };
            class _xx_gm_30rnd_762x39mm_b_m43_ak47_blk
            {
                magazine="gm_30rnd_762x39mm_b_m43_ak47_blk";
                count=2;
            };
            class _xx_gm_30rnd_9x19mm_b_dm11_mp5_blk
            {
                magazine="gm_30rnd_9x19mm_b_dm11_mp5_blk";
                count=4;
            };
        };
		hiddenSelectionsTextures[]=
		{
			"#(rgb,8,8,3)color(0.25,0.25,0.25,1,CO)",
			"\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_02_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\unimog\data\80s_tanoa_tucanoil_unigmog_ext_02_co.paa",
			"\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\80s_tanoa_tucanoil_iltis_ext_02_co.paa"
		};
	};
    // Tucan Oil (Civilian)
    class 80s_tanoa_tucanoil_civ_unimog_container: 80s_tanoa_tucanoil_unimog_container
    {
        faction="80s_tanoa_fc_tucanoil_civ";
        displayName="Unimog";
		side=3;
        scope=2;
        scopeArsenal=2;
        crew="80s_tanoa_tucanoil_civ_worker_base";
        class TransportItems
        {
            class _xx_burnBandage
            {
                name="gm_ge_army_burnBandage";
                count=2;
            };
            class _xx_gauzeBandage
            {
                name="gm_ge_army_gauzeBandage";
                count=2;
            };
            class _xx_gm_repairkit_01
            {
                name="gm_repairkit_01";
                count=1;
            };
        };
        class TransportWeapons
        {
            class _xx_binoculars
            {
                weapon="gm_df7x40_grn";
                count=1;
            };
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
			class gm_motorizedinfantry
			{
				name="Motorized Infantry";
                class 80s_tanoa_hia_motorized_response_team_unimog_mg3
				{
					name="Motorized Response Team (Unimog, armed)";
					side=2;
					faction="80s_tanoa_fc_tucanoil";
					icon="A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Vehicle1
					{
						side=2;
						vehicle="80s_tanoa_tucanoil_unimog_armed";
						rank="SERGEANT";
						position[]={0,0,0};
					};
                    class Leader1: Vehicle1
					{
						side=2;
						vehicle="80s_tanoa_tucanoil_officer_mp5";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Marksman1: Leader1
					{
						vehicle="80s_tanoa_tucanoil_operator_g3a4";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_tucanoil_operator_mp5";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_tucanoil_operator_akm";
						position[]={-10,-10,0};
					};
				};
			};
		};
	};
};