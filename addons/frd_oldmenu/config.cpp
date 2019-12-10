class CfgPatches
{
	class frd_oldMenu
	{
		// Meta information for editor
		name = "Legacy main menu";
		author = "Freddo";
		url = "";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 1.60; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"A3_Data_F_Mod_Loadorder", "A3_Data_F_Enoch_Loadorder", "CBA_settings", "ace_arsenal"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};
