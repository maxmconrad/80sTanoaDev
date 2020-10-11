class CfgPatches
{
	class 80s_tanoa_vehicles_hia_mi2t
	{
		units[]=
        {
            "80s_tanoa_hia_mi2t"
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
// MI-2T                /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_mi2_base;
    class gm_mi2t_base: gm_mi2_base
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
                    "",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
				};
			};
		};
    };
    class 80s_tanoa_hia_mi2t_base: gm_mi2t_base
	{
		side=2;
		faction="80s_tanoa_hia";
		gm_InsigniasDefaultNation="80s_tanoa_insignia_hia_01";
        gm_InsigniasSelectionNation = "Insignia_nation_03";
        gm_InsigniasSelectionsNation[] = {"Insignia_nation_01","Insignia_nation_02","Insignia_nation_03"};
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
        editorPreview="gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\ui\preview_gm_gc_airforce_mi2t.jpg";
	};
    class 80s_tanoa_hia_mi2t: 80s_tanoa_hia_mi2t_base
    {
        displayName="Mi-2T";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
		};
    }
};