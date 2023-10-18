#pragma once
#include "Base.h"
#include "Airplane.h"
#include "Train.h"
#include "Auto.h"
class Transport
{
	Base** arr;
	int n;
public:
	Transport();
	Transport(const Transport& object);//конструктор копирования
	void setterN(int n);
	int getterN();
	void Read();//чтение из файла
	void Save();// сохранение в файл
	void Show_list();// вывод всего списка 
	int Show_object();//доступ-вывод 1 элемента с опознавательными данными для дальнейших операций (редактирвоание или просмотра)
	void Edit_all(); 
	void Delete(int number); //функция удаления элемента
	Transport operator +(int a); //перегрузка оператора - функция добавления элемента в массив
	~Transport();
};