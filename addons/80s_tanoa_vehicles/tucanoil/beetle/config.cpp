class CfgPatches
{
	class 80s_tanoa_vehicles_tucanoil_beetle
	{
		units[]=
        {
            "80s_tanoa_tucanoil_beetle",
            "80s_tanoa_tucanoil_civ_beetle"
        };
		weapons[]=
        {
        };
		requiredAddons[]=
		{
			"gm_core_vehicles",
            "gm_vehicles_land_wheeled_typ1"
		};
	};
};

/////////////////////////
// Beetle               /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_typ1_base;
    class gm_typ1200_base: gm_typ1_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_typ1\gm_ge_civ_typ1\data\col\gm_ge_civ_typ1_int_01_saphireblue_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\beetle\data\80s_tanoa_tucanoil_beetle_ext01_co.paa",
                    "\gm\gm_vehicles\gm_land\gm_wheeled\gm_typ1\gm_ge_civ_typ1\data\col\gm_ge_civ_typ1_int_01_saphireblue_co.paa"
				};
			};
		};
	};
    class 80s_tanoa_tucanoil_beetle_base: gm_typ1200_base
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
        editorPreview="";   
	};
	class 80s_tanoa_tucanoil_beetle: 80s_tanoa_tucanoil_beetle_base
	{
        displayName="Beetle";
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
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_typ1\gm_ge_civ_typ1\data\col\gm_ge_civ_typ1_int_01_saphireblue_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\beetle\data\80s_tanoa_tucanoil_beetle_ext01_co.paa",
            "\gm\gm_vehicles\gm_land\gm_wheeled\gm_typ1\gm_ge_civ_typ1\data\col\gm_ge_civ_typ1_int_01_saphireblue_co.paa"
		};
	};
    // Tucan Oil (Civilian)
    class 80s_tanoa_tucanoil_civ_beetle: 80s_tanoa_tucanoil_beetle
    {
        faction="80s_tanoa_fc_tucanoil_civ";
        displayName="Beetle";
		side=3;
        scope=2;
        scopeArsenal=2;
        crew="80s_tanoa_tucanoil_civ_worker_base";
    };
};
