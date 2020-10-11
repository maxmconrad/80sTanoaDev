class CfgPatches
{
	class 80s_tanoa_vehicles_hia_t55a
	{
		units[]=
        {
            "80s_tanoa_hia_pt76b"
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
// PT-76B               /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_pt76_base;
	class gm_pt76b_base: gm_pt76_base
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
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)"
				};
			};
		};
	};
	class 80s_tanoa_hia_pt76b_base: gm_pt76b_base
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
		gm_LicensePlateDefaultDigits="  ######";
		crew="80s_tanoa_hia_crew_mp5";
        editorPreview="gm\gm_vehicles\gm_land\gm_tracked\gm_pt76\gm_gc_army_pt76\data\ui\preview_gm_gc_army_pt76b.jpg";
	};
	class 80s_tanoa_hia_pt76b: 80s_tanoa_hia_pt76b_base
	{
        displayName="PT-76B";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)"
		};
	};
};