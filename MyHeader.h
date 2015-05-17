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
	void SetName(string n) { name = n; }
	string GetName() { return name; }
	private:
	string name;
	int age;

};
#endif
