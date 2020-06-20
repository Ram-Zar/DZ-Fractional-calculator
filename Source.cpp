#include "Calculator.h"
#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(0, "russian");
	
	try
	{	
		cout << "¬ведите первую дробь в формате a/b=";
		char f1[10];
		cin >> f1;
		Fraction f(f1);
		cout << "\n¬ведите вторую дробь в формате a/b=";
		char f2[10];
		cin >> f2;
		Fraction g(f2);
		Calculator c(f,g);
		cout <<endl<<c.Get_f1()<<"+"<<c.Get_f2() <<"="<<c.f1_Plus_f2();
	    cout << endl << c.Get_f1() << "-" << c.Get_f2() << "=" << c.f1_Minus_f2();
	    cout << endl << c.Get_f1() << "*" << c.Get_f2() << "=" << c.f1_Multiply_f2();
		try
	    {
		    cout << endl << c.Get_f1() << "/" << c.Get_f2() << "=" << c.f1_Divide_f2();
	    }
	    catch (exception& e)
	    {
		    cout << e.what();
	    }
		try
		{
			cout << "\n¬ведите степень дл€ первой дроби в формате a/b=";
			char pow[10];
			cin >> pow;
			Fraction p(pow);
			cout << c.Get_f1() << "^" << p << "=" << c.f1_Pow(p);
		}
		catch (exception& e)
	    {
		    cout << e.what();
	    }
		catch (double& d)
		{
			cout << "=" << d;
		}
		try
	    {
		    cout << "\n¬ведите степень дл€ второй дроби в формате a/b=";
		    char pow[10];
		    cin >> pow;
		    Fraction f(pow);
		    cout << c.Get_f2() << "^" << f << "=" << c.f2_Pow(f);
	    }
	    catch (exception& e)
	    {
		    cout << e.what();
	    }
		catch (double& d)
		{
			cout <<"="<< d;
		}
	}
	catch (exception& e)
	{
		cout<<e.what();		
	}
	return 0;
}