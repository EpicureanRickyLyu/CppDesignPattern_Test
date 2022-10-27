#pragma once
#include <iostream>
/// <summary>
/// 普通的值类型互相拷贝赋值，调用默认的拷贝构造函数都属于浅拷贝
/// 深拷贝时，需要完全拷贝所有数据，以及指针深层的数据，防止发生浅拷贝两个指针指向同一块内存地址
/// 深拷贝之后两份数据相互独立
/// </summary>
class PtrSingleton
{
	static PtrSingleton* _instance;

	int data;
	//静态成员属于类，类似全局变量只是属于单独的类，可以用类名调用，
	//不能在构造函数初始化，不能赋予默认值，因为只有可实例化的才能赋予默认值
	PtrSingleton():data(0)
	{
		std::cout << "default initiate ptr singleton" << std::endl << std::endl;
	}
	//PtrSingleton(PtrSingleton* _instance) = delete;
	//void operator=(const PtrSingleton* _ins) = delete;
public:
	/**
	* Singletons should not be assignable.
	*/
	PtrSingleton(PtrSingleton& other) = delete;
	void operator=(const PtrSingleton&) = delete;
	//防止使用其他实例进行初始化时，调用拷贝构造
	~PtrSingleton()
	{
		std::cout << "delete" << ++data << std::endl << std::endl;
		delete _instance;
	}
	void Logic()
	{
		std::cout << "ptrsingleton logic: "<< ++data << std::endl << std::endl;
	}
	//外部接口
	static PtrSingleton* GetInstance()
	{
		if (_instance == nullptr)
		{
			_instance = new PtrSingleton();
		}
		return _instance;
	}
};
PtrSingleton* PtrSingleton::_instance;

