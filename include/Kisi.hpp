#ifndef KISI_HPP
#define KISI_HPP

#include <iostream>
using namespace std;

class Kisi{
	private:
		string isim;
		int yas;
		double boy;
	public:
		Kisi();
		Kisi(string,int,double);
		friend ostream& operator<<(ostream&,Kisi&);
};

#endif
