#include <iostream>
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

		switch (select)
		{
		case 1:			//ѧ��
			break;
		case 2:			//��ʦ
			break;
		case 3:			//����Ա
			break;
		case 0:			//�˳�
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	system("cls");
	return 0;
}