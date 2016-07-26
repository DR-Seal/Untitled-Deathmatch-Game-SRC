"Resource/UI/main_menu/NotificationPanel.res"
{
	"CTFNotificationPanel"
	{
		"ControlName"		"EditablePanel"
		"fieldName"			"CTFNotificationPanel"
		"xpos"				"r300"
		"ypos"				"20"
		"wide"				"280"
		"tall"				"130"
		"autoResize"		"0"
		"pinCorner"			"0"
		"visible"			"0"
		"enabled"			"1"
		"border"			"MainMenuHighlightBorder"
	}	
	
	"CloseButton"
	{
		"ControlName"		"CTFButton"
		"fieldName"			"CloseButton"
		"xpos"				"250"
		"ypos"				"5"
		"zpos"				"1"
		"wide"				"24"
		"tall"				"24"
		"visible"			"1"
		"enabled"			"1"
		"bordervisible"		"0"	
		"command"			"vguicancel"	
		"labelText" 		""
		"bordervisible"		"0"
		"tooltip" 			"Close"
		"image_drawcolor"		"LightRed"
		"image_armedcolor"			"LighterRed"
		"image_depressedcolor"		"MainMenuTextDefault"
		
		"SubImage"
		{
			"image" 			"../vgui/glyph_close_x"
			"imagewidth"		"24"
		}
	}	
	
	"PrevButton"
	{
		"ControlName"		"CTFButton"
		"fieldName"			"PrevButton"
		"xpos"				"220"
		"ypos"				"105"
		"zpos"				"1"
		"wide"				"24"
		"tall"				"24"
		"visible"			"1"
		"enabled"			"1"
		"bordervisible"		"0"	
		"command"			"Prev"	
		"labelText" 		""
		"bordervisible"		"0"
		"tooltip" 			"Prev"
		"image_drawcolor"		"TanDark"
		"image_armedcolor"			"LightRed"
		"image_depressedcolor"		"MainMenuTextDefault"
		
		"SubImage"
		{
			"image" 			"../vgui/blog_back_solid"
			"imagewidth"		"24"
		}
	}	
	
	"NextButton"
	{
		"ControlName"		"CTFButton"
		"fieldName"			"NextButton"
		"xpos"				"250"
		"ypos"				"105"
		"zpos"				"1"
		"wide"				"24"
		"tall"				"24"
		"visible"			"1"
		"enabled"			"1"
		"bordervisible"		"0"	
		"command"			"Next"	
		"labelText" 		""
		"bordervisible"		"0"
		"tooltip" 			"Next"
		"image_drawcolor"		"TanDark"
		"image_armedcolor"			"LightRed"
		"image_depressedcolor"		"MainMenuTextDefault"
		
		"SubImage"
		{
			"image" 			"../vgui/blog_forward_solid"
			"imagewidth"		"24"
		}
	}	
	
	"RemoveButton"
	{
		"ControlName"		"CTFButton"
		"fieldName"			"RemoveButton"
		"xpos"				"250"
		"ypos"				"30"
		"zpos"				"1"
		"wide"				"24"
		"tall"				"24"
		"visible"			"1"
		"enabled"			"1"
		"bordervisible"		"0"	
		"command"			"Remove"	
		"labelText" 		""
		"bordervisible"		"0"
		"tooltip" 			"Remove"
		"image_drawcolor"		"LightRed"
		"image_armedcolor"			"LighterRed"
		"image_depressedcolor"		"MainMenuTextDefault"
		
		"SubImage"
		{
			"image" 			"../vgui/icon_trash_on"
			"imagewidth"		"24"
		}
	}	
	
	"TitleLabel"
	{
		"ControlName"		"CExLabel"
		"fieldName"			"TitleLabel"
		"xpos"				"10"
		"ypos"				"5"
		"zpos"				"-1"
		"wide"				"225"
		"tall"				"30"
		"autoResize"		"0"
		"pinCorner"			"0"
		"visible"			"1"
		"enabled"			"1"
		"labelText"			"%title%"
		"textAlignment"		"west"
		"font"				"TeamMenuBold"
		"fgcolor"			"MainMenuTextDefault"
	}			
	
	"CountLabel"
	{
		"ControlName"		"CExLabel"
		"fieldName"			"CountLabel"
		"xpos"				"225"
		"ypos"				"5"
		"zpos"				"-1"
		"wide"				"200"
		"tall"				"100"
		"autoResize"		"0"
		"pinCorner"			"0"
		"visible"			"1"
		"enabled"			"1"
		"labelText"			"#TF_Notification_Counter"
		"textAlignment"		"north-east"
		"wrap"				"1"
		"font"				"GameUIButtonText"
		"fgcolor"			"MainMenuTextDefault"
	}
	
	"TimeLabel"
	{
		"ControlName"		"CExLabel"
		"fieldName"			"TimeLabel"
		"xpos"				"10"
		"ypos"				"40"
		"zpos"				"-1"
		"wide"				"225"
		"tall"				"15"
		"autoResize"		"0"
		"pinCorner"			"0"
		"visible"			"1"
		"enabled"			"1"
		"labelText"			"%timestamp%"
		"textAlignment"		"north-west"
		"wrap"				"1"
		"font"				"ControllerHintText"
		"fgcolor"			"MainMenuTextDefault"
	}	
	
	"MessageLabel"
	{
		"ControlName"		"CExLabel"
		"fieldName"			"MessageLabel"
		"xpos"				"10"
		"ypos"				"60"
		"zpos"				"-1"
		"wide"				"250"
		"tall"				"110"
		"autoResize"		"0"
		"pinCorner"			"0"
		"visible"			"1"
		"enabled"			"1"
		"labelText"			"%message%"
		"textAlignment"		"north-west"
		"wrap"				"1"
		"font"				"ControllerHintText"
		"fgcolor"			"MainMenuTextDefault"
	}		
}		