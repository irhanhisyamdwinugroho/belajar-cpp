#include <iostream>

using namespace std;

class Laptop{
    public:
    string NamaLaptop;
    int tahun;
    double ukuran;

    string hidupkanLaptop(){
        return "Hidupkan laptop";
    }

    string matikanLaptop(){
        return "Matikan laptop";
    }
};

int main (){

    Laptop Laptopirhan;

    Laptopirhan.NamaLaptop = "Lenovo";
    Laptopirhan.tahun = 2022;
    Laptopirhan.ukuran = 15.4;

    cout <<Laptopirhan.NamaLaptop<<endl;
    cout <<Laptopirhan.tahun<<endl;
    cout <<Laptopirhan.ukuran<<endl;

    cout <<Laptopirhan.hidupkanLaptop()<<endl;
    cout <<Laptopirhan.matikanLaptop()<<endl;

    return 0;
}