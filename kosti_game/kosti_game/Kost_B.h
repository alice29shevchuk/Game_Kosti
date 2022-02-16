#pragma once
#include"Kost.h"
#include<iostream>
class Kost_B :public Kost
{
	int b;
public:
	Kost_B()
	{
		this->b = 1 + rand() % 6;
	}
	void Print() override
	{
		cout << this->b;
	}
	int getB()
	{
		return this->b;
	}
};
