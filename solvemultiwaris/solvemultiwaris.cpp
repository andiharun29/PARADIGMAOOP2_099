#include <iostream>
using namespace std;

class orang {
public:
	int umur;

	orang(int pumur) :
		umur(pumur)
	{
		cout << "orang di buat dengan umur " << umur << "\n" << endl;
	}
};