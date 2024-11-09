# Search
wndMgr.SetSlotCount(self.hWnd, renderingSlotNumber, ItemCount)

# Add below
		if app.ENABLE_ICONS_ITEM:
			itemName=item.GetItemName().strip()
			itemNameP=item.GetItemName().rfind('+')
			if itemNameP>0 and len(itemName)>itemNameP+1:
				level=itemName[itemNameP+1:]
				if level.isdigit():
					wndMgr.SetSlotLevelImage(self.hWnd, renderingSlotNumber, ("icon/level/%d.tga"%int(level)))
