class CfgPatches
{
	class 80s_tanoa_vehicles_tucanoil_ural
	{
		units[]=
        {
            "80s_tanoa_tucanoil_ural_refuel",
            "80s_tanoa_tucanoil_civ_ural_refuel"
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
// Ural (Fuel)          /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_ural375d_base;
	class gm_ural375d_refuel_base: gm_ural375d_base
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
					"\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa",
					"\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_03_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa"
				};
			};
		};
	};
	class 80s_tanoa_tucanoil_ural_refuel_base: gm_ural375d_refuel_base
	{
		side=2;
		faction="80s_tanoa_fc_tucanoil";
		gm_InsigniasDefaultNation="80s_tanoa_insignia_tucanoil_01";
		gm_LicensePlate="80s_tanoa_licenseplate";
		gm_LicensePlateSelectionsDigits[]=
		{
			//"LicensePlate_01",
			//"LicensePlate_02",
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
		gm_LicensePlateDefaultDigits="######";
		crew="80s_tanoa_tucanoil_worker_blouse_base";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\editorpreview\80s_tanoa_tucanoil_ural_refuel.jpg";
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
	class 80s_tanoa_tucanoil_ural_refuel: 80s_tanoa_tucanoil_ural_refuel_base
	{
        displayName="Ural (Fuel)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\editorpreview\80s_tanoa_tucanoil_ural_refuel.jpg";
		hiddenSelectionsTextures[]=
		{
			"\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa",
			"\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_03_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\80s_tanoa_tucanoil_ural_refuel_ext_01_co.paa"
		};
	};
    // Tucan Oil (Civilian)
    class 80s_tanoa_tucanoil_civ_ural_refuel: 80s_tanoa_tucanoil_ural_refuel
    {
        faction="80s_tanoa_fc_tucanoil_civ";
        displayName="Ural (Fuel)";
		side=3;
        scope=2;
        scopeArsenal=2;
        crew="80s_tanoa_tucanoil_civ_worker_base";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\tucanoil\ural\data\editorpreview\80s_tanoa_tucanoil_ural_refuel.jpg";
    };
};