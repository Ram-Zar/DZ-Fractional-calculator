#pragma once
#include "Fraction.h"
#include <iostream>
#include <cmath>
using namespace std;
class Calculator
{
	Fraction f1;
	Fraction f2;
	int _div_(short x, short buff[])
	{
		int i = 0;
		if (x % 2 == 0)
		{
			buff[i] = 2;
			++i;
		}
		if (x % 3 == 0)
		{
			buff[i] = 3;
			++i;
		}
		return i;
	}
public:

	Calculator()
	{}
	Calculator(long n1, short d1, long n2, short d2)
	{
		f1.SetFraction(n1, d1);
		f2.SetFraction(n2, d2);
	}
	Calculator(Fraction &f, Fraction &g)
	{
		f1.m_main =move(f.m_main);
		f1.m_frac = move(f.m_frac);
		f2.m_main = move(g.m_main);
		f2.m_frac = move(g.m_frac);
	}
	Fraction Get_f1()
	{
		return f1;
	}
	Fraction Get_f2()
	{
		return f2;
	}
	Fraction f1_Plus_f2()
	{
		return f1 + f2;
	}
	Fraction f1_Minus_f2()
	{
		return f1 - f2;
	}
	Fraction f1_Multiply_f2()
	{
		return f1 * f2;
	}
	Fraction f1_Divide_f2();
	Fraction f1_Pow(Fraction& pow);
	Fraction f2_Pow(Fraction& pow);
};

