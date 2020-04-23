#include <iostream>
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

		switch (select)
		{
		case 1:			//学生
			break;
		case 2:			//老师
			break;
		case 3:			//管理员
			break;
		case 0:			//退出
			break;
		default:
			cout << "输入有误，请重新选择" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	system("cls");
	return 0;
}