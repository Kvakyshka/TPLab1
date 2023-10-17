#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<conio.h>
#include <Windows.h>
#include <fstream>
using namespace std;
class Base
{
public:

	virtual void Write(ofstream& file) = 0;
	virtual void Show() = 0;
	virtual void Show1() = 0;
	virtual void Edit() = 0;
	virtual ~Base() = 0;

};