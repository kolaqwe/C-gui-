#include "Game.h"
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrev,LPSTR lpszCmdLine,int CmdShow)
{
	INITCOMMONCONTROLSEX icc={sizeof(INITCOMMONCONTROLSEX)};
	icc.dwICC=ICC_WIN95_CLASSES;
	InitCommonControlsEx(&icc);
	Game temp;
	return DialogBox(hInstance,MAKEINTRESOURCE(IDD_DIALOG1),NULL,Game::DlgProc);
}