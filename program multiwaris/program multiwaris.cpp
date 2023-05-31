#include <iostream>
#include <string>
using namespace std;

class orang {
	public:
	string nama;

	orang(string pnama) :
		nama(pnama) {
		cout << "orang dihapus\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string jeniskelamin;

	manusia(string pjeniskelamin) :
		jeniskelamin(pjeniskelamin) {
		cout << "manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "manusia dihapus\n" << endl;
	}
};

class pelajar :private manusia, public orang {
	public:
	string sekolah;

	pelajar(string pnama, string pjeniskelamin, string psekolah) :
		orang(pnama),
		manusia(pjeniskelamin),
		sekolah(psekolah) {
		cout << "pelajar di buat\n" << endl;
	}
	~pelajar() {
		cout << "pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return "hallo, nama saya" + nama + "dengan jenis kelamin"
			+ jeniskelamin + "dari sekolah" + sekolah + "\n\n";
	}
};

int main() {
	pelajar siswa("andi laksono", "laki - laki", "SMAN 1 Bantul");
	cout << siswa.perkenalan();

	return 0;
}