#include "Kisi.hpp"

int main(){
	Kisi *k1 = new Kisi("Ahmet",25,178);
	Kisi *k2 = new Kisi("Meltem",32,150);
	Kisi *k3 = new Kisi("Ayse",42,168);
	cout<<*k1;
	cout<<*k2;
	cout<<*k3;
	delete k1;
	delete k2;
	delete k3;
	return 0;
}
