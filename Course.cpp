#include "Course.h"
#include <iostream>
using namespace std;
//�γ���
Course::Course(string coursename,int academicyear,float grade):CourseName(coursename),AcademicYear(academicyear),Grade(grade)
{
}	
//��ʼ��	
//�γ����ķ�����
void Course::setCourseName(string coursecname)
{
	CourseName=coursecname;
}
string Course::getCourseName()
{
	return CourseName;
}
//�޿��꼶�ķ�����
void Course::setAcademicYear(int academicyear)
{
	AcademicYear=academicyear;
}
int Course::getAcademicYear()
{
	return AcademicYear;
}
//�ɼ��ķ�����
void Course::setGrade(int grade)
{
	Grade=grade;
}
int Course::getGrade()
{
	return Grade;
}
//����γ���Ϣ
void Course::displayCourse()
{
	cout<<"�γ���:"<<getCourseName()<<",�޿��꼶:"<<getAcademicYear()<<",�ɼ�:"<<getGrade()<<endl;
}

