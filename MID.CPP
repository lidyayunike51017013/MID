#include <iostream.h>
#include <conio.h>

main()
{
float L,I,D,NM,NF,TNT,NNT,TNM,TNF,NA;
char ejaan[30], NIM[8],NilaiHuruf;
cout<<"Nilai Mahasiswa\n";
cout<<"Masukkan Nama Mahasiswa : ";cin>>ejaan;
cout<<"Masukkan NIM Mahasiswa : ";cin>>NIM;
cout<<"Masukkan Nilai Tugas1 : ";cin>>L;
cout<<"Masukkan Nilai Tugas2 : ";cin>>I;
cout<<"Masukkan Nilai Tugas3 : ";cin>>D;
cout<<"Masukkan Nilai MID : ";cin>>NM;
cout<<"Masukkan Nilai Final : ";cin>>NF;
 TNT = (L + I + D)/3;
 NNT = TNT*20/100;
 TNM = NM*40/100;
 TNF = NF*40/100;
 NA  = NNT + TNM + TNF;

 if (( NA >= 80) && (NA <= 100))
 NilaiHuruf = 'A';
 else if ((NA >=70) && (NA <=79))
 NilaiHuruf = 'B';
 else if ((NA >=60) && (NA <=69))
 NilaiHuruf = 'C';
 else if ((NA >=50) && (NA <=59))
 NilaiHuruf = 'D';
 else if ((NA >=0) && (NA<=50))
 NilaiHuruf = 'E';
 cout<<endl;

cout<<" Nama Mahasiswa\t :  "<<ejaan<<endl;
cout<<" NIM Mahasiswa\t :  "<<NIM<<endl;
cout<<" Nilai Akhir\t :  "<<NA<<endl;
cout<<" Nilai Huruf\t :  "<<NilaiHuruf<<endl;
getch();
}
