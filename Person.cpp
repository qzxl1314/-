#include "Person.h"
#include "Data.h"
#include <string>
#include <iostream>

using namespace std;
//ѧ������
Person::Person(string name,Data birthday,string address,int age):Name(name),Birthday(birthday),Address(address),Age(age)
{
}	
//��ʼ������
void Person::setName(string name)
{
	Name = name;
}
string Person::getName()
{
	return Name;
}
//����������ʵ��
void Person::setBirthday(Data birthday)
{
	Birthday = birthday;
}
Data Person::getBirthday()
{
	return Birthday;
}
//���շ�����ʵ��
void Person::setAddress(string address)
{
	Address = address;
}
string Person::getAddress()
{
	return Address;
}
//��ַ������ʵ��
void Person::setAge(int age)
{
	Age = age;
}
int Person::getAge()
{
	return Age;
}
//���������ʵ��
void Person::displayperson()
{
	Data b=Person::getBirthday();
	cout<<"����:"<<Person::getName()<<",����:";
	b.display();
	cout<<",��ַ:"<<Person::getAddress()<<",����:"<<Person::getAge();
}