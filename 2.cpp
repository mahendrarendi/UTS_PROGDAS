#include <iostream>
using nemespace std;

int main() {
    // deklarasi variabel
	int lembar, harga;
	char nama, jenis_pelanggan;
	
	// buat inputan olehuser
	cout<<"GRAFITY FOROCOPY";
	cout<<"\nMasukkan nama anda	=";
	cin>>nama;
	cout<<"\nApakah anda pelanggan?";
	cin>>jenis_pelanggan;	
	cout<<"\nMasukkan jumlah banyak fotocopy anda	=";
	cin>>lembar;
	
	// Buat logika program
	if(jenis_penggan==1){
		harga=75*lembar;
	}else if(jenis_pelanggan==0){
	if(lembar<=100){
		harga=150*lembar;
	}else if(lembar<=200){
		harga=100*lembar;
	}else if(lembar>=200){
		harga=80*lembar;
	}else{
		cout>>"LEMBAR SALAH";
	}
	bayar = lembar * harga;
	cout<<"Banyaknya fotocopy = "<<endl;
	cout<<harga<<endl;
	cout<<"Bayar = "<<bayar;
	cout<<""<<endl;
	cout<<"\n develop @mahendrarendi";
}
	return 0;
}
