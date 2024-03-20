#include<iostream>
using namespace std;

struct Mahasiswa{
	string nama, npm;
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << "Nama saya adalah " << Mhs.nama << endl;
	cout << "NPM saya adalah " << Mhs.npm;
}
