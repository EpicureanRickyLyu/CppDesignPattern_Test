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

class Gun :public Product
{
	
public:
	Gun()
	{
		ProductFunction();
		cout << "product1 created" << endl << endl;
	}
	~Gun()
	{


	}
};
class Knife :public Product
{
public:
	Knife()
	{
		ProductFunction();
		cout << "product2 created" << endl << endl;
	}
	~Knife()
	{

	}
};

class Weaponfactory
{
public:
	virtual ~Weaponfactory() {};
	virtual Product* CreateProduct() = 0;
};

class GunFactory:public Weaponfactory
{
private:

public:
	~GunFactory()
	{

	}
	Product* CreateProduct() override
	{
		return new Gun();
	}
};

class knifeFactory :public Weaponfactory
{
private:

public:
	~knifeFactory()
	{

	}
	Product* CreateProduct() override
	{
		return new Knife();
	}
};

void CreateConcreateWeapon(Weaponfactory& creator) {
	// ...
	cout << "Client: I'm not aware of the creator's class, but it still works.\n";
		creator.CreateProduct();
	// ...
}
//client 可以通过不接触任何产品的类型，而得到产品的entity