#include <iostream>

using namespace std;

struct  mahasiswa {
    /* data */
    string nama;
    string kuliah;
    int nim;
};

int main(){
    struct mahasiswa mahasiswa01;
    
    cout <<"## Pendaftaran mahasiswa baru"<<endl;
    cout <<" ========================= "<<endl;
    cout << endl;

    cout << "Masukan nama : ";
    getline(cin, mahasiswa01.nama);

    cout << "Masukan kuliah  : ";
    getline(cin, mahasiswa01.kuliah);

    cout << "Masukan NIM : ";
    cin >>mahasiswa01.nim;

    cout<< "Nama mahasiswa : "<<mahasiswa01.nama <<endl;
    cout<< "kuliah mahasiswa : "<<mahasiswa01.kuliah <<endl;
    cout<< "nim mahasiswa : "<<mahasiswa01.nim <<endl;
}
