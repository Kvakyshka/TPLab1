#pragma once
#include "Base.h"
class Train :public Base
{
	string name; // ������������
	string year; // ��� �������
	string* route; // �������
	int n2;
	string carriages;// ������
	string volume; // ����� �����
public:
	void setterN2(int n2);
	int getterN2();
	void setterRoute(string route, int i);
	string getterRoute(int i);
	void setterName(string name);
	string getterName();
	void setterVolume(string volume);
	string getterVolume();
	void setterYear(string year);
	string getterYear();
	void setterCarriages(string carriages);
	string getterCarriages();
	Train();
	Train(ifstream& file);
	void Write(ofstream& file);
	void Show1();
	void Show();
	void Edit();
};