#include <iostream>
using namespace std;

class laptop
{
private:
    /* data */
    string pemilik;
    string jenis_laptop;
    int tahun_pembuatan;

public:
    void setpemilik(string var1){
    pemilik = var1;
    }
    void setjenis_laptop(string var2){
      jenis_laptop = var2;  
    }
    void settahun_pembuatan(int var3){
        tahun_pembuatan = var3;
    }

    

    string getpemilik(){
        return pemilik;
    }
    string getjenis_laptop(){
        return jenis_laptop;
    }
    int gettahun_pembuatan(){
        return tahun_pembuatan;
    }

};

class lenovo: public laptop{
    public:
lenovo(){
        cout<<"ini adalah constructor lenovo"<<endl;;
    }

};

int main(){
    laptop laptopIrhan;
    lenovo laptopAndi;
    cout<<"## PROGRAM MENAMPILKAN CLASS##\n\n" <<endl;

    laptopIrhan.setpemilik ("Irhan Hisyam");
    laptopIrhan.setjenis_laptop ("lenovo");
    laptopIrhan.settahun_pembuatan (2015);

    cout<<laptopIrhan.getpemilik()<<endl;
    cout<<laptopIrhan.getjenis_laptop()<<endl;
    cout<<laptopIrhan.gettahun_pembuatan()<<endl;


cout<<"## PROGRAM MENAMPILKAN inheritence##\n\n" <<endl;
    laptopAndi.setpemilik ("andi prasetyo");
    laptopAndi.setjenis_laptop ("lenovo tenan");
    laptopAndi.settahun_pembuatan (2015);
    cout<<laptopAndi.getpemilik()<<endl;
    cout<<laptopAndi.getjenis_laptop()<<endl;
    cout<<laptopAndi.gettahun_pembuatan()<<endl;

    return 0;


}