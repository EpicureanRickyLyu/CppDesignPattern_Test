// DesignPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "DesignPattern/Singleton.h"
#include "DesignPattern/NormalClass.h"
#include "DesignPattern/PtrSingleton.h"
#include "DesignPattern/PtrMemClass.h"
#include "DesignPattern/factory.h"
using namespace std;

#define shuchu cout<<

void temp()
{
	
	ptrMember _ins;
	_ins.EditData();
	
}
int main()
{
	factory* ft = new subFactory1();
	factory* ft2 = new subFactory2();
	ClientCode(*ft);
	ClientCode(*ft2);
}
