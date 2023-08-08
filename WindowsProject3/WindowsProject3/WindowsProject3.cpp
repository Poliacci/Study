// WindowsProject3.cpp : Определяет точку входа для приложения.
//
#include <iostream>
#include <Windows.h>
#include<direct.h>
#include <comdef.h> 
#include <shlobj_core.h>
#include <fileapi.h>
#include <winbase.h>
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <direct.h>
#include <windows.h>
//
#include "framework.h"
#include "WindowsProject3.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
int p = 0;
int i = 1;


using namespace std;

HINSTANCE hInst; //ТЕКУЩИЙ ЭКЗЕМПЛЯР

WCHAR szTitle[MAX_LOADSTRING]; // ТЕКСТ ЗАГОЛОВКА

WCHAR szWindowClass[MAX_LOADSTRING];// ИМЯ КЛАССА ГЛАВНОГО ОКНА

HWND h1, h2, h3, h4;

// Отправить объявления функций, включенных в этот модуль кода:

INT_PTR CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR    lpCmdLine, _In_ int nCmdShow) 
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	int qwe = 123;

	HWND asd = (HWND)qwe;

	DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), 0, DlgProc);

	return 0;

}

BOOL CALLBACK EnumChildProc(HWND hWnd, LPARAM lParam);

BOOL CALLBACK EnumChildProc(HWND hWnd, LPARAM lParam)
{
	int m = 0;
	BOOL redir;
	BOOL h;
	int hh;
	WCHAR E[1000];
	WCHAR EE[1000];
	WCHAR c[1000];
	int L = 10000;
	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"CHILD_____________________________________________________________________________");

	SetDlgItemInt(hWnd, IDC_EDIT8, L, NULL);

	p++;

	SetDlgItemInt(hWnd, IDC_EDIT6, m, NULL);

	GetWindowText(hWnd, E, 1000);
	GetClassName(hWnd, EE, 1000);

	hh = (int)hWnd;

	SetDlgItemInt(hWnd, IDC_EDIT13, hh, NULL);
	GetDlgItemText(hWnd, IDC_EDIT13, c, 1000);

	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^HWND       Окна");
	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)c);
	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^CLASS       Окна");
	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)EE);
	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^TEXT       Окна");
	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)E);
	SetDlgItemInt(hWnd, IDC_EDIT13, m, NULL);
	GetDlgItemText(hWnd, IDC_EDIT13, c, 1000);
	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^NUMBER M       Окна");
	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)c);

	SendDlgItemMessage(hWnd, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"CHILD_____________________________________________________________________________");
	return TRUE;
}



BOOL CALLBACK EnumWndowsProc(HWND hWnd, LPARAM lParam);

BOOL CALLBACK EnumWndowsProc(HWND hWnd, LPARAM lParam)
{
	LRESULT fdsfdsfsf = SendDlgItemMessage(hWnd, IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)L"fdfdfd");
	return TRUE;
}

void Destroy(HWND H)
{
	bool redir;
	redir = DestroyWindow(H);
	DestroyWindow(H);

	if (redir == false)
	{
		MessageBox(NULL, L"Ошибка удаления окна", L"Информация", MB_OK);
	}
	else
	{
		MessageBox(NULL, L"Окно 1 успешно удалено", L"Информация", MB_OK);
		
	}

}

void Move(HWND H, int o1, int o2, int o3, int o4)
{
	bool redir;
	redir = MoveWindow(H, o1, o2, o3, o4, TRUE);

	if (redir == false)
	{
		MessageBox(NULL, L"Ошибка перемещения окна", L"Информация", MB_OK);
	}
}

void Par(HWND H, HWND hDlg)
{
	SetDlgItemInt(hDlg, IDC_EDIT6, i, NULL);
	int o = GetDlgItemInt(hDlg, IDC_EDIT1, NULL, NULL);
	int m = 0;
	BOOL r;
	BOOL h;
	WCHAR E[1000];
	WCHAR EE[1000];
	WCHAR PR[1000];
	int HH;
	LPCSTR W;

	GetWindowText(H, E, 1000);
	GetClassName(H, EE, 1000);
	SendDlgItemMessage(hDlg, IDC_LIST2, LB_ADDSTRING, 0, (LPARAM)E); 
	SendDlgItemMessage(hDlg, IDC_LIST3, LB_ADDSTRING, 0, (LPARAM)EE); 

	RECT rect;
	if (GetWindowRect(H, &rect))
	{
		int w = rect.right - rect.left;
		int h = rect.bottom - rect.top;
		int x = rect.left;
		int y = rect.top;
		SetDlgItemInt(hDlg, IDC_EDIT7, w, NULL);
		SetDlgItemInt(hDlg, IDC_EDIT8, h, NULL);
		SetDlgItemInt(hDlg, IDC_EDIT9, x, NULL);
		SetDlgItemInt(hDlg, IDC_EDIT10, y, NULL);
	}

	HWND PP = GetWindow(H, GW_OWNER);
	HH = (int)PP;
	SetDlgItemInt(hDlg, IDC_EDIT13, HH, NULL);
	GetDlgItemText(hDlg, IDC_EDIT13, PR, 1000);
	SendDlgItemMessage(hDlg, IDC_LIST4, LB_ADDSTRING, 0, (LPARAM)PR);
	SetDlgItemInt(hDlg, IDC_EDIT6, o, NULL);

}


INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}


		if (LOWORD(wParam) == IDC_BUTTON1)
		{
			WCHAR E[1000];
			HWND H;
			GetDlgItemText(hDlg, IDC_EDIT1, E, 1000);
			H = CreateWindow(TEXT("LISTBOX"), E, WS_VISIBLE, 50, 50, 500, 500, NULL, NULL, NULL, NULL);
			
			ShowWindow(H, 1);
			UpdateWindow(H);
			i++;
			if (!H)
			{
				MessageBox(NULL, L"Ошибка создания окна", L"Информация", MB_OK);
			}
			else
			{
				MessageBox(NULL, L"Окно успешно создано", L"Информация", MB_OK);
				
			}
			int o = (int)H;
			WCHAR c[1000];
			
			SetDlgItemInt(hDlg, IDC_EDIT6, o, NULL);
			GetDlgItemText(hDlg, IDC_EDIT6, c, 1000);
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)L"");
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^HWND");
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)c);
			
			return (INT_PTR)TRUE;
		}



		if (LOWORD(wParam) == IDC_BUTTON2)
		{
			BOOL redir;
			WCHAR re_name[1000];
			GetDlgItemText(hDlg, IDC_EDIT1, re_name, 1000);
			int o = GetDlgItemInt(hDlg, IDC_EDIT1, NULL, NULL); 
			HWND H = (HWND)o;
			Destroy(H);

			redir = DestroyWindow(H);
			DestroyWindow(H);
			
			if (redir == false)
			{
				MessageBox(NULL, L"Ошибка удаления окна", L"Информация", MB_OK);
			}
			else
			{
				MessageBox(NULL, L"Окно 1 успешно удалено", L"Информация", MB_OK);
				
			}
			int hh = (int)H;
			WCHAR c[1000];
			WCHAR P[1000] = L"HWND: ";

			SetDlgItemInt(hDlg, IDC_EDIT6, hh, NULL);
			GetDlgItemText(hDlg, IDC_EDIT6, c, 1000);

			SendDlgItemMessage(hDlg, IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)L"");
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^HWND УДАЛЁН");
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)c);
			return (INT_PTR)TRUE;

		}

	
		
		if (LOWORD(wParam) == IDC_BUTTON3)
		{
			EnumWindows(EnumWndowsProc, NULL);
			if (EnumWindows(EnumWndowsProc, NULL))
			{
				MessageBox(NULL, L"Все окна", L"Информация", MB_OK);
			}
			else
			{
				MessageBox(NULL, L"Ошибка", L"Информация", MB_OK);
			}
		}

		if (LOWORD(wParam) == IDC_BUTTON4)
		{
			BOOL redir;
			WCHAR re_name[1000];
			GetDlgItemText(hDlg, IDC_EDIT1, re_name, 1000); 
			int o = GetDlgItemInt(hDlg, IDC_EDIT1, NULL, NULL); 
			int o1 = GetDlgItemInt(hDlg, IDC_EDIT2, NULL, NULL); 
			int o2 = GetDlgItemInt(hDlg, IDC_EDIT3, NULL, NULL); 
			int o3 = GetDlgItemInt(hDlg, IDC_EDIT4, NULL, NULL); 
			int o4 = GetDlgItemInt(hDlg, IDC_EDIT5, NULL, NULL); 
			HWND H = (HWND)o;
			Move(H, o1, o2, o3, o4);

			return (INT_PTR)TRUE;
		} //WS_OVERLAPPEDWINDOW

		if (LOWORD(wParam) == IDC_BUTTON5)
		{
			WCHAR E[1000];
			WCHAR D[1000];
			int o = GetDlgItemInt(hDlg, IDC_EDIT6, NULL, NULL);
			GetDlgItemText(hDlg, IDC_EDIT1, E, 1000);
			GetDlgItemText(hDlg, IDC_EDIT6, D, 1000);
			HWND Hh = (HWND)o;
			HWND H = CreateWindow(TEXT("LISTBOX"), E, WS_VISIBLE, 50, 50, 300, 300, Hh, NULL, NULL, NULL); // BUTTON  //TEXT("STATIC") // || WS_CLIPCHILDREN  && WS_BORDER && WS_CLIPCHILDREN


			int h = (int)H;
			int hh = (int)Hh;
			WCHAR c[1000];
			WCHAR C[1000];
			WCHAR P[1000] = L"HWND: ";
			WCHAR PP[1000] = L"HWND РОДИТЕЛЯ: ";

			SetDlgItemInt(hDlg, IDC_EDIT6, h, NULL);
			GetDlgItemText(hDlg, IDC_EDIT6, c, 1000);
			
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)L"");
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^HWND       +");
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)c);

			SetDlgItemInt(hDlg, IDC_EDIT6, hh, NULL);
			GetDlgItemText(hDlg, IDC_EDIT6, C, 1000);
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^HWNDРодителя       +");
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)C);
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)L"");

			return (INT_PTR)TRUE;
		}


		if (LOWORD(wParam) == IDC_BUTTON6)
		{
			int o = GetDlgItemInt(hDlg, IDC_EDIT1, NULL, NULL); 
			int m = 0;
			BOOL redir;
			BOOL h;
			int hh;
			WCHAR E[1000];
			WCHAR EE[1000];
			WCHAR c[1000];
			int L = 10000;
			GetDlgItemText(hDlg, IDC_EDIT1, E, 1000);

			HWND G = GetWindow(hDlg, 0); //6  HWND G = GetWindow(hDlg, 0) //0 = GW_HWNDFIRST// 6 = GW_ENABLEDPOPUP
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"_____________________________________________________________________________");
			while (G) //while (G != hDlg) //while (G) //
			{
				
				m++;
				SetDlgItemInt(hDlg, IDC_EDIT6, m, NULL);

				GetWindowText(G, E, 1000);
				GetClassName(G, EE, 1000);

				hh = (int)G;
				
				SetDlgItemInt(hDlg, IDC_EDIT13, hh, NULL);
				GetDlgItemText(hDlg, IDC_EDIT13, c, 1000);

				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^HWND       Окна");
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)c);
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^CLASS       Окна");
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)EE);
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^TEXT       Окна");
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)E);
				SetDlgItemInt(hDlg, IDC_EDIT13, m, NULL);
				GetDlgItemText(hDlg, IDC_EDIT13, c, 1000);
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^NUMBER M       Окна");
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)c);

				HWND GG = GetWindow(G, 2);  // 2 = GW_HWNDNEXT
				G = GG;
				
			}
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"_____________________________________________________________________________");
			return (INT_PTR)TRUE;

		}

		if (LOWORD(wParam) == IDC_BUTTON7)
		{
			int o = GetDlgItemInt(hDlg, IDC_EDIT1, NULL, NULL); //EDIT (2)
			int m = 0;
			BOOL redir;
			BOOL h;
			int hh;
			WCHAR E[1000];
			WCHAR EE[1000];
			WCHAR c[1000];
			int L = 10000;
			HWND H = (HWND)o;


			GetDlgItemText(hDlg, IDC_EDIT1, E, 1000);
			HWND N = (HWND)o;
			HWND G = GetWindow(N, 6); //6  HWND G = GetWindow(hDlg, 0) //0 = GW_HWNDFIRST// 6 = GW_ENABLEDPOPUP // 5 = GW_CHILD
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"CHILD_____________________________________________________________________________");
			L = (int)G;
			SetDlgItemInt(hDlg, IDC_EDIT8, L, NULL);
			while ((G != N)&&(G != 0)) //while (G != hDlg)
			{
				m++;
				SetDlgItemInt(hDlg, IDC_EDIT6, m, NULL);

				GetWindowText(G, E, 1000);
				GetClassName(G, EE, 1000);

				hh = (int)G;

				SetDlgItemInt(hDlg, IDC_EDIT13, hh, NULL);
				GetDlgItemText(hDlg, IDC_EDIT13, c, 1000);

				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^HWND       Окна");
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)c);
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^CLASS       Окна");
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)EE);
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^TEXT       Окна");
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)E);
				SetDlgItemInt(hDlg, IDC_EDIT13, m, NULL);
				GetDlgItemText(hDlg, IDC_EDIT13, c, 1000);
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^NUMBER M       Окна");
				SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)c);

				HWND GG = GetWindow(G, 2);  // 2 = GW_HWNDNEXT
				G = GG;
				if (m >= 100)
				{
					MessageBox(NULL, L"Ошибка! У данного окна нет наследников!", L"Информация", MB_OK);
					break;
				}
				
			}
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"CHILD_____________________________________________________________________________");
			return (INT_PTR)TRUE;
		}

		
		if (LOWORD(wParam) == IDC_BUTTON8)
		{
			int o = GetDlgItemInt(hDlg, IDC_EDIT1, NULL, NULL);
			WCHAR E[1000];
			WCHAR EE[1000];
			GetDlgItemText(hDlg, IDC_EDIT1, E, 1000);

			HWND G = GetWindow(hDlg, 6); //6  HWND G = GetWindow(hDlg, 0) //0 = GW_HWNDFIRST// 6 = GW_ENABLEDPOPUP
			while (G) //while (G != hDlg)
			{
			
				GetWindowText(G, EE, 1000);
				
				if (E == EE)
				{
					Par(G, hDlg);
					break;
				}
				HWND GG = GetWindow(G, 2);  // 2 = GW_HWNDNEXT
				G = GG;

			}
			int count = SendMessage(hDlg, LB_GETCOUNT, 0, 0);

			int iSelected = -1;

			// go through the items and find the first selected one
			/*for (int i = 0; i < count; i++)
			{
				// check if this item is selected or not..
				if (SendMessage(hDlg, LB_GETSEL, i, 0) = LB_ERR)
				{
					// yes, we only want the first selected so break.
					iSelected = i;
					break;
				}

			}*/

			return (INT_PTR)TRUE;
		}


		if (LOWORD(wParam) == IDC_BUTTON9)
		{
			SetDlgItemInt(hDlg, IDC_EDIT6, i, NULL);
			int o = GetDlgItemInt(hDlg, IDC_EDIT1, NULL, NULL); //EDIT (2)
			int m = 0;
			BOOL r;
			BOOL h;
			WCHAR E[1000];
			WCHAR EE[1000];
			LPCSTR W;
			GetDlgItemText(hDlg, IDC_EDIT1, E, 1000);
			HWND H = (HWND)o;
			Par(H, hDlg);

			return (INT_PTR)TRUE;
		}
		
		

		if (LOWORD(wParam) == IDC_BUTTON10)
		{
			int o = GetDlgItemInt(hDlg, IDC_EDIT1, NULL, NULL);
			HWND H = (HWND)o;
			BringWindowToTop(H);
			return (INT_PTR)TRUE;
		}

		
		if (LOWORD(wParam) == IDC_BUTTON11)
		{
			int o = GetDlgItemInt(hDlg, IDC_EDIT1, NULL, NULL); 
			HWND H = (HWND)o;
			WCHAR TEST[1000];
			
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_SETSEL, 0, (LPARAM)TEST);
			SendMessage(hDlg, LB_GETSEL, (WPARAM)TEST, 0);

			int ooo = GetDlgItemInt(hDlg, IDC_LIST1, NULL, NULL);


			HWND N;

			int c = GetDlgItemInt(hDlg, IDC_EDIT13, NULL, NULL);
			BOOL redir;
			WCHAR E[1000];
			WCHAR EE[1000];
			WCHAR T[1000];
			GetDlgItemText(hDlg, IDC_EDIT11, E, 1000);
			GetDlgItemText(hDlg, IDC_EDIT12, EE, 1000);

			int n = GetDlgItemInt(hDlg, IDC_EDIT13, NULL, NULL);
			if (n == 0)
			{
				N = (HWND)n;
			}
			else
			{
				N = NULL;
			}
			

			int x = GetDlgItemInt(hDlg, IDC_EDIT9, NULL, NULL); 
			int y = GetDlgItemInt(hDlg, IDC_EDIT10, NULL, NULL); 
			int w = GetDlgItemInt(hDlg, IDC_EDIT7, NULL, NULL); 
			int h = GetDlgItemInt(hDlg, IDC_EDIT8, NULL, NULL); 

			
			DestroyWindow(H);
			H = CreateWindow(EE, E, WS_VISIBLE, x, y, w, h, N, NULL, NULL, NULL);
			int u = (int)H;
			SetDlgItemInt(hDlg, IDC_EDIT6, u, NULL);
			GetDlgItemText(hDlg, IDC_EDIT6, T, 1000);

			SendDlgItemMessage(hDlg, IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)L"");
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)L"^HWND изменён");
			SendDlgItemMessage(hDlg, IDC_LIST1, LB_INSERTSTRING, 0, (LPARAM)T);
			Par(H, hDlg);

			return (INT_PTR)TRUE;

		}

	}
	return (INT_PTR)FALSE;
}