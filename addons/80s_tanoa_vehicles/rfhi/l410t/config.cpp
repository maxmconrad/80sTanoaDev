class CfgPatches
{
	class 80s_tanoa_vehicles_rfhi_l410t
	{
		units[]=
        {
            "80s_tanoa_rfhi_l410t"
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
// L410T                /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_l410_base;
    class gm_l410t_base: gm_l410_base
    {
        class TextureSources
		{
			class 80s_tanoa_rfhi_grey: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_insurgents"
				};
				displayname="RFHI Grey";
				textures[]=
				{
					"\gm\gm_vehicles\gm_air\gm_planes\gm_l410\gm_gc_airforce_l410\data\wdl\gm_gc_airforce_l410_ext_01_wdl_co.paa",
					"#(rgb,8,8,3)color(0.35,0.35,0.38,1,CO)",
                    "#(rgb,8,8,3)color(0.35,0.35,0.38,1,CO)",
                    "#(rgb,8,8,3)color(0.35,0.35,0.38,1,CO)"
				};
			};
		};
    };
    class 80s_tanoa_rfhi_l410t_base: gm_l410t_base
	{
		side=0;
		faction="80s_tanoa_insurgents";
		gm_InsigniasDefaultNation="gm_insignia_none";
        gm_InsigniasDefaultRecon="80s_tanoa_insignia_insurgents_marking_01";
		gm_TacticalSignsDefaultIcon="";
		gm_TacticalNumbersFontNumbers="";
		gm_TacticalNumbersDefaultNumber="##";
		crew="80s_tanoa_insurgents_rifleman_uzi";
        editorPreview="gm\gm_vehicles\gm_air\gm_planes\gm_l410\gm_gc_airforce_l410\data\ui\preview_gm_gc_airforce_l410t.jpg";
	};
    class 80s_tanoa_rfhi_l410t: 80s_tanoa_rfhi_l410t_base
    {
        displayName="L410T (Trafficking Plane)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
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
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_air\gm_planes\gm_l410\gm_gc_airforce_l410\data\wdl\gm_gc_airforce_l410_ext_01_wdl_co.paa",
			"#(rgb,8,8,3)color(0.35,0.35,0.38,1,CO)",
            "#(rgb,8,8,3)color(0.35,0.35,0.38,1,CO)",
            "#(rgb,8,8,3)color(0.35,0.35,0.38,1,CO)"
		};
    }
};