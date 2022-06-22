#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	struct data
	{
		char nama[30];
		int mid;
		int uas;
		float nilai_akhir;
		char nilai_huruf;
	};struct data mahasiswa[20];
	
cout<<"----------------------------------------\n";
cout<<"Program Menghitung Nilai Akhir Mahasiswa\n";
cout<<"----------------------------------------\n";
int x, y;
cout<<"Masukan Jumlah Mahasiswa : ";
cin>>y;
for(x=0;x<y;x++)
{
	cout<<"Masukan Nama Mahasiswa : ";
	cin>>mahasiswa[x].nama;
	cout<<"Masukan Nilai UTS      : ";
	cin>>mahasiswa[x].mid;
	cout<<"Masukan Nilai UAS      : ";
	cin>>mahasiswa[x].uas;
	cout<<endl;
}
cout<<endl;
cout<<"-----------------------------------------------------------\n";
cout<<"Nama"<<"\t"<<"UTS"<<"\t"<<"UAS"<<"\t"<<"Nilai Akhir"<<"\t"<<"Nilai Huruf"<<endl;
cout<<"-----------------------------------------------------------\n";
for(x=0;x<y;x++)
{
	mahasiswa[x].nilai_akhir=(mahasiswa[x].mid*50/100)+(mahasiswa[x].uas*50/100);
cout<<mahasiswa[x].nama<<"\t"<<mahasiswa[x].mid<<"\t"<<mahasiswa[x].uas<<"\t"<<mahasiswa[x].nilai_akhir<<"\t"<<"\t";
	mahasiswa[x].nilai_akhir=(mahasiswa[x].mid*50/100)+(mahasiswa[x].uas*50/100);
	if (mahasiswa[x].nilai_akhir>=85)
		cout<<" (A)";
	else if (mahasiswa[x].nilai_akhir>=75)
		cout<<" (B)";
	else if (mahasiswa[x].nilai_akhir>=65)
		cout<<" (C)";
	else if (mahasiswa[x].nilai_akhir>=55)
		cout<<" (D)";
	else
		cout<<" (E)";
	cout<<endl;
}
	cout<<endl;
	
	getch();
	return 0;
}
