class CfgPatches
{
	class frd_oldMenu_oldMenu
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "frd_oldMenu";

		requiredVersion = 1.60;
		requiredAddons[] = {"frd_oldMenu", "frd_oldMenu_removeNewMenu"};
		units[] = {};
		weapons[] = {};
	};
};