#include "Train.h"
void Train::setterN2(int n2) { this->n2 = n2; route = new string[n2]; }
int Train::getterN2() { return n2; }
void Train::setterRoute(string route, int i) { this->route[i] = route; }
string Train::getterRoute(int i) { return route[i]; }
void Train::setterName(string name) { this->name = name; }
string Train::getterName() { return name; }
void Train::setterVolume(string volume) { this->volume = volume; }
string Train::getterVolume() { return volume; }
void Train::setterYear(string year) { this->year = year; }
string Train::getterYear() { return year; }
void Train::setterCarriages(string carriages) { this->carriages = carriages; }
string Train::getterCarriages() { return carriages; }

Train::Train()
{
	cout << "Constructor Train()\n";
	string line;
	cout << "Name: ";
	getline(cin, line);
	setterName(line);
	cout << "Year: ";
	getline(cin, line);
	setterYear(line);
	cout << "Number of towns: ";
	getline(cin, line);
	int k = stoi(line);
	setterN2(k);
	cout << "Towns: \n";
	for (int i = 0; i < k; i++)
	{
		getline(cin, line);
		setterRoute(line, i);
	}
	cout << "Carriages: ";
	getline(cin, line);
	setterCarriages(line);
	cout << "Volume: ";
	getline(cin, line);
	setterVolume(line);
}

Train::Train(ifstream& file)
{
	string line;
	cout << "Constructor Train(int a)\n";
	getline(file, line);
	setterName(line);
	getline(file, line);
	setterYear(line);
	getline(file, line);
	int k = stoi(line);
	setterN2(k);
	for (int i = 0; i < k; i++)
	{
		getline(file, line);
		setterRoute(line, i);
	}
	getline(file, line);
	setterCarriages(line);
	getline(file, line);
	setterVolume(line);
}

void Train::Write(ofstream& file)
{
	file << "Train" << endl;
	file << getterName() << endl;
	file << getterYear() << endl;
	file << getterN2() << endl;
	for (int i = 0; i < getterN2(); i++)
	{
		file << getterRoute(i) << endl;
	}
	file << getterCarriages() << endl;
	file << getterVolume() << endl;
}

void Train::Show1()
{
	cout << " Train: " << getterName() << endl;
}

void Train::Show()
{
	cout << " Train:" << endl;
	cout << "   Name: " << getterName() << endl;
	cout << "   Year: " << getterYear() << endl;
	cout << "   Route: " << endl;
	for (int i = 0; i < getterN2(); i++)
	{
		cout << "          " << getterRoute(i) << endl;
	}
	cout << "   Carriages: " << getterCarriages() << endl;
	cout << "   Volume: " << getterVolume() << endl;
}

void Train::Edit()
{
	string line;
	cout << "Name: ";
	getline(cin, line);
	setterName(line);
	cout << "Year: ";
	getline(cin, line);
	setterYear(line);
	cout << "Number of towns: ";
	getline(cin, line);
	int k = stoi(line);
	setterN2(k);
	cout << "Towns: \n";
	for (int i = 0; i < k; i++)
	{
		getline(cin, line);
		setterRoute(line, i);
	}
	cout << "Carriages: ";
	getline(cin, line);
	setterCarriages(line);
	cout << "Volume: ";
	getline(cin, line);
	setterVolume(line);
}