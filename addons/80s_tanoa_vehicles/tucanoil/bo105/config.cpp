class CfgPatches
{
	class 80s_tanoa_vehicles_tucanoil_bo105
	{
		units[]=
        {
            "80s_tanoa_tucanoil_bo105",
            "80s_tanoa_tucanoil_civ_bo105"
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
// BO-105               /
/////////////////////////
class gm_texturesource_base;
class CfgVehicles
{
    class gm_bo105m_base;
    class gm_bo105m_vbh_base: gm_bo105m_base
    {
        class TextureSources
		{
			class 80s_tanoa_tucanoil_ylw: gm_texturesource_base
			{
				factions[]=
				{
					"80s_tanoa_fc_tucanoil"
				};
				displayname="Tucan Oil (Yellow)";
				textures[]=
				{
                    "",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\bo105\data\80s_tanoa_tucanoil_bo105_ext_01_co.paa",
                    "\80s_tanoa\80s_tanoa_vehicles\tucanoil\bo105\data\80s_tanoa_tucanoil_bo105_ext_01_co.paa"
				};
			};
		};
    };
    class 80s_tanoa_tucanoil_bo105_base: gm_bo105m_vbh_base
	{
		side=2;
		faction="80s_tanoa_fc_tucanoil";
		gm_InsigniasDefaultNation="gm_insignia_none";
		gm_TacticalSignsDefaultIcon="gm_insignia_none";
		gm_TacticalNumbersFontNumbers="";
		gm_TacticalNumbersDefaultNumber="";
		gm_LicensePlateDefaultDigits="";
        gm_LicensePlateDefaultDigits="";
		crew="80s_tanoa_tucanoil_pilot_p1";
        editorPreview="gm\gm_vehicles\gm_air\gm_helicopters\gm_bo105\gm_ge_army_bo105\data\ui\preview_gm_ge_army_bo105m_vbh.jpg";
	};
    class 80s_tanoa_tucanoil_bo105: 80s_tanoa_tucanoil_bo105_base
    {
        displayName="Bo-105";
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
			"",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\bo105\data\80s_tanoa_tucanoil_bo105_ext_01_co.paa",
            "\80s_tanoa\80s_tanoa_vehicles\tucanoil\bo105\data\80s_tanoa_tucanoil_bo105_ext_01_co.paa"
		};
    };
    // Tucan Oil (Civilian)
    class 80s_tanoa_tucanoil_civ_bo105: 80s_tanoa_tucanoil_bo105
    {
        faction="80s_tanoa_fc_tucanoil_civ";
        displayName="Bo-105";
		side=3;
        scope=2;
        scopeArsenal=2;
        crew="80s_tanoa_tucanoil_civ_pilot";
    };
};