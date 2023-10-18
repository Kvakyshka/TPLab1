//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include<string>
//#include<conio.h>
//#include <Windows.h>
//#include <fstream>
//using namespace std;
////+ git
//class Base
//{
//public:
//
//	virtual void Write(ofstream& file) = 0;
//	virtual void Show() = 0;
//	virtual void Show1() = 0;
//	virtual void Edit() = 0;
//	virtual ~Base() = 0;
//
//};
//Base::~Base() {};
//
//
//class Airplane :public Base
//{
//	string type; //тип
//	string name; // наименование
//	string volume; // объем груза
//	string dimensions; // габариты
//	string* towns; // список городов
//	int n1;
//
//public:
//	void setterN1(int n1) { this->n1 = n1; towns = new string[n1]; }
//	int getterN1() { return n1; }
//	void setterTowns(string towns, int i) { this->towns[i] = towns; }
//	string getterTowns(int i) { return towns[i]; }
//	void setterType(string type) { this->type = type; }
//	string getterType() { return type; }
//	void setterName(string name) { this->name = name; }
//	string getterName() { return name; }
//	void setterVolume(string volume) { this->volume = volume; }
//	string getterVolume() { return volume; }
//	void setterDimensions(string dimensions) { this->dimensions = dimensions; }
//	string getterDimensions() { return dimensions; }
//
//	Airplane()
//	{
//		cout << "Constructor Airplane()\n";
//		string line;
//		cout << "Type: ";
//		getline(cin, line);
//		setterType(line);
//		cout << "Name: ";
//		getline(cin, line);
//		setterName(line);
//		cout << "Volume: ";
//		getline(cin, line);
//		setterVolume(line);
//		cout << "Dimensions: ";
//		getline(cin, line);
//		setterDimensions(line);
//		cout << "Number of towns: ";
//		getline(cin, line);
//		int k = stoi(line);
//		setterN1(k);
//		cout << "Towns: \n";
//		for (int i = 0; i < k; i++)
//		{
//			getline(cin, line);
//			setterTowns(line, i);
//		}
//	}
//
//	Airplane(ifstream& file)
//	{
//		string line;
//		cout << "Constructor Airplane(int a)\n";
//		getline(file, line);
//		setterType(line);
//		getline(file, line);
//		setterName(line);
//		getline(file, line);
//		setterVolume(line);
//		getline(file, line);
//		setterDimensions(line);
//		getline(file, line);
//		int k = stoi(line);
//		setterN1(k);
//		for (int i = 0; i < k; i++)
//		{
//			getline(file, line);
//			setterTowns(line, i);
//		}
//	}
//
//	void Write(ofstream& file)
//	{
//		file << "Airplane" << endl;
//		file << getterType() << endl;
//		file << getterName() << endl;
//		file << getterVolume() << endl;
//		file << getterDimensions() << endl;
//		file << getterN1() << endl;
//		for (int i = 0; i < getterN1(); i++)
//		{
//			file << getterTowns(i) << endl;
//		}
//
//	}
//
//	void Show1()
//	{
//		cout << " Airplane: " << getterType() << " " << getterName() << endl;
//	}
//
//	void Show()
//	{
//		cout << " Airplane:" << endl;
//		cout << "   Type: " << getterType() << endl;
//		cout << "   Name: " << getterName() << endl;
//		cout << "   Volume: " << getterVolume() << endl;
//		cout << "   Dimensions: " << getterDimensions() << endl;
//		cout << "   Number of towns: " << getterN1() << endl;
//		for (int i = 0; i < getterN1(); i++)
//		{
//			cout << "   " << getterTowns(i) << endl;
//		}
//
//	}
//
//	void Edit()
//	{
//		string line;
//		cout << "Type: ";
//		getline(cin, line);
//		setterType(line);
//		cout << "Name: ";
//		getline(cin, line);
//		setterName(line);
//		cout << "Volume: ";
//		getline(cin, line);
//		setterVolume(line);
//		cout << "Dimensions: ";
//		getline(cin, line);
//		setterDimensions(line);
//		cout << "Number of towns: ";
//		getline(cin, line);
//		int k = stoi(line);
//		setterN1(k);
//		cout << "Towns: \n";
//		for (int i = 0; i < k; i++)
//		{
//			getline(cin, line);
//			setterTowns(line, i);
//		}
//	}
//
//};
//
//class Train :public Base
//{
//	string name; // наименование
//	string year; // год выпуска
//	string* route; // маршрут
//	int n2;
//	string carriages;// вагоны
//	string volume; // объем груза
//
//
//public:
//	void setterN2(int n2) { this->n2 = n2; route = new string[n2]; }
//	int getterN2() { return n2; }
//	void setterRoute(string route, int i) { this->route[i] = route; }
//	string getterRoute(int i) { return route[i]; }
//	void setterName(string name) { this->name = name; }
//	string getterName() { return name; }
//	void setterVolume(string volume) { this->volume = volume; }
//	string getterVolume() { return volume; }
//	void setterYear(string year) { this->year = year; }
//	string getterYear() { return year; }
//	void setterCarriages(string carriages) { this->carriages = carriages; }
//	string getterCarriages() { return carriages; }
//
//	Train()
//	{
//		cout << "Constructor Train()\n";
//		string line;
//		cout << "Name: ";
//		getline(cin, line);
//		setterName(line);
//		cout << "Year: ";
//		getline(cin, line);
//		setterYear(line);
//		cout << "Number of towns: ";
//		getline(cin, line);
//		int k = stoi(line);
//		setterN2(k);
//		cout << "Towns: \n";
//		for (int i = 0; i < k; i++)
//		{
//			getline(cin, line);
//			setterRoute(line, i);
//		}
//		cout << "Carriages: ";
//		getline(cin, line);
//		setterCarriages(line);
//		cout << "Volume: ";
//		getline(cin, line);
//		setterVolume(line);
//	}
//
//	Train(ifstream& file)
//	{
//		string line;
//		cout << "Constructor Train(int a)\n";
//		getline(file, line);
//		setterName(line);
//		getline(file, line);
//		setterYear(line);
//		getline(file, line);
//		int k = stoi(line);
//		setterN2(k);
//		for (int i = 0; i < k; i++)
//		{
//			getline(file, line);
//			setterRoute(line, i);
//		}
//		getline(file, line);
//		setterCarriages(line);
//		getline(file, line);
//		setterVolume(line);
//	}
//
//	void Write(ofstream& file)
//	{
//		file << "Train" << endl;
//		file << getterName() << endl;
//		file << getterYear() << endl;
//		file << getterN2() << endl;
//		for (int i = 0; i < getterN2(); i++)
//		{
//			file << getterRoute(i) << endl;
//		}
//		file << getterCarriages() << endl;
//		file << getterVolume() << endl;
//	}
//
//	void Show1()
//	{
//		cout << " Train: " << getterName() << endl;
//	}
//
//	void Show()
//	{
//		cout << " Train:" << endl;
//		cout << "   Name: " << getterName() << endl;
//		cout << "   Year: " << getterYear() << endl;
//		cout << "   Route: " << endl;
//		for (int i = 0; i < getterN2(); i++)
//		{
//			cout << "          " << getterRoute(i) << endl;
//		}
//		cout << "   Carriages: " << getterCarriages() << endl;
//		cout << "   Volume: " << getterVolume() << endl;
//	}
//
//	void Edit()
//	{
//		string line;
//		cout << "Name: ";
//		getline(cin, line);
//		setterName(line);
//		cout << "Year: ";
//		getline(cin, line);
//		setterYear(line);
//		cout << "Number of towns: ";
//		getline(cin, line);
//		int k = stoi(line);
//		setterN2(k);
//		cout << "Towns: \n";
//		for (int i = 0; i < k; i++)
//		{
//			getline(cin, line);
//			setterRoute(line, i);
//		}
//		cout << "Carriages: ";
//		getline(cin, line);
//		setterCarriages(line);
//		cout << "Volume: ";
//		getline(cin, line);
//		setterVolume(line);
//	}
//
//};
//
//class Auto :public Base
//{
//	string year; // год выпуска
//	string brand; //марка 
//	string model; // модель
//	string* towns; // список городов
//	int n3;
//
//public:
//	void setterYear(string year) { this->year = year; }
//	string getterYear() { return year; }
//	void setterBrand(string brand) { this->brand = brand; }
//	string getterBrand() { return brand; }
//	void setterModel(string model) { this->model = model; }
//	string getterModel() { return model; }
//	void setterN3(int n3) { this->n3 = n3; towns = new string[n3]; }
//	int getterN3() { return n3; }
//	void setterTowns(string towns, int i) { this->towns[i] = towns; }
//	string getterTowns(int i) { return towns[i]; }
//
//	Auto()
//	{
//		cout << "Constructor Auto()\n";
//		string line;
//		cout << "Year: ";
//		getline(cin, line);
//		setterYear(line);
//		cout << "Brand: ";
//		getline(cin, line);
//		setterBrand(line);
//		cout << "Model: ";
//		getline(cin, line);
//		setterModel(line);
//		cout << "Number of towns: ";
//		getline(cin, line);
//		int k = stoi(line);
//		setterN3(k);
//		cout << "Towns: \n";
//		for (int i = 0; i < k; i++)
//		{
//			getline(cin, line);
//			setterTowns(line, i);
//		}
//	}
//
//	Auto(ifstream& file)
//	{
//		string line;
//		cout << "Constructor Auto(int a)\n";
//		getline(file, line);
//		setterYear(line);
//		getline(file, line);
//		setterBrand(line);
//		getline(file, line);
//		setterModel(line);
//		getline(file, line);
//		int k = stoi(line);
//		setterN3(k);
//		for (int i = 0; i < k; i++)
//		{
//			getline(file, line);
//			setterTowns(line, i);
//		}
//	}
//
//	void Write(ofstream& file)
//	{
//		file << "Auto" << endl;
//		file << getterYear() << endl;
//		file << getterBrand() << endl;
//		file << getterModel() << endl;
//		file << getterN3() << endl;
//		for (int i = 0; i < getterN3(); i++)
//		{
//			file << getterTowns(i) << endl;
//		}
//	}
//
//	void Show1()
//	{
//		cout << " Auto: " << getterBrand() << " " << getterModel() << endl;
//	}
//
//	void Show()
//	{
//		cout << " Auto:" << endl;
//		cout << "   Year: " << getterYear() << endl;
//		cout << "   Brand: " << getterBrand() << endl;
//		cout << "   Model: " << getterModel() << endl;
//		cout << "   Number of towns: " << getterN3() << endl;
//		for (int i = 0; i < getterN3(); i++)
//		{
//			cout << "   " << getterTowns(i) << endl;
//		}
//	}
//
//	void Edit()
//	{
//		string line;
//		cout << "Year: ";
//		getline(cin, line);
//		setterYear(line);
//		cout << "Brand: ";
//		getline(cin, line);
//		setterBrand(line);
//		cout << "Model: ";
//		getline(cin, line);
//		setterModel(line);
//		cout << "Number of towns: ";
//		getline(cin, line);
//		int k = stoi(line);
//		setterN3(k);
//		cout << "Towns: \n";
//		for (int i = 0; i < k; i++)
//		{
//			getline(cin, line);
//			setterTowns(line, i);
//		}
//	}
//
//};
//
//class Transport
//{
//	Base** arr;
//	int n;
//public:
//	Transport() {};
//
//	Transport(const Transport& object)//конструктор копирования
//	{
//		this->arr = new Base * [object.n];
//
//		for (int i = 0; i < object.n; i++)
//		{
//			arr[i] = object.arr[i];
//		}
//	}
//
//	void setterN(int n) { this->n = n; }
//	int getterN() { return n; }
//
//	void Read()//чтение из файла
//	{
//		string text = "test.txt";
//		ifstream file;
//		try// генерация ошибки на открытие файла
//		{
//			file.open(text);
//			if (!file.is_open())
//				throw text;
//		}
//		catch (string tt)
//		{
//			cout << "file " << tt << " does not exist" << endl;
//			system("pause");
//			return;
//		}
//		string line;
//		getline(file, line);
//		int size = stoi(line);
//		setterN(size);
//		arr = new Base * [size];
//		getline(file, line);
//		int i = 0;
//		while (!file.eof() && i < size)
//		{
//			if (line == "Airplane")
//			{
//				arr[i] = new Airplane(file);
//				i++;
//			}
//			if (line == "Train")
//			{
//				arr[i] = new Train(file);
//				i++;
//			}
//			if (line == "Auto")
//			{
//				arr[i] = new Auto(file);
//				i++;
//			}
//			getline(file, line);
//		}
//	}
//
//	void Save()// сохранение в файл
//	{
//		ofstream file;
//		file.open("test.txt");
//		file << n << endl;
//		for (int i = 0; i < n; i++)
//		{
//			arr[i]->Write(file);
//		}
//
//	}
//
//	void Show_list()// вывод всего списка 
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cout << i + 1 << ".";
//			arr[i]->Show();
//			cout << "\n";
//		}
//
//	}
//
//	int Show_object()//доступ-вывод 1 элемента с опознавательными данными для дальнейших операций (редактирвоание или просмотра)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cout << i + 1 << ".";
//			arr[i]->Show1();
//		}
//		cout << "Select list number: ";
//		string number;
//		getline(cin, number);
//		system("cls");
//		arr[stoi(number) - 1]->Show();
//		return stoi(number);
//	}
//
//	void Edit_all() //редактирование элемента (редактирует весь элемент, поскольку у тебя транспорт и тупо редактировать что-то одно, ну типо меняется тип, значит меняется и модель машины)
//	{
//		int number = Show_object();
//		string item;
//		arr[number - 1]->Edit();
//		arr[number - 1]->Show();
//	}
//
//	void Delete(int number) //функция удаления элемента
//	{
//		Transport buf(*this);
//		setterN(getterN() - 1);
//		arr = new Base * [getterN()];
//		for (int i = 0; i < number - 1; i++)
//		{
//			arr[i] = buf.arr[i];
//		}
//		for (int i = number - 1; i < getterN(); i++)
//		{
//			arr[i] = buf.arr[i + 1];
//		}
//	}
//
//	Transport operator +(int a) //перегрузка оператора - функция добавления элемента в массив
//	{
//		int i;
//		Transport buf(*this);
//		setterN(getterN() + 1);
//		arr = new Base * [n];
//		for (int i = 0; i < getterN() - 1; i++)
//		{
//			arr[i] = buf.arr[i];
//		}
//		switch (a)
//		{
//		case 1: {arr[getterN() - 1] = new Airplane(); break; }
//
//		case 2: {arr[getterN() - 1] = new Train(); break; }
//
//		case 3: {arr[getterN() - 1] = new Auto(); break; }
//
//		}
//		return*this;
//	}
//
//	~Transport()
//	{
//		cout << "\nDestructor ~Transport()\n";
//		delete arr;
//	}
//
//};
//
//int main()
//{
//	Transport ob1;
//	char c, c1;
//	int flag = 1;
//	string k;
//	const char* oper[] =
//	{
//	 "Menu:",
//	 " 1 - Read",
//	 " 2 - Add",
//	 " 3 - Delete",
//	 " 4 - Show array",
//	 " 5 - Show object",
//	 " 6 - Edit",
//	 " 7 - Save",
//	 " 8 - Exit",
//	};
//
//	while (flag != 0)
//	{
//		for (int i = 0; i < 9; i++)
//		{
//			cout << oper[i] << endl;
//		}
//		cout << "Enter option number";
//		c = _getch();
//		if (c == '1')
//		{
//			system("cls");
//			ob1.Read();
//			system("pause");
//			system("cls");
//
//		}
//		if (c == '2')
//		{
//			system("cls");
//			cout << "1 - Airplane\n2 - Train\n3 - Auto\nSelect the element type to create: ";
//			getline(cin, k);
//			system("cls");
//			ob1 + stoi(k);
//			cout << "0-Menu: ";
//			c1 = _getch();
//			if (c1 == '0')
//			{
//				system("cls");
//			}
//		}
//		if (c == '3')
//		{
//			system("cls");
//			ob1.Show_list();
//			cout << "Select item number to delete: ";
//			getline(cin, k);
//			ob1.Delete(stoi(k));
//			cout << "0-Menu: ";
//			c1 = _getch();
//			if (c1 == '0')
//			{
//				system("cls");
//			}
//		}
//		if (c == '4')
//		{
//			system("cls");
//			ob1.Show_list();
//			cout << "0-Menu: ";
//			c1 = _getch();
//			if (c1 == '0')
//			{
//				system("cls");
//			}
//		}
//		if (c == '5')
//		{
//			system("cls");
//			ob1.Show_object();
//			cout << "0-Menu: ";
//			c1 = _getch();
//			if (c1 == '0')
//			{
//				system("cls");
//			}
//		}
//		if (c == '6')
//		{
//			system("cls");
//			ob1.Edit_all();
//			cout << "0-Menu: ";
//			c1 = _getch();
//			if (c1 == '0')
//			{
//				system("cls");
//			}
//		}
//		if (c == '7')
//		{
//			ob1.Save();
//			system("cls");
//		}
//		if (c == '8')
//		{
//			system("cls");
//			flag = 0;
//			break;
//		}
//	}
//
//	return 0;
//}
//
//
