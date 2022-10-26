// DesignPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "DesignPattern/Singleton.h"
#include "DesignPattern/NormalClass.h"

using namespace std;
#define shuchu cout<<

int main()
{
   Singleton::GetInstance().GetAllUIElement();
   //Singleton _ins = new Singleton();
   NormalClass N_entity;
   N_entity.function();
   N_entity.S_function();
   NormalClass::S_function();
}
