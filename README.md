Alright lets try to get some code on
include "header.h"

struct someInfo
{

	int num;
	string name;
};



int main()
{
	someInfo myPerson;

	cout << "Enter your name: ";
	getline(cin, myPerson.name);

	cout << "Enter your number: ";
	cin  >> myPerson.num;

	if(num < 0)
	{
		num *=-1;
		
	}

	return 0;
}
