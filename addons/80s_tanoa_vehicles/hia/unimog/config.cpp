class CfgPatches
{
	class 80s_tanoa_vehicles_hia_unimog
	{
		units[]=
        {
            "80s_tanoa_hia_unimog_cargo",
            "80s_tanoa_hia_unimog_container"
        };
		weapons[]=
        {
        };
		requiredAddons[]=
		{
			"gm_core_vehicles",
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
			class 80s_tanoa_hia_oli: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_hia"
				};
				displayname="HIA (Plain Green)";
				textures[]=
				{
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\wdl\gm_ge_army_u1300l_rim_01_wdl_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
        //class AnimationSources
        //{
        //    class camonetpoles_1_1_unhide;
        //    class camonetpoles_1_2_unhide;
        //}
	};
	class 80s_tanoa_hia_unimog_cargo_base: gm_u1300l_cargo_base
	{
		side=2;
		faction="80s_tanoa_hia";
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
		crew="80s_tanoa_hia_rifleman_m16a1";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\ui\preview_gm_ge_army_u1300l_cargo.jpg";
	};
	class 80s_tanoa_hia_unimog_cargo: 80s_tanoa_hia_unimog_cargo_base
	{
        displayName="Unimog (MG3)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\wdl\gm_ge_army_u1300l_rim_01_wdl_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
        //class AnimationSources: AnimationSources
        //{
        //    class camonetpoles_1_1_unhide: camonetpoles_1_1_unhide
        //    {
        //        initPhase=0;
        //    };
        //    class camonetpoles_1_2_unhide: camonetpoles_1_2_unhide
        //    {
        //        initPhase=0;
        //    };
        //};
	};
    // Unarmed
    class gm_u1300l_container_base;
    class gm_u1300l_container_civ_base: gm_u1300l_container_base
	{
		class TextureSources
		{
			class 80s_tanoa_hia_oli: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_hia"
				};
				displayname="HIA (Plain Green)";
				textures[]=
				{
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\wdl\gm_ge_army_u1300l_rim_01_wdl_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
	};
    class 80s_tanoa_hia_unimog_container_base: gm_u1300l_container_civ_base
	{
		side=2;
		faction="80s_tanoa_hia";
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
		crew="80s_tanoa_hia_rifleman_light_g3a4";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\ui\preview_gm_ge_army_u1300l_cargo.jpg";
	};
	class 80s_tanoa_hia_unimog_container: 80s_tanoa_hia_unimog_container_base
	{
        displayName="Unimog (Unarmed)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\wdl\gm_ge_army_u1300l_rim_01_wdl_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
	};
};
// CfgGroups
class CfgGroups
{
	class Indep
	{
		class 80s_tanoa_hia
		{
			name="Horizon Islands Army (80s)";

			class gm_motorizedinfantry
			{
				name="Motorized Infantry";
				class 80s_tanoa_hia_motorizedinfantry_squad_unimog_mg3
				{
					name="Motorized Infantry Squad (Unimog, armed)";
					side=2;
					faction="80s_tanoa_hia";
					icon="A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Vehicle1
					{
						side=2;
						vehicle="80s_tanoa_hia_unimog_cargo";
						rank="SERGEANT";
						position[]={0,0,0};
					};
                    class Leader1: Vehicle1
					{
						side=2;
						vehicle="80s_tanoa_hia_squadlead_m16a1";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class MG1: Leader1
					{
						vehicle="80s_tanoa_hia_autorifleman_mg3";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class MG2: MG1
					{
						vehicle="80s_tanoa_hia_autorifleman_assistant_g3a4";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class AT1: MG1
					{
						vehicle="80s_tanoa_hia_at_rpg7_g3a4";
						position[]={-10,-10,0};
					};
					class AT2: AT1
					{
						vehicle="80s_tanoa_hia_at_assistant_g3a4";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Rifleman1: MG1
					{
						vehicle="80s_tanoa_hia_medic_g3a4";
						rank="CORPORAL";
						position[]={-15,-15,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_hia_marksman_g3a3";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class Rifleman3: Rifleman2
					{
                        vehicle="80s_tanoa_hia_rifleman_m16a1";
                        rank="PRIVATE";
						position[]={-20,-20,0};
					};
				};
                class 80s_tanoa_hia_motorizedinfantry_recon_team_unimog_mg3
				{
					name="Motorized Recon Team (Unimog, armed)";
					side=2;
					faction="80s_tanoa_hia";
					icon="A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Vehicle1
					{
						side=2;
						vehicle="80s_tanoa_hia_unimog_cargo";
						rank="SERGEANT";
						position[]={0,0,0};
					};
                    class Leader1: Vehicle1
					{
						side=2;
						vehicle="80s_tanoa_hia_squadlead_m16a1";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Marksman1: Leader1
					{
						vehicle="80s_tanoa_hia_marksman_g3a3";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Rifleman1: Leader1
					{
						vehicle="80s_tanoa_hia_rifleman_light_g3a4";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Rifleman2: Rifleman1
					{
						vehicle="80s_tanoa_hia_rifleman_light_m16a1";
						position[]={-10,-10,0};
					};
				};
			};
		};
	};
};