class CfgPatches
{
	class 80s_tanoa_vehicles_hia_rhib
	{
		units[]=
        {
            "80s_tanoa_hia_rhib"
        };
		weapons[]=
        {
        };
		requiredAddons[]=
		{
		};
	};
};

/////////////////////////
// Assault Boat         /
/////////////////////////
class CfgVehicles
{
    class Boat_Transport_02_base_F;
    class 80s_tanoa_hia_rhib: Boat_Transport_02_base_F
    {
        displayName="RHIB (Marines)";
		scope=2;
		scopeCurator=2;
        scopeArsenal=2;
		author="quarren";
        side=2;
		faction="80s_tanoa_hia";
        crew="80s_tanoa_hia_mcorps_rifleman_m16a1";
        class TextureSources
		{
			class 80s_tanoa_hia_oli
			{
				factions[]=
				{
					"80s_tanoa_hia"
				};
				displayname="Marines (Black)";
				textures[]=
				{
                    "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa",
                    "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"
				};
			};
		};
        hiddenSelectionsTextures[]=
		{
			"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa",
            "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"
		};

    };
};