// GoogleTestProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "gtestproj.h"
using namespace std;


int main()
{
	Func t;

	cout << t.doSomeMath(2) << endl;
	cout << t.doSomeMath(5) << endl;
	cout << t.doSomeMath(23) << endl;
	cout << t.doSomeMath(-6) << endl;
	cout << t.doSomeMath(4) << endl;
	cout << t.doSomeMath(7) << endl;
	cout << t.doSomeMath(8) << endl;
	cout << t.doSomeMath(-100) << endl;

}


