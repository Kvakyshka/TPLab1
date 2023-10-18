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
	Transport(const Transport& object);//����������� �����������
	void setterN(int n);
	int getterN();
	void Read();//������ �� �����
	void Save();// ���������� � ����
	void Show_list();// ����� ����� ������ 
	int Show_object();//������-����� 1 �������� � ���������������� ������� ��� ���������� �������� (�������������� ��� ���������)
	void Edit_all(); 
	void Delete(int number); //������� �������� ��������
	Transport operator +(int a); //���������� ��������� - ������� ���������� �������� � ������
	~Transport();
};