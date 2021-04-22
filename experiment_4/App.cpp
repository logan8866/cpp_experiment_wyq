#include<iostream>
#include<math.h>
using namespace std;

class Complex{

	private:
		double realteil;
		double imaginarteil;

	public:
		Complex(double realteil = 0,double imaginarteil = 0){
			this->realteil = realteil;
			this->imaginarteil = imaginarteil;
		}
		void show(){
			cout<<this->realteil<<"+"<<this->imaginarteil<<"i"<<endl;
		}
		Complex &operator+(Complex& c1){
			double real = this->realteil+c1.realteil;
			double img = this->imaginarteil+c1.imaginarteil;
			Complex *cr = new Complex(real,img);
			return *cr;
		}
		Complex &operator-(Complex &c1){
			double real = this->realteil-c1.realteil;
			double img = this->imaginarteil-c1.imaginarteil;
			Complex *cr = new Complex(real,img);
			return *cr;
		}
		Complex &operator*(Complex &c1){
			double real = this->realteil*c1.realteil-this->imaginarteil*c1.imaginarteil;
			double img = this->realteil*c1.imaginarteil+this->imaginarteil*c1.realteil;
			Complex *cr = new Complex(real,img);
			return *cr;
		}
		Complex &operator/(Complex &c1){
			double real = (this->realteil*c1.realteil+this->imaginarteil*c1.imaginarteil)/(pow(c1.realteil,2)+pow(c1.imaginarteil,2));
			double img = (this->realteil*(-c1.imaginarteil)+this->imaginarteil*c1.realteil)/(pow(c1.realteil,2)+pow(c1.imaginarteil,2));
			Complex *cr = new Complex(real,img);
			return *cr;
		}
};

int main(){
	Complex c1(6,7);
	Complex c2(7,0);
	Complex cr(0,0);
	cr = c1+c2;
	cr.show();
	cr = c1-c2;
	cr.show();
	cr = c2+c1;
	cr.show();
	cr = c2-c1;
	cr.show();
	return 0;
}


			

