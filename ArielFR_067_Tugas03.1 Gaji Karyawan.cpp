#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    //Data
    char nama[100], nik[16];
    int gender, stat, vehicle;
    long int gajipokok, gajikotor, gajibersih, tax, konsumsi, transportasi, tunjangan;

    //Intro
    cout<<"--------------------------------------"<<endl;
    cout<<"  Program Penghitungan Gaji Karyawan  "<<endl;
    cout<<"--------------------------------------"<<endl;

    //Data Input
    cout<<" Nama Karyawan = ";gets(nama);

    cout<<" NIK Karyawan = ";gets(nik);

    cout<<" Jenis Kelamin = [1] Laki-Laki / [2] Perempuan"<<endl;
    cout<<" Jenis Kelamin = "; cin>>gender;

    cout<<" Status Pernikahan = [1] Lajang, [2] Menikah"<<endl;
    cout<<" Status Pernikahan = "; cin>>stat;

    cout<<" Kendaraan = [1] Sepeda Motor / [2] Mobil"<<endl;
    cout<<" Kendaraan = "; cin>>vehicle;

    cout<<" Gaji Pokok = Rp."; cin>>gajipokok;

    cout<<" Uang Makan = Rp."; cin>>konsumsi;

    //Operational

        //Tunjangan
            if((gender==2)&&(stat==1)){
                    tunjangan = 500000;
            }
            else {
                tunjangan = 0;
            }

        //Transportasi
            if(vehicle==1) {
                transportasi = 1000000;
            }
                else if(vehicle==0) {
                transportasi = 500000;
            }
                else {
                transportasi = 0;
                }


        //Gaji Kotor
        gajikotor=gajipokok+konsumsi+transportasi+tunjangan;
        cout<<" Gaji Kotor = Rp. "<<gajikotor<<endl;
        cout<<"---------------------------"<<endl;

        //Tax
        tax=0.05*gajipokok;
        cout<<" Pajak Yang Diterima = Rp. "<<tax<<endl;
        cout<<"---------------------------"<<endl;

        //Gaji Bersih
        gajibersih=gajikotor-tax;
        cout<<" Gaji Bersih = Rp. "<<gajibersih<<endl;



    return 0;
}
