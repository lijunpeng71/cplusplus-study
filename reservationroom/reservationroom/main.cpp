#include <iostream>
#include <fstream>
#include "Student.h"
#include "Teacher.h"
#include "Manager.h"
using namespace std;

int main()
{
	int select = 0;	//���ڽ����û���ѡ��

	while (true)
	{
		cout << "===========================================��ӭ����ĳУ����ԤԼϵͳ==========================================";
		cout << endl << "������������ݣ�" << endl;
		cout << "\t\t -------------------------------------------------------\n";
		cout << "\t\t|							|\n";
		cout << "\t\t|\t1��ѧ������					|\n";
		cout << "\t\t|							|\n";
		cout << "\t\t|\t2����ʦ						|\n";
		cout << "\t\t|							|\n";
		cout << "\t\t|\t3������Ա					|\n";
		cout << "\t\t|							|\n";
		cout << "\t\t|\t0���˳�						|\n";
		cout << "\t\t|							|\n";
		cout << "\t\t -------------------------------------------------------\n";
		cout << "����������ѡ��";
		cin >> select;
		//����ָ��
		Identity *identity = nullptr;
		switch (select)
		{
		case 1:			//ѧ��
			identity = new Student();
			break;
		case 2:			//��ʦ
			identity = new Teacher();
			break;
		case 3:			//����Ա
			identity = new Manager();
			break;
		case 0:			//�˳�
			cout << "��ӭ��һ��ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
		identity->login();
	}
	system("pause");
	system("cls");
	return 0;
}