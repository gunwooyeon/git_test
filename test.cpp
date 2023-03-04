#include <iostream>
#include <regex>
#include <vector>
#include "Parser.h"
using namespace std;

Parser parser;

void EmployeeCheck()
{
	vector<string> v = { "12345678", "1234567", "123456" };

	for (int i = 0; i < v.size(); i++)
		cout << parser.IsVaildEmployee(v[i]);

	cout << endl;
}

void NameCheck()
{
	vector<string> v = { "GUN WOO", "Gun Woo", "G W", "GUNWOO"};

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
			v[i][j] = toupper(v[i][j]);

		cout << parser.IsValidName(v[i]);
	}

	cout << endl;
}

void PhoneNumCheck()
{
	vector<string> v = { "010-1234-5678" ,
		"01-1234-5678", "010-a234-5678" };

	for (int i = 0; i < v.size(); i++)
		cout << parser.IsValidPhoneNum(v[i]);

	cout << endl;
}

void ClCheck()
{
	vector<string> v = { "CL1", "CL2", "CL3", "CL4", "CL5", "CL6", "C1"};

	for (int i = 0; i < v.size(); i++)
		cout << parser.IsVaildCl(v[i]);

	cout << endl;
}

void CertiCheck()
{
	vector<string> v = { "ADV", "PRO", "EXP", "adv", "ADV_", "IM"};

	for (int i = 0; i < v.size(); i++)
		cout << parser.IsValidCerti(v[i]);

	cout << endl;
}

int main()
{
	// 1. 사원번호
	EmployeeCheck();

	// 2. 이름
	NameCheck();

	// 3. 전화번호
	PhoneNumCheck();

	// 4. 생일
	
	// 5. CL
	ClCheck();

	// 6. certi
	CertiCheck();
}
