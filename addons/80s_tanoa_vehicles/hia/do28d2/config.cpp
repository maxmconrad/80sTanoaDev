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
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\editorpreview\80s_tanoa_hia_do28d2.jpg";
	};
    class 80s_tanoa_hia_do28d2: 80s_tanoa_hia_do28d2_base
    {
        displayName="Do-28 D2 Skyservant";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\editorpreview\80s_tanoa_hia_do28d2.jpg";
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
            class _xx_flare_pistol
            {
                weapon="gm_p2a1_blk";
                count=1;
            };
        };
        class TransportMagazines
        {
            class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
            {
                magazine="gm_1Rnd_265mm_flare_multi_red_DM23";
                count=4;
            };
            class _xx_gm_handGrenade_frag_rgd5
            {
                magazine="gm_handGrenade_frag_rgd5";
                count=2;
            };
        };
		hiddenSelectionsTextures[]=
		{
			"\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\80s_tanoa_do28d2_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\80s_tanoa_do28d2_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\hia\do28d2\data\80s_tanoa_do28d2_ext_02_co.paa"
		};
    }
};