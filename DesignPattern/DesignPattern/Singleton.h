#pragma once
#include <iostream>
using namespace std;
/// <summary>
/// 单例可以很好的包装各种不同的重要的全局变量，让全局变量，方法等全都隐藏在一个类中
/// 通过单例类的实例来调用不同的变量，更安全，也更方便管理
/// </summary>
class Singleton
{
private:
	//need to be define outside the function
	static Singleton _instance;
	
	string data;
	int data2;
private:
	Singleton()
	{
		cout << "Default initiate singleton" << endl << endl;
	}

	Singleton(string value,int value2):data(value),data2(value2)
	{
		cout << "instantiate singleton" << endl << endl;
	}

	Singleton(const Singleton& single) = delete;//copy constructor 禁止同类型copy防止产生新的拷贝数据
	Singleton &operator=(const Singleton&) = delete;
	//~Singleton()
	//{
	//	if (_instance != NULL)
	//	delete _instance;
	//}

public:
	static int id;
	static Singleton& GetInstance()
	{
		return _instance;
	}

	void GetAllUIElement()
	{
		cout << "Get UI Element" << endl << endl;
	}

}; 
Singleton Singleton::_instance;//静态变量需要在类外初始化，相当于全局变量


