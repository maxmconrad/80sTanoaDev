class CfgPatches
{
	class 80s_tanoa_vehicles_tucanoil_iltis
	{
		units[]=
        {
            "80s_tanoa_tucanoil_iltis_cargo"
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
// Polecat ATV (Iltis)  /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_iltis_base;
    // Unarmed
	class gm_iltis_cargo_base: gm_iltis_base
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
					"\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\80s_tanoa_tucanoil_iltis_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\80s_tanoa_tucanoil_iltis_ext_02_co.paa"
				};
			};
		};
        class AnimationSources{
            class cover_doors_unhide;
        };
	};
	class 80s_tanoa_tucanoil_iltis_cargo_base: gm_iltis_cargo_base
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
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\editorpreview\80s_tanoa_tucanoil_iltis_cargo.jpg"; 
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
	class 80s_tanoa_tucanoil_iltis_cargo: 80s_tanoa_tucanoil_iltis_cargo_base
	{
        displayName="Polecat ATV";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\editorpreview\80s_tanoa_tucanoil_iltis_cargo.jpg";
		hiddenSelectionsTextures[]=
		{
			"#(rgb,8,8,3)color(0.25,0.25,0.25,1,CO)",
			"\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\80s_tanoa_tucanoil_iltis_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\80s_tanoa_tucanoil_iltis_ext_02_co.paa"
		};
        class AnimationSources: AnimationSources
        {
            class cover_doors_unhide: cover_doors_unhide
            {
                initPhase=0;
            };
        };
	};
    // Tucan Oil (Civilian)
    class 80s_tanoa_tucanoil_civ_iltis_cargo: 80s_tanoa_tucanoil_iltis_cargo
    {
        faction="80s_tanoa_fc_tucanoil_civ";
        displayName="Polecat ATV";
		side=3;
        scope=2;
        scopeArsenal=2;
        crew="80s_tanoa_tucanoil_civ_worker_base";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\tucanoil\iltis\data\editorpreview\80s_tanoa_tucanoil_iltis_cargo.jpg";
    };
};