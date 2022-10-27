#pragma once
#include <iostream>
using namespace std;

class Product
{
private:
	string product;
public:
	virtual ~Product() {};
	void ProductFunction()
	{
		cout << "init base product"  << endl;
	}
};

class ConcreteProduct1 :public Product
{
	
public:
	ConcreteProduct1()
	{
		ProductFunction();
		cout << "product1 created" << endl << endl;
	}
	~ConcreteProduct1()
	{

	}
};
class ConcreteProduct2 :public Product
{
public:
	ConcreteProduct2()
	{
		ProductFunction();
		cout << "product2 created" << endl << endl;
	}
	~ConcreteProduct2()
	{

	}
};

class factory
{
public:
	virtual ~factory() {};
	virtual Product* CreateProduct() = 0;

	void SomeLogic()
	{
		Product* product = this->CreateProduct();
		cout << "factory logic" << endl;
	}
};

class subFactory1:public factory
{
private:

public:
	~subFactory1()
	{

	}
	Product* CreateProduct() override
	{
		return new ConcreteProduct1();
	}
};
class subFactory2 :public factory
{
private:

public:
	~subFactory2()
	{

	}
	Product* CreateProduct() override
	{
		return new ConcreteProduct2();
	}
};

void ClientCode(factory& creator) {
	// ...
	cout << "Client: I'm not aware of the creator's class, but it still works.\n";
		creator.SomeLogic();
	// ...
}//client 可以通过不接触任何产品的类型，而得到产品的entity