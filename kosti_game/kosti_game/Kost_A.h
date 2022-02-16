#pragma once
#include"Kost.h"
#include<iostream>
class Kost_A:public Kost
{
	int a;
public:
	Kost_A()
	{
		this->a = 1 + rand() % 6;
	}
	void Print() override
	{
		cout << this->a;
	}
	int getA()
	{
		return this->a;
	}
};

