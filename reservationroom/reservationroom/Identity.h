#pragma once
#include <iostream>
using namespace std;
class Identity
{
public:
	//��¼����
	virtual void login() = 0;
	//�����˵�
	virtual void operMenu() = 0;

	string m_Username;
	string m_Password;

};