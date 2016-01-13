//#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

HDC Okno;
HWND okno = GetDesktopWindow();

struct Zakres
{
    int a;
    int b;
};

int setposition(POINT pos[]);
bool unlock(POINT pos[], int pix);
bool Odczyt(string &);

inline void click(POINT pos)//clicking buttons
{
    SetCursorPos(pos.x, pos.y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    Sleep(30);
}
inline void click_key()//pressing e
{
    keybd_event(0x45, 0, 0, 0);
    keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0);
    Sleep(50);
}


int main()
{
    Okno = GetDC(okno);
    srand(time(NULL));
    POINT position[11];
    int choice;
    int pix;
    cout << "Code Lock Bot \n";
    cout << "Menu: \n";
    cout << "1.Set Position \n";
    cout << "2.Unlock \n";
    while (cin >> choice)//menu
    {
        switch (choice)
        {
        case 1:
            cin.get();
            pix=setposition(position);
            break;
        case 2:
            system("CLS");
            if (unlock(position, pix))
                cout << "The correct output\n";
            cin.get();
            break;
        default:
            cout << "There is no such option , press ENTER\n";
            cin.get();
            cin.get();
            break;
        }
        system("CLS");
        cout << "Code Lock Bot \n";
        cout << "Menu: \n";
        cout << "1.Set Position \n";
        cout << "2.Unlock \n";
    }

    return 0;
}

int setposition(POINT pos[])//position of keys
{
    system("CLS");
    for (int i = 0; i < 10; i++)
    {
        cout << "Press enter to enter code lock position button " << i << endl;
        cin.get();
        GetCursorPos(&pos[i]);//adjust the position of keys
        cout << pos[i].x << endl;
        cout << pos[i].y << endl;
    }
    cout << "Press enter to enter code lock position" << endl;
    GetCursorPos(&pos[10]);
    cin.get();
    int pixel = GetPixel(Okno, pos[10].x, pos[10].y);//download the pixel
    return pixel;
}

bool unlock(POINT pos[], int pix)//brute force
{
    cout << "You have 5 sec to join to the game\n";
    cout << "If you want exit press ESC\n";
    cin.get();

    for (int i = 0; i < 5; i++)
    {
        system("CLS");
        cout << i << endl;
        Sleep(1000);
    }
    while (GetAsyncKeyState(0x1B) == false)
    {
        Sleep(50);
        int j = ((rand() % 9) + 0);
        Sleep(20);
        int k = ((rand() % 9) + 0);
        Sleep(20);
        int l = ((rand() % 9) + 0);
        Sleep(20);
        int m = ((rand() % 9) + 0);
        Sleep(100);
        string str = to_string(j);//save combination to string
        str += to_string(k);
        str += to_string(l);
        str += to_string(m);
        Sleep(50);
        if (Odczyt(str) == false)
            continue;
        else
        {
            Sleep(100);
            if (pix == GetPixel(Okno, pos[10].x, pos[10].y))
            {
                Sleep(50);
                click(pos[j]);
                Sleep(50);
                click(pos[k]);
                Sleep(50);
                click(pos[l]);
                Sleep(50);
                click(pos[m]);
                Sleep(50);
                cout << j << k << l << m << endl;
                Sleep(50);
            }
            else
            {
                Sleep(50);
                click_key();
            }

            fstream plik;
            plik.open("code.txt", ios::in | ios::out | ios::app);//open file
            str += "\n";
            plik << str;
            plik.close();//close file

            Sleep(200);
        }
    }
    return true;
}

bool Odczyt(string & str)
{
    fstream plik;
    plik.open("code.txt", ios::in | ios::out | ios::app);//open file

    if (plik.good() == true)
    {
        while (!plik.eof())  // check text
        {
            int nr_wiersza = 0;
            string wiersz;

            getline(plik, wiersz);
            nr_wiersza++;
            if (str == wiersz)
            {
                cout << "To już mam\n";
                plik.close();//close file
                return false;
            }
        }
        plik.close();//close file
        return true;
    }
    else
    {
        std::cout << "You haven't acces to file!" << std::endl;
        plik.close();//close file
        return false;
    }
}
