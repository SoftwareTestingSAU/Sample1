#include "Kisi.hpp"

Kisi::Kisi(){
	isim="";
	yas=0;
	boy=0;
}
Kisi::Kisi(string isim,int yas,double boy){
	this->isim = isim;
	this->yas = yas;
	this->boy = boy;
}
ostream& operator<<(ostream& ekran,Kisi& sag){
	ekran<<sag.isim<<" "<<sag.yas<<" "<<sag.boy<<endl;
	return ekran;
}
