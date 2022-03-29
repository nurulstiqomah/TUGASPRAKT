#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;
main()
{
char pembelian;
int kode, porsi, jumlah, banyak, dlv, dlv1, dlv2, tot, tot2;
long int total,diskon,akhir, bayar, harga,duit,kembalian;
atas:
	cout<<" ======================MENU MAKANAN======================="<<endl;
	cout<<" 1. Ayam geprek "<<endl;
	cout<<" 2. Ayam goreng "<<endl;
	cout<<" 3. Udang goreng "<<endl;
	cout<<" 4. Cumi goreng "<<endl;
	cout<<" 5. Ayam bakar "<<endl;
	cout<<"Jumlah Menu Yang Dipesan = ";
	cin>>banyak;
	jumlah=1;
	bayar=0;
for(jumlah=1;jumlah<=banyak;jumlah++)
{ulang:
	cout<<" Masukan Kode Menu = ";
	cin>>kode;
	cout<<" "<<endl;
if (kode==1){
	cout<<" Nama Makanan = Ayam geprek"<<endl;
	cout<<" Harga        = Rp. 21000,-"<<endl;
	cout<<" Jumlah Porsi = ";
	cin	>>porsi;
	harga=21000;
	total=harga*porsi;
	
	}
	else if (kode==2){
	cout<<" Nama Makanan = Ayam goreng "<<endl;
	cout<<" Harga        = Rp. 17000,-"<<endl;
	cout<<" Jumlah Porsi = ";
	cin>>porsi;
		harga=17000;
		total=harga*porsi;
		
}
else if (kode==3)
{
	cout<<" Nama Makanan = Udang goreng"<<endl;
	cout<<" Harga        = Rp. 19000,-"<<endl;
	cout<<" Jumlah Porsi = ";
	cin>>porsi;
		harga=19000;
		total=harga*porsi;

}

else if (kode==4)
	{
	cout<<" Nama Makanan = Cumi goreng"<<endl;
	cout<<" Harga        = Rp. 20000,-"<<endl;
	cout<<" Jumlah Porsi = ";
	cin>>porsi;
		harga=20000;
		total=harga*porsi;
		
}
else if (kode==5)
{
	cout<<" Nama Makanan = Ayam bakar"<<endl;
	cout<<" Harga        = Rp. 25000,-"<<endl;
	cout<<" Jumlah Porsi = ";
	cin>>porsi;
		harga=25000;
		total=harga*porsi;

}

else
{
cout<<"-Invalid Number-a";
goto ulang;
}
bayar=bayar+total;
}

	cout<<" Total Bayar          = Rp"<<bayar<<",-";
	cout<<" "<<endl;
	cout<<" Masukan Pembayaran        = Rp";cin>>duit;
	cout<<" "<<endl;
if((bayar>=50000) && (bayar<=149999)){
	diskon =bayar*0.15;
	
	cout<<" Kamu Dapat Diskon 15%    "<<endl;
}else if((bayar>=150000)&& (bayar<=5000000)){
diskon = bayar*0.35;
cout<<" Kamu Dapat Diskon 35%    "<<endl;
}
else {
diskon = 0;
}
	cout<<"JASA DELIVERY   " << endl;
			cout<<"1. 1 Km - 3 Km (15000)" << endl;
			cout<<"2. 3 Km - 10 Km (25000)" << endl;
		cout << endl;
		cout << "Masukan Pilihan Anda : ";
		cin >> dlv;	
        switch (dlv) {
        	
        	case 1:
        	cout<<'\n'<<"1 Km - 3 Km"<< endl;
			dlv1=15000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
			tot=bayar+15000;
			if (bayar >= 25000)
		{
			cout<<"Mendapatkan Potongan ongkir sebanyak 3000 "<<endl;
			tot=15000-3000;
			cout<<"Total biaya ongkir : "<<tot<<endl;
			}else if (bayar >50000)
		{
			cout<<"Mendaptkan Potongan ongkir sebanyak 5000"<<endl;
			tot=15000-5000;
			cout<<"Total biaya ongkir : "<<tot<<endl;
		}
		else if (bayar >150000)
		{
			cout<<"Mendaptkan potongan ongkir sebanyak 8000"<<endl;
			tot=15000-8000;
			cout<<"Total biaya ongkir: "<<tot;
			cout<<endl;
			break;
			case 2:
				cout<<'\n'<<"3 Km - 10 Km"<< endl;
			dlv2=25000;
			cout<<"Masukan Jarak Lokasi Anda : ";
			cin>>dlv;
				tot=bayar+25000;
				if (bayar >= 25000)
		{
			cout<<"Mendapatkan Potongan ongkir sebanyak 3000 "<<endl;
			tot=25000-3000;
			cout<<"Total biaya ongkir : "<<tot<<endl;
			}else if (bayar >50000)
		{
			cout<<"Mendaptkan Potongan ongkir sebanyak 5000"<<endl;
			tot=25000-5000;
			cout<<"Total biaya ongkir : "<<tot<<endl;
		}
		else if (bayar >150000)
		{
			cout<<"Mendaptkan potongan ongkir sebanyak 8000"<<endl;
			tot=25000-8000;
			cout<<"Total biaya ongkir : "<<tot<<endl;
		}
			
			
	}
	tot2=bayar+tot;
	akhir=tot2-diskon;
kembalian=duit-akhir;
	cout<<" Kamu Dapat Diskon     = Rp"<<diskon<<",-"<<endl;
	cout<<" Total Harga+Ongkir = Rp "<<tot2<<",-"<<endl;
	cout<<" Kembali          = Rp"<<kembalian<<",-"<<endl;
	cout<<" ((((TERIMA KASIH))))"<<endl;
	cout<<"Pembelian Baru [y/t] ";cin>>pembelian;
	cout<<" "<<endl;
	
	
	
if (pembelian=='y'||pembelian=='Y')
goto atas;
else
cout<<" Program Logging Off....";
}
}

