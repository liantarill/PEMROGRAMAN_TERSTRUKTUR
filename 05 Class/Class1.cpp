#include<iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << "Nama saya adalah " << Mhs.nama << endl;
	cout << "NPM saya adalah " << Mhs.npm;
}
