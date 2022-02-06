#include<iostream>

using namespace std;

int main()
{
	int pilihan;
	cout<<"Kasir Universitas Bengkulu\n";
	cout<<"==================================\n";
	cout<<"Nama : Muhamad Rifqi Afriansyah\n";
	cout<<"NPM  : G1A021023\n";
	cout<<"==================================\n";
	
	int hargabarang, disc;
	cout<<"Masukkan Harga Barang : Rp. ";
	cin>>hargabarang;
	cout<<"Masukkan discount (%) : ";
	cin>>disc;
	cout<<"=================================="<<endl;
	cout<<"Harga Barang : Rp. "<<hargabarang<<endl;
	cout<<"Besar Diskon : Rp. "<<hargabarang*disc/100<<endl;
	cout<<"=================================="<<endl;
	
	int Total = hargabarang-(hargabarang*disc/100);
	cout<<"Total Harga = "<<Total;
	
}
