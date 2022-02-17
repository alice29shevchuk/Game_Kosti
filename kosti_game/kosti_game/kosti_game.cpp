#include <iostream>
#include"c_Game.h"
int main()
{
    srand(time(0));
    setlocale(0, "");
    Kost_A a;
    Kost_B b;
    Human h;
    char c;
    int v;
    c_Game game;
    cout << "\t\t\t\t\t\t\tИГРА С БОТОМ!\n";
    do
    {
        cout << "Menu\n";
        cout << "1 - Vibros\n";
        cout << "Enter vour kost: ";
        cin >> v;
        switch (v)
        {
        case 1:
            system("cls");
            game.Brosok('A');
            system("pause");
            system("cls");
            break;
        }
    } while (v != 0);
}
