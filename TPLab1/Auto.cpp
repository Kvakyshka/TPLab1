#include "Auto.h"
void Auto::setterYear(string year) { this->year = year; }
string Auto::getterYear() { return year; }
void Auto::setterBrand(string brand) { this->brand = brand; }
string Auto::getterBrand() { return brand; }
void Auto::setterModel(string model) { this->model = model; }
string Auto::getterModel() { return model; }
void Auto::setterN3(int n3) { this->n3 = n3; towns = new string[n3]; }
int Auto::getterN3() { return n3; }
void Auto::setterTowns(string towns, int i) { this->towns[i] = towns; }
string Auto::getterTowns(int i) { return towns[i]; }

Auto::Auto()
{
	cout << "Constructor Auto()\n";
	string line;
	cout << "Year: ";
	getline(cin, line);
	setterYear(line);
	cout << "Brand: ";
	getline(cin, line);
	setterBrand(line);
	cout << "Model: ";
	getline(cin, line);
	setterModel(line);
	cout << "Number of towns: ";
	getline(cin, line);
	int k = stoi(line);
	setterN3(k);
	cout << "Towns: \n";
	for (int i = 0; i < k; i++)
	{
		getline(cin, line);
		setterTowns(line, i);
	}
}

Auto::Auto(ifstream& file)
{
	string line;
	cout << "Constructor Auto(int a)\n";
	getline(file, line);
	setterYear(line);
	getline(file, line);
	setterBrand(line);
	getline(file, line);
	setterModel(line);
	getline(file, line);
	int k = stoi(line);
	setterN3(k);
	for (int i = 0; i < k; i++)
	{
		getline(file, line);
		setterTowns(line, i);
	}
}

void Auto::Write(ofstream& file)
{
	file << "Auto" << endl;
	file << getterYear() << endl;
	file << getterBrand() << endl;
	file << getterModel() << endl;
	file << getterN3() << endl;
	for (int i = 0; i < getterN3(); i++)
	{
		file << getterTowns(i) << endl;
	}
}

void Auto::Show1()
{
	cout << " Auto: " << getterBrand() << " " << getterModel() << endl;
}

void Auto::Show()
{
	cout << " Auto:" << endl;
	cout << "   Year: " << getterYear() << endl;
	cout << "   Brand: " << getterBrand() << endl;
	cout << "   Model: " << getterModel() << endl;
	cout << "   Number of towns: " << getterN3() << endl;
	for (int i = 0; i < getterN3(); i++)
	{
		cout << "   " << getterTowns(i) << endl;
	}
}

void Auto::Edit()
{
	string line;
	cout << "Year: ";
	getline(cin, line);
	setterYear(line);
	cout << "Brand: ";
	getline(cin, line);
	setterBrand(line);
	cout << "Model: ";
	getline(cin, line);
	setterModel(line);
	cout << "Number of towns: ";
	getline(cin, line);
	int k = stoi(line);
	setterN3(k);
	cout << "Towns: \n";
	for (int i = 0; i < k; i++)
	{
		getline(cin, line);
		setterTowns(line, i);
	}
}