#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

int main (){
int a = 10e2; //pangkat 
double z = 10.30;
int b = 0b1111101; //biner
int c = 0707; //oktal
int d = 0x283; //hexa desimal
int e = 231;
int f = 21;
unsigned long ba {100'000'000u};

cout << round(z)<< endl; //function pembulatan
cout << ba<<endl;

// cout << bitset<3>(e)<<endl;
// cout << oct<<endl;
// cout <<e<<endl;
// cout <<f<<endl;

//     cout << dec;
//     cout << "\n\nTampilkan decimal \n\n"<<e<<endl;
//     cout << f<<endl;

    return 0;
}