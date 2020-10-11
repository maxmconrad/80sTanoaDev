class CfgPatches
{
	class 80s_tanoa_vehicles_hia_ural
	{
		units[]=
        {
            "80s_tanoa_hia_ural_cargo",
            "80s_tanoa_hia_ural_ammo",
            "80s_tanoa_hia_ural_fuel",
            "80s_tanoa_hia_ural_medical",
            "80s_tanoa_hia_ural_repair"
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
    class gm_ural375d_base;
    // Cargo
    class gm_ural4320_cargo_base: gm_ural4320_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
    };
    class 80s_tanoa_hia_ural_cargo_base: gm_ural4320_cargo_base
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
		crew="80s_tanoa_hia_rifleman_m16a1";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_army_ural4320\data\ui\preview_gm_gc_army_ural4320_cargo.jpg";
	};
    class 80s_tanoa_hia_ural_cargo: 80s_tanoa_hia_ural_cargo_base
    {
        displayName="Ural (Transport)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
    };
    // Ammo
    class gm_ural4320_reammo_base: gm_ural4320_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
    };
    class 80s_tanoa_hia_ural_ammo_base: gm_ural4320_reammo_base
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
		crew="80s_tanoa_hia_rifleman_m16a1";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_army_ural4320\data\ui\preview_gm_gc_army_ural4320_cargo.jpg";
	};
    class 80s_tanoa_hia_ural_ammo: 80s_tanoa_hia_ural_ammo_base
    {
        displayName="Ural (Ammo)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
    };
    // Fuel
    class gm_ural375d_refuel_base: gm_ural375d_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
    };
    class 80s_tanoa_hia_ural_fuel_base: gm_ural375d_refuel_base
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
		crew="80s_tanoa_hia_rifleman_m16a1";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_ural375d\gm_gc_army_ural375d\data\ui\preview_gm_gc_army_ural375d_refuel.jpg";
	};
    class 80s_tanoa_hia_ural_fuel: 80s_tanoa_hia_ural_fuel_base
    {
        displayName="Ural (Fuel)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
    };
    // Medical
    class gm_ural375d_medic_base: gm_ural375d_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
    };
    class 80s_tanoa_hia_ural_medical_base: gm_ural375d_medic_base
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
		crew="80s_tanoa_hia_rifleman_m16a1";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_ural375d\gm_gc_army_ural375d\data\ui\preview_gm_gc_army_ural375d_medic.jpg";
	};
    class 80s_tanoa_hia_ural_medical: 80s_tanoa_hia_ural_medical_base
    {
        displayName="Ural (Medical)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
    };
    // Repair
    class gm_ural4320_repair_base: gm_ural4320_base
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
					"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
					"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
                    "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
					"#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
				};
			};
		};
    };
    class 80s_tanoa_hia_ural_repair_base: gm_ural4320_repair_base
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
		crew="80s_tanoa_hia_rifleman_m16a1";
        editorPreview="gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_army_ural4320\data\ui\preview_gm_gc_army_ural4320_repair.jpg";
	};
    class 80s_tanoa_hia_ural_repair: 80s_tanoa_hia_ural_repair_base
    {
        displayName="Ural (Repair)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_ural4320\gm_gc_bgs_ural4320\data\oli\gm_gc_bgs_ural4320_rim_01_oli_co.paa",
			"#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.199,0.230,0.171,1,CO)",
            "#(rgb,8,8,3)color(0.15,0.15,0.1,1,CO)"
		};
    };
};