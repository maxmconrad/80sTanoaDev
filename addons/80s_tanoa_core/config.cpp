class CfgPatches
{
	class 80s_tanoa_core
	{
		units[]={};
		weapons[]={};    
		requiredAddons[]=
		{
			"gm_core_vehicles",
		};
	};
};

/////////////////////////
// Factions             /
/////////////////////////
class CfgFactionClasses
{
	access=1;
	class 80s_tanoa_hia
	{
		displayName="Horizon Islands Army (80s)";
		priority=4;
		side=2;
        flag="\80s_tanoa\data\80s_tanoa_hi_flag_co.paa";
	};
    class 80s_tanoa_insurgents
	{
		displayName="Revolutionary Forces of the Horizon Islands (80s)";
		priority=4;
		side=0;
	};
    class 80s_tanoa_gendarmerie
    {
        displayName="Gendarmerie (80s)";
        priority=4;
        side=1;
    };
};

/////////////////////////
// Insignias, etc.      /
/////////////////////////
class gm_VehicleInsignias_base;
class gm_VehicleInsignias_Nations: gm_VehicleInsignias_base
{
	class 80s_tanoa_insignia_hia_01
	{
		name="Horizon Islands (Military)";
		author="quarren";
		texture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_hi_national_insignia_round.paa";
		value="80s_tanoa_insignia_hia_01";
		picture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_hi_national_insignia_icon.paa";
	};
    class 80s_tanoa_insignia_hi_civ_01
	{
		name="Horizon Islands (Civil)";
		author="quarren";
		texture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_hi_national_insignia_civ.paa";
		value="80s_tanoa_insignia_hi_civ_01";
		picture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_hi_flag_co.paa";
	};
    class 80s_tanoa_insignia_insurgents_01
    {
        name="RFHI";
        author="quarren";
        texture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_rfhi_national_insignia.paa";
        value="80s_tanoa_insignia_insurgents_01";
        picture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_rfhi_national_insignia.paa";
    }
};

class gm_VehicleInsignias_Recon : gm_VehicleInsignias_base 
{
    class 80s_tanoa_insignia_insurgents_marking_01
    {
        name="RFHI";
        author="quarren";
        texture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_rfhi_marking_01.paa";
        value="80s_tanoa_insignia_insurgents_marking_01";
        picture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_rfhi_marking_01.paa";
    };
    class 80s_tanoa_insignia_hia_marking_01
    {
        name="HIA";
        author="quarren";
        texture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_hi_flag_co.paa";
        value="80s_tanoa_insignia_hia_marking_01";
        picture="\80s_tanoa\80s_tanoa_core\data\80s_tanoa_hi_flag_co.paa";
    };
};

class gm_licenseplates
{
	class 80s_tanoa_licenseplate
	{
		name="Horizon Islands Licenseplate";
		Texture="80s_tanoa\80s_tanoa_core\data\80s_tanoa_licenseplate_wth_ca.paa";
		FontDigits="gm_din_norm_blk";
		DefaultDigits="########";
		value="80s_tanoa_licenseplate";
	};
};