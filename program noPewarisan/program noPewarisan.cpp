#include <iostream>
using namespace std;

class baseclass final {
public:
	virtual void perkenalan() {
		cout << "halo saya function dari base class";
	}
};
class derivedclass : public baseclass {
public:
	void perkenalan() {
		cout << "halo saya function dari devired class";
	}
};
