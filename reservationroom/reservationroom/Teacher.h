#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Identity.h"
using namespace std;

class Teacher :public Identity
{
public:
	//��ʦ���
	int m_tempId;

	//Ĭ�Ϲ��캯��
	Teacher();

	//�вι��캯��
	Teacher(int empId, string username, string password);

	//��¼
	virtual void login();

	//�˵�����
	virtual void operMenu();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();
};