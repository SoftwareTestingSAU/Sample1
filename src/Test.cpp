#include "Kisi.hpp"

int main(){
	Kisi *k1 = new Kisi("Murat",25,178);
	Kisi *k2 = new Kisi("Meltem",32,150);	
	Kisi *k3 = new Kisi("Leyla",28,142);	
	Kisi *k4 = new Kisi("Ahmet",45,157);
	cout<<*k1;
	cout<<*k2;
	cout<<*k3;
	delete k1;
	delete k2;
	delete k3;
	delete k4;
	return 0;
}
