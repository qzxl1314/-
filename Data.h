//-----������-----
#pragma once
#ifndef HEADER_DATA
#define HEADER_DATA
#include <string>
using namespace std;

class Data {
public:
	//�� 
	int Day;
	//��
	int Month;
	//��
	int Year;
	Data() {};
	Data(int day,int month,int year);
	//���ڵķ�����
	void setData(int day,int month,int year);

	virtual void display()const;
};
#endif 