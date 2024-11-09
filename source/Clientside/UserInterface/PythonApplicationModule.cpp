/* Add to the end before the last } this */

#ifdef ENABLE_ICONS_ITEM
	PyModule_AddIntConstant(poModule, "ENABLE_ICONS_ITEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_ICONS_ITEM", 0);
#endif