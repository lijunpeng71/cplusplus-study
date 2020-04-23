#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Identity.h"
using namespace std;

class Teacher :public Identity
{
public:
	//教师编号
	int m_tempId;

	//默认构造函数
	Teacher();

	//有参构造函数
	Teacher(int empId, string username, string password);

	//菜单界面
	virtual void operMenu();

	//查看所有预约
	void showAllOrder();

	//审核预约
	void validOrder();
};