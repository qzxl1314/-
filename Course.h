//-----�γ���-----
#pragma once
#ifndef HEADER_COURSE
#define HEADER_COURSE
#include <string>
using namespace std;

class Course {
private:
	//�γ���
	string CourseName;
	//�޿��꼶
	int AcademicYear;
	//�ɼ�
	int Grade;
public:
	Course() {};	
	Course(string coursename,int academicyear,float grade);
	//�γ����ķ�����
	void setCourseName(string coursecname);
	string getCourseName();
	//�޿��꼶�ķ�����
	void setAcademicYear(int academicyear);
	int getAcademicYear();
	//�ɼ��ķ�����
	void setGrade(int grade);
	int getGrade();
	//����γ����
	void displayCourse();
};
#endif 