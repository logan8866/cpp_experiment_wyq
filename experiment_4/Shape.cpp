#include"Shape.h"
#include<iostream>
#include<cmath>

double Shape::primeter(){
	return 0;
}

double Shape::area(){
	return 0;
}

double Shape::volume(){
	std::cout<<"it has no volume!"<<std::endl;
	return 0;
}

void Shape::show(){
	std::cout<<"this is a shape"<<std::endl;
}

Rechteck::Rechteck(){
	this->lange = 0;
	this->weite = 0;
}

Rechteck::Rechteck(double lange,double weite){
	this->lange = lange;
	this->weite = weite;
}

double Rechteck::primeter(){
	return 2*(this->lange+this->weite);
}

double Rechteck::area(){
	return this->lange*this->weite;
}

void Rechteck::show(){
	std::cout<<"this is a Rechteck"<<this->lange<<"&"<<this->weite<<std::endl;
}

Circle::Circle(){
	this->redius = 0;
}

Circle::Circle(double redius){
	this->redius = redius;
}

double Circle::primeter(){
	return 2*3.14*this->redius;
}

double Circle::area(){
	return 3.14*pow(this->redius,2);
}

Triangle::Triangle(){
	this->lange_1 = 0;
	this->lange_2 = 0;
	this->angle_12 = 0;
}

Triangle::Triangle(double lange_1,double lange_2,double angle_12){
	this->lange_1 = lange_1;
	this->lange_2 = lange_2;
	this->angle_12 = angle_12;
}

double Triangle::area(){
	return 0.5*sin(this->angle_12)*this->lange_1*this->lange_2;
}

double Triangle::primeter(){
	double lange_3 = pow((pow(this->lange_1,2)+pow(this->lange_2,2)-2*this->lange_1*this->lange_2*cos(this->angle_12)),0.5);
	return this->lange_1+this->lange_2+lange_3;
}

Box::Box():Rechteck(){
	this->hohe = 0;
}

Box::Box(double lange, double weite,double hohe):Rechteck(lange,weite){
	this->hohe = hohe;
}

double Box::volume(){
	return this->lange*this->weite*this->hohe;
}

double Cylinder::volume(){
	return this->Circle::area()*this->hohe;
}

double Cone::volume(){
	return this->Circle::area()*this->hohe/3;
}

double Pyramide::volume(){
	return this->Triangle::area()*this->hohe/3;
}

double Prism::volume(){
	return this->Circle::area()*this->hohe;
}






