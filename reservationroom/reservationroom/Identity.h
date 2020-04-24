#pragma once
#include <iostream>
using namespace std;
class Identity
{
public:
	//µÇÂ¼²Ù×÷
	virtual void login() = 0;
	//²Ù×÷²Ëµ¥
	virtual void operMenu() = 0;

	string m_Username;
	string m_Password;

};