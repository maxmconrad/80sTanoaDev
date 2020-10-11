class CfgPatches
{
	class 80s_tanoa_vehicles_hia_m113a
	{
		units[]=
        {
            "80s_tanoa_hia_m113a1"
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
// M113A1               /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_m113a1g_base;
	class gm_m113a1g_apc_base: gm_m113a1g_base
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
					"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)"
				};
			};
		};
	};
	class 80s_tanoa_hia_m113a1_base: gm_m113a1g_apc_base
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
        editorPreview="gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ui\preview_gm_ge_army_m113a1g_apc.jpg";
	};
	class 80s_tanoa_hia_m113a1: 80s_tanoa_hia_m113a1_base
	{
        displayName="M113A1";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa",
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
				class 80s_tanoa_hia_motorizedinfantry_squad_m113a1
				{
					name="Motorized Infantry Squad (M113A1)";
					side=2;
					faction="80s_tanoa_hia";
					icon="A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Vehicle1
					{
						side=2;
						vehicle=80s_tanoa_hia_m113a1;
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
			};
		};
	};
};