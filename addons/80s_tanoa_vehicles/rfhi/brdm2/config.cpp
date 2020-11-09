class CfgPatches
{
	class 80s_tanoa_vehicles_rfhi_brdm2
	{
		units[]=
        {
            "80s_tanoa_rfhi_brdm2"
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
// BRDM-2                /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_brdm2_base
    {
        class TextureSources
		{
			class 80s_tanoa_rfhi_tigerstripe: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_insurgents"
				};
				displayname="RFHI";
				textures[]=
				{
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_brdm2\gm_gc_army_brdm2\data\oli\gm_gc_army_brdm2_rim_01_oli_co.paa",
					"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa"
				};
			};
		};
    };
    class 80s_tanoa_rfhi_brdm2_base: gm_brdm2_base
	{
		side=0;
		faction="80s_tanoa_insurgents";
		gm_InsigniasDefaultNation="80s_tanoa_insignia_insurgents_01";
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
		crew="80s_tanoa_insurgents_rifleman_uzi";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\rfhi\brdm2\data\editorpreview\80s_tanoa_rfhi_brdm2.jpg";
	};
    class 80s_tanoa_rfhi_brdm2: 80s_tanoa_rfhi_brdm2_base
    {
        displayName="BRDM-2";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\rfhi\brdm2\data\editorpreview\80s_tanoa_rfhi_brdm2.jpg";
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
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_brdm2\gm_gc_army_brdm2\data\oli\gm_gc_army_brdm2_rim_01_oli_co.paa",
			"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
            "\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa"
		};
    }
};