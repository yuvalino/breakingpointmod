// Generated by unRap v1.06 by Kegetys

class RscDisplaySingleMission : RscStandardDisplay {
	onLoad = "[""onLoad"",_this,""RscDisplaySingleMission"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplaySingleMission"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	none = "A3\ui_f\data\map\diary\icons\taskNone_ca.paa";
	nonePlayed = "A3\ui_f\data\map\diary\icons\taskNone_ca.paa";
	done = "A3\ui_f\data\map\diary\icons\taskSucceeded_ca.paa";
	donePlayed = "A3\ui_f\data\map\diary\icons\taskSucceeded_ca.paa";
	locked = "A3\ui_f\data\map\diary\icons\taskFailed_ca.paa";
	package = "";
	picture = "A3\missions_f\data\overview_template_ca.paa";
	overviewText = " ";
	
	class controlsBackground {
		class Vignette : RscVignette {
			idc = 114998;
		};
		
		class TileGroup : RscControlsGroupNoScrollbars {
			idc = 115099;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
			disableCustomColors = 1;
			
			class Controls {
				class TileFrame : RscFrame {
					idc = 114999;
					x = 0;
					y = 0;
					w = "safezoneW";
					h = "safezoneH";
					colortext[] = {0, 0, 0, 1};
				};
				
				class Tile_0_0 : RscText {
					idc = 115000;
					x = "(0 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_1 : RscText {
					idc = 115001;
					x = "(0 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_2 : RscText {
					idc = 115002;
					x = "(0 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_3 : RscText {
					idc = 115003;
					x = "(0 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_4 : RscText {
					idc = 115004;
					x = "(0 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_5 : RscText {
					idc = 115005;
					x = "(0 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_0 : RscText {
					idc = 115010;
					x = "(1 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_1 : RscText {
					idc = 115011;
					x = "(1 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_2 : RscText {
					idc = 115012;
					x = "(1 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_3 : RscText {
					idc = 115013;
					x = "(1 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_4 : RscText {
					idc = 115014;
					x = "(1 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_5 : RscText {
					idc = 115015;
					x = "(1 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_0 : RscText {
					idc = 115020;
					x = "(2 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_1 : RscText {
					idc = 115021;
					x = "(2 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_2 : RscText {
					idc = 115022;
					x = "(2 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_3 : RscText {
					idc = 115023;
					x = "(2 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_4 : RscText {
					idc = 115024;
					x = "(2 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_5 : RscText {
					idc = 115025;
					x = "(2 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_0 : RscText {
					idc = 115030;
					x = "(3 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_1 : RscText {
					idc = 115031;
					x = "(3 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_2 : RscText {
					idc = 115032;
					x = "(3 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_3 : RscText {
					idc = 115033;
					x = "(3 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_4 : RscText {
					idc = 115034;
					x = "(3 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_5 : RscText {
					idc = 115035;
					x = "(3 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_0 : RscText {
					idc = 115040;
					x = "(4 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_1 : RscText {
					idc = 115041;
					x = "(4 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_2 : RscText {
					idc = 115042;
					x = "(4 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_3 : RscText {
					idc = 115043;
					x = "(4 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_4 : RscText {
					idc = 115044;
					x = "(4 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_5 : RscText {
					idc = 115045;
					x = "(4 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_0 : RscText {
					idc = 115050;
					x = "(5 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_1 : RscText {
					idc = 115051;
					x = "(5 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_2 : RscText {
					idc = 115052;
					x = "(5 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_3 : RscText {
					idc = 115053;
					x = "(5 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_4 : RscText {
					idc = 115054;
					x = "(5 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_5 : RscText {
					idc = 115055;
					x = "(5 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
			};
		};
		
		class TitleBackground : RscText {
			idc = 1080;
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "38 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
		};
		
		class PictureBackground : RscText {
			idc = 1081;
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "13 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0, 0, 0, 0.7};
		};
		
		class NameAndAuthorBackground : RscText {
			idc = 1082;
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0, 0, 0, 0.7};
		};
		
		class OverviewTextBackground : RscText {
			idc = 1083;
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (15.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "7.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (1 * (safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
			colorBackground[] = {0, 0, 0, 0.7};
		};
	};
	
	class controls {
		class Missions {};
		class Overview {};
		class B_Cancel {};
		delete B_Start;
		class B_Continue {};
		class B_Difficulty {};
		
		class Title : RscTitle {
			idc = 106;
			colorBackground[] = {0, 0, 0, 0};
			style = 0;
			y = "SafezoneY + (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			text = $STR_A3_RSCDISPLAYMAIN_BUTTONSCENARIOS;
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "15.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class PlayersName : Title {
			idc = 8434;
			style = 1;
			colorBackground[] = {0, 0, 0, 0};
			y = "SafezoneY + (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class ButtonGameOptions : RscButtonMenu {
			idc = 307;
			text = $STR_DISP_OPTIONS_GAME_OPTIONS;
			x = "7.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		delete CA_B_EDIT;
		/*
		class CA_B_EDIT : RscButtonMenu {
			idc = 109;
			shortcuts[] = {0x00050000 + 10};
			text = $STR_CA_EDIT;
			x = "13.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		*/
		
		class CA_B_COPY : RscButtonMenu {
			idc = 108;
			shortcuts[] = {0x00050000 + 11};
			text = $STR_CA_COPY;
			x = "26.45 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "21.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class CA_B_DELETE : RscButtonMenu {
			idc = 107;
			shortcuts[] = {0x00050000 + 11};
			text = $STR_CA_DELETE;
			x = "32.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "21.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		delete ButtonBuyDLC;
		/*
		class ButtonBuyDLC : RscButtonMenuSteam {
			idc = 120;
			shortcuts[] = {1024+0x19};
			text = $STR_A3_DLC_SCENARIO_PURCHASE_BUTTON;
			x = "32.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = $STR_A3_DLC_SCENARIO_PURCHASE_TOOLTIP;
		};
		*/
		delete ButtonContinue;
		/*
		class ButtonContinue : RscButtonMenuOK {
			onButtonClick = "['onButtonClick', _this] call (uiNamespace getVariable 'RscDisplaySingleMission_script')";
			text = $STR_DISP_CONTINUE;
			x = "32.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		*/
		
		class ButtonCancel : RscButtonMenuCancel {
			text = $STR_DISP_BACK;
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class ButtonLoad : RscButtonMenu {
			idc = 105;
			shortcuts[] = {0x00050000 + 2};
			onButtonClick = "['onButtonClick', _this] call (uiNamespace getVariable 'RscDisplaySingleMission_script')";
			x = "26.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class BriefingName : RscText {
			idc = 110;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			shadow = false;
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class Author : RscText {
			idc = 111;
			font = "PuristaLight";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			shadow = false;
			y = "SafezoneY + (3.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1, 1, 1, 0.5};
		};
		
		class OverviewGroup : RscControlsGroupNoScrollbars {
			y = "SafezoneY + (4.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2300;
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			
			class controls {
				class OverviewPicture : RscPictureKeepAspect {
					idc = 112;
					text = "#(argb,8,8,3)color(0,0,0,0)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class OverviewNoise : RscPicture {
					idc = 1201;
					text = "#(argb,8,8,3)color(1,1,1,1)";
					x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
					y = "4.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
					w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {1, 1, 1, 0.2};
				};
				
				class DLCStripe : RscPicture {
					idc = 121;
					colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])", 1};
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplaySingleMission\Stripe_ca.paa";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class DLCIcon : RscPicture {
					idc = 122;
					text = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
					x = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		
		class OverviewControlsGroup : RscControlsGroup {
			class HScrollbar : HScrollbar {
				height = 0;
			};
			y = "SafezoneY + (15.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			h = "SafezoneH - (18.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 2301;
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "22 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			
			class controls {
				class OverviewText : RscStructuredText {
					idc = 113;
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "21.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		
		class SortCombo : RscCombo {
			idc = 118;
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "14.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class SortOrder : RscCheckBox {
			idc = 119;
			y = "SafezoneY + (2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			textureChecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
			textureUnchecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_up_ca.paa";
			textureFocusedChecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
			textureFocusedUnchecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_up_ca.paa";
			textureHoverChecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
			textureHoverUnchecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_up_ca.paa";
			texturePressedChecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
			texturePressedUnchecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_up_ca.paa";
			textureDisabledChecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
			textureDisabledUnchecked = "\A3\ui_f\data\gui\rsc\RscDisplayMultiplayer\arrow_up_ca.paa";
			colorBackground[] = {0, 0, 0, 0.7};
			colorBackgroundFocused[] = {0, 0, 0, 0.7};
			colorBackgroundHover[] = {0, 0, 0, 0.7};
			colorBackgroundPressed[] = {0, 0, 0, 0.7};
			colorBackgroundDisabled[] = {0, 0, 0, 0.7};
			x = "15.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class MissionsTree : RscTree {
			idc = 101;
			y = "SafezoneY + (3.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			h = "SafezoneH - (5.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			colorBackground[] = {0, 0, 0, 0.7};
			expandOnDoubleclick = 1;
			x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "15.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		
		class TextDifficulty : RscText {
			shadow = false;
			idc = 1005;
			text = "$STR_A3_RscDisplaySingleMission_TextDifficulty";
			x = "17 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "21.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class ValueDifficulty : RscText {
			idc = 104;
			shadow = false;
			x = "20.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "21.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "13.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class TextLoading : RscText {
			idc = 114;
			y = "SafezoneY + (8.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			text = "$STR_A3_RscDisplaySingleMission_TextLoading";
			x = "25.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		delete ButtonSteamWorkshop;
		/*
		class ButtonSteamWorkshop : RscButtonMenuSteam {
			idc = 117;
			text = $STR_WORKSHOP_BUTTON_GAME;
			x = "20.05 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = $STR_STEAM_OPEN_WORKSHOP_TOOLTIP_GAME;
		};
		*/
	};
};