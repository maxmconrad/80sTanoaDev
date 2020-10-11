class CfgPatches
{
	class 80s_tanoa_vehicles_hia_do28d2
	{
		units[]=
        {
            "80s_tanoa_hia_do28d2"
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
// Do-28 D2             /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_plane_base;
    class gm_do28d2_base: gm_plane_base
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
                    "\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\80s_tanoa_do28d2_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\80s_tanoa_do28d2_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\80s_tanoa_do28d2_ext_02_co.paa"
				};
			};
		};
    };
    class 80s_tanoa_hia_do28d2_base: gm_do28d2_base
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
        editorPreview="gm\gm_vehicles\gm_air\gm_planes\gm_do28d\gm_ge_airforce_do28d\data\ui\preview_gm_ge_airforce_do28d2.jpg";
	};
    class 80s_tanoa_hia_do28d2: 80s_tanoa_hia_do28d2_base
    {
        displayName="Do-28 D2 Skyservant";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\80s_tanoa_do28d2_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\80s_tanoa_do28d2_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\80s_tanoa_do28d2_ext_02_co.paa"
		};
    }
};