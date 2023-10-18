#pragma once
#include "Base.h"
class Auto :public Base
{
	string year; // год выпуска
	string brand; //марка 
	string model; // модель
	string* towns; // список городов
	int n3;
public:
	void setterYear(string year);
	string getterYear();
	void setterBrand(string brand);
	string getterBrand();
	void setterModel(string model);
	string getterModel();
	void setterN3(int n3);
	int getterN3();
	void setterTowns(string towns, int i);
	string getterTowns(int i);
	Auto();
	Auto(ifstream& file);
	void Write(ofstream& file);
	void Show1();
	void Show();
	void Edit();
};