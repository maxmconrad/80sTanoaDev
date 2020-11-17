class CfgPatches
{
	class 80s_tanoa_vehicles_hia_assaultboat
	{
		units[]=
        {
            "80s_tanoa_hia_assaultboat"
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
    class Rubber_duck_base_F;
    class 80s_tanoa_hia_assaultboat: Rubber_duck_base_F
    {
        displayName="Assault Boat";
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
                    "\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
				};
			};
		};
        hiddenSelectionsTextures[]=
		{
			"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
		};

    };
};