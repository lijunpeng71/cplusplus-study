#pragma once
#include <iostream>
#include <string>
#include "Identity.h"
using namespace std;
class Student :public Identity
{
public:
	//ѧ��ID
	int m_Id;

	Student();	//Ĭ�Ϲ���
	Student(int id, string username, string password);	//�вι���

	//�˵�����
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴�ҵ�ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();
};