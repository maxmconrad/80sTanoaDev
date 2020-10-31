class CfgPatches
{
	class 80s_tanoa_vehicles_tucanoil_motorboat
	{
		units[]=
        {
            "80s_tanoa_tucanoil_motorboat",
            "80s_tanoa_tucanoil_civ_motorboat"
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
// Motorboat  /
/////////////////////////
class CfgVehicles
{
    class Ship_F;
    // Unarmed
	class Boat_Civil_01_base_F: Ship_F
	{
        class TextureSources
		{
			class 80s_tanoa_tucanoil_ylw
			{
				factions[]=
				{
					"80s_tanoa_fc_tucanoil"
				};
				displayname="Tucan Oil (Yellow)";
				textures[]=
				{
					"\80s_tanoa\80s_tanoa_vehicles\tucanoil\motorboat\data\80s_tanoa_tucanoil_boat_civil_01_ext_co.paa",
                    "\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"
				};
			};
		};
	};
	class 80s_tanoa_tucanoil_motorboat_base: Boat_Civil_01_base_F
	{
		side=2;
		faction="80s_tanoa_fc_tucanoil";
		crew="80s_tanoa_tucanoil_operator_akm";
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_Boat_Civil_01_F.jpg";
        animationList[] = {"hidePolice",1,"HideRescueSigns",1,"HidePoliceSigns",1};
        textureList[]={"80s_tanoa_tucanoil_ylw",1};
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
	};
	class 80s_tanoa_tucanoil_motorboat: 80s_tanoa_tucanoil_motorboat_base
	{
        displayName="Motorboat";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
		hiddenSelectionsTextures[]=
		{
			"\80s_tanoa\80s_tanoa_vehicles\tucanoil\motorboat\data\80s_tanoa_tucanoil_boat_civil_01_ext_co.paa",
            "\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"
		};
	};
    // Tucan Oil (Civilian)
    class 80s_tanoa_tucanoil_civ_motorboat: 80s_tanoa_tucanoil_motorboat
    {
        faction="80s_tanoa_fc_tucanoil_civ";
        displayName="Motorboat";
		side=3;
        scope=2;
        scopeArsenal=2;
        crew="80s_tanoa_tucanoil_civ_worker_base";
    };
};