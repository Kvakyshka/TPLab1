#pragma once
#include "Base.h"
class Airplane :public Base
{
	string type; //тип
	string name; // наименование
	string volume; // объем груза
	string dimensions; // габариты
	string* towns; // список городов
	int n1;

public:
	void setterN1(int n1);
	int getterN1();
	void setterTowns(string towns, int i);
	string getterTowns(int i);
	void setterType(string type);
	string getterType();
	void setterName(string name);
	string getterName();
	void setterVolume(string volume);
	string getterVolume();
	void setterDimensions(string dimensions);
	string getterDimensions();
	Airplane();
	Airplane(ifstream& file);
	void Write(ofstream& file);
	void Show1();
	void Show();
	void Edit();
};
