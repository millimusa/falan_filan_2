#include <iostream>		//Gerekli kütüphaneler yükleniyor.

using namespace std;

typedef struct complex {		//complex isminde bir yapý(struct) tanýmlanýyor.
    float real;
    float imag;
};

complex ekle(complex sayi1, complex sayi2); //ekle fonksiyonunun prototipi


int main()
{
	complex c1, c2, sonuc;
	cout<<"1. sayinin reel kismini girin: ";
	cin>>c1.real;
	cout<<endl<<"1. sayinin sanal kismini girin: ";
	cin>>c1.imag;
	
	cout<<endl<<"2. sayinin reel kismini girin: ";
	cin>>c2.real;
	cout<<endl<<"2. sayinin sanal kismini girin: ";
	cin>>c2.imag;
	
	
	sonuc = ekle(c1,c2);
	
	cout<<"complex sayilarin toplami = "<<sonuc.real<<"+"<<sonuc.imag<<"i";
	
	return 0;
}

complex ekle(complex sayi1, complex sayi2)
{
	complex yerel_sonuc;
	
	yerel_sonuc.imag = sayi1.imag + sayi2.imag;
	yerel_sonuc.real = sayi1.real + sayi2.real;
	
	return yerel_sonuc;
}
