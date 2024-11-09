/* Search */
Slot.pFinishCoolTimeEffect = NULL;

/* Add below */
#ifdef ENABLE_ICONS_ITEM
	Slot.pInstanceLevel = NULL;
#endif

/* Search */
void CSlotWindow::SetSlotCount(DWORD dwIndex, DWORD dwCount)

/* Add below */
#ifdef ENABLE_ICONS_ITEM
void CSlotWindow::SetSlotLevelImage(DWORD dwIndex, CGraphicImage * levelImage)
{
	TSlot * pSlot;
	if (!GetSlotPointer(dwIndex, &pSlot) || !levelImage)
		return;
	assert(NULL == pSlot->pInstanceLevel);
	pSlot->pInstanceLevel = CGraphicImageInstance::New();
	pSlot->pInstanceLevel->SetDiffuseColor(1.0, 1.0, 1.0, 1.0);
	pSlot->pInstanceLevel->SetImagePointer(levelImage);

}
#endif

/* Search */
pSlot->dwCenterSlotNumber = 0xffffffff;

/* Add below */
#ifdef ENABLE_ICONS_ITEM
	if (pSlot->pInstanceLevel)
	{
		CGraphicImageInstance::Delete(pSlot->pInstanceLevel);
		pSlot->pInstanceLevel = NULL;
	}
#endif

/* Search */
if (rSlot.bActive)

/* Add above */
#ifdef ENABLE_ICONS_ITEM
		if (rSlot.pInstanceLevel)
		{
			rSlot.pInstanceLevel->SetPosition(m_rect.left + rSlot.ixPosition, (m_rect.top + rSlot.iyPosition + rSlot.byyPlacedItemSize*ITEM_HEIGHT) - 32);
			rSlot.pInstanceLevel->Render();
		}
#endif