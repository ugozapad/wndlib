#ifndef WNDLIB_KEYS_H
#define WNDLIB_KEYS_H

enum KeyboardKeys_t
{
	KEY_UNKNOWN = 0,
	KEY_SPACE = 32,
	KEY_APOSTROPHE = 39, /* ' */
	KEY_COMMA = 44, /* , */
	KEY_MINUS = 45, /* - */
	KEY_PERIOD = 46, /* . */
	KEY_SLASH = 47, /* / */
	KEY_0 = 48,
	KEY_1 = 49,
	KEY_2 = 50,
	KEY_3 = 51,
	KEY_4 = 52,
	KEY_5 = 53,
	KEY_6 = 54,
	KEY_7 = 55,
	KEY_8 = 56,
	KEY_9 = 57,
	KEY_SEMICOLON = 59, /* ; */
	KEY_EQUAL = 61, /* = */
	KEY_A = 65,
	KEY_B = 66,
	KEY_C = 67,
	KEY_D = 68,
	KEY_E = 69,
	KEY_F = 70,
	KEY_G = 71,
	KEY_H = 72,
	KEY_I = 73,
	KEY_J = 74,
	KEY_K = 75,
	KEY_L = 76,
	KEY_M = 77,
	KEY_N = 78,
	KEY_O = 79,
	KEY_P = 80,
	KEY_Q = 81,
	KEY_R = 82,
	KEY_S = 83,
	KEY_T = 84,
	KEY_U = 85,
	KEY_V = 86,
	KEY_W = 87,
	KEY_X = 88,
	KEY_Y = 89,
	KEY_Z = 90,
	KEY_LEFT_BRACKET = 91, /* [ */
	KEY_BACKSLASH = 92, /* \ */
	KEY_RIGHT_BRACKET = 93, /* ] */
	KEY_GRAVE_ACCENT = 96, /* ` */
	KEY_WORLD_1 = 161, /* non-US #1 */
	KEY_WORLD_2 = 162, /* non-US #2 */
	KEY_ESCAPE = 256,
	KEY_ENTER = 257,
	KEY_TAB = 258,
	KEY_BACKSPACE = 259,
	KEY_INSERT = 260,
	KEY_DELETE = 261,
	KEY_RIGHT = 262,
	KEY_LEFT = 263,
	KEY_DOWN = 264,
	KEY_UP = 265,
	KEY_PAGE_UP = 266,
	KEY_PAGE_DOWN = 267,
	KEY_HOME = 268,
	KEY_END = 269,
	KEY_CAPS_LOCK = 280,
	KEY_SCROLL_LOCK = 281,
	KEY_NUM_LOCK = 282,
	KEY_PRINT_SCREEN = 283,
	KEY_PAUSE = 284,
	KEY_F1 = 290,
	KEY_F2 = 291,
	KEY_F3 = 292,
	KEY_F4 = 293,
	KEY_F5 = 294,
	KEY_F6 = 295,
	KEY_F7 = 296,
	KEY_F8 = 297,
	KEY_F9 = 298,
	KEY_F10 = 299,
	KEY_F11 = 300,
	KEY_F12 = 301,
	KEY_F13 = 302,
	KEY_F14 = 303,
	KEY_F15 = 304,
	KEY_F16 = 305,
	KEY_F17 = 306,
	KEY_F18 = 307,
	KEY_F19 = 308,
	KEY_F20 = 309,
	KEY_F21 = 310,
	KEY_F22 = 311,
	KEY_F23 = 312,
	KEY_F24 = 313,
	KEY_F25 = 314,
	KEY_KP_0 = 320,
	KEY_KP_1 = 321,
	KEY_KP_2 = 322,
	KEY_KP_3 = 323,
	KEY_KP_4 = 324,
	KEY_KP_5 = 325,
	KEY_KP_6 = 326,
	KEY_KP_7 = 327,
	KEY_KP_8 = 328,
	KEY_KP_9 = 329,
	KEY_KP_DECIMAL = 330,
	KEY_KP_DIVIDE = 331,
	KEY_KP_MULTIPLY = 332,
	KEY_KP_SUBTRACT = 333,
	KEY_KP_ADD = 334,
	KEY_KP_ENTER = 335,
	KEY_KP_EQUAL = 336,
	KEY_LEFT_SHIFT = 340,
	KEY_LEFT_CONTROL = 341,
	KEY_LEFT_ALT = 342,
	KEY_LEFT_SUPER = 343,
	KEY_RIGHT_SHIFT = 344,
	KEY_RIGHT_CONTROL = 345,
	KEY_RIGHT_ALT = 346,
	KEY_RIGHT_SUPER = 347,
	KEY_MENU = 348,

	KEY_MAX
};

enum MouseButton_t
{
	MouseButton_Left,
	MouseButton_Middle,
	MouseButton_Right,
	
	MouseButton_MAX
};

#ifdef WIN32
namespace Win32Keys
{
	enum Keys
	{
		Backspace = 0x08,
		Tab = 0x09,
		Clear = 0x0C,
		Enter = 0x0D,
		Shift = 0x10,
		Control = 0x11,
		Alt = 0x12,
		Pause = 0x13,
		CapsLock = 0x14,
		Escape = 0x1B,
		Space = 0x20,
		PageUp = 0x21,
		PageDown = 0x22,
		End = 0x23,
		Home = 0x24,
		Left = 0x25,
		Up = 0x26,
		Right = 0x27,
		Down = 0x28,
		Select = 0x29,
		Print = 0x2A,
		Execute = 0x2B,
		PrintScreen = 0x2C,
		Insert = 0x2D,
		Delete = 0x2E,
		Help = 0x2F,
		Zero = 0x30,
		One = 0x31,
		Two = 0x32,
		Three = 0x33,
		Four = 0x34,
		Five = 0x35,
		Six = 0x36,
		Seven = 0x37,
		Eight = 0x38,
		Nine = 0x39,
		A = 0x41,
		B = 0x42,
		C = 0x43,
		D = 0x44,
		E = 0x45,
		F = 0x46,
		G = 0x47,
		H = 0x48,
		I = 0x49,
		J = 0x4A,
		K = 0x4B,
		L = 0x4C,
		M = 0x4D,
		N = 0x4E,
		O = 0x4F,
		P = 0x50,
		Q = 0x51,
		R = 0x52,
		S = 0x53,
		T = 0x54,
		U = 0x55,
		V = 0x56,
		W = 0x57,
		X = 0x58,
		Y = 0x59,
		Z = 0x5A,
		LeftWindowsKey = 0x5B,
		RightWindowsKey = 0x5C,
		ApplicationsKey = 0x5D,
		Sleep = 0x5F,
		NumPad0 = 0x60,
		NumPad1 = 0x61,
		NumPad2 = 0x62,
		NumPad3 = 0x63,
		NumPad4 = 0x64,
		NumPad5 = 0x65,
		NumPad6 = 0x66,
		NumPad7 = 0x67,
		NumPad8 = 0x68,
		NumPad9 = 0x69,
		Multiply = 0x6A,
		Add = 0x6B,
		Seperator = 0x6C,
		Subtract = 0x6D,
		Decimal = 0x6E,
		Divide = 0x6F,
		F1 = 0x70,
		F2 = 0x71,
		F3 = 0x72,
		F4 = 0x73,
		F5 = 0x74,
		F6 = 0x75,
		F7 = 0x76,
		F8 = 0x77,
		F9 = 0x78,
		F10 = 0x79,
		F11 = 0x7A,
		F12 = 0x7B,
		F13 = 0x7C,
		F14 = 0x7D,
		F15 = 0x7E,
		F16 = 0x7F,
		F17 = 0x80,
		F18 = 0x81,
		F19 = 0x82,
		F20 = 0x83,
		F21 = 0x84,
		F22 = 0x85,
		F23 = 0x86,
		F24 = 0x87,
		Numlock = 0x90,
		ScrollLock = 0x91,
		LeftShift = 0xA0,
		RightShift = 0xA1,
		LeftControl = 0xA2,
		RightContol = 0xA3,
		LeftMenu = 0xA4,
		RightMenu = 0xA5,
		BrowserBack = 0xA6,
		BrowserForward = 0xA7,
		BrowserRefresh = 0xA8,
		BrowserStop = 0xA9,
		BrowserSearch = 0xAA,
		BrowserFavorites = 0xAB,
		BrowserHome = 0xAC,
		VolumeMute = 0xAD,
		VolumeDown = 0xAE,
		VolumeUp = 0xAF,
		NextTrack = 0xB0,
		PreviousTrack = 0xB1,
		StopMedia = 0xB2,
		PlayPause = 0xB3,
		LaunchMail = 0xB4,
		SelectMedia = 0xB5,
		LaunchApp1 = 0xB6,
		LaunchApp2 = 0xB7,
		OEM1 = 0xBA,
		OEMPlus = 0xB8,
		OEMComma = 0xBC,
		OEMMinus = 0xBD,
		OEMPeriod = 0xBE,
		OEM2 = 0xBF,
		OEM3 = 0xC0,
		OEM4 = 0xDB,
		OEM5 = 0xDC,
		OEM6 = 0xDD,
		OEM7 = 0xDE,
		OEM8 = 0xDF,
		OEM102 = 0xE2,
		Process = 0xE5,
		Packet = 0xE7,
		Attn = 0xF6,
		CrSel = 0xF7,
		ExSel = 0xF8,
		EraseEOF = 0xF9,
		Play = 0xFA,
		Zoom = 0xFB,
		PA1 = 0xFD,
		OEMClear = 0xFE
	};
}

inline KeyboardKeys_t GetKeyFromWin32(Win32Keys::Keys key)
{
	switch (key)
	{
	case Win32Keys::Backspace:		return KEY_BACKSPACE;
	case Win32Keys::Tab:			return KEY_TAB;
	case Win32Keys::Clear:			return KEY_WORLD_1;
	case Win32Keys::Enter:			return KEY_ENTER;
	case Win32Keys::Shift:			return KEY_LEFT_SHIFT;		// TODO
	case Win32Keys::Control:		return KEY_LEFT_CONTROL;	// TODO
	case Win32Keys::Alt:			return KEY_LEFT_ALT;		// TODO
	case Win32Keys::Pause:			return KEY_PAUSE;
	case Win32Keys::CapsLock:		return KEY_CAPS_LOCK;
	case Win32Keys::Escape:			return KEY_ESCAPE;
	case Win32Keys::Space:			return KEY_SPACE;
	case Win32Keys::PageUp:			return KEY_PAGE_UP;
	case Win32Keys::PageDown:		return KEY_PAGE_DOWN;
	case Win32Keys::End:			return KEY_END;
	case Win32Keys::Home:			return KEY_HOME;
	case Win32Keys::Left:			return KEY_LEFT;
	case Win32Keys::Up:				return KEY_UP;
	case Win32Keys::Right:			return KEY_RIGHT;
	case Win32Keys::Down:			return KEY_DOWN;
	case Win32Keys::Select:			return KEY_UNKNOWN; // TODO
	case Win32Keys::Print:			return KEY_UNKNOWN; // TODO
	case Win32Keys::Execute:		return KEY_UNKNOWN; // TODO
	case Win32Keys::PrintScreen:	return KEY_PRINT_SCREEN;
	case Win32Keys::Insert:			return KEY_INSERT;
	case Win32Keys::Delete:			return KEY_DELETE;
	case Win32Keys::Help:			return KEY_UNKNOWN; // TODO
	case Win32Keys::Zero:			return KEY_0;
	case Win32Keys::One:			return KEY_1;
	case Win32Keys::Two:			return KEY_2;
	case Win32Keys::Three:			return KEY_3;
	case Win32Keys::Four:			return KEY_4;
	case Win32Keys::Five:			return KEY_5;
	case Win32Keys::Six:			return KEY_6;
	case Win32Keys::Seven:			return KEY_7;
	case Win32Keys::Eight:			return KEY_8;
	case Win32Keys::Nine:			return KEY_9;
	case Win32Keys::A:				return KEY_A;
	case Win32Keys::B:				return KEY_B;
	case Win32Keys::C:				return KEY_C;
	case Win32Keys::D:				return KEY_D;
	case Win32Keys::E:				return KEY_E;
	case Win32Keys::F:				return KEY_F;
	case Win32Keys::G:				return KEY_G;
	case Win32Keys::H:				return KEY_H;
	case Win32Keys::I:				return KEY_I;
	case Win32Keys::J:				return KEY_J;
	case Win32Keys::K:				return KEY_K;
	case Win32Keys::L:				return KEY_L;
	case Win32Keys::M:				return KEY_M;
	case Win32Keys::N:				return KEY_N;
	case Win32Keys::O:				return KEY_O;
	case Win32Keys::P:				return KEY_P;
	case Win32Keys::Q:				return KEY_Q;
	case Win32Keys::R:				return KEY_R;
	case Win32Keys::S:				return KEY_S;
	case Win32Keys::T:				return KEY_T;
	case Win32Keys::U:				return KEY_U;
	case Win32Keys::V:				return KEY_V;
	case Win32Keys::W:				return KEY_W;
	case Win32Keys::X:				return KEY_X;
	case Win32Keys::Y:				return KEY_Y;
	case Win32Keys::Z:				return KEY_Z;
	case Win32Keys::LeftWindowsKey:	return KEY_LEFT_SUPER;
	case Win32Keys::RightWindowsKey:return KEY_RIGHT_SUPER;
	case Win32Keys::ApplicationsKey:return KEY_UNKNOWN; // TODO
	case Win32Keys::Sleep:			return KEY_UNKNOWN; // TODO
	case Win32Keys::NumPad0:		return KEY_KP_0;
	case Win32Keys::NumPad1:		return KEY_KP_1;
	case Win32Keys::NumPad2:		return KEY_KP_2;
	case Win32Keys::NumPad3:		return KEY_KP_3;
	case Win32Keys::NumPad4:		return KEY_KP_4;
	case Win32Keys::NumPad5:		return KEY_KP_5;
	case Win32Keys::NumPad6:		return KEY_KP_6;
	case Win32Keys::NumPad7:		return KEY_KP_7;
	case Win32Keys::NumPad8:		return KEY_KP_8;
	case Win32Keys::NumPad9:		return KEY_KP_9;
	case Win32Keys::Multiply:		return KEY_KP_MULTIPLY;
	case Win32Keys::Add:			return KEY_KP_ADD;
	case Win32Keys::Seperator:		return KEY_KP_ENTER;
	case Win32Keys::Subtract:		return KEY_KP_SUBTRACT;
	case Win32Keys::Decimal:		return KEY_KP_DECIMAL;
	case Win32Keys::Divide:			return KEY_KP_DIVIDE;
	case Win32Keys::F1:				return KEY_F1;
	case Win32Keys::F2:				return KEY_F2;
	case Win32Keys::F3:				return KEY_F3;
	case Win32Keys::F4:				return KEY_F4;
	case Win32Keys::F5:				return KEY_F5;
	case Win32Keys::F6:				return KEY_F6;
	case Win32Keys::F7:				return KEY_F7;
	case Win32Keys::F8:				return KEY_F8;
	case Win32Keys::F9:				return KEY_F9;
	case Win32Keys::F10:			return KEY_F10;
	case Win32Keys::F11:			return KEY_F11;
	case Win32Keys::F12:			return KEY_F12;
	case Win32Keys::F13:			return KEY_F13;
	case Win32Keys::F14:			return KEY_F14;
	case Win32Keys::F15:			return KEY_F15;
	case Win32Keys::F16:			return KEY_F16;
	case Win32Keys::F17:			return KEY_F17;
	case Win32Keys::F18:			return KEY_F18;
	case Win32Keys::F19:			return KEY_F19;
	case Win32Keys::F20:			return KEY_F20;
	case Win32Keys::F21:			return KEY_F21;
	case Win32Keys::F22:			return KEY_F22;
	case Win32Keys::F23:			return KEY_F23;
	case Win32Keys::F24:			return KEY_F24;
	case Win32Keys::Numlock:		return KEY_NUM_LOCK;
	case Win32Keys::ScrollLock:		return KEY_SCROLL_LOCK;
	case Win32Keys::LeftShift:		return KEY_LEFT_SHIFT;
	case Win32Keys::RightShift:		return KEY_RIGHT_SHIFT;
	case Win32Keys::LeftControl:	return KEY_LEFT_CONTROL;
	case Win32Keys::RightContol:	return KEY_RIGHT_CONTROL;
	case Win32Keys::LeftMenu:		return KEY_MENU;
	case Win32Keys::RightMenu:		return KEY_MENU;
	case Win32Keys::BrowserBack:	return KEY_UNKNOWN; // TODO
	case Win32Keys::BrowserForward:	return KEY_UNKNOWN; // TODO
	case Win32Keys::BrowserRefresh:	return KEY_UNKNOWN; // TODO
	case Win32Keys::BrowserStop:	return KEY_UNKNOWN; // TODO
	case Win32Keys::BrowserSearch:	return KEY_UNKNOWN; // TODO
	case Win32Keys::BrowserFavorites:	return KEY_UNKNOWN; // TODO
	case Win32Keys::BrowserHome:		return KEY_UNKNOWN; // TODO
	case Win32Keys::VolumeMute:			return KEY_UNKNOWN; // TODO
	case Win32Keys::VolumeDown:			return KEY_UNKNOWN; // TODO
	case Win32Keys::VolumeUp:			return KEY_UNKNOWN; // TODO
	case Win32Keys::NextTrack:			return KEY_UNKNOWN; // TODO
	case Win32Keys::PreviousTrack:		return KEY_UNKNOWN; // TODO
	case Win32Keys::StopMedia:			return KEY_UNKNOWN; // TODO
	case Win32Keys::PlayPause:			return KEY_UNKNOWN; // TODO
	case Win32Keys::LaunchMail:			return KEY_UNKNOWN; // TODO
	case Win32Keys::SelectMedia:		return KEY_UNKNOWN; // TODO
	case Win32Keys::LaunchApp1:			return KEY_UNKNOWN; // TODO
	case Win32Keys::LaunchApp2:
		break;
	case Win32Keys::OEM1:
		break;
	case Win32Keys::OEMPlus:
		break;
	case Win32Keys::OEMComma:
		break;
	case Win32Keys::OEMMinus:
		break;
	case Win32Keys::OEMPeriod:
		break;
	case Win32Keys::OEM2:
		break;
	case Win32Keys::OEM3:
		break;
	case Win32Keys::OEM4:
		break;
	case Win32Keys::OEM5:
		break;
	case Win32Keys::OEM6:
		break;
	case Win32Keys::OEM7:
		break;
	case Win32Keys::OEM8:
		break;
	case Win32Keys::OEM102:
		break;
	case Win32Keys::Process:
		break;
	case Win32Keys::Packet:
		break;
	case Win32Keys::Attn:
		break;
	case Win32Keys::CrSel:
		break;
	case Win32Keys::ExSel:
		break;
	case Win32Keys::EraseEOF:
		break;
	case Win32Keys::Play:
		break;
	case Win32Keys::Zoom:
		break;
	case Win32Keys::PA1:
		break;
	case Win32Keys::OEMClear:
		break;
	default:
		break;
	}

	return KEY_UNKNOWN;
}
#endif

#endif