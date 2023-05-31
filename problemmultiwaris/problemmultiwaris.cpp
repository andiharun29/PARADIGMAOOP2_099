#include <iostream>
using namespace std std;

class orang {
public:
	int umur;

	orang(int pumur) :
		umur(pumur)
	{
		cout << "orang dibuat dengan umur " << umur << "\n" << endl;
	}
};

class pekerja : public orang {
public:

	pekerja(int pumur) :
		orang(pumur)
	{
		cout << "pekerha dibuat\n" << endl;
	}

};