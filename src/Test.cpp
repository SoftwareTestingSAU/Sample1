#include "Kisi.hpp"

int main(){
	Kisi *k1 = new Kisi("Ahmet",25,178);
	Kisi *k2 = new Kisi("Meltem",32,150);
	cout<<*k1;
	cout<<*k2;
	delete k1;
	delete k2;
	return 0;
}
