#pragma once
#include <iostream>
#include "Identity.h"
#include <string>
using namespace std;
class Manager:public Identity
{
public:
	//Ĭ�Ϲ��캯��
	Manager();

	//�вι��캯��
	Manager(string username, string password);

	//��¼
	virtual void login();

	//ѡ��˵�����
	virtual void operMenu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();
};