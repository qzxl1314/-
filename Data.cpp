#include "Data.h"
#include <iostream>
using namespace std;
//�˺Ż���
Data::Data(int day,int month,int year):Day(day),Month(month),Year(year)
{
}	
//��ʼ������	
void Data::display()const
{
	cout << Year <<"/"<<Month <<"/"<<Day;
}


//�������
void Data::setData(int day,int month,int year)
{
	Day = day;
	Month = month;
	Year = year;
}


