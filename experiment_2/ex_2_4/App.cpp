#include<iostream>
#include<math.h>
using namespace std;


class myPoint {  

public:

   myPoint(double x0=0.0,double y0=0.0):x(x0),y(y0) {}

   myPoint(myPoint &np):x(np.x),y(np.y) {}

   double GetX() { return x;}

   double GetY() {return y;}

   void SetX(double x0) {x=x0;}

   void SetY(double y0) {y=y0;} 

   void SetPoint(double x0,double y0) {x=x0;y=y0;}

   void SetPoint(myPoint &np) { x=np.x; y=np.y;}

   double  GetLength(myPoint p) {

     return sqrt((x-p.x)*(x-p.x) +(y-p.y)*(y-p.y));

   }

   void Printit() { cout<<" ("<<x<<","<<y<<") ";}

private:

   double x ,y;

};


class Dreieck{
	private:
		myPoint *p1,*p2,*p3;
	public:
		double caculate_umfang();
		double caculate_flache();
		Dreieck(double x1,double y1,double x2,double y2,double x3,double y3);
		~Dreieck();
};


Dreieck::Dreieck(double x1,double y1,double x2,double y2,double x3,double y3){
	this->p1 = new myPoint(x1,y1);
	this->p2 = new myPoint(x2,y2);
	this->p3 = new myPoint(x3,y3);
}

Dreieck::~Dreieck(){
	delete p1;
	delete p2;
	delete p3;
}

double Dreieck::caculate_umfang(){
	double umfang = this->p1->GetLength(*p2)+this->p2->GetLength(*p3)+this->p3->GetLength(*p1);
	cout<< "Grith is:" << umfang <<endl;
	return umfang;
}

double Dreieck::caculate_flache(){
	double flache = 0.5*((this->p1->GetX()*this->p2->GetY()-this->p2->GetX()*this->p1->GetY())+(this->p2->GetX()*this->p3->GetY()-this->p3->GetX()*this->p2->GetY())+(this->p3->GetX()*this->p1->GetY()-this->p1->GetX()*this->p3->GetY()));
	flache = abs(flache);
	cout<< "Area is:"<<flache<<endl;
	return flache;
}


int main(){
	Dreieck d1(1,1,2,2,2,1);
	d1.caculate_umfang();
	d1.caculate_flache();
	return 0;
}



