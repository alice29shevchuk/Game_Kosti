#include <iostream>
#include"Kost.h"
#include"Kost_A.h"
#include"Kost_B.h"
#include"Human.h"
int main()
{
    srand(time(0));
    setlocale(0, "");
    Kost_A a;
    Kost_B b;
    Human h;
    char c;
    cout << "\t\t\t\t\t\t\tИГРА С БОТОМ!\n";
    do
    {
        cout << "Выберите кость A или B: ";
        cin >> c;
        if (c == 'A' || c == 'a')
        {
            cout << "У вас выпало: ";
            h.Print(a);
            cout << "\nБот выкинул: ";
            b.Print();
            cout << "\n";
            if (a.getA() > b.getB())
            {
                cout << "Вы выиграли!\n";
                system("pause");
                system("cls");
            }
            else if (a.getA() < b.getB())
            {
                cout << "Вы проиграли!\n";
                system("pause");
                system("cls");
            }
            else
            {
                cout << "Ничья!\n";
                system("pause");
                system("cls");
            }
        }
        else
        {
            cout << "У вас выпало: ";
            h.Print(b);
            cout << "\nБот выкинул: ";
            a.Print();
            cout << "\n";
            if (b.getB() > a.getA())
            {
                cout << "Вы выиграли!\n";
                system("pause");
                system("cls");
            }
            else if (b.getB() < a.getA())
            {
                cout << "Вы проиграли!\n";
                system("pause");
                system("cls");
            }
            else
            {
                cout << "Ничья!\n";
                system("pause");
                system("cls");
            }
        }
    } while (c != 0);
}

