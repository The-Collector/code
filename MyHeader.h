#ifndef MYHEADER_H_
#define MYHEADER_H_
#include <iostream>
using namespace std;

class GetAgeClass
{
	public:
	void getAge(int impAge)
	{ 
		age = impAge;
	}

	void OutputAge()
	{
		cout << age;
	}
	private:
	int age;

};
#endif
