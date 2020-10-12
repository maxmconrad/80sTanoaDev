class CfgPatches
{
	class 80s_tanoa_vehicles_hia_motorbike
	{
		units[]=
        {
            "80s_tanoa_hia_motorbike"
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
// Motorbike (K125)     /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_k125_base;
    class gm_k125_bw_base: gm_k125_base
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
					//"\gm\gm_vehicles\gm_land\gm_wheeled\gm_k125\gm_ge_army_k125\data\oli\gm_ge_army_k125_wheels_01_oli_co.paa",
                    //"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.75,0.75,0.75,1,CO)",
                    "\80s_tanoa\80s_tanoa_vehicles\hia\k125\data\80s_tanoa_hia_k125_ext_01_co.paa"
				};
			};
		};
    };
    class 80s_tanoa_hia_motorbike_base: gm_k125_bw_base
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
		crew="80s_tanoa_hia_motorcycle_scout_m16a1";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_k125\gm_ge_army_k125\data\ui\preview_gm_ge_army_k125.jpg";
	};
    class 80s_tanoa_hia_motorbike: 80s_tanoa_hia_motorbike_base
    {
        displayName="Motorbike";
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
			//"\gm\gm_vehicles\gm_land\gm_wheeled\gm_k125\gm_ge_army_k125\data\oli\gm_ge_army_k125_wheels_01_oli_co.paa",
            //"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            //"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)"
            "#(rgb,8,8,3)color(0.75,0.75,0.75,1,CO)",
            "\80s_tanoa\80s_tanoa_vehicles\hia\k125\data\80s_tanoa_hia_k125_ext_01_co.paa"
		};
    }
};