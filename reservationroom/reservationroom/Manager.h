#pragma once
#include <iostream>
#include "Identity.h"
#include <string>
using namespace std;
class Manager:public Identity
{
public:
	//默认构造函数
	Manager();

	//有参构造函数
	Manager(string username, string password);

	//登录
	virtual void login();

	//选择菜单界面
	virtual void operMenu();

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void cleanFile();
};