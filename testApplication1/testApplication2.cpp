// testApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>

using namespace std;


int main()
{
	const int amount = 90;

	cout << "Const in value: " << amount << endl;
	

	cout << "Hello!" << endl;
	cout << "1+1= " << 1 + 1 << endl;

	int i = static_cast<int>(4.9);
	cout << i << endl;

	auto j = 5;

	cout << j << endl;

	auto f = 5.9; 

	cout << f << endl;


	return 0;
}



