//========= Copyright � 1996-2005, Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//

#ifndef OPTIONS_SUB_MOUSE_H
#define OPTIONS_SUB_MOUSE_H
#ifdef _WIN32
#pragma once
#endif

#include "tf_dialogpanelbase.h"

class CPanelListPanel;
class CTFAdvButton;
class CTFCvarToggleCheckButton;
class CCvarSlider;

namespace vgui
{
    class Label;
    class Panel;
}

//-----------------------------------------------------------------------------
// Purpose: Mouse Details, Part of OptionsDialog
//-----------------------------------------------------------------------------
class CTFOptionsMousePanel : public CTFDialogPanelBase
{
	DECLARE_CLASS_SIMPLE(CTFOptionsMousePanel, CTFDialogPanelBase);

public:
	CTFOptionsMousePanel(vgui::Panel* parent, const char *panelName);
	~CTFOptionsMousePanel();
	virtual bool Init();
	virtual void OnResetData();
	virtual void OnApplyChanges();
	virtual void OnCommand(const char *command);
protected:
    void ApplySchemeSettings(vgui::IScheme *pScheme);
	void CreateControls();
	void DestroyControls();
	void UpdateSensitivityLabel();
	void UpdatePanels();

private:
	MESSAGE_FUNC_PTR( OnControlModified, "ControlModified", panel );
    MESSAGE_FUNC_PTR( OnTextChanged, "TextChanged", panel );
	MESSAGE_FUNC_INT( OnCheckButtonChecked, "CheckButtonChecked", panel )
	{
		OnControlModified( NULL );
	}

	vgui::Label					*pTitleMouse;
	vgui::Label					*pTitleJoystick;
	CTFCvarToggleCheckButton		*m_pReverseMouseCheckBox;
	CTFCvarToggleCheckButton		*m_pRawInputCheckBox;
	CTFCvarToggleCheckButton		*m_pMouseFilterCheckBox;

	CCvarSlider					*m_pMouseSensitivitySlider;
    vgui::TextEntry             *m_pMouseSensitivityLabel;

	CTFCvarToggleCheckButton		*m_pMouseAccelCheckBox;
	CCvarSlider					*m_pMouseAccelSlider;

	CTFCvarToggleCheckButton		*m_pJoystickCheckBox;
	CTFCvarToggleCheckButton		*m_pJoystickSouthpawCheckBox;
	CTFCvarToggleCheckButton		*m_pQuickInfoCheckBox;
	CTFCvarToggleCheckButton		*m_pReverseJoystickCheckBox;

	CCvarSlider					*m_pJoyYawSensitivitySlider;
	vgui::Label					*m_pJoyYawSensitivityPreLabel;
	CCvarSlider					*m_pJoyPitchSensitivitySlider;
	vgui::Label					*m_pJoyPitchSensitivityPreLabel;
};



#endif // OPTIONS_SUB_MOUSE_H