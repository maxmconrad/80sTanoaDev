class CfgPatches
{
	class 80s_tanoa_vehicles_rfhi_ural
	{
		units[]=
        {
            "80s_tanoa_rfhi_ural_cargo"
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
// Ural                 /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_ural4320_base;
    class gm_ural4320_cargo_base: gm_ural4320_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
					"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
    };
    class 80s_tanoa_rfhi_ural_cargo_base: gm_ural4320_cargo_base
	{
		side=0;
		faction="80s_tanoa_insurgents";
		gm_InsigniasDefaultNation="80s_tanoa_insignia_insurgents_01";
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
		crew="80s_tanoa_insurgents_rifleman_uzi";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\rfhi\ural\data\editorpreview\80s_tanoa_rfhi_ural_cargo.jpg";
	};
    class 80s_tanoa_rfhi_ural_cargo: 80s_tanoa_rfhi_ural_cargo_base
    {
        displayName="Ural (Transport)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        editorPreview="\80s_tanoa\80s_tanoa_vehicles\rfhi\ural\data\editorpreview\80s_tanoa_rfhi_ural_cargo.jpg";
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
                count=2;
            };
        };
        class TransportMagazines
        {
            class _xx_gm_handGrenade_frag_rgd5
            {
                magazine="gm_handGrenade_frag_rgd5";
                count=4;
            };
        };
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
			"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
            "\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
            "\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
            "#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
    }
};