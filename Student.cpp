#include "Student.h"
#include "Course.h"
#include <iostream>

using namespace std;
//ѧ����
Student::Student(string name,Data birthday,string address,int age,string studentID,string department,int numberOfCourse,Course* record):Person(name,birthday,address,age),StudentID(studentID),Department(department),NumberOfCourse(numberOfCourse),Record(record)
{
}	
//��ʼ������
void Student::setStudentID(string studentID)
{
	StudentID = studentID;
}
string Student::getStudentID()
{
	return StudentID;
}
//id������ʵ��
void Student::setDepartment(string department)
{
	Department = department;
}
string Student::getDepartment()
{
	return Department;
}
//ϵ�ķ�����
void Student::setNumberOfCourse(int numberOfCourse)
{
	NumberOfCourse = numberOfCourse;
}
int Student::getNumberOfCourse()
{
	return NumberOfCourse;
}
//�γ����ķ�����
void Student::setRecord(Course* course)
{
	Record = course;
}
Course* Student::getRecord()
{
	return Record;
}
void Student::disrecord()
{
	
	for(int i=0;i<NumberOfCourse;i++)
	{
		Record[i].displayCourse();
	}
}
//�γ�����ķ�����
void Student::display()
{
	Student::displayperson();
	cout<<",ѧ��:"<<Student::getStudentID()<<",רҵ:"<<Student::getDepartment()<<",�γ���:"<<Student::getNumberOfCourse()<<endl;
	cout<<"�γ����:"<<endl;
	Student::disrecord();
}