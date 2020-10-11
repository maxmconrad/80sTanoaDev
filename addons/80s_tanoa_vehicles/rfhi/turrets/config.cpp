class CfgPatches
{
	class 80s_tanoa_vehicles_rfhi_turrets
	{
		units[]=
        {
            "80s_tanoa_rfhi_turret_m2hmg_low",
            "80s_tanoa_rfhi_turret_m2hmg_high"
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
// M2 HMG .50           /
/////////////////////////
class CfgVehicles
{
    class I_C_HMG_02_F;
    class I_C_HMG_02_high_F;
    class 80s_tanoa_rfhi_turret_m2hmg_low: I_C_HMG_02_F
    {
        side=0;
        scope=2;
		scopeCurator=2;
        scopeArsenal=2;
        faction="80s_tanoa_insurgents";
        author="quarren";
        crew = "80s_tanoa_insurgents_rifleman_aks74u";
    };
    class 80s_tanoa_rfhi_turret_m2hmg_high: I_C_HMG_02_high_F
    {
        side=0;
        scope=2;
		scopeCurator=2;
        scopeArsenal=2;
        faction="80s_tanoa_insurgents";
        author="quarren";
        crew = "80s_tanoa_insurgents_rifleman_aks74u";
    };
};