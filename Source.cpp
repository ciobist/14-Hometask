#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	string str;

	cout << "Введите вашу строку: ";
	getline(cin, str);

	cout << "Первая буква вашей строки: " << str.erase(1) << "\nПоследняя буква вашей строки: " << str.substr(str.length() - 1) << endl;
}