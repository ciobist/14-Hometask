#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	string str;

	cout << "������� ���� ������: ";
	getline(cin, str);

	cout << "������ ����� ����� ������: " << str.erase(1) << "\n��������� ����� ����� ������: " << str.substr(str.length() - 1) << endl;
}