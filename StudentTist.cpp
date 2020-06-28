//------------------������----------------
#include <iostream>
#include<fstream>
#include "StudentList.h"
#include "Course.h"
#include "Data.h"
#include "Person.h"
#include "Student.h"
#include<windows.h>
#include<conio.h>
#include <string>
#include <stdio.h>
using namespace std;
StudentList a;
void welcome();
void add();
void wait_user()//�ȴ��û� 
{
	cout << "�����������";
	_getch(); 
	system("cls");
	welcome();
}
void add()//���ѧ��
{
	system("cls");
	//ѧ��
	string StudentID;
	//���� 
	string Name;
	//�� 
	int Day;
	//��
	int Month;
	//��
	int Year;
	//����
	Data Birthday;
	//��ַ
	string Address;
	//����
	int Age;
	//ϵ	
	string Department;
	//�γ���
	int NumberOfCourse;
	//�γ�����
	Course Record[20];
	//�γ���
	string CourseName;
	//�޿��꼶
	int AcademicYear;
	//�ɼ�
	int Grade;
	cout << "������ѧ����ѧ��:"; cin >> StudentID;
	if (a.find(StudentID))
		cout << "��ѧ���Ѵ��ڣ������ظ���ӣ�";
	else
	{
		cout << "������ѧ��������:"; cin >> Name;
		cout << "������ѧ�������գ��ո�����������յ�˳��:"; cin >> Year>>Month>>Day;
		Birthday.setData(Day,Month,Year);
		cout << "������ѧ���ĵ�ַ:"; cin >> Address;
		cout << "������ѧ��������:"; cin >> Age;
		cout << "������ѧ����ϵ:"; cin >> Department;
		cout << "������ѧ���Ŀγ���:"; cin >> NumberOfCourse;
		for(int i=0;i<NumberOfCourse;i++)
		{
			cout << "������ѧ���ĵ�"<<i+1<<"�ſγ̿γ������޿��꼶���ɼ�:";
			cin >>CourseName>>AcademicYear>>Grade;
			Record[i].setCourseName(CourseName);
			Record[i].setAcademicYear(AcademicYear);
			Record[i].setGrade(Grade);
		}
		a.add(*(new Student(Name,Birthday,Address,Age,StudentID,Department,NumberOfCourse,Record)));
	}
	wait_user();
}

void welcome()//��ʼ����
{
	cout << "��ӭ����ѧ����Ϣ����ϵͳ" << endl << endl;
	cout << "1�����ļ��ж�ȡѧ����Ϣ" << endl << endl;
	cout << "2����ʾ��ǰ����ѧ����Ϣ" << endl << endl;
	cout << "3������ѧ��" << endl << endl;
	cout << "4��ͨ��ѧ�Ų���ѧ��" << endl << endl;
	cout << "5���������˻���Ϣ���浽�ļ�" << endl << endl;
	cout << "6���˳�" << endl << endl;
	cout << "��ѡ��1-6��";
	int n;
	cin >> n;
	switch (n)
	{
	case 1:
		a.readStudentFromDat("student_data.txt");
		wait_user();
		break;
	case 2:
		a.display();
		wait_user();
		break;
	case 3:
		add();
		wait_user();
		break;
	case 4:
	{
		string id;
		cout << "������ѧ�ţ�"; cin >> id;
		Student* p = a.find(id);
		if (!p)
			cout << "���˻������ڣ�" << endl;
		else
			p->display();
		wait_user();
		break;
	}
	case 5:
		a.saveStudentOnDat("student_data.txt");
		wait_user();
		break;
	case 6:
		exit(0);
		break;
	default:
		cout << "�����������������\n";
		wait_user();
		break;
	}
}
int main()
{
	welcome();
}
