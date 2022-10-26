#pragma once
#include <iostream>
using namespace std;
class NormalClass
{
	//default private
	string _data;
	static int st_data;

	//private function only can be see inside class
	static void Sp_function()
	{
		cout << "NormalClass static private function called" << endl << endl;
	}
	void private_fun()
	{
		cout << "NormalClass private function called" << endl << endl;
	}
public:
	void function()
	{
		//private function only could be called
		//私有方法和变量只在类内可见，可调用
		private_fun();
		cout << "NormalClass function called: " << st_data++ << endl << endl;
	}
	//静态方法可以被called by class name or entity
	static void S_function()
	{
		Sp_function();
		cout << "NormalClass static public function called："<< st_data++ << endl << endl;
	}
};
//类内的静态数据需要在类外初始化，相当于全局变量，生存期会延续到程序结束
int NormalClass::st_data = 1;
//static data should be initilaized