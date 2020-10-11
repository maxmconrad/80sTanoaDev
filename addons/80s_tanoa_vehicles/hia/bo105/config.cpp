class CfgPatches
{
	class 80s_tanoa_vehicles_hia_bo105
	{
		units[]=
        {
            "80s_tanoa_hia_bo105"
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
			class 80s_tanoa_hia_oli: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_hia"
				};
				displayname="HIA (Heli Camo)";
				textures[]=
				{
                    "",
                    "\gm\gm_vehicles\gm_air\gm_helicopters\gm_bo105\gm_ge_army_bo105\data\n84\gm_ge_army_bo105_ext_01_n84_co.paa",
                    "\gm\gm_vehicles\gm_air\gm_helicopters\gm_bo105\gm_ge_army_bo105\data\n84\gm_ge_army_bo105_ext_02_n84_co.paa"
				};
			};
		};
    };
    class 80s_tanoa_hia_bo105_base: gm_bo105m_vbh_base
	{
		side=2;
		faction="80s_tanoa_hia";
		gm_InsigniasDefaultNation="80s_tanoa_insignia_hia_01";
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
		crew="80s_tanoa_hia_pilot_p1";
        editorPreview="gm\gm_vehicles\gm_air\gm_helicopters\gm_bo105\gm_ge_army_bo105\data\ui\preview_gm_ge_army_bo105m_vbh.jpg";
	};
    class 80s_tanoa_hia_bo105: 80s_tanoa_hia_bo105_base
    {
        displayName="Bo-105";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"",
            "\gm\gm_vehicles\gm_air\gm_helicopters\gm_bo105\gm_ge_army_bo105\data\n84\gm_ge_army_bo105_ext_01_n84_co.paa",
            "\gm\gm_vehicles\gm_air\gm_helicopters\gm_bo105\gm_ge_army_bo105\data\n84\gm_ge_army_bo105_ext_02_n84_co.paa"
		};
    }
};