// Lab_10_1.cpp
// < Кузів Назар >
// Лабораторна робота № 10.1
// Пошук символів у текстовому файлі
// Варіант 6

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>


using namespace std;

bool Search_SQ_Or_QS(const char* s)
{

	for (int j = 0; s[j] != '\0'; j++)
		if ((s[j] == 'S' && s[j + 1] == 'Q') || (s[j] == 'Q' && s[j + 1] == 'S'))
			return true;

	return false;
}

int main()
{
		

		char str[101];

		ifstream f("t.txt");
		f >> str;
		if (Search_SQ_Or_QS(str))
		{
			cout << "Is there a pair of adjacent letters SQ or QS in this file :" << endl;
			cout << "yes" << endl;
		}
			
		else
		{
			cout << "Is there a pair of adjacent letters SQ or QS in this file :" << endl;
			cout << "no" << endl;
		}
			

		f.close();

	return 0;
}

