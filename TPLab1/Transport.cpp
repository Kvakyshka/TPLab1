#include "Transport.h"
Transport::Transport() {};

Transport::Transport(const Transport& object)//конструктор копирования
{
	this->arr = new Base * [object.n];

	for (int i = 0; i < object.n; i++)
	{
		arr[i] = object.arr[i];
	}
}

void Transport::setterN(int n) { this->n = n; }
int Transport::getterN() { return n; }

void Transport::Read()//чтение из файла
{
	string text = "test.txt";
	ifstream file;
	try// генерация ошибки на открытие файла
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

void Transport::Save()// сохранение в файл
{
	ofstream file;
	file.open("test.txt");
	file << n << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i]->Write(file);
	}

}

void Transport::Show_list()// вывод всего списка 
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ".";
		arr[i]->Show();
		cout << "\n";
	}

}

int Transport::Show_object()//доступ-вывод 1 элемента с опознавательными данными для дальнейших операций (редактирвоание или просмотра)
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

void Transport::Edit_all() //редактирование элемента (редактирует весь элемент, поскольку у тебя транспорт и тупо редактировать что-то одно, ну типо меняется тип, значит меняется и модель машины)
{
	int number = Show_object();
	string item;
	arr[number - 1]->Edit();
	arr[number - 1]->Show();
}

void Transport::Delete(int number) //функция удаления элемента
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

Transport Transport::operator +(int a) //перегрузка оператора - функция добавления элемента в массив
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