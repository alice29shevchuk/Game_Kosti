#pragma once
#include<iostream>
#include"Human.h"
#include"Kost.h"
#include"Kost_A.h"
#include"Kost_B.h"
class c_Game
{
	Kost_A* k_a;
	Kost_B* k_b;
	Human h;
public:
	c_Game(){}
	void Brosok(const char v)
	{
		if (v == 'A' || v == 'a')
		{
			k_a = new Kost_A();
			k_b = new Kost_B();
			std::cout << "У вас выпало: ";
			h.Print(k_a);
			std::cout << "\nБот выкинул: ";
			k_b->Print();
			if (k_a->getA() > k_b->getB())
			{
				std::cout << "\nA - Winer\n";
			}
			else if(k_a->getA() < k_b->getB())
			{
				std::cout << "\nB - Winer\n";
			}
			else
			{
				std::cout << "\nDraw\n";
			}
		}
		else
		{
			k_a = new Kost_A();
			k_b = new Kost_B();
			std::cout << "У вас выпало: ";
			h.Print(k_b);
			std::cout << "\nБот выкинул: ";
			k_a->Print();
			if (k_a->getA() > k_b->getB())
			{
				std::cout << "\nB - Winer\n";
			}
			else if (k_a->getA() < k_b->getB())
			{
				std::cout << "\nA - Winer\n";
			}
			else
			{
				std::cout << "\nDraw\n";
			}
		}
	}
};
