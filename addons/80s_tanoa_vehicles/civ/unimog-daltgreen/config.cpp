class CfgPatches
{
	class 80s_tanoa_vehicles_civ_unimog_daltgreen
	{
		units[]=
        {
            "80s_tanoa_civ_unimog_daltgreen"
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
			class 80s_tanoa_daltgreen_gry: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_fc_civ"
				};
				displayname="Daltgreen (Grey & Green)";
				textures[]=
				{
					"#(rgb,8,8,3)color(0.25,0.25,0.25,1,CO)",
					"\80s_tanoa\80s_tanoa_vehicles\civ\unimog-daltgreen\data\80s_tanoa_civ_daltgreen_unimog_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\civ\unimog-daltgreen\data\80s_tanoa_civ_daltgreen_unimog_ext_02_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\civ\unimog-daltgreen\data\80s_tanoa_civ_daltgreen_unimog_ext_02_co.paa",
					"\80s_tanoa\80s_tanoa_vehicles\civ\unimog-daltgreen\data\80s_tanoa_civ_daltgreen_unimog_ext_02_co.paa"
				};
			};
		};
	};
    class 80s_tanoa_civ_unimog_daltgreen_base: gm_u1300l_container_civ_base
	{
		side=3;
		faction="80s_tanoa_fc_civ";
		gm_InsigniasDefaultNation="80s_tanoa_insignia_daltgreen_01";
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
		crew="80s_tanoa_civ_uniform_miner_grn";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\ui\preview_gm_ge_army_u1300l_cargo.jpg";
	};
	class 80s_tanoa_civ_unimog_daltgreen: 80s_tanoa_civ_unimog_daltgreen_base
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
			"#(rgb,8,8,3)color(0.25,0.25,0.25,1,CO)",
			"\80s_tanoa\80s_tanoa_vehicles\civ\unimog-daltgreen\data\80s_tanoa_civ_daltgreen_unimog_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\civ\unimog-daltgreen\data\80s_tanoa_civ_daltgreen_unimog_ext_02_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\civ\unimog-daltgreen\data\80s_tanoa_civ_daltgreen_unimog_ext_02_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\civ\unimog-daltgreen\data\80s_tanoa_civ_daltgreen_unimog_ext_02_co.paa"
		};
	};
};