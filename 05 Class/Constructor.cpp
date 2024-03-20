#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        string nama, npm;

        Mahasiswa(string nama, string x){
            this->nama = nama;
            npm = x;
        }
};

int main(){
    Mahasiswa Mhs("Lian", "2283");

    // cin >> Mhs.nama;
    // cin >> Mhs.npm;   

    cout << "Nama saya adalah " << Mhs.nama << endl;
    cout << "NPM saya adalah " << Mhs.npm;
}