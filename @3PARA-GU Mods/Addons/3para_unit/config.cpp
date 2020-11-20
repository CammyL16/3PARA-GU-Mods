/// Magazines macros definition ///

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a

class CfgPatches
{
	class unit_config
	{
	unit[] = {"B_3para_sec_R","B_3para_sec_AT","B_3para_sec_MG","B_3para_sec_MA","B_3para_sec_ftl","B_3para_coy_CO","B_3para_coy_2IC","B_3para_sig","B_3para_JTAC","B_3para_med","B_3para_plt_CO","B_3para_plt_2IC","B_3para_plt_doc","B_3para_plt_EOD","B_3para_pcoy_para","B_3para_pcoy_rec","B_3para_sec_com","B_3para_sec_gren","B_3para_sec_point","B_3para_sec_DMR","B_3para_sup_TL","B_3para_sup_MG","B_3para_sup_MGa","B_3para_sup_IDF","B_3para_sup_IDFa","B_3para_sup_AT","B_3para_sup_LRR","B_3para_sup_LRRa","B_3para_sup_run","B_3para_aac_FW","B_3para_aac_RW","B_3para_aac_DR","B_3para_aac_crew","B_3para_aac_med","B_3para_basebag","B_3para_MGbag","B_3para_MAbag","B_3para_bergen","B_3para_coyradio","B_3para_coysig","B_3para_coyJTAC","B_3para_medbag","B_3para_docbag","B_3para_EODbag","B_3para_seccom","B_3para_grenbag","B_3para_pointbag","B_3para_dmrbag","B_3para_MGbagsup","B_3para_MGbagsupa","B_3para_logibag","B_3para_sniperbag","B_3para_spotbag","B_3para_RWPbag","B_3para_RWCbag","B_3para_RWMbag"};
	weapons[] = {"3para_L85A3","3para_L105A2","3para_L85A3_UGL","3para_L22A2","3para_L129A1"};
	requiredVersion = 0.1;
	requiredAddons[] = {"A3_Characters_F"}; // will need to fully set required addons to inclued 3CB weapons
	};
};
class CfgFactionClasses 
{
	class B_3para 
	{
	displayName = "3PARA-GU"; 
	Priority = 5;
	side = 1; 
	};
};

class cfgVehicles
{
	
	class B_Soldier_base_F;
	
	class B_3para_sec_R : B_Soldier_base_F
	{
		author = "Cammy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "B_3para";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		nakedUniform = "U_BasicBody";
		displayName = "Rifleman";
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
		canDeactivateMines = false;
		engineer = false;
		attendant = 0;
		backpack = "B_3para_basebag";
		weapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};
		respawnWeapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};
	};
	
	class B_3para_sec_AT : B_Soldier_base_F	
	{
		author = "Cammy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "B_3para";
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		nakedUniform = "U_BasicBody";
		displayName = "Rifleman AT";
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
		canDeactivateMines = false;
		engineer = false;
		attendant = 0;
		backpack = "B_3para_basebag";
		weapons[] = {"3para_L85A3", "UK3CB_BAF_NLAW_Launcher", "Throw", "Put","Binocular"};
		respawnWeapons[] = {"3para_L85A3", "UK3CB_BAF_NLAW_Launcher", "Throw", "Put","Binocular"};
		Items[] = {"ACE_EarPlugs","ACRE_PRC343",,"ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343",,"ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};
	};
	
	class B_3para_sec_MG : B_Soldier_base_F
	{
		author = "Cammy";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
		nakedUniform = "U_BasicBody";
		displayName = "GPMG Gunner";
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
		canDeactivateMines = false;
		engineer = false;
		attendant = 0;
		backpack = "B_3para_MGbag";
		weapons[] = {"UK3CB_BAF_L7A2","Throw","Put","Binocular"};
		respawnWeapons[] = {"UK3CB_BAF_L7A2","Throw","Put","Binocular"};
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};
		magazines[] = {mag_2("UK3CB_BAF_762_100Rnd_T"),mag_4("SmokeShell"),mag_2("HandGrenade")};
		respawnMagazines[] = {mag_2("UK3CB_BAF_762_100Rnd_T"),mag_4("SmokeShell"),mag_2("HandGrenade")};
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};
	};

	class B_3para_sec_MA : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;					
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Medical Assistant";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;					
		attendant = 0;						
		backpack = "B_3para_MAbag";		
		weapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_6("SmokeShell"),mag_3("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_6("SmokeShell"),mag_3("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Medic_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Medic_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_sec_ftl : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Fireteam Leader";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;				
		engineer = false;						
		attendant = 0;							
		backpack = "B_3para_bergen";		
		weapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","UK3CB_BAF_Soflam_Laserdesignator"};				
		respawnWeapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","UK3CB_BAF_Soflam_Laserdesignator"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};				
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_4("HandGrenade"),"SmokeShellBlue","SmokeShellRed","Laserbatteries"};			
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_4("HandGrenade"),"SmokeShellBlue","SmokeShellRed","Laserbatteries"};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_SL_B", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_SL_B", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};	
	};

	class B_3para_coy_CO : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;					
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Company CO";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;					
		attendant = 0;						
		backpack = "B_3para_coyradio";		
		weapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};				
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};	
	};

	class B_3para_coy_2IC : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;						
		scopeCurator = 2;				
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Company Officer";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;				
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_coyradio";		
		weapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_sig : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Company Signaller";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_coysig";		
		weapons[] = {"3para_L85A3", "Throw", "Put","UK3CB_BAF_Soflam_Laserdesignator"};				
		respawnWeapons[] = {"3para_L85A3", "Throw", "Put","UK3CB_BAF_Soflam_Laserdesignator"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item","ACRE_PRC152"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item","ACRE_PRC152"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed","Laserbatteries"};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed","Laserbatteries"};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_JTAC : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Joint Terminal Attack Controller";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_coyJTAC";		
		weapons[] = {"3para_L85A3", "Throw", "Put","UK3CB_BAF_Soflam_Laserdesignator"};				
		respawnWeapons[] = {"3para_L85A3", "Throw", "Put","UK3CB_BAF_Soflam_Laserdesignator"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("SmokeShellBlue"),mag_2("SmokeShellRed")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("SmokeShellBlue"),mag_2("SmokeShellRed")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_med : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Combat Medic";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 1;						
		backpack = "B_3para_medbag";		
		weapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Medic_D", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Medic_D", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_plt_CO : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Platoon CO";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_coyradio";		
		weapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_plt_2IC : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Platoon Sergeant";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_coyradio";		
		weapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_IR_Strobe_Item"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_2("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_plt_doc : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Platoon Doctor";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 1;						
		backpack = "B_3para_docbag";		
		weapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Medic_D", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Medic_D", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemAndroid" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_plt_EOD : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para";  
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "EOD Specialist";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = true;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_EODbag";		
		weapons[] = {"3para_L85A3","ACE_VMH3", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L85A3","ACE_VMH3", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343",,"ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_SpraypaintRed","ACE_SpraypaintGreen"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343",,"ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_SpraypaintRed","ACE_SpraypaintGreen"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_MG_B", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_MG_B", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};	
	
	class B_3para_sec_com : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Section Commander";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_seccom";		
		weapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_4("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_4("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_sec_gren : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Grenadier";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_grenbag";		
		weapons[] = {"3para_L85A3_UGL", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L85A3_UGL", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343",,"ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343",,"ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_7("1Rnd_HE_Grenade_shell"),mag_4("SmokeShell"),mag_4("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Grenadier_B", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Grenadier_B", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_sec_point : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Pointman";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_pointbag";		
		weapons[] = {"3para_L85A3_UGL","ACE_VMH3", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L85A3_UGL","ACE_VMH3", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343",,"ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_SpraypaintRed","ACE_SpraypaintGreen"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343",,"ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless","ACE_SpraypaintRed","ACE_SpraypaintGreen"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_7("1Rnd_HE_Grenade_shell"),mag_4("SmokeShell"),mag_4("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Grenadier_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Grenadier_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_sec_DMR : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Designated Marksmen";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_dmrbag";		
		weapons[] = {"3para_L129A1", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L129A1", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Maxikite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Maxikite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_10("UK3CB_BAF_762_L42A1_20Rnd_T"),mag_4("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_10("UK3CB_BAF_762_L42A1_20Rnd_T"),mag_4("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_sup_TL : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Support Team Leader";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_seccom";		
		weapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L85A3","3para_L105A2", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_4("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("UK3CB_BAF_9_15Rnd"),mag_4("SmokeShell"),mag_4("HandGrenade"),"SmokeShellBlue","SmokeShellRed"};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_SL_A", "UK3CB_BAF_H_MK7_NET_A", "ItemMap","ItemcTab" ,"ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_sup_MG : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "MG Gunner";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_MGbagsup";		
		weapons[] = {"UK3CB_BAF_L7A2","Throw","Put","Binocular"};				
		respawnWeapons[] = {"UK3CB_BAF_L7A2","Throw","Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_2("UK3CB_BAF_762_100Rnd_T"),mag_2("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_2("UK3CB_BAF_762_100Rnd_T"),mag_4("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_sup_MGa : B_Soldier_base_F
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "MG Gunner Assistant";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_MGbagsupa";		
		weapons[] = {"3para_L85A3","Throw","Put","UK3CB_BAF_Tripod","Binocular"};				
		respawnWeapons[] = {"3para_L85A3","Throw","Put","UK3CB_BAF_Tripod","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};	
	
	class B_3para_sup_IDF : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Mortar Gunner";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_IDFbag";		
		weapons[] = {"3para_L85A3","UK3CB_BAF_L16","Throw","Put","Binocular"};				
		respawnWeapons[] = {"3para_L85A3", "Throw","UK3CB_BAF_L16","Put","Binocular"};	
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_sup_IDFa : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Mortar Gunner Assistant";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_IDFbag";		
		weapons[] = {"3para_L85A3","UK3CB_BAF_L16_Tripod", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L85A3","UK3CB_BAF_L16_Tripod", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_sup_AT : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "AT Specialist";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_basebag";		
		weapons[] = {"3para_L85A3","UK3CB_BAF_Javelin_Slung_Tube", "Throw", "Put","UK3CB_BAF_Javelin_CLU"};				
		respawnWeapons[] = {"3para_L85A3","UK3CB_BAF_Javelin_Slung_Tube", "Throw", "Put","UK3CB_BAF_Javelin_CLU"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};	
	
	class B_3para_sup_LRR : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Sniper";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_sniperbag";		
		weapons[] = {"3para_L85A3", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L85A3", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_sup_LRRa : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Spotter";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_spotbag";		
		weapons[] = {"3para_L129A1", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L129A1", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Maxikite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Maxikite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_10("UK3CB_BAF_762_L42A1_20Rnd_T"),mag_4("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_10("UK3CB_BAF_762_L42A1_20Rnd_T"),mag_4("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_sup_run : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Logistic Specialist";		
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_logibag";		
		weapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L85A3", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","UK3CB_BAF_Kite","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};				
		respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_Tracer_Red"),mag_4("SmokeShell"),mag_4("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_V_Osprey_Rifleman_C", "UK3CB_BAF_H_MK7_NET_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	class B_3para_aac_FW : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Fixed Wing Pilot";		
		uniformClass = "U_B_PilotCoveralls";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_Parachute";		
		weapons[] = {"3para_L22A2", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L22A2", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ACE_IR_Strobe_Item",mag_2("ACE_morphine"),mag_2("ACE_epinephrine"),mag_8("ACE_elasticBandage"),mag_7("ACE_quikclot"),mag_4("ACE_tourniquet")};			
		RespawnItems[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ACE_IR_Strobe_Item",mag_2("ACE_morphine"),mag_2("ACE_epinephrine"),mag_8("ACE_elasticBandage"),mag_7("ACE_quikclot"),mag_4("ACE_tourniquet")};			
		magazines[] = {mag_2("30Rnd_556x45_Stanag_Tracer_Red"),"SmokeShell","SmokeShellBlue","SmokeShellGreen"};				
		respawnMagazines[] = {mag_2("30Rnd_556x45_Stanag_Tracer_Red"),"SmokeShell","SmokeShellBlue","SmokeShellGreen"};		
		linkedItems[] = {"H_PilotHelmetFighter_B", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"H_PilotHelmetFighter_B", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_aac_RW : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Rotary Wing Pilot";		
		uniformClass = "UK3CB_BAF_U_HeliPilotCoveralls_Army";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_RWPbag";		
		weapons[] = {"3para_L22A2", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L22A2", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC152","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ACE_IR_Strobe_Item",mag_2("ACE_morphine"),mag_2("ACE_epinephrine"),mag_8("ACE_elasticBandage"),mag_7("ACE_quikclot"),mag_4("ACE_tourniquet")};			
		magazines[] = {mag_5("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("SmokeShellBlue"),mag_2("SmokeShellRed"),mag_2("HandGrenade"),mag_2("Chemlight_blue")};				
		respawnMagazines[] = {mag_5("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("SmokeShellBlue"),mag_2("SmokeShellRed"),mag_2("HandGrenade"),mag_2("Chemlight_blue")};		
		linkedItems[] = {"UK3CB_BAF_H_PilotHelmetHeli_A","UK3CB_BAF_V_Pilot_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_H_PilotHelmetHeli_A","UK3CB_BAF_V_Pilot_A", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_aac_DR : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Drone Controller";		
		uniformClass = "UK3CB_BAF_U_HeliPilotCoveralls_Army";							
		canDeactivateMines = false;			
		engineer = false;						
		attendant = 0;						
		backpack = "B_3para_RWPbag";		
		weapons[] = {"3para_L22A2", "Throw", "Put","ACE_Vector"};				
		respawnWeapons[] = {"3para_L22A2", "Throw", "Put","ACE_Vector"};		
		Items[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC152","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};			
		RespawnItems[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC152","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ACE_IR_Strobe_Item",mag_2("ACE_morphine"),mag_2("ACE_epinephrine"),mag_8("ACE_elasticBandage"),mag_7("ACE_quikclot"),mag_4("ACE_tourniquet")};			
		magazines[] = {mag_5("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("SmokeShellBlue"),mag_2("SmokeShellRed"),mag_2("HandGrenade"),mag_2("Chemlight_blue")};				
		respawnMagazines[] = {mag_5("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("SmokeShellBlue"),mag_2("SmokeShellRed"),mag_2("HandGrenade"),mag_2("Chemlight_blue")};		
		linkedItems[] = {"UK3CB_BAF_H_PilotHelmetHeli_A","UK3CB_BAF_V_Pilot_A", "ItemMap","B_UAVTerminal", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};			
		respawnLinkedItems[] = {"UK3CB_BAF_H_PilotHelmetHeli_A","UK3CB_BAF_V_Pilot_A", "ItemMap","B_UAVTerminal", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_aac_crew : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;				
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "Air Crewman";		
		uniformClass = "UK3CB_BAF_U_HeliPilotCoveralls_Army";							
		canDeactivateMines = false;				
		engineer = true;						
		attendant = 0;							
		backpack = "B_3para_RWCbag";		
		weapons[] = {"3para_L22A2", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L22A2", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC152","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};				
		RespawnItems[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC152","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_6("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};				
		linkedItems[] = {"UK3CB_BAF_H_PilotHelmetHeli_A","UK3CB_BAF_V_Pilot_A", "ItemMap","B_UAVTerminal", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};				
		respawnLinkedItems[] = {"UK3CB_BAF_H_PilotHelmetHeli_A","UK3CB_BAF_V_Pilot_A", "ItemMap","B_UAVTerminal", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};

	class B_3para_aac_med : B_Soldier_base_F	
	{
		author = "Cammy";			
		scope = 2;							
		scopeCurator = 2;					
		scopeArsenal = 2;					
		faction = "B_3para"; 
		identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		
		nakedUniform = "U_BasicBody";  
		displayName = "MERT Crewman";		
		uniformClass = "UK3CB_BAF_U_HeliPilotCoveralls_Army";							
		canDeactivateMines = false;				
		engineer = false;						
		attendant = 1;							
		backpack = "B_3para_RWMbag";		
		weapons[] = {"3para_L22A2", "Throw", "Put","Binocular"};				
		respawnWeapons[] = {"3para_L22A2", "Throw", "Put","Binocular"};		
		Items[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};				
		RespawnItems[] = {"ACE_EarPlugs","ACE_CableTie","ACRE_PRC343","ACE_microDAGR","ACE_Flashlight_XL50","ACE_MapTools","ItemcTabHCam","JSHK_contam_mask_m50_hoodless"};			
		magazines[] = {mag_6("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};				
		respawnMagazines[] = {mag_6("30Rnd_556x45_Stanag_Tracer_Red"),mag_2("SmokeShell"),mag_2("HandGrenade")};		
		linkedItems[] = {"UK3CB_BAF_H_PilotHelmetHeli_A","UK3CB_BAF_V_Osprey_Medic_C", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};				
		respawnLinkedItems[] = {"UK3CB_BAF_H_PilotHelmetHeli_A","UK3CB_BAF_V_Osprey_Medic_C", "ItemMap", "ItemCompass", "ACE_Altimeter", "UK3CB_BAF_HMNVS"};		
	};
	
	
	
	class UK3CB_BAF_B_Bergen_MTP_Engineer_L_A;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C;				//in use
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D;				//in use
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A;
	class UK3CB_BAF_B_Bergen_MTP_SL_L_A;					//in use
	class UK3CB_BAF_B_Bergen_MTP_SL_H_A;	
	class UK3CB_BAF_B_Bergen_MTP_Radio_L_B;	
	class UK3CB_BAF_B_Bergen_MTP_Radio_L_A;				 	//in use
	class UK3CB_BAF_B_Bergen_MTP_Radio_H_B;	
	class UK3CB_BAF_B_Bergen_MTP_Radio_H_A;					//in use
	class UK3CB_BAF_B_Bergen_MTP_Sapper_L_A;				//in use
	class UK3CB_BAF_B_Bergen_MTP_Sapper_H_A;				//in use
	class UK3CB_BAF_B_Bergen_MTP_JTAC_L_A;	
	class UK3CB_BAF_B_Bergen_MTP_JTAC_H_A;				 	//in use
	class UK3CB_BAF_B_Carryall_MTP;							//in use
	class UK3CB_BAF_B_Bergen_MTP_Medic_L_B; 				//in use
	class UK3CB_BAF_B_Bergen_MTP_Medic_L_A; 			 	//in use
	class UK3CB_BAF_B_Kitbag_MTP;			 				//in use


	class B_3para_basebag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };			
		};
	};

	class B_3para_MGbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_UK3CB_BAF_762_100Rnd_T
            {
                name = "UK3CB_BAF_762_100Rnd_T";
                count = 3;
            };
		};
	};

	class B_3para_medbag: UK3CB_BAF_B_Bergen_MTP_Medic_L_A
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 16;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 8;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 8;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 48;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 24;
            };
			class _xx_ACE_splint
            {
                name = "ACE_splint";
                count = 8;
            };
			class _xx_ACE_surgicalKit
            {
                name = "ACE_surgicalKit";
                count = 1;
            };
			class _xx_ACE_Cabletie
            {
                name = "ACE_Cabletie";
                count = 4;
            };
			class _xx_ACE_salineIV
            {
                name = "ACE_salineIV";
                count = 4;
            };
			class _xx_ACE_salineIV_500
            {
                name = "ACE_salineIV_500";
                count = 4;
            };
		};
	};
	
	class B_3para_bergen: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };		
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
            {
                name = "30Rnd_556x45_Stanag_Tracer_Red";
                count = 2;
            };
			class _xx_uk3cb_baf_762_100rnd_T
            {
                name = "uk3cb_baf_762_100rnd_T";
                count = 2;
            };
			class _xx_UK3CB_BAF_762_L42A1_20Rnd_T
            {
                name = "UK3CB_BAF_762_L42A1_20Rnd_T";
                count = 2;
            };
		};
	};
	
	class B_3para_coyradio: UK3CB_BAF_B_Bergen_MTP_Radio_L_A
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACRE_PRC117F
            {
                name = "ACRE_PRC117F";
                count = 1;
            };
		};
	};
	
	class B_3para_coysig: UK3CB_BAF_B_Bergen_MTP_Radio_H_A
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACRE_VHF30108
            {
                name = "ACRE_VHF30108";
                count = 1;
            };
		};
	};

	class B_3para_coyJTAC: UK3CB_BAF_B_Bergen_MTP_JTAC_H_A
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACRE_PRC117F
            {
                name = "ACRE_PRC117F";
                count = 1;
            };
		};
	};
	
	class B_3para_MAbag: UK3CB_BAF_B_Bergen_MTP_Medic_L_A
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 18;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 18;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 12;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 50;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 50;
            };
			class _xx_ACE_splint
            {
                name = "ACE_splint";
                count = 16;
            };
			class _xx_ACE_surgicalKit
            {
                name = "ACE_surgicalKit";
                count = 1;
            };
			class _xx_ACE_Cabletie
            {
                name = "ACE_Cabletie";
                count = 1;
            };
		};
	};	
	
	class B_3para_docbag: UK3CB_BAF_B_Bergen_MTP_Medic_L_B
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 14;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 14;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 12;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 40;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 20;
            };
			class _xx_ACE_splint
            {
                name = "ACE_splint";
                count = 8;
            };
			class _xx_ACE_surgicalKit
            {
                name = "ACE_surgicalKit";
                count = 1;
            };
			class _xx_ACE_Cabletie
            {
                name = "ACE_Cabletie";
                count = 2;
            };
			class _xx_ACE_salineIV
            {
                name = "ACE_salineIV";
                count = 6;
            };
			class _xx_ACE_salineIV_500
            {
                name = "ACE_salineIV_500";
                count = 12;
            };
		};
	};

	class B_3para_EODbag: UK3CB_BAF_B_Bergen_MTP_Sapper_H_A
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };		
			class _xx_ACE_Defusalkit
            {
                name = "ACE_Defusalkit";
                count = 1;
            };			
			class _xx_ACE_M26_Clacker
            {
                name = "ACE_M26_Clacker";
                count = 1;
            };			
			class _xx_Toolkit
            {
                name = "Toolkit";
                count = 1;
            };			
			class _xx_DemoCharge_Remote_Mag
            {
                name = "DemoCharge_Remote_Mag";
                count = 4;
            };					
		};
	};
	
	class B_3para_seccom: UK3CB_BAF_B_Bergen_MTP_SL_L_A
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACRE_PRC117F
            {
                name = "ACRE_PRC117F";
                count = 1;
            };
		};
	};
	
	class B_3para_grenbag: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };	
			class _xx_1Rnd_HE_Grenade_shell
            {
                name = "1Rnd_HE_Grenade_shell";
                count = 5;
            };		
			class _xx_1Rnd_Smoke_Grenade_shell
            {
                name = "1Rnd_Smoke_Grenade_shell";
                count = 6;
            };			
			class _xx_ACE_HuntIR_monitor
            {
                name = "ACE_HuntIR_monitor";
                count = 1;
            };	
			class _xx_ACE_HuntIR_M203
            {
                name = "ACE_HuntIR_M203";
                count = 4;
            };			
		};
	};

	class B_3para_pointbag: UK3CB_BAF_B_Bergen_MTP_Sapper_L_A
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };	
			class _xx_1Rnd_HE_Grenade_shell
            {
                name = "1Rnd_HE_Grenade_shell";
                count = 3;
            };		
			class _xx_1Rnd_Smoke_Grenade_shell
            {
                name = "1Rnd_Smoke_Grenade_shell";
                count = 6;
            };			
			class _xx_DemoCharge_Remote_Mag
            {
                name = "DemoCharge_Remote_Mag";
                count = 2;
            };					
			class _xx_ACE_M26_Clacker
            {
                name = "ACE_M26_Clacker";
                count = 1;
            };			
        };			
	};

	class B_3para_dmrbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };			
			class _xx_DemoCharge_Remote_Mag
            {
                name = "DemoCharge_Remote_Mag";
                count = 2;
            };			
			class _xx_ACE_M26_Clacker
            {
                name = "ACE_M26_Clacker";
                count = 1;
            };			
		};
	};

	class B_3para_MGbagsup: UK3CB_BAF_B_Carryall_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_UK3CB_BAF_762_100Rnd_T
            {
                name = "UK3CB_BAF_762_100Rnd_T";
                count = 4;
            };
		};
	};
	
	class B_3para_MGbagsupa: UK3CB_BAF_B_Carryall_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_UK3CB_BAF_762_100Rnd_T
            {
                name = "UK3CB_BAF_762_100Rnd_T";
                count = 3;
            };
		};
	};

	class B_3para_IDFbag: UK3CB_BAF_B_Carryall_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };			
			class _xx_UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White
            {
                name = "UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White";
                count = 1;
            };			
			class _xx_UK3CB_BAF_1Rnd_81mm_Mo_Shells
            {
                name = "UK3CB_BAF_1Rnd_81mm_Mo_Shells";
                count = 2;
            };			
		};
	};

	class B_3para_logibag: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };			
		};
	};

	class B_3para_sniperbag: UK3CB_BAF_B_Carryall_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };			
			class _xx_UK3CB_BAF_L115A3
            {
                name = "UK3CB_BAF_L115A3";
                count = 1;
            };			
			class _xx_RKSL_optic_PMII_525_PiP
            {
                name = "RKSL_optic_PMII_525_PiP";
                count = 1;
            };			
			class _xx_ACE_RangeCard
            {
                name = "ACE_RangeCard";
                count = 1;
            };			
			class _xx_ACE_Kestrel4500
            {
                name = "ACE_Kestrel4500";
                count = 1;
            };			
			class _xx_ACE_ATragMX
            {
                name = "ACE_ATragMX";
                count = 1;
            };			
			class _xx_UK3CB_BAF_338_5Rnd_Tracer
            {
                name = "UK3CB_BAF_338_5Rnd_Tracer";
                count = 8;
            };			
		};
	};

	class B_3para_spotbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };			
			class _xx_ACE_RangeCard
            {
                name = "ACE_RangeCard";
                count = 1;
            };			
			class _xx_ACE_Kestrel4500
            {
                name = "ACE_Kestrel4500";
                count = 1;
            };			
			class _xx_ACE_ATragMX
            {
                name = "ACE_ATragMX";
                count = 1;
            };			
			class _xx_ACE_SpottingScope
            {
                name = "ACE_SpottingScope";
                count = 1;
            };			
		};
	};

	class B_3para_RWPbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_UK3CB_BAF_H_Beret_AAC
            {
                name = "UK3CB_BAF_H_Beret_AAC";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACRE_PRC117F
            {
                name = "ACRE_PRC117F";
                count = 1;
            };			
			class _xx_ItemAndroid
            {
                name = "ItemAndroid";
                count = 1;
            };			
		};
	};

	class B_3para_RWCbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 4;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_UK3CB_BAF_H_Beret_AAC
            {
                name = "UK3CB_BAF_H_Beret_AAC";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 8;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 4;
            };
			class _xx_ACE_EntrenchingTool
            {
                name = "ACE_EntrenchingTool";
                count = 1;
            };			
			class _xx_ItemAndroid
            {
                name = "ItemAndroid";
                count = 1;
            };			
		};
	};

	class B_3para_RWMbag: UK3CB_BAF_B_Bergen_MTP_Medic_L_A
	{
		scope = 1;		
		
		class TransportItems
		{
			class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 16;
            };
			class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 8;
            };
			class _xx_ACE_personalAidKit
            {
                name = "ACE_personalAidKit";
                count = 1;
            };
			class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 8;
            };
			class _xx_UK3CB_BAF_H_Beret_PR
            {
                name = "UK3CB_BAF_H_Beret_PR";
                count = 1;
            };
			class _xx_UK3CB_BAF_H_Beret_AAC
            {
                name = "UK3CB_BAF_H_Beret_AAC";
                count = 1;
            };
			class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 48;
            };
			class _xx_ACE_quikclot
            {
                name = "ACE_quikclot";
                count = 24;
            };
			class _xx_ACE_splint
            {
                name = "ACE_splint";
                count = 8;
            };
			class _xx_ACE_surgicalKit
            {
                name = "ACE_surgicalKit";
                count = 1;
            };
			class _xx_ACE_Cabletie
            {
                name = "ACE_Cabletie";
                count = 4;
            };
			class _xx_ACE_salineIV
            {
                name = "ACE_salineIV";
                count = 4;
            };
			class _xx_ACE_salineIV_500
            {
                name = "ACE_salineIV_500";
                count = 4;
            };
		};
	};

	
	/*start of the vehicles with custom loadouts 
	need all class names of all vehicles 
	3CB Landrovers
	
	3CB Husky ✓
	"UK3CB_BAF_Husky_Logistics_GMG_Sand" "UK3CB_BAF_Husky_Logistics_GMG_Green" "UK3CB_BAF_Husky_Logistics_HMG_Sand") "UK3CB_BAF_Husky_Logistics_HMG_Green" "UK3CB_BAF_Husky_Logistics_GPMG_Sand" "UK3CB_BAF_Husky_Logistics_GPMG_Green" 
	"UK3CB_BAF_Husky_Passenger_GMG_Green" "UK3CB_BAF_Husky_Passenger_HMG_Sand") "UK3CB_BAF_Husky_Passenger_HMG_Green" "UK3CB_BAF_Husky_Passenger_GPMG_Sand" "UK3CB_BAF_Husky_Passenger_GPMG_Green" "UK3CB_BAF_Husky_Passenger_GMG_Sand"
	3CB Jackal
	
	3CB Coyote
	"UK3CB_BAF_Coyote_Logistics_L111A1_D" "UK3CB_BAF_Coyote_Logistics_L111A1_W" "UK3CB_BAF_Coyote_Logistics_L134A1_D" "UK3CB_BAF_Coyote_Logistics_L134A1_W"
	3CB Man trucks
	
	RKSL Wildcat✓
	"rksla3_aw159_hma2"
	3CB Apache Generic ✓
	"UK3CB_BAF_Apache_AH1_DynamicLoadoutUnlimited"
	boeing chinook (RAF) ✓
	"Boeing_CH_47_F_R"
	little birds
	
	3CB bulldog ✓
	"UK3CB_BAF_FV432_Mk3_RWS_Green" "UK3CB_BAF_FV432_Mk3_RWS_Sand" "UK3CB_BAF_FV432_Mk3_GPMG_Green" "UK3CB_BAF_FV432_Mk3_GPMG_Sand"
	3CB warrior ✓
	"UK3CB_BAF_Warrior_A3_D_Camo" "UK3CB_BAF_Warrior_A3_W_Camo" "UK3CB_BAF_Warrior_A3_D_Cage_Camo" "UK3CB_BAF_Warrior_A3_W_Cage_Camo" "UK3CB_BAF_Warrior_A3_D_Cage" "UK3CB_BAF_Warrior_A3_W_Cage" "UK3CB_BAF_Warrior_A3_D" "UK3CB_BAF_Warrior_A3_W"
	3CB offshore raiding craft ✓
	"UK3CB_BAF_RHIB_GPMG" "UK3CB_BAF_RHIB_HMG"
	3CB Panther 
	
	*/
	/*class B_Heli_light_01_F;
    class My_New_Heli: B_Heli_Light_01_F 
    {
        faction = "B_3para"; 
        side = 1;
        crew = "B_Helipilot_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
        class TransportItems //Cargo Items
        {
            class _xx_Medikit
            {
                name = "Medikit";
                count = 1;
            };
            class _xx_Toolkit
            {
                name = "Toolkit";
                count = 1;
            };
            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 5;
            };
            class _xx_30Rnd_65x39_caseless_mag
            {
                count = 25;
            };
        };
    };*/
	
	
	
};


class CfgWeapons
{
	class UK3CB_BAF_L85A3;
	class UK3CB_BAF_L105A2;
	class UK3CB_BAF_L85A3_UGL;
	class UK3CB_BAF_L129A1;
	class UK3CB_BAF_L22A2;


    class 3para_L85A3: UK3CB_BAF_L85A3
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item = "rksl_optic_lds";
                slot = "asdg_OpticRail_UK3CB_BAF_L85A3";
            };
            class LinkedItemsMuzzle
            {
                item = "UK3CB_BAF_SFFH";
                slot = "asdg_MuzzleSlot_UK3CB_BAF_L85A3";
            };
            class LinkedItemsAcc
            {
                item = "UK3CB_BAF_LLM_IR_Tan";
                slot = "asdg_FrontSideRail_UK3CB_BAF_L85A3";
			};
			class LinkedItemsUnder
            {
				item = "UK3CB_underbarrel_acc_grippod_d";
				slot = "UK3CB_underbarrel_L85_rifle_slot";
            };	
        };
    };

    class 3para_L85A3_UGL: UK3CB_BAF_L85A3_UGL
    {
        scope = 1;
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item = "rksl_optic_lds";
                slot = "asdg_OpticRail_UK3CB_BAF_L85A3";
            };
            class LinkedItemsMuzzle
            {
                item = "UK3CB_BAF_SFFH";
                slot = "asdg_MuzzleSlot_UK3CB_BAF_L85A3";
            };
            class LinkedItemsAcc
            {
                item = "UK3CB_BAF_LLM_IR_Tan";
                slot = "asdg_FrontSideRail_UK3CB_BAF_L85A3";
			};
        };
    };

	class 3para_L129A1: UK3CB_BAF_L129A1
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "UK3CB_BAF_TA648_308";
				slot = "asdg_OpticRail_UK3CB_BAF_L129A1";
			};
			class LinkedItemsAcc
			{
				item = "UK3CB_BAF_LLM_IR_Tan";
				slot = "asdg_FrontSideRail_UK3CB_BAF_L129A1";
			};
			class LinkedItemsUnder
			{
				item = "uk3cb_underbarrel_acc_grippod_t";
				slot = "UK3CB_underbarrel_rifle_slot";
			};	
		};
	};

	class 3para_L22A2: UK3CB_BAF_L22A2
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "UK3CB_BAF_Eotech";
				slot = "asdg_OpticRail_UK3CB_BAF_L85";
			};
			class LinkedItemsMuzzle
			{
				item = "UK3CB_BAF_SFFH";
				slot = "asdg_MuzzleSlot_UK3CB_BAF_L85";
			};
			class LinkedItemsAcc
			{
				item = "UK3CB_BAF_LLM_IR_Black";
				slot = "asdg_FrontSideRail_UK3CB_BAF_L85";
			};
		};
	};

	class 3para_L105A2: UK3CB_BAF_L105A2
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "UK3CB_BAF_Flashlight_L105A1";
				slot = "PointerSlot";
			};
		};
	};
};