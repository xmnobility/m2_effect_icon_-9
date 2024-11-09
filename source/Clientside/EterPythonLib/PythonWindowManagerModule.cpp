/* Search */
void initwndMgr()

/* Add above */
#ifdef ENABLE_ICONS_ITEM
PyObject * wndMgrSetSlotImage(PyObject * poSelf, PyObject * poArgs)
{
	UI::CWindow * pWin;
	if (!PyTuple_GetWindow(poArgs, 0, &pWin))
		return Py_BuildException();

	int iSlotIndex;
	if (!PyTuple_GetInteger(poArgs, 1, &iSlotIndex))
		return Py_BuildException();

	char * szImagePath;
	if (!PyTuple_GetString(poArgs, 2, &szImagePath))
		return Py_BuildException();

	if (!pWin->IsType(UI::CSlotWindow::Type()))
		return Py_BuildException();

	UI::CSlotWindow * pSlotWin = (UI::CSlotWindow *)pWin;
	CGraphicImage * pImage = (CGraphicImage *)CResourceManager::Instance().GetResourcePointer(szImagePath);
	if (!pImage)
		return Py_BuildException();
	pSlotWin->SetSlotLevelImage(iSlotIndex, pImage);
	return Py_BuildNone();
}
#endif

/* Search */
{ "ShowOverInWindowName",        wndMgrShowOverInWindowName,            METH_VARARGS },

/* Add below */
#ifdef ENABLE_ICONS_ITEM
		{ "SetSlotLevelImage",            wndMgrSetSlotImage,                    METH_VARARGS },
#endif