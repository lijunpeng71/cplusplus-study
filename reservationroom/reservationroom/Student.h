#pragma once
#include <iostream>
#include <string>
#include "Identity.h"
using namespace std;
class Student :public Identity
{
public:
	//学生ID
	int m_Id;

	Student();	//默认构造
	Student(int id, string username, string password);	//有参构造

	//菜单界面
	virtual void operMenu();

	//申请预约
	void applyOrder();

	//查看我的预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();
};