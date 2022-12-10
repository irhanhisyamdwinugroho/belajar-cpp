#include <iostream>

using namespace std;

int main(){

cout << "## Program C++ Menghitung Pecahan Uang ##" << endl;
cout << "===========================================" << endl;
cout << endl;

unsigned long long uang,sisa;
 unsigned long long seratus_ribu,lima_puluh_ribu,dua_puluh_ribu,sepuluh_ribu;
 unsigned long long lima_ribu,dua_ribu,seribu,lima_ratus,seratus;

 cout << "Input nominal uang: Rp.";
 cin >> uang;
 cout << endl;

 seratus_ribu = uang / 100000;
 sisa = uang - (100000 * seratus_ribu);

 lima_puluh_ribu = sisa / 50000;
 sisa = sisa - (50000 * lima_puluh_ribu);

 dua_puluh_ribu = sisa / 20000;
 sisa = sisa - (20000 * dua_puluh_ribu);

 sepuluh_ribu = sisa / 10000;
 sisa = sisa - (10000 * sepuluh_ribu);

 lima_ribu = sisa / 5000;
 sisa = sisa - (5000 * lima_ribu);

 dua_ribu = sisa / 2000;

    sisa = sisa - (2000 * dua_ribu);

 seribu = sisa / 1000;
 sisa = sisa - (1000 * seribu);

 lima_ratus = sisa / 500;
 sisa = sisa - (500 * lima_ratus);

 seratus = sisa / 100;
 sisa = sisa - (100 * seratus);

 cout << "Detail pecahan:" << endl;
 cout << "pecahan 100.000 = " << seratus_ribu << " lembar" << endl;
 cout << "pecahan 50.000 = " << lima_puluh_ribu << " lembar" << endl;
 cout << "pecahan 20.000 = " << dua_puluh_ribu << " lembar" << endl;
 cout << "pecahan 10.000 = " << sepuluh_ribu << " lembar" << endl;
 cout << "pecahan 5.000 = " << lima_ribu << " lembar" << endl;
 cout << "pecahan 2.000 = " << dua_ribu << " lembar" << endl;
 cout << "pecahan 1.000 = " << seribu << " lembar" << endl;
 cout << "pecahan 500 = " << lima_ratus << " lembar" << endl;
 cout << "pecahan 100 = " << seratus << " lembar" << endl;
 cout << "sisa = " << sisa << endl;
    return 0;
}