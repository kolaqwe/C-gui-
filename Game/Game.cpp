#include "Game.h"
HINSTANCE hInst;
int i=0;
Game::Game(void)
{
	/*for(int i=0;i<15;++i)
	{
		b[i].DOWN=FALSE;
		b[i].UP=FALSE;
		b[i].LEFT=FALSE;
		b[i].RIGHT=FALSE;
	}
	b[12].DOWN=TRUE;
	b[15].RIGHT=TRUE;*/
	lvl=100;
	this->StaticThis=this;
}
BOOL CALLBACK Game::DlgProc(HWND hDlg, UINT message, WPARAM wParam , LPARAM lParam)
{
	switch(message)
	{
		HANDLE_MSG(hDlg,WM_CLOSE,StaticThis->Cls_OnClose);
		HANDLE_MSG(hDlg,WM_COMMAND,StaticThis->Cls_OnCommand);
		HANDLE_MSG(hDlg,WM_TIMER,StaticThis->Cls_OnTimer);
		HANDLE_MSG(hDlg,WM_INITDIALOG,StaticThis->Cls_OnInitDialog);
	}
	return FALSE;
}

Game::~Game(void)
{
}
Game* Game::StaticThis=NULL;

void Game::Cls_OnClose(HWND hwnd)
{
	EndDialog(hwnd,0);
}
void Game::Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
	WCHAR a1[1000];
	WCHAR a2[1000];
	WCHAR a3[1000];
	WCHAR a4[1000];
	WCHAR a5[1000];
	WCHAR a6[1000];
	WCHAR a7[1000];
	WCHAR a8[1000];
	WCHAR a9[1000];
	WCHAR a10[1000];
	WCHAR a11[1000];
	WCHAR a12[1000];
	WCHAR a13[1000];
	WCHAR a14[1000];
	WCHAR a15[1000];
	WCHAR a16[1000];
	WCHAR aCheck[1000]=L"ПУСТО";
	switch(id)
	{
	case IDC_BUTTON1:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a1,1000);
		if(strcmp((const char*)a1,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
			if(strcmp((const char*)a2,(const char*)aCheck)==0)
			{
				SetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a1);
				SetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a2);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
			if(strcmp((const char*)a5,(const char*)aCheck)==0)
			{
				SetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a1);
				SetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a5);
			}
		}
		break;
	case IDC_BUTTON2:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
		if(strcmp((const char*)a2,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a1,1000);
			if(strcmp((const char*)a1,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON2),WM_SETTEXT,0,(LPARAM)a1);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON1),WM_SETTEXT,0,(LPARAM)a2);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
			if(strcmp((const char*)a6,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON6),WM_SETTEXT,0,(LPARAM)a2);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON2),WM_SETTEXT,0,(LPARAM)a6);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
			if(strcmp((const char*)a3,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON3),WM_SETTEXT,0,(LPARAM)a2);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON2),WM_SETTEXT,0,(LPARAM)a3);
			}
		}
		break;
	case IDC_BUTTON3:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
		if(strcmp((const char*)a3,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
			if(strcmp((const char*)a7,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON7),WM_SETTEXT,0,(LPARAM)a3);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON3),WM_SETTEXT,0,(LPARAM)a7);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a4,1000);
			if(strcmp((const char*)a4,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON4),WM_SETTEXT,0,(LPARAM)a3);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON3),WM_SETTEXT,0,(LPARAM)a4);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
			if(strcmp((const char*)a2,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON3),WM_SETTEXT,0,(LPARAM)a2);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON2),WM_SETTEXT,0,(LPARAM)a3);
			}
		}
		break;
	case IDC_BUTTON4:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a4,1000);
		if(strcmp((const char*)a4,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
			if(strcmp((const char*)a8,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON8),WM_SETTEXT,0,(LPARAM)a4);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON4),WM_SETTEXT,0,(LPARAM)a8);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
			if(strcmp((const char*)a3,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON3),WM_SETTEXT,0,(LPARAM)a4);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON4),WM_SETTEXT,0,(LPARAM)a3);
			}
		}
		break;
	case IDC_BUTTON5:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
		if(strcmp((const char*)a5,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
			if(strcmp((const char*)a6,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON6),WM_SETTEXT,0,(LPARAM)a5);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON5),WM_SETTEXT,0,(LPARAM)a6);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
			if(strcmp((const char*)a9,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON5),WM_SETTEXT,0,(LPARAM)a9);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON9),WM_SETTEXT,0,(LPARAM)a5);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a1,1000);
			if(strcmp((const char*)a1,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON1),WM_SETTEXT,0,(LPARAM)a5);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON5),WM_SETTEXT,0,(LPARAM)a1);
			}
		}
		break;
	case IDC_BUTTON6:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
		if(strcmp((const char*)a6,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
			if(strcmp((const char*)a2,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON6),WM_SETTEXT,0,(LPARAM)a2);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON2),WM_SETTEXT,0,(LPARAM)a6);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
			if(strcmp((const char*)a7,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON7),WM_SETTEXT,0,(LPARAM)a6);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON6),WM_SETTEXT,0,(LPARAM)a7);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
			if(strcmp((const char*)a5,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON5),WM_SETTEXT,0,(LPARAM)a6);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON6),WM_SETTEXT,0,(LPARAM)a5);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
			if(strcmp((const char*)a10,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON10),WM_SETTEXT,0,(LPARAM)a6);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON6),WM_SETTEXT,0,(LPARAM)a10);
			}
		}
		break;
	case IDC_BUTTON7:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
		if(strcmp((const char*)a7,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
			if(strcmp((const char*)a8,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON8),WM_SETTEXT,0,(LPARAM)a7);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON7),WM_SETTEXT,0,(LPARAM)a8);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
			if(strcmp((const char*)a6,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON7),WM_SETTEXT,0,(LPARAM)a6);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON6),WM_SETTEXT,0,(LPARAM)a7);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
			if(strcmp((const char*)a3,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON3),WM_SETTEXT,0,(LPARAM)a7);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON7),WM_SETTEXT,0,(LPARAM)a3);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
			if(strcmp((const char*)a11,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON11),WM_SETTEXT,0,(LPARAM)a7);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON7),WM_SETTEXT,0,(LPARAM)a11);
			}
		}
		break;
		case IDC_BUTTON8:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
		if(strcmp((const char*)a8,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
			if(strcmp((const char*)a12,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON12),WM_SETTEXT,0,(LPARAM)a8);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON8),WM_SETTEXT,0,(LPARAM)a12);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a4,1000);
			if(strcmp((const char*)a4,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON4),WM_SETTEXT,0,(LPARAM)a8);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON8),WM_SETTEXT,0,(LPARAM)a4);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
			if(strcmp((const char*)a7,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON8),WM_SETTEXT,0,(LPARAM)a7);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON7),WM_SETTEXT,0,(LPARAM)a8);
			}
		}
		break;
	case IDC_BUTTON9:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
		if(strcmp((const char*)a9,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
			if(strcmp((const char*)a5,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON9),WM_SETTEXT,0,(LPARAM)a5);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON5),WM_SETTEXT,0,(LPARAM)a9);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a13,1000);
			if(strcmp((const char*)a13,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON13),WM_SETTEXT,0,(LPARAM)a9);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON9),WM_SETTEXT,0,(LPARAM)a13);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
			if(strcmp((const char*)a10,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON10),WM_SETTEXT,0,(LPARAM)a9);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON9),WM_SETTEXT,0,(LPARAM)a10);
			}
		}
		break;
	case IDC_BUTTON10:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
		if(strcmp((const char*)a10,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
			if(strcmp((const char*)a11,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON10),WM_SETTEXT,0,(LPARAM)a11);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON11),WM_SETTEXT,0,(LPARAM)a10);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
			if(strcmp((const char*)a14,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON14),WM_SETTEXT,0,(LPARAM)a10);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON10),WM_SETTEXT,0,(LPARAM)a14);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
			if(strcmp((const char*)a9,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON10),WM_SETTEXT,0,(LPARAM)a9);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON9),WM_SETTEXT,0,(LPARAM)a10);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
			if(strcmp((const char*)a6,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON6),WM_SETTEXT,0,(LPARAM)a10);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON10),WM_SETTEXT,0,(LPARAM)a6);
			}
		}
		break;
	case IDC_BUTTON11:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
		if(strcmp((const char*)a11,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
			if(strcmp((const char*)a12,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON12),WM_SETTEXT,0,(LPARAM)a11);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON11),WM_SETTEXT,0,(LPARAM)a12);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
			if(strcmp((const char*)a15,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON15),WM_SETTEXT,0,(LPARAM)a11);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON11),WM_SETTEXT,0,(LPARAM)a15);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
			if(strcmp((const char*)a10,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON10),WM_SETTEXT,0,(LPARAM)a11);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON11),WM_SETTEXT,0,(LPARAM)a10);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
			if(strcmp((const char*)a7,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON7),WM_SETTEXT,0,(LPARAM)a11);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON11),WM_SETTEXT,0,(LPARAM)a7);
			}
		}
		break;
	case IDC_BUTTON12:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
		if(strcmp((const char*)a12,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a16,1000);
			if(strcmp((const char*)a16,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON16),WM_SETTEXT,0,(LPARAM)a12);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON12),WM_SETTEXT,0,(LPARAM)a16);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
			if(strcmp((const char*)a11,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON11),WM_SETTEXT,0,(LPARAM)a12);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON12),WM_SETTEXT,0,(LPARAM)a11);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
			if(strcmp((const char*)a8,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON8),WM_SETTEXT,0,(LPARAM)a12);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON12),WM_SETTEXT,0,(LPARAM)a8);
			}
		}
		break;
	case IDC_BUTTON13:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a13,1000);
		if(strcmp((const char*)a13,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
			if(strcmp((const char*)a14,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON13),WM_SETTEXT,0,(LPARAM)a14);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON14),WM_SETTEXT,0,(LPARAM)a13);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
			if(strcmp((const char*)a9,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON13),WM_SETTEXT,0,(LPARAM)a9);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON9),WM_SETTEXT,0,(LPARAM)a13);
			}
		}
		break;
	case IDC_BUTTON14:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
		if(strcmp((const char*)a14,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a13,1000);
			if(strcmp((const char*)a13,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON13),WM_SETTEXT,0,(LPARAM)a14);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON14),WM_SETTEXT,0,(LPARAM)a13);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
			if(strcmp((const char*)a15,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON15),WM_SETTEXT,0,(LPARAM)a14);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON14),WM_SETTEXT,0,(LPARAM)a15);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
			if(strcmp((const char*)a10,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON10),WM_SETTEXT,0,(LPARAM)a14);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON14),WM_SETTEXT,0,(LPARAM)a10);
			}
		}
		break;
	case IDC_BUTTON15:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
		if(strcmp((const char*)a15,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
			if(strcmp((const char*)a14,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON14),WM_SETTEXT,0,(LPARAM)a15);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON15),WM_SETTEXT,0,(LPARAM)a14);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
			if(strcmp((const char*)a11,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON11),WM_SETTEXT,0,(LPARAM)a15);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON15),WM_SETTEXT,0,(LPARAM)a11);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a16,1000);
			if(strcmp((const char*)a16,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON15),WM_SETTEXT,0,(LPARAM)a16);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON16),WM_SETTEXT,0,(LPARAM)a15);
			}
		}
		break;
	case IDC_BUTTON16:
		GetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a16,1000);
		if(strcmp((const char*)a16,(const char*)aCheck)==0)
			Check(hwnd);
		else
		{
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
			if(strcmp((const char*)a15,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON16),WM_SETTEXT,0,(LPARAM)a15);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON15),WM_SETTEXT,0,(LPARAM)a16);
			}
			GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
			if(strcmp((const char*)a12,(const char*)aCheck)==0)
			{
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON12),WM_SETTEXT,0,(LPARAM)a16);
				SendMessage(GetDlgItem(hwnd,IDC_BUTTON16),WM_SETTEXT,0,(LPARAM)a12);
			}
		}
		break;
	case IDC_MIX:
		{
			srand(time(NULL));
			int nap=0,num=16;
			for(int i=0;i<=lvl;i++)
			{
				nap=rand()%4+1;
				switch(nap)
				{
				case 1://up
					if(num==3 || num==4 || num==2 || num==1)
						;
					else
					{
						if(num==16)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a16,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a16);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a12);
						}
						else if(num==15)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a11);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a15);
						}
						else if(num==14)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a10);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a14);
						}
						else if(num==13)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a13,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a9);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a13);
						}
						else if(num==12)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a8);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a12);
						}
						else if(num==11)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a7);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a11);
						}
						else if(num==10)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a6);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a10);
						}
						else if(num==9)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a9);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a5);
						}
						else if(num==8)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a4,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a8);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a4);
						}
						else if(num==7)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a7);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a3);
						}
						else if(num==6)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a6);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a2);
						}
						else if(num==5)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a1,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a5);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a1);
						}
						num-=4;
					}
					break;
				case 2://down
					if(num==13 || num==14 || num==15 || num==16)
						;
					else
					{
						if(num==12)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a16,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a16);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a12);
						}
						else if(num==11)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a11);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a15);
						}
						else if(num==10)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a10);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a14);
						}
						else if(num==9)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a13,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a9);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a13);
						}
						else if(num==8)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a8);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a12);
						}
						else if(num==7)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a7);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a11);
						}
						else if(num==6)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a6);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a10);
						}
						else if(num==5)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a9);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a5);
						}
						else if(num==4)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a4,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a8);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a4);
						}
						else if(num==3)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a7);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a3);
						}
						else if(num==2)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a6);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a2);
						}
						else if(num==1)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a1,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a5);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a1);
						}
						num+=4;
					}
					break;
				case 3://left
					if(num==1 || num==5 || num==9 || num==13)
						;
					else
					{
						if(num==16)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a16,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a15);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a16);
						}
						else if(num==15)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a15);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a14);
						}
						else if(num==14)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a13,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a13);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a14);
						}
						else if(num==12)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a11);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a12);
						}
						else if(num==11)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a10);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a11);
						}
						else if(num==10)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a9);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a10);
						}
						else if(num==8)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a7);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a8);
						}
						else if(num==7)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a6);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a7);
						}
						else if(num==6)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a5);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a6);
						}
						else if(num==4)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a4,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a3);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a4);
						}
						else if(num==3)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a2);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a3);
						}
						else if(num==2)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a1,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a1);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a2);
						}
						num-=1;
					}
					break;
				case 4://right
					if(num==4 || num==8 || num==12 || num==16)
						;
					else
					{
						if(num==15)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a16,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),a15);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a16);
						}
						else if(num==14)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a15,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a15);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),a14);
						}
						else if(num==13)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a13,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a14,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),a14);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),a13);
						}
						else if(num==11)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a12,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a12);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),a11);
						}
						else if(num==10)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a11,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a11);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),a10);
						}
						else if(num==9)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a10,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a9,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),a10);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),a9);
						}
						else if(num==7)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a8,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a8);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),a7);
						}
						else if(num==6)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a7,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a7);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),a6);
						}
						else if(num==5)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a6,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a5,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),a5);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),a6);
						}
						else if(num==3)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a4,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a4);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),a3);
						}
						else if(num==2)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a3,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a3);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),a2);
						}
						else if(num==1)
						{
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a1,1000);
							GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a2,1000);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),a1);
							SetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),a2);
						}
						num+=1;
					}
					break;
				}
			}
			SetTimer(hwnd,1,1000,0);
		}
		break;
	case IDC_LEVEL1:
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL2),BM_SETCHECK,(WPARAM)BST_UNCHECKED,0);
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL3),BM_SETCHECK,(WPARAM)BST_UNCHECKED,0);
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL1),BM_SETCHECK,(WPARAM)BST_CHECKED,0);
		EnableWindow(GetDlgItem(hwnd,IDC_MIX),TRUE);
		lvl=100;
		break;
	case IDC_LEVEL2:
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL1),BM_SETCHECK,(WPARAM)BST_UNCHECKED,0);
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL3),BM_SETCHECK,(WPARAM)BST_UNCHECKED,0);
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL2),BM_SETCHECK,(WPARAM)BST_CHECKED,0);
		EnableWindow(GetDlgItem(hwnd,IDC_MIX),TRUE);
		lvl=200;
		break;
	case IDC_LEVEL3:
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL1),BM_SETCHECK,(WPARAM)BST_UNCHECKED,0);
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL2),BM_SETCHECK,(WPARAM)BST_UNCHECKED,0);
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL3),BM_SETCHECK,(WPARAM)BST_CHECKED,0);
		EnableWindow(GetDlgItem(hwnd,IDC_MIX),TRUE);
		lvl=300;
		break;
	case IDC_NEWGAME:
		EndDialog(hwnd,0);
		KillTimer(hwnd,1);
		i=0;
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL1),BM_SETCHECK,(WPARAM)BST_UNCHECKED,0);
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL2),BM_SETCHECK,(WPARAM)BST_UNCHECKED,0);
		SendMessage(GetDlgItem(hwnd,IDC_LEVEL3),BM_SETCHECK,(WPARAM)BST_UNCHECKED,0);
		EnableWindow(GetDlgItem(hwnd,IDC_MIX),FALSE);
		DialogBox(hInst,MAKEINTRESOURCE(IDD_DIALOG1),0,DlgProc);
		break;
	}
}
/*void Game::Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
	switch(id)
	{
	case IDC_BUTTON1:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON1),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[1].RIGHT==TRUE)
			{
				b[1].LEFT=TRUE;
				b[1].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON1),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[1].LEFT==TRUE)
			{
				b[1].LEFT=FALSE;
				b[1].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON1),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[1].DOWN==TRUE)
			{
				b[1].UP=TRUE;
				b[1].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON1),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[1].UP==TRUE)
			{
				b[1].DOWN=TRUE;
				b[1].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON1),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON2:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON2),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[2].RIGHT==TRUE)
			{
				b[2].LEFT=TRUE;
				b[2].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON2),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[2].LEFT==TRUE)
			{
				b[2].LEFT=FALSE;
				b[2].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON2),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[2].DOWN==TRUE)
			{
				b[2].UP=TRUE;
				b[2].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON2),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[2].UP==TRUE)
			{
				b[2].DOWN=TRUE;
				b[2].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON2),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON3:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON3),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[3].RIGHT==TRUE)
			{
				b[3].LEFT=TRUE;
				b[3].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON3),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[3].LEFT==TRUE)
			{
				b[3].LEFT=FALSE;
				b[3].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON3),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[3].DOWN==TRUE)
			{
				b[3].UP=TRUE;
				b[3].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON3),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[3].UP==TRUE)
			{
				b[3].DOWN=TRUE;
				b[3].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON3),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON4:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON4),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[4].RIGHT==TRUE)
			{
				b[4].LEFT=TRUE;
				b[4].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON4),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[4].LEFT==TRUE)
			{
				b[4].LEFT=FALSE;
				b[4].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON4),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[4].DOWN==TRUE)
			{
				b[4].UP=TRUE;
				b[4].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON4),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[4].UP==TRUE)
			{
				b[4].DOWN=TRUE;
				b[4].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON4),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON5:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON5),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[5].RIGHT==TRUE)
			{
				b[5].LEFT=TRUE;
				b[5].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON5),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[5].LEFT==TRUE)
			{
				b[5].LEFT=FALSE;
				b[5].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON5),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[5].DOWN==TRUE)
			{
				b[5].UP=TRUE;
				b[5].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON5),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[5].UP==TRUE)
			{
				b[5].DOWN=TRUE;
				b[5].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON5),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON6:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON6),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[6].RIGHT==TRUE)
			{
				b[6].LEFT=TRUE;
				b[6].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON6),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[6].LEFT==TRUE)
			{
				b[6].LEFT=FALSE;
				b[6].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON6),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[6].DOWN==TRUE)
			{
				b[6].UP=TRUE;
				b[6].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON6),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[6].UP==TRUE)
			{
				b[6].DOWN=TRUE;
				b[6].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON6),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON7:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON7),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[7].RIGHT==TRUE)
			{
				b[7].LEFT=TRUE;
				b[7].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON7),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[7].LEFT==TRUE)
			{
				b[7].LEFT=FALSE;
				b[7].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON7),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[7].DOWN==TRUE)
			{
				b[7].UP=TRUE;
				b[7].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON7),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[7].UP==TRUE)
			{
				b[7].DOWN=TRUE;
				b[7].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON7),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON8:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON8),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[8].RIGHT==TRUE)
			{
				b[8].LEFT=TRUE;
				b[8].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON8),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[8].LEFT==TRUE)
			{
				b[8].LEFT=FALSE;
				b[8].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON8),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[8].DOWN==TRUE)
			{
				b[8].UP=TRUE;
				b[8].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON8),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[8].UP==TRUE)
			{
				b[8].DOWN=TRUE;
				b[8].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON8),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON9:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON9),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[9].RIGHT==TRUE)
			{
				b[9].LEFT=TRUE;
				b[9].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON9),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[9].LEFT==TRUE)
			{
				b[9].LEFT=FALSE;
				b[9].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON9),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[9].DOWN==TRUE)
			{
				b[9].UP=TRUE;
				b[9].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON9),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[9].UP==TRUE)
			{
				b[9].DOWN=TRUE;
				b[9].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON9),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON10:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON10),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[10].RIGHT==TRUE)
			{
				b[10].LEFT=TRUE;
				b[10].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON10),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[10].LEFT==TRUE)
			{
				b[10].LEFT=FALSE;
				b[10].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON10),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[10].DOWN==TRUE)
			{
				b[10].UP=TRUE;
				b[10].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON10),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[10].UP==TRUE)
			{
				b[10].DOWN=TRUE;
				b[10].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON10),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON11:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON11),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[11].RIGHT==TRUE)
			{
				b[11].LEFT=TRUE;
				b[11].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON11),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[11].LEFT==TRUE)
			{
				b[11].LEFT=FALSE;
				b[11].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON11),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[11].DOWN==TRUE)
			{
				b[11].UP=TRUE;
				b[11].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON11),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[11].UP==TRUE)
			{
				b[11].DOWN=TRUE;
				b[11].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON11),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON12:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON12),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[12].RIGHT==TRUE)
			{
				b[12].LEFT=TRUE;
				b[12].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON12),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[12].LEFT==TRUE)
			{
				b[12].LEFT=FALSE;
				b[12].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON12),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[12].DOWN==TRUE)
			{
				b[12].UP=TRUE;
				b[12].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON12),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[12].UP==TRUE)
			{
				b[12].DOWN=TRUE;
				b[12].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON12),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON13:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON13),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[13].RIGHT==TRUE)
			{
				b[13].LEFT=TRUE;
				b[13].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON13),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[13].LEFT==TRUE)
			{
				b[13].LEFT=FALSE;
				b[13].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON13),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[13].DOWN==TRUE)
			{
				b[13].UP=TRUE;
				b[13].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON13),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[13].UP==TRUE)
			{
				b[13].DOWN=TRUE;
				b[13].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON13),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON14:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON14),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[14].RIGHT==TRUE)
			{
				b[14].LEFT=TRUE;
				b[14].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON14),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[14].LEFT==TRUE)
			{
				b[14].LEFT=FALSE;
				b[14].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON14),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[14].DOWN==TRUE)
			{
				b[14].UP=TRUE;
				b[14].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON14),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[14].UP==TRUE)
			{
				b[14].DOWN=TRUE;
				b[14].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON14),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
	case IDC_BUTTON15:
		{
			int x=0,y=0;
			RECT r;
			GetWindowRect(GetDlgItem(hwnd,IDC_BUTTON15),&r);
			POINT p;
			p.x=r.left;
			p.y=r.top;
			ScreenToClient(hwnd,&p);
			if(b[15].RIGHT==TRUE)
			{
				b[15].LEFT=TRUE;
				b[15].RIGHT=FALSE;
				x+=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON15),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[15].LEFT==TRUE)
			{
				b[15].LEFT=FALSE;
				b[15].RIGHT=TRUE;
				x-=75;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON15),p.x+x,p.y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[15].DOWN==TRUE)
			{
				b[15].UP=TRUE;
				b[15].DOWN=FALSE;
				y+=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON15),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
			if(b[15].UP==TRUE)
			{
				b[15].DOWN=TRUE;
				b[15].UP=FALSE;
				y-=62;
				MoveWindow(GetDlgItem(hwnd,IDC_BUTTON15),p.x,p.y+y,r.right-r.left,r.bottom-r.top,true);
				break;
			}
		}break;
		default:
			;
	}
}*/
void Game::Cls_OnTimer(HWND hwnd, UINT id)
{
	switch(id)
	{
	case 1:
		++i;
		WCHAR c[10000];
		itoa(i,(char*)c,10);
		SetDlgItemTextA(hwnd,IDC_EDIT1,(LPCSTR)c);
		/*SendMessage(GetDlgItem(hwnd,IDC_EDIT1),EM_SETSEL,0,10000);
		SendMessage(GetDlgItem(hwnd,IDC_EDIT1),WM_CLEAR,0,0);
		SendMessage(GetDlgItem(hwnd,IDC_EDIT1),WM_PASTE,0,0);*/
	}
}
BOOL Game::Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam)
{

	return TRUE;
}
void Game::Check(HWND hwnd)
{
	WCHAR t10[1000]=L"10";
	WCHAR t11[1000]=L"11";
	WCHAR t12[1000]=L"12";
	WCHAR t13[1000]=L"13";
	WCHAR t14[1000]=L"14";
	WCHAR t15[1000]=L"15";
	WCHAR t16[1000]=L"ПУСТО";
	WCHAR c1[1000];
	WCHAR c2[1000];
	WCHAR c3[1000];
	WCHAR c4[1000];
	WCHAR c5[1000];
	WCHAR c6[1000];
	WCHAR c7[1000];
	WCHAR c8[1000];
	WCHAR c9[1000];
	WCHAR c10[1000];
	WCHAR c11[1000];
	WCHAR c12[1000];
	WCHAR c13[1000];
	WCHAR c14[1000];
	WCHAR c15[1000];
	WCHAR c16[1000];
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON1),c1,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON2),c2,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON3),c3,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON4),c4,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON5),c5,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON6),c6,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON7),c7,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON8),c8,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON9),c9,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON10),c10,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON11),c11,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON12),c12,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON13),c13,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON14),c14,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON15),c15,1000);
	GetWindowText(GetDlgItem(hwnd,IDC_BUTTON16),c16,1000);
	if(strcmp((const char*)c1,"1")==0 && strcmp((const char*)c2,"2")==0 && strcmp((const char*)c3,"3")==0 && strcmp((const char*)c4,"4")==0 && strcmp((const char*)c5,"5")==0 && strcmp((const char*)c6,"6")==0 && strcmp((const char*)c7,"7")==0 && strcmp((const char*)c8,"8")==0 && strcmp((const char*)c9,"9")==0 && strcmp((const char*)c10,(const char*)t10)==0 && strcmp((const char*)c11,(const char*)t11)==0 && strcmp((const char*)c12,(const char*)t12)==0 && strcmp((const char*)c13,(const char*)t13)==0 && strcmp((const char*)c14,(const char*)t14)==0 && strcmp((const char*)c15,(const char*)t15)==0 && strcmp((const char*)c16,(const char*)t16)==0)
	{
		if(i>=1)
		{
			KillTimer(hwnd,1);
			MessageBox(hwnd,L"Собрано",L"Собрано",MB_OK);
			FILE *f=fopen("file1.txt","a");
			char c[10000];
			itoa(i,c,10);
			fprintf(f,c);
			fprintf(f,"\n");
			fclose(f);
			EndDialog(hwnd,0);
		}
	}
	else
		MessageBox(hwnd,L"Не cобрано",L"Не собрано",MB_OK);
}