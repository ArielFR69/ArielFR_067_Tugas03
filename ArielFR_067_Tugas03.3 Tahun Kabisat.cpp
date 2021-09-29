#include <iostream>

using namespace std;

int main()
{
    int tahun;

    //Intro

    cout<<"--------------------------"<< endl;
    cout<<"Penghitungan Tahun Kabisat"<<endl;
    cout<<"--------------------------"<< endl;

    //Data Input
    cout<<"Masukkan Tahun = ";
    cin>>tahun;


    //Declaration
    cout<<"Hasil hitung = ";

 if (tahun%4 == 0){
    cout << tahun << " Merupakan Tahun Kabisat";

    } else if(tahun%100 == 0){
    cout << tahun << " Bukan Tahun Kabisa";
    } else if(tahun%4 == 0){
    cout << tahun << " Merupakan Tahun Kabisat";

  } else {
    cout << tahun << " Bukan Tahun kabisat";
  }


    return 0;
}
