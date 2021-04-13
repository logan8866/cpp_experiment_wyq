#include<iostream>
#include<math.h>
using namespace std;


class Point {

public:

	Point()  {x = 0; y = 0; }

	Point(double xv,double yv) {x = xv;y = yv;}

	Point(Point& pt) { x = pt.x;  y = pt.y; }

	double getx() { return x; }

	double gety() { return y; }

	double Area() { return 0; }

	void Show() { cout<<"x="<<x<<' '<<"y="<<y<<endl; }

private:

	double x,y;

};

class Rectangle:public Point{
	public:
		Rectangle(){
			this->lange = 0;
			this->weite = 0;
			this->x = 0;
			this->y = 0;
		}
		Rectangle(double lange,double weite,double x,double y){
			this->lange = lange;
			this->weite = weite;
			this->x = x;
			this->y = y;
		}
		Rectangle(Rectangle &r){
			this->lange = r.lange;
			this->weite = r.weite;
			this->x = r.x;
			this->y = r.y;
		}
		int position(Point &p){
		//	cout<<this->x<<this->y<<endl;
			if ((p.getx()>this->x&&p.getx()<this->x+this->weite)&&(p.gety()<this->y&&p.gety()>this->y-this->lange)){
				cout<<"in the Rectangle"<<endl;
				return 1;
			}
			else if (((p.getx()==this->x||p.getx()==this->x+this->weite)&&(p.gety()<=this->y&&p.gety()>=this->y-this->lange))||((p.gety()==this->y||p.gety()==this->y-this->lange)&&(p.getx()>=this->x&&p.getx()<=this->x+this->weite))){
				cout<<"on the Rectangle"<<endl;
				return 0;
			}
			else{
				cout<<"out the Rectangle"<<endl;
				return -1;
			}
		}
			
	protected:
		double lange,weite;
		double x,y;
};

class Circle:public Point{
	protected:
		double redius;
		double x,y;
	public:
		Circle(){
			this->x = 0;
			this->y = 0;
			this->redius = 0;
		}
		Circle(double x,double y,double r){
			this->x = x;
			this->y = y;
			this->redius = r;
		}
		Circle(Circle &c){
			this->x = c.x;
                        this->y = c.y;
                        this->redius = c.redius;
		}

		int position(Point &p){
			double abstand = sqrt(pow((this->x-p.getx()),2)+pow((this->y-p.gety()),2));
			if (abstand<this->redius){
				cout<<"in the ciecle"<<endl;
				return 1;
			}
			else if (abstand>this->redius){
				cout<<"out the circle"<<endl;
				return -1;
			}
			else{
				cout<<"on the ciecle"<<endl;
				return 0;
			}
		}
};



int main(){
	Rectangle r1(1,1,2,2);
	Point p1(1,1);
	r1.position(p1);
	Point p2(2.5,1.5);
	r1.position(p2);
	Point p3(3,1);
	r1.position(p3);

	Circle c1(2,2,2);
	Point p4(2,2);
	c1.position(p4);
	Point p5(0,2);
	c1.position(p5);
	Point p6(0,0);
	c1.position(p6);
	return 0;
}

