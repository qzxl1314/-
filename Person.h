//-----����ѧ����-----
#pragma once
#ifndef HEADER_PERSON
#define HEADER_PERSON
#include <string>
#include "Data.h"
using namespace std;

class Person {
private:
	//���� 
	string Name;
	//����
	Data Birthday;
	//��ַ
	string Address;
	//����
	int Age;
public:
	Person(){};
	Person(string name,Data birthday,string address,int age);
	//�����ķ�����
	void setName(string name);
	string getName();
	//���յķ�����
	void setBirthday(Data birthday);
	Data getBirthday();
	//��ַ�ķ�����
	void setAddress(string address);
	string getAddress();
	//����ķ�����
	void setAge(int age);
	int getAge();
	//���������Ϣ
	void displayperson();
};
#endif 