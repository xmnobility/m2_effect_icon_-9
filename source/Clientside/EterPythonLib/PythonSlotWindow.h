/* Search */
				CGraphicImageInstance * pInstance;

/* Add below */
#ifdef ENABLE_ICONS_ITEM
				CGraphicImageInstance * pInstanceLevel;
#endif

/* Search */
void Destroy();

/* Add below */
#ifdef ENABLE_ICONS_ITEM
			void SetSlotLevelImage(DWORD dwIndex, CGraphicImage * levelImage);
#endif