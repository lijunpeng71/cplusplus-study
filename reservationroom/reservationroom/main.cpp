#include <iostream>
#include <fstream>
#include "Student.h"
#include "Teacher.h"
#include "Manager.h"
using namespace std;

int main()
{
	int select = 0;	//用于接收用户的选择

	while (true)
	{
		cout << "===========================================欢迎来到某校机房预约系统==========================================";
		cout << endl << "请输入您的身份：" << endl;
		cout << "\t\t -------------------------------------------------------\n";
		cout << "\t\t|							|\n";
		cout << "\t\t|\t1、学生代表					|\n";
		cout << "\t\t|							|\n";
		cout << "\t\t|\t2、老师						|\n";
		cout << "\t\t|							|\n";
		cout << "\t\t|\t3、管理员					|\n";
		cout << "\t\t|							|\n";
		cout << "\t\t|\t0、退出						|\n";
		cout << "\t\t|							|\n";
		cout << "\t\t -------------------------------------------------------\n";
		cout << "请输入您的选择：";
		cin >> select;
		//父类指针
		Identity *identity = nullptr;
		switch (select)
		{
		case 1:			//学生
			identity = new Student();
			break;
		case 2:			//老师
			identity = new Teacher();
			break;
		case 3:			//管理员
			identity = new Manager();
			break;
		case 0:			//退出
			cout << "欢迎下一次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择" << endl;
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