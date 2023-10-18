#include "Transport.h"
Transport::Transport() {};

Transport::Transport(const Transport& object)//����������� �����������
{
	this->arr = new Base * [object.n];

	for (int i = 0; i < object.n; i++)
	{
		arr[i] = object.arr[i];
	}
}

void Transport::setterN(int n) { this->n = n; }
int Transport::getterN() { return n; }

void Transport::Read()//������ �� �����
{
	string text = "test.txt";
	ifstream file;
	try// ��������� ������ �� �������� �����
	{
		file.open(text);
		if (!file.is_open())
			throw text;
	}
	catch (string tt)
	{
		cout << "file " << tt << " does not exist" << endl;
		system("pause");
		return;
	}
	string line;
	getline(file, line);
	int size = stoi(line);
	setterN(size);
	arr = new Base * [size];
	getline(file, line);
	int i = 0;
	while (!file.eof() && i < size)
	{
		if (line == "Airplane")
		{
			arr[i] = new Airplane(file);
			i++;
		}
		if (line == "Train")
		{
			arr[i] = new Train(file);
			i++;
		}
		if (line == "Auto")
		{
			arr[i] = new Auto(file);
			i++;
		}
		getline(file, line);
	}
}

void Transport::Save()// ���������� � ����
{
	ofstream file;
	file.open("test.txt");
	file << n << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i]->Write(file);
	}

}

void Transport::Show_list()// ����� ����� ������ 
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ".";
		arr[i]->Show();
		cout << "\n";
	}

}

int Transport::Show_object()//������-����� 1 �������� � ���������������� ������� ��� ���������� �������� (�������������� ��� ���������)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ".";
		arr[i]->Show1();
	}
	cout << "Select list number: ";
	string number;
	getline(cin, number);
	system("cls");
	arr[stoi(number) - 1]->Show();
	return stoi(number);
}

void Transport::Edit_all() //�������������� �������� (����������� ���� �������, ��������� � ���� ��������� � ���� ������������� ���-�� ����, �� ���� �������� ���, ������ �������� � ������ ������)
{
	int number = Show_object();
	string item;
	arr[number - 1]->Edit();
	arr[number - 1]->Show();
}

void Transport::Delete(int number) //������� �������� ��������
{
	Transport buf(*this);
	setterN(getterN() - 1);
	arr = new Base * [getterN()];
	for (int i = 0; i < number - 1; i++)
	{
		arr[i] = buf.arr[i];
	}
	for (int i = number - 1; i < getterN(); i++)
	{
		arr[i] = buf.arr[i + 1];
	}
}

Transport Transport::operator +(int a) //���������� ��������� - ������� ���������� �������� � ������
{
	int i;
	Transport buf(*this);
	setterN(getterN() + 1);
	arr = new Base * [n];
	for (int i = 0; i < getterN() - 1; i++)
	{
		arr[i] = buf.arr[i];
	}
	switch (a)
	{
	case 1: {arr[getterN() - 1] = new Airplane(); break; }

	case 2: {arr[getterN() - 1] = new Train(); break; }

	case 3: {arr[getterN() - 1] = new Auto(); break; }

	}
	return*this;
}

Transport::~Transport()
{
	cout << "\nDestructor ~Transport()\n";
	delete arr;
}