class CfgPatches
{
	class 80s_tanoa_vehicles_rfhi_iltis
	{
		units[]=
        {
            "80s_tanoa_rfhi_iltis_cargo_tigerstripe_nocover",
            "80s_tanoa_rfhi_iltis_cargo_tigerstripe_covered"
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
	class gm_iltis_cargo_base: gm_iltis_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\oli\gm_ge_army_iltis_rim_01_oli_co.paa",
					"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
					"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa"
				};
			};
		};
        class AnimationSources{
            class cover_hoops_unhide;
            class cover_doors_unhide;
            class windshield;
        };
	};
	class 80s_tanoa_rfhi_iltis_cargo_base: gm_iltis_cargo_base
	{
		side=0;
		faction="80s_tanoa_insurgents";
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
        gm_InsigniasDefaultRecon = "80s_tanoa_insignia_insurgents_marking_01";
		gm_TacticalSignsDefaultIcon="";
		gm_TacticalNumbersFontNumbers="";
		gm_TacticalNumbersDefaultNumber="##";
		gm_LicensePlateDefaultDigits="########";
		crew="80s_tanoa_insurgents_rifleman_uzi";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\ui\preview_gm_ge_army_iltis_cargo.jpg";
	};
	class 80s_tanoa_rfhi_iltis_cargo_tigerstripe_nocover: 80s_tanoa_rfhi_iltis_cargo_base
	{
        displayName="Polecat ATV (No Cover)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\oli\gm_ge_army_iltis_rim_01_oli_co.paa",
			"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
			"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa"
		};
        class AnimationSources: AnimationSources
        {
            class cover_hoops_unhide: cover_hoops_unhide
            {
                initPhase=0;
            };
            class cover_doors_unhide: cover_doors_unhide
            {
                initPhase=0;
            };
            class windshield: windshield
            {
                initPhase=1;
            }
        };
	};
    class 80s_tanoa_rfhi_iltis_cargo_tigerstripe_covered: 80s_tanoa_rfhi_iltis_cargo_base
	{
        displayName="Polecat ATV (Covered)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_iltis\gm_ge_army_iltis\data\oli\gm_ge_army_iltis_rim_01_oli_co.paa",
			"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa",
			"\80s_tanoa\80s_tanoa_vehicles\rfhi\data\80s_tanoa_rfhi_tigerstripe01.paa"
		};
	};
};