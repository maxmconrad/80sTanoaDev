class CfgPatches
{
	class 80s_tanoa_vehicles_hia_btr60
	{
		units[]=
        {
            "80s_tanoa_hia_btr60pa",
            "80s_tanoa_hia_btr60pb"
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
// BTR-60  /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_btr60_base;
    // BTR-60PA
	class gm_btr60pa_base: gm_btr60_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_btr60\gm_gc_army_btr60\data\oli\gm_gc_army_btr60_rim_01_oli_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)"
				};
			};
		};
	};
	class 80s_tanoa_hia_btr60pa_base: gm_btr60pa_base
	{
		side=2;
		faction="80s_tanoa_hia";
		gm_InsigniasDefaultNation="80s_tanoa_insignia_hia_01";
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
		crew="80s_tanoa_hia_crew_mp5";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_btr60\gm_gc_army_btr60\data\ui\preview_gm_gc_army_btr60pa.jpg";
	};
	class 80s_tanoa_hia_btr60pa: 80s_tanoa_hia_btr60pa_base
	{
        displayName="BTR-60PA";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_btr60\gm_gc_army_btr60\data\oli\gm_gc_army_btr60_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)"
		};
	};
    // BTR-60PB
    class gm_btr60pb_base: gm_btr60_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_btr60\gm_gc_army_btr60\data\oli\gm_gc_army_btr60_rim_01_oli_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)"
				};
			};
		};
	};
    class 80s_tanoa_hia_btr60pb_base: gm_btr60pb_base
	{
		side=2;
		faction="80s_tanoa_hia";
		gm_InsigniasDefaultNation="80s_tanoa_insignia_hia_01";
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
		crew="80s_tanoa_hia_crew_mp5";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_btr60\gm_gc_army_btr60\data\ui\preview_gm_gc_army_btr60pa.jpg";
	};
	class 80s_tanoa_hia_btr60pb: 80s_tanoa_hia_btr60pb_base
	{
        displayName="BTR-60PB";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_btr60\gm_gc_army_btr60\data\oli\gm_gc_army_btr60_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)"
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
				class 80s_tanoa_hia_motorizedinfantry_squad_btr60pa
				{
					name="Motorized Infantry Squad (BTR-60PA)";
					side=2;
					faction="80s_tanoa_hia";
					icon="A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Vehicle1
					{
						side=2;
						vehicle="80s_tanoa_hia_btr60pa";
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
                class 80s_tanoa_hia_motorizedinfantry_squad_btr60pb
				{
					name="Motorized Infantry Squad (BTR-60PB)";
					side=2;
					faction="80s_tanoa_hia";
					icon="A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Vehicle1
					{
						side=2;
						vehicle="80s_tanoa_hia_btr60pb";
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
                class 80s_tanoa_hia_motorizedinfantry_recon_team_btr60pa
				{
					name="Motorized Recon Team (BTR-60PA)";
					side=2;
					faction="80s_tanoa_hia";
					icon="A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Vehicle1
					{
						side=2;
						vehicle=80s_tanoa_hia_btr60pa;
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