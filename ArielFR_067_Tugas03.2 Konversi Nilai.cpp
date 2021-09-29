#include <iostream>

using namespace std;

int main()
{
    //Data

    string name, nim;
	int nilai;

    //Entry

    cout<< "------------------------------------------------------"<<endl;
    cout<< "Konversi Nilai Siswa Menjadi Alphabetical Measurements" << endl;
    cout<< "------------------------------------------------------"<<endl;


    //Data Input


    cout<<"Masukkan nama anda	= ";
    getline(cin,name);

	cout<<"Masukkan NIM anda	= ";
	cin>>nim;

    start:
	cout<<"Masukkan nilai anda	= ";
	cin>>nilai;


	//Declaration

	if(nilai>=80 && nilai<=100){
		cout<<"\nAnda Mendapatkan Nilai A";

	}else if(nilai>=65 && nilai<=79){
		cout<<"Anda Mendapatkan Nilai B";

	}else if(nilai>=50 && nilai<=64){
		cout<<"Anda Mendapatkan Nilai C";

	}else if(nilai>=35 && nilai<=49){
		cout<<"Anda Mendapatkan Nilai D";

	}else if(nilai>=0 && nilai<=34){
		cout<<"Anda Mendapatkan Nilai E";

	}else {
		cout<<"Nilai yang anda masukan salah"<<endl;
		goto start;
	}

    return 0;
}
