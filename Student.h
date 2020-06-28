//-----����ѧ����-----
#pragma once
#ifndef HEADER_STUDENT
#define HEADER_STUDENT
#include <string>
#include "Course.h"
#include "Person.h"
using namespace std;

class Student:public Person {
private:
	//id                                                      
	string StudentID;
	//ϵ	
	string Department;
	//�γ���
	int NumberOfCourse;
	//�γ�����
	Course* Record;
public:
	Student(string name,Data birthday,string address,int age,string studentID,string department,int numberOfCourse,Course* record);
	//id�ķ�����
	void setStudentID(string studentID);
	string getStudentID();
	//ϵ�ķ�����
	void setDepartment(string department);
	string getDepartment();
	//�γ����ķ�����
	void setNumberOfCourse(int numberOfCourse);
	int getNumberOfCourse();
	//�γ�����ķ�����
	void setRecord(Course* course);
	Course* getRecord();
	//���ѧ����Ϣ
	void display();
	//���������Ϣ
	void disrecord();
};
#endif 