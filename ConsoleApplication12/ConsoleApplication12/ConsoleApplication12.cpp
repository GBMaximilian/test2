// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;


void ShowBin(int a)
{
	for (int i = 0; i < 32; i++)
	{
		//Проверяем старший бит)
		if (a & 0x80000000)
			cout << "1";
		else
			cout << "0";
		//Сдвигаем влево на 1 бит
		a = a << 1;
	}
}


int main()
{
    cout << "Hello World!\n"; 

	int a = 255;
	int b;
	char k = 'd';

	b = ((a & 0x80) | k);
	//printf();
	ShowBin(k);
	cout << '\n';
	ShowBin(a);
	cout << '\n';
	ShowBin(b);
}

