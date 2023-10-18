#include "Airplane.h"
void Airplane::setterN1(int n1) { this->n1 = n1; towns = new string[n1]; }
int Airplane::getterN1() { return n1; }
void Airplane::setterTowns(string towns, int i) { this->towns[i] = towns; }
string Airplane::getterTowns(int i) { return towns[i]; }
void Airplane::setterType(string type) { this->type = type; }
string Airplane::getterType() { return type; }
void Airplane::setterName(string name) { this->name = name; }
string Airplane::getterName() { return name; }
void Airplane::setterVolume(string volume) { this->volume = volume; }
string Airplane::getterVolume() { return volume; }
void Airplane::setterDimensions(string dimensions) { this->dimensions = dimensions; }
string Airplane::getterDimensions() { return dimensions; }

Airplane::Airplane()
{
	cout << "Constructor Airplane()\n";
	string line;
	cout << "Type: ";
	getline(cin, line);
	setterType(line);
	cout << "Name: ";
	getline(cin, line);
	setterName(line);
	cout << "Volume: ";
	getline(cin, line);
	setterVolume(line);
	cout << "Dimensions: ";
	getline(cin, line);
	setterDimensions(line);
	cout << "Number of towns: ";
	getline(cin, line);
	int k = stoi(line);
	setterN1(k);
	cout << "Towns: \n";
	for (int i = 0; i < k; i++)
	{
		getline(cin, line);
		setterTowns(line, i);
	}
}

Airplane::Airplane(ifstream& file)
{
	string line;
	cout << "Constructor Airplane(int a)\n";
	getline(file, line);
	setterType(line);
	getline(file, line);
	setterName(line);
	getline(file, line);
	setterVolume(line);
	getline(file, line);
	setterDimensions(line);
	getline(file, line);
	int k = stoi(line);
	setterN1(k);
	for (int i = 0; i < k; i++)
	{
		getline(file, line);
		setterTowns(line, i);
	}
}

void Airplane::Write(ofstream& file)
{
	file << "Airplane" << endl;
	file << getterType() << endl;
	file << getterName() << endl;
	file << getterVolume() << endl;
	file << getterDimensions() << endl;
	file << getterN1() << endl;
	for (int i = 0; i < getterN1(); i++)
	{
		file << getterTowns(i) << endl;
	}

}

void Airplane::Show1()
{
	cout << " Airplane: " << getterType() << " " << getterName() << endl;
}

void Airplane::Show()
{
	cout << " Airplane:" << endl;
	cout << "   Type: " << getterType() << endl;
	cout << "   Name: " << getterName() << endl;
	cout << "   Volume: " << getterVolume() << endl;
	cout << "   Dimensions: " << getterDimensions() << endl;
	cout << "   Number of towns: " << getterN1() << endl;
	for (int i = 0; i < getterN1(); i++)
	{
		cout << "   " << getterTowns(i) << endl;
	}

}

void Airplane::Edit()
{
	string line;
	cout << "Type: ";
	getline(cin, line);
	setterType(line);
	cout << "Name: ";
	getline(cin, line);
	setterName(line);
	cout << "Volume: ";
	getline(cin, line);
	setterVolume(line);
	cout << "Dimensions: ";
	getline(cin, line);
	setterDimensions(line);
	cout << "Number of towns: ";
	getline(cin, line);
	int k = stoi(line);
	setterN1(k);
	cout << "Towns: \n";
	for (int i = 0; i < k; i++)
	{
		getline(cin, line);
		setterTowns(line, i);
	}
}