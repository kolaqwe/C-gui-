#pragma once
#include "Header.h"
class Game
{
public:
	/*struct Move
	{
		BOOL UP;
		BOOL DOWN;
		BOOL LEFT;
		BOOL RIGHT;
	}b[15];*/
	Game(void);
	static BOOL CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam , LPARAM lParam);
	static Game *StaticThis;
	void Cls_OnClose(HWND hwnd);
	void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
	void Cls_OnTimer(HWND hwnd, UINT id);
	void Check(HWND hwnd);
	BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);
	int lvl;
	~Game(void);
};
