﻿#ifndef tf_advbuttonbase_H
#define tf_advbuttonbase_H
#ifdef _WIN32
#pragma once
#endif

#include "tf_mainmenu.h"
#include <vgui_controls/EditablePanel.h>
#include "tf_imagepanel.h"
#include "tf_controls.h"

class CTFButtonBase;
class CTFToolTipPanel;
class CTFDialogPanelBase;

enum MouseState
{
	MOUSE_DEFAULT,
	MOUSE_ENTERED,
	MOUSE_EXITED,
	MOUSE_PRESSED,
	MOUSE_RELEASED
};

#define ADVBUTTON_DEFAULT_BG		"MainMenuAdvButtonDefault"
#define ADVBUTTON_ARMED_BG			"MainMenuAdvButtonArmed"
#define ADVBUTTON_DEPRESSED_BG		"MainMenuAdvButtonDepressed"

#define ADVBUTTON_DEFAULT_COLOR		"AdvTextDefault"
#define ADVBUTTON_ARMED_COLOR			"AdvTextArmed"
#define ADVBUTTON_DEPRESSED_COLOR		"AdvTextDepressed"

#define ADVBUTTON_DEFAULT_FONT		"MenuSmallFont"
#define GETSCHEME()			scheme()->GetIScheme(GetScheme())

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
class CTFAdvButtonBase : public vgui::EditablePanel
{
	friend class CTFButtonBase;
public:
	DECLARE_CLASS_SIMPLE( CTFAdvButtonBase, vgui::EditablePanel );

	CTFAdvButtonBase( vgui::Panel *parent, const char *panelName, const char *text );
	virtual ~CTFAdvButtonBase();
	virtual void Init();
	virtual void ApplySettings( KeyValues *inResourceData );
	virtual void ApplySchemeSettings( vgui::IScheme *pScheme );
	virtual void PerformLayout();

	virtual void SendAnimation( MouseState flag );
	virtual void SetDefaultAnimation();
	virtual void SetCommandString( const char *sCommand );
	virtual const char* GetCommandString();
	virtual void SetAutoChange( bool bAutoChange ) { m_bAutoChange = bAutoChange; };
	virtual bool IsAutoChange() { return m_bAutoChange; };

	virtual void SetToolTip( const char *sText );

	virtual void OnThink();

protected:
	bool			m_bAutoChange;

	char			m_szCommand[64];

	char			m_szToolTip[256];
};

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
class CTFButtonBase : public vgui::Button
{
	friend class CTFAdvButtonBase;
public:
	DECLARE_CLASS_SIMPLE( CTFButtonBase, vgui::Button );

	CTFButtonBase( vgui::Panel *parent, const char *panelName, const char *text );

	virtual void ApplySchemeSettings( vgui::IScheme *pScheme );
	virtual void ApplySettings( KeyValues *inResourceData );

	// Set armed button border attributes.
	virtual void SetArmedBorder( vgui::IBorder *border );
	virtual void SetSelectedBorder( vgui::IBorder *border );

	// Get button border attributes.
	virtual vgui::IBorder *GetBorder( bool depressed, bool armed, bool selected, bool keyfocus );

	virtual void OnCursorExited();
	virtual void OnCursorEntered();
	virtual void OnMousePressed( vgui::MouseCode code );
	virtual void OnMouseReleased( vgui::MouseCode code );
	virtual MouseState GetState() { return iState; };
	//virtual void SetParent(CTFAdvButtonBase *m_pButton) { m_pParent = m_pButton; };
	//virtual char *GetCommandStr() { return m_pParent->m_szCommand; };
	void SetFontByString( const char *sFont );

	virtual void SetImage( const char *sImage );
	virtual void SetImageInset( int iInsetX, int iInsetY );
	virtual void SetImageSize( int iWide, int iTall );
	virtual int GetImageWidth( void ) { return m_iImageWidth; }

protected:
	virtual void	SetMouseEnteredState( MouseState flag );
	vgui::IBorder			*_armedBorder;
	vgui::IBorder			*_selectedBorder;
	bool			m_bBorderVisible;
	MouseState		iState;

	vgui::ImagePanel *m_pButtonImage;
	int				m_iImageWidth;

	char			m_szDefaultBG[64];
	char			m_szArmedBG[64];
	char			m_szDepressedBG[64];

	char			m_szImageColorDefault[64];
	char			m_szImageColorArmed[64];
	char			m_szImageColorDepressed[64];
};


#endif // tf_advbuttonbase_H
