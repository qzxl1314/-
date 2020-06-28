#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "StudentList.h"
#include "Course.h"
#include "Data.h"
#include "Person.h"
#include "Student.h"
#include <fstream>
#include <string>
#define NULL 0
#include <sstream>
using namespace std;

void StudentList::add(Student& a)//���ģ��
{
	Node* pN = new Node(a);
	if (first) {
		pN->next = first;
		first->prev = pN;
	}
	first = pN;
	size++;
}

void StudentList::remove(string acntNo)
{
	for (Node* p = first; p; p = p->next) {
		if ((p->acnt).getStudentID() == acntNo) {
			if (p == first)//��ɾ����һ��ʱ firstָ��p->next
				first = p->next;
			if (p->prev) {
				p->prev->next = p->next;
			}
			if (p->next) {
				p->next->prev = p->prev;
			}
			delete p;
			size--;
			break;
		}
	}
}
Student* StudentList::find(string acntNo) const//����ģ��
{
	for (Node* p = first; p; p = p->next) {
		if ((p->acnt).getStudentID()==acntNo) {
			return &(p->acnt);
		}
	}
	return NULL;
}
void StudentList::display() const
{
	system("cls"); 
	cout << "��ϵͳ���� " << size << " ��ѧ�����������Ϣ����"<<endl;
	int i = 1;
	for (Node* p = first; p; p = p->next) {
		cout << i++<<":";
		(p->acnt).display();
		cout<<endl;
	}
}
void StudentList::readStudentFromDat(string path)
{
	cout << "���ڴ��ļ��ж�����Ϣ..." << endl<<endl;
	
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
	//id 
	string StudentID;
	//ϵ	
	string Department;
	//�γ���
	int NumberOfCourse;
	//�γ���
	string CourseName;
	//�޿��꼶
	int AcademicYear;
	//�ɼ�
	float Grade;
	string buffer;
	stringstream ss;
	ifstream inputFile(&path[0]);

	while (getline(inputFile, buffer))
	{
		//�γ�����
		Course* Record=new Course[20];
		ss.clear();//��ջ���
		ss.str(buffer);//���ַ����ָ�
		ss >> Name>>Year>>Month>>Day;
		Birthday.setData(Day,Month,Year);
		ss>>Address>>Age>>StudentID>>Department>>NumberOfCourse;
		for(int i=0;i<NumberOfCourse;i++)
		{

			ss>>CourseName>>AcademicYear>>Grade;
			Record[i].setCourseName(CourseName);
			Record[i].setAcademicYear(AcademicYear);
			Record[i].setGrade(Grade);
		}

		add(*(new Student(Name,Birthday,Address,Age,StudentID,Department,NumberOfCourse,Record)));
		
	}
	cout << "����ȫ���˻���Ϣ�ɹ���" << endl << endl;

}
void StudentList::saveStudentOnDat(string path)
{
	cout << "���ڽ�ѧ����Ϣд���ļ�..." << endl << endl;
	//д��txt
	fstream f(&path[0], ios::out);
	if (f.bad())
	{
		cout << "���ļ�����" << endl;
		exit(0);
	}
	for (Node* p = first; p; p = p->next) {//д���ļ�
		Student* acnt_p = &p->acnt;
		f << acnt_p->getName() << " ";
		f << acnt_p->getBirthday().Year << " ";
		f << acnt_p->getBirthday().Month << " ";
		f << acnt_p->getBirthday().Day<< " ";
		f << acnt_p->getAddress()<< " ";
		f << acnt_p->getAge()<< " ";
		f << acnt_p->getStudentID()<< " ";
		f << acnt_p->getDepartment()<< " ";
		f << acnt_p->getNumberOfCourse()<< " ";
		Course * a=acnt_p->getRecord();
		for(int i=0;i<acnt_p->getNumberOfCourse();i++)
		{
			f << a[i].getCourseName()<< " ";
			f << a[i].getAcademicYear()<< " ";
			f << a[i].getGrade()<< " ";
		}
		f<<endl;
	}
	f.close();
	cout << "д��ɹ���" << endl << endl;
}
void StudentList::display(Student stu)
{
	stu.display();
}
