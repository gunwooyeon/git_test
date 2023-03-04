#pragma once

#include <regex>
using namespace std;

class Parser
{
	// 1. 사원번호
	// 2. 이름
	// 3. 전화번호
	// 4. 생일
	// 6. certi
private:
	const string employee_num = "[0-9]{8}";
	const string name = "[A-Z]+ [A-Z]+";
	const string phone_numer = "[01]{3}-[0-9]{3,4}-[0-9]{4}";
	const string cl = "CL[1-5]";
	const string birthday = "[0-9]{8}";
	const string certi = "(ADV|PRO|EXP)";
public:
	bool IsVaildEmployee(string input) {
		regex re(employee_num);
		return regex_match(input, re);
	}
	bool IsValidName(string input) {
		regex re(name);
		return regex_match(input, re);
	}
	bool IsValidPhoneNum(string input) {
		regex re(phone_numer);
		return regex_match(input, re);
	}
	bool IsVaildCl(string input) {
		regex re(cl);
		return regex_match(input, re);
	}
	bool IsValidCerti(string input) {
		regex re(certi);
		return regex_match(input, re);
	}
};

