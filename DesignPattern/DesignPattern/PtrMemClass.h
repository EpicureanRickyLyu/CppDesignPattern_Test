#pragma once
#include <iostream>
class ptrMember
{
	int *data1;
public:
	ptrMember():data1(new int[2]{0})
	{
		
	}
	void EditData()
	{
		data1[0]++;
	}
	~ptrMember()
	{
		std::cout << "free data: " << * data1 << std::endl;
		delete data1;
	}
};


