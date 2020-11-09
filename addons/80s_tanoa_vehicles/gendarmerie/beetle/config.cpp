class CfgPatches
{
	class 80s_tanoa_vehicles_gendarmerie_beetle
	{
		units[]=
        {
            "80s_tanoa_gendarmerie_beetle"
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
    class gm_wheeled_car_base;
    class gm_typ1_base: gm_wheeled_car_base
    {
        class AnimationSources
        {
            class sirenLights_01_unhide;
        };   
    };
    class gm_typ1200_base: gm_typ1_base
	{
		class TextureSources
		{
			class 80s_tanoa_gendarmerie_blk: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_gendarmerie"
				};
				displayname="Gendarmerie (Black)";
				textures[]=
				{
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_typ1\gm_ge_civ_typ1\data\col\gm_ge_civ_typ1_int_01_saphireblue_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\gendarmerie\beetle\data\80s_tanoa_gendarmerie_beetle_ext01.paa",
                    "\gm\gm_vehicles\gm_land\gm_wheeled\gm_typ1\gm_ge_civ_typ1\data\col\gm_ge_civ_typ1_int_01_saphireblue_co.paa"
				};
			};
		};
	};
    class 80s_tanoa_gendarmerie_beetle_base: gm_typ1200_base
	{
		side=1;
		faction="80s_tanoa_gendarmerie";
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
		crew="80s_tanoa_gendarme_p1";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\gendarmerie\beetle\data\editorpreview\80s_tanoa_gendarmerie_beetle.jpg";  
	};
	class 80s_tanoa_gendarmerie_beetle: 80s_tanoa_gendarmerie_beetle_base
	{
        displayName="Beetle";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\gendarmerie\beetle\data\editorpreview\80s_tanoa_gendarmerie_beetle.jpg";
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
            "\80s_tanoa\80s_tanoa_vehicles\gendarmerie\beetle\data\80s_tanoa_gendarmerie_beetle_ext01.paa",
            "\gm\gm_vehicles\gm_land\gm_wheeled\gm_typ1\gm_ge_civ_typ1\data\col\gm_ge_civ_typ1_int_01_saphireblue_co.paa"
		};
        class AnimationSources: AnimationSources
        {
            class sirenLights_01_unhide: sirenLights_01_unhide
            {
                initPhase=1;
            };
        };
	};
};