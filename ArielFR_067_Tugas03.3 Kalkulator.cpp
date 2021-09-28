#include <iostream>
#include <math.h>
#include <conio.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, op;
    float res;
    char ch, yn;

    //Data Input
    cout<<"Calculator"<<endl;

    start:

    cout<<"|---Operasi Aritmatika Yang Tersedia---|"<<endl;

    cout<<"1. Penjumlahan "<<endl;
    cout<<"2. Pengurangan "<<endl;
    cout<<"3. Perkalian "<<endl;
    cout<<"4. Pembagian "<<endl;
    cout<<"5. Modulus "<<endl;
    cout<<"Masukkan [1] [2] [3] [4] [5] Pada Input "<<endl;

    cout<<"---------------------------------------------"<<endl;

    cout<<"Masukkan Operasi Yang Tersedia = "; cin>>op;
    cout<<"Masukkan Bilangan Pertama = "; cin>>a;
    cout<<"Masukkan Bilangan Kedua = "; cin>>b;

    //Operasional
        switch(op){
            case 1 : res=a+b;
                ch='+';
                break;

            case 2 : res=a-b;
                ch='-';
                break;

            case 3 : res=a*b;
                ch='*';
                break;

            case 4 : res=a/b;
                ch='/';
                break;

            case 5 : res=a%b;
                ch='%';
                break;

            default :
                cout<<"Operasi Invalid"<<endl;
	}

    //Result
    cout<<"---------------------------------------------"<<endl;
    cout<<"Hasil Operasi"<<endl;
    cout<<""<<a<<ch<<b<<" = "<<res<<endl;


    //Return Point
    cout<<"---------------------------------------------"<<endl;
    cout<<" Lakukan Operasi Penghitungan Lagi? (Y / N) = "; cin>>yn;

    if (yn=='Y' || yn=='y'){
        goto start;

    }else {
        exit( 0 );


}
}
