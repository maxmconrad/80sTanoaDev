class CfgPatches
{
	class 80s_tanoa_vehicles_gendarmerie_bo105
	{
		units[]=
        {
            "80s_tanoa_gendarmerie_bo105"
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
// BO-105               /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_bo105m_base;
    class gm_bo105m_vbh_base: gm_bo105m_base
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
                    "",
                    "\80s_tanoa\80s_tanoa_vehicles\gendarmerie\bo105\data\80s_tanoa_bo105_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\gendarmerie\bo105\data\80s_tanoa_bo105_ext_01_co.paa"
				};
			};
		};
    };
    class 80s_tanoa_gendarmerie_bo105_base: gm_bo105m_vbh_base
	{
		side=1;
		faction="80s_tanoa_gendarmerie";
		gm_InsigniasDefaultNation="80s_tanoa_insignia_hi_civ_01";
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
		crew="80s_tanoa_gendarme_pilot_p1";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\gendarmerie\bo105\data\editorpreview\80s_tanoa_gendarmerie_bo105.jpg";
	};
    class 80s_tanoa_gendarmerie_bo105: 80s_tanoa_gendarmerie_bo105_base
    {
        displayName="Bo-105";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\gendarmerie\bo105\data\editorpreview\80s_tanoa_gendarmerie_bo105.jpg";
        class TransportItems
        {
            class _xx_burnBandage
            {
                name="gm_ge_army_burnBandage";
                count=4;
            };
            class _xx_gauzeBandage
            {
                name="gm_ge_army_gauzeBandage";
                count=4;
            };
            class _xx_gm_repairkit_01
            {
                name="gm_repairkit_01";
                count=2;
            };
        };
		hiddenSelectionsTextures[]=
		{
			"",
            "\80s_tanoa\80s_tanoa_vehicles\gendarmerie\bo105\data\80s_tanoa_bo105_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\gendarmerie\bo105\data\80s_tanoa_bo105_ext_01_co.paa"
		};
    }
};