#include <iostream>//header untuk cin dan cout
#include <math.h>//header untuk matematika contoh pow
#include<fstream>
#include <conio.h>

using namespace std;//wajib untuk iostrem

int main()//fungsi utama
{
    int s,keliling,luas;/*deklarasi variable dengan tipe data
    integer, s untuk sisi*/
    char judul;//judul
    
	system("cls");
 	
 	ifstream file;
 	file.open("judul.txt");
 		while(!file.eof())
 	{
     file.get(judul);
     cout<<judul;
 	}
 		file.close();
    
    cout << "Masukkan Sisi : ";//untuk ditampilkan
    cin>>s;//untuk input ke variable s
    keliling=4*s;//rumus keliling bujur sangkar
    luas=pow(s,2);//rumus luas bujur sangkar, pow untuk pangkat
    cout << "Keliling = "<<keliling<< endl;//untuk menampilkan hasil keliling
    cout << "Luas = "<<luas;//utuk menampilkan hasil luas
    getch();
	return 0;//mengembalikan nilai variable
}
