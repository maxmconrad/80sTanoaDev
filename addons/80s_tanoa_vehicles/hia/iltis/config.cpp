class CfgPatches
{
	class 80s_tanoa_vehicles_hia_iltis
	{
		units[]=
        {
            "80s_tanoa_hia_iltis_cargo_green_nocover",
            "80s_tanoa_hia_iltis_cargo_green_covered",
            "80s_tanoa_hia_iltis_latgm"
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
			class 80s_tanoa_hia_oli: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_hia"
				};
				displayname="HIA (Plain Green)";
				textures[]=
				{
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\oli\gm_ge_army_iltis_rim_01_oli_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
        class AnimationSources{
            class cover_hoops_unhide;
            class doorBag_unhide;
            class cover_doors_unhide;
            class radio_02_unhide;
        };
	};
	class 80s_tanoa_hia_iltis_cargo_base: gm_iltis_cargo_base
	{
		side=2;
		faction="80s_tanoa_hia";
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
		crew="80s_tanoa_hia_rifleman_m16a1";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\ui\preview_gm_ge_army_iltis_cargo.jpg";
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
	class 80s_tanoa_hia_iltis_cargo_green_nocover: 80s_tanoa_hia_iltis_cargo_base
	{
        displayName="Polecat ATV (No Cover)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\oli\gm_ge_army_iltis_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
			"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
        class AnimationSources: AnimationSources
        {
            class cover_hoops_unhide: cover_hoops_unhide
            {
                initPhase=0;
            };
            class doorBag_unhide: doorBag_unhide
            {
                initPhase=1;
            };
            class cover_doors_unhide: cover_doors_unhide
            {
                initPhase=0;
            };
        };
	};
    class 80s_tanoa_hia_iltis_cargo_green_covered: 80s_tanoa_hia_iltis_cargo_base
	{
        displayName="Polecat ATV (Covered)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\oli\gm_ge_army_iltis_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
			"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
        class AnimationSources: AnimationSources
        {
            class radio_02_unhide: radio_02_unhide
            {
                initPhase=1;
            }
        };
	};
    // LATGM
    class gm_iltis_milan_base: gm_iltis_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\oli\gm_ge_army_iltis_rim_01_oli_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
	};
    class 80s_tanoa_hia_iltis_latgm_base: gm_iltis_milan_base
	{
		side=2;
		faction="80s_tanoa_hia";
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
		crew="80s_tanoa_hia_rifleman_g3a4";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\ui\preview_gm_ge_army_iltis_milan.jpg";
	};
    class 80s_tanoa_hia_iltis_latgm: 80s_tanoa_hia_iltis_latgm_base
	{
        displayName="Polecat ATV (LATGM)";
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
        class TransportWeapons
        {
            class _xx_binoculars
            {
                weapon="gm_df7x40_grn";
                count=1;
            };
        };
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\oli\gm_ge_army_iltis_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
			"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
	};
};