#include <iostream>
#include <conio.h>

using namespace std;
int main()

{

char x;

int liter, total, bayar, kembali, pertalite, pertamax;

cout<<"============TRANSAKSI SPBU============";cout<<endl<<endl;

cout<<"Silahkan Pilih Jenis Transaksi";cout<<endl;

cout<<"1. Pertalite";cout<<endl;

cout<<"2. Pertamax";cout<<endl;

cout<<"Masukkan Pilihan Anda (1/2) = ";cin>>x;cout<<endl<<endl;

if (x=='1')

{

cout<<"Harga Pertalite Perliter : 7000";cout<<endl;

cout<<"Jumlah Liter          : ";cin>>liter;

cout<<"Masukkan Uang Bayar   : ";cin>>bayar;

pertalite=7000;

total=pertalite*liter;

kembali=bayar-total;


cout<<"Total Bayar           : "<<total;cout<<endl;

cout<<"Uang Kembali          : "<<kembali<<endl<<endl;



cout<<"======================================"<<endl<<endl;

cout<<"   Terima Kasih Atas Kunjungan Anda"<<endl;

cout<<"Semoga Anda Puas dengan Pelayanan Kami"<<endl<<endl;

cout<<"======================================"<<endl;

}

else if (x=='2')

{

cout<<"Harga Pertamax Perliter : 9000";cout<<endl;

cout<<"Jumlah Liter            : ";cin>>liter;

cout<<"Masukkan Uang Bayar     : ";cin>>bayar;

pertamax=9000;

total=pertamax*liter;

kembali=bayar-total;

cout<<"Total Bayar           : "<<total;cout<<endl;

cout<<"Uang Kembali          : "<<kembali<<endl<<endl;

cout<<"======================================"<<endl<<endl;

cout<<"   Terima Kasih Atas Kunjungan Anda"<<endl;

cout<<"Semoga Anda Puas dengan Pelayanan Kami"<<endl<<endl;

cout<<"======================================"<<endl;

}

else

cout<<"Maaf, Pilihan Salah. Silahkan Masukkan Pilihan Anda";

getch();

}

