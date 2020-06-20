#include "Calculator.h"
Fraction Calculator::f1_Divide_f2()
{
	if (f2.m_frac == 0)
	{
		throw std::exception("Zero divizion!!!");
	}
	return f1 / f2;
}
Fraction Calculator::f1_Pow(Fraction& pow)
{
	Fraction temp(1, 1);
	double d = f1.m_frac, n = f1.m_main;
	short buff[4];
	if (pow.m_frac != 1)
	{
		int k = _div_(pow.m_frac, buff);
		for (int i = 0; i < k; ++i)
		{
			for (int j = 0; j < pow.m_frac / buff[i]; ++j)
			{
				if (buff[i] == 2)
				{
					if (f1.m_main < 0)
					{
						throw exception("\nОтрицательное число под корнем чётной степени!!");
					}
					n = sqrt(n);
					d = sqrt(d);
				}
				if (buff[i] == 3)
				{
					n = cbrt(n);
					d = cbrt(d);
				}
			}
		}
		double c;
		if ((modf(n, &c) != 0) || (modf(d, &c) != 0))
		{
			for (int i = 0; i < fabs(pow.m_main / pow.m_frac); ++i)
			{
				n *= f1.m_main;
				d *= f1.m_frac;
			}
			if (pow.m_main < 0)
			{
				throw 1 / n / d;
			}
			throw n / d;
		}
		else
		{
			temp.SetFraction(long(n), short(d));
		}
	}
	for (int i = 0; i < fabs(pow.m_main / pow.m_frac); ++i)
	{
		temp = temp * f1;
	}
	if (pow.m_main < 0)
	{
		temp = 1 / temp;
	} 
	temp.cut();
	return temp;
}
Fraction Calculator::f2_Pow(Fraction& pow)
{
	Fraction temp(1, 1);
	double d = f2.m_frac, n = f2.m_main;
	short buff[4];
	if (pow.m_frac != 1)
	{
		int k = _div_(pow.m_frac, buff);
		for (int i = 0; i < k; ++i)
		{
			for (int j = 0; j < pow.m_frac / buff[i]; ++j)
			{
				if (buff[i] == 2)
				{
					if (f2.m_main < 0)
					{
						throw exception("\nОтрицательное число под корнем чётной степени!!");
					}
					n = sqrt(n);
					d = sqrt(d);
				}
				if (buff[i] == 3)
				{
					n = cbrt(n);
					d = cbrt(d);
				}
			}
		}
		double c;
		if ((modf(n, &c) != 0) || (modf(d, &c) != 0))
		{
			for (int i = 0; i < fabs(pow.m_main / pow.m_frac); ++i)
			{
				n *= f2.m_main;
				d *= f2.m_frac;
			}
			if (pow.m_main < 0)
			{
				throw 1 / n / d;
			}
			throw n / d;
		}
		else
		{
			temp.SetFraction(long(n), short(d));
		}
	}
	for (int i = 0; i < fabs(pow.m_main / pow.m_frac); ++i)
	{
		temp = temp * f2;
	}
	if (pow.m_main < 0)
	{
		temp = 1 / temp;
	}
	temp.cut();
	return temp;
}