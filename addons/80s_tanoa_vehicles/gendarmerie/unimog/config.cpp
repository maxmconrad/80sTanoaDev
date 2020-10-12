class CfgPatches
{
	class 80s_tanoa_vehicles_gendarmerie_unimog
	{
		units[]=
        {
            "80s_tanoa_gendarmerie_unimog_container"
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
// Unimog               /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    // Unarmed
    class gm_u1300l_container_base;
    class gm_u1300l_container_civ_base: gm_u1300l_container_base
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
					"#(rgb,8,8,3)color(0.75,0.75,0.75,1,CO)",
                    "\80s_tanoa\80s_tanoa_vehicles\gendarmerie\unimog\data\80s_tanoa_gendarmerie_unimog_ext01.paa",
                    "#(rgb,8,8,3)color(0.0,0.0,0.0,1,CO)",
                    "#(rgb,8,8,3)color(0.0,0.0,0.0,1,CO)"
					//"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
	};
    class 80s_tanoa_gendarmerie_unimog_container_base: gm_u1300l_container_civ_base
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
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\ui\preview_gm_ge_army_u1300l_cargo.jpg";
	};
	class 80s_tanoa_gendarmerie_unimog_container: 80s_tanoa_gendarmerie_unimog_container_base
	{
        displayName="Unimog";
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
			"#(rgb,8,8,3)color(0.75,0.75,0.75,1,CO)",
            "\80s_tanoa\80s_tanoa_vehicles\gendarmerie\unimog\data\80s_tanoa_gendarmerie_unimog_ext01.paa",
            "#(rgb,8,8,3)color(0.0,0.0,0.0,1,CO)",
            "#(rgb,8,8,3)color(0.0,0.0,0.0,1,CO)"
            //"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
	};
};