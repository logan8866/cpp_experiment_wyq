#include<iostream>
using namespace std;


class Body{
	public:
		double r;
		double h;
		Body(double r,double h = 0){
			this->r = r;
			this->h = h;
		}
		virtual double caculate_flache(){};
		virtual double caculate_volumen(){};
};

class Quadrat:public Body{
	public:
		Quadrat(double r):Body(r){};
		virtual double caculate_flache();
		virtual double caculate_volumen();
};

double Quadrat::caculate_flache(){
	cout<<"Area is:"<<6*this->r*this->r<<endl;
	return 6*this->r*this->r;
}

double Quadrat::caculate_volumen(){
	cout<<"Volumen is:"<<this->r*this->r*this->r<<endl;
	return this->r*this->r*this->r;
}

class Kugel:public Body{
	public:
		Kugel(double r):Body::Body(r){};
		virtual double caculate_flache();
		virtual double caculate_volumen();
};

double Kugel::caculate_flache(){
	cout<<"Area is:"<<4*3.14*this->r*this->r<<endl;
	return 4*3.14*this->r*this->r;
}

double Kugel::caculate_volumen(){
	cout<<"Volumen is:"<<4*3.14*this->r*this->r*this->r/3<<endl;
	return 4*3.14*this->r*this->r*this->r/3;
}

class Saule:public Body{
	public:
		Saule(double r,double h):Body::Body(h,r){};
		virtual double caculate_flache();
		virtual double caculate_volumen();
};

double Saule::caculate_flache(){
	cout<<"Area is:"<<2*3.14*this->r*this->r+2*3.14*this->r*this->h<<endl;
	return 0;
}

double Saule::caculate_volumen(){
	cout<<"Volumen is:"<<3.14*this->r*this->r*this->h<<endl;
	return 0;
}

int main(){
	Quadrat q(3.0);
	Kugel k(3.0);
	Saule s(3.0,3.0);
	q.caculate_flache();
	q.caculate_volumen();
	k.caculate_flache();
	k.caculate_volumen();
	s.caculate_flache();
	s.caculate_volumen();
	return 0;
}







