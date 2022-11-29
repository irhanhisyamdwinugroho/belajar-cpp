#include <iostream>

using namespace std;

int main() {
    string nama;
    int umur;

    cout <<"masukkan nama: ";
    getline(cin,nama); //ini adalah function untuk menuliskan nama tanpa spasi

    cout << "masukan umur : ";
    cin >> umur;

    cout << '\n';

    cout << "selamat belajar c ++ "<<'\t' << nama << ", semangat!!"<< endl;
    cout << "Usia anda saat ini" << umur << "tahun"  << endl;

    return 0;
}