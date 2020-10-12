class CfgPatches
{
	class 80s_tanoa_vehicles_rfhi_motorbike
	{
		units[]=
        {
            "80s_tanoa_rfhi_motorbike"
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
			class 80s_tanoa_rfhi_tigerstripe: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_insurgents"
				};
				displayname="RFHI";
				textures[]=
				{
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_k125\gm_ge_army_k125\data\oli\gm_ge_army_k125_wheels_01_oli_co.paa",
					"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
				};
			};
		};
    };
    class 80s_tanoa_rfhi_motorbike_base: gm_k125_bw_base
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
		crew="80s_tanoa_insurgents_rifleman_akm";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_k125\gm_ge_army_k125\data\ui\preview_gm_ge_army_k125.jpg";
	};
    class 80s_tanoa_rfhi_motorbike: 80s_tanoa_rfhi_motorbike_base
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
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_k125\gm_ge_army_k125\data\oli\gm_ge_army_k125_wheels_01_oli_co.paa",
			"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
		};
    }
};