#include"Shape.h"
#include<iostream>
#include<cmath>

double Geometric_shape::perimeter(){
	return 0;
}

double Geometric_shape::area(){
	return 0;
}

double Geometric_shape::volume(){
	//std::cout<<"it has no volume!"<<std::endl;
	return 0;
}

void Geometric_shape::Show(){
	std::cout<<"this is a shape"<<std::endl;
}

Rectangle::Rectangle(){
	this->lange = 0;
	this->weite = 0;
}

Rectangle::Rectangle(double lange,double weite){
	this->lange = lange;
	this->weite = weite;
}

double Rectangle::perimeter(){
	return 2*(this->lange+this->weite);
}

double Rectangle::area(){
	return this->lange*this->weite;
}
/*
void Rectangle::Show(){
	std::cout<<"this is a Rectangle"<<this->lange<<"&"<<this->weite<<std::endl;
}*/

Circle::Circle(){
	this->redius = 0;
}

Circle::Circle(double redius){
	this->redius = redius;
}

double Circle::perimeter(){
	return 2*3.14*this->redius;
}

double Circle::area(){
	return 3.14*pow(this->redius,2);
}

Triangle::Triangle(){
	this->lange_1 = 0;
	this->lange_2 = 0;
	this->lange_3 = 0;
}

Triangle::Triangle(double lange_1,double lange_2,double lange_3){
	this->lange_1 = lange_1;
	this->lange_2 = lange_2;
	this->lange_3 = lange_3;
}

double Triangle::area(){
	double p = this->perimeter()/2;
	return pow(p*(p-this->lange_1)*(p-this->lange_2)*(p-this->lange_3),0.5);
}

double Triangle::perimeter(){
	return this->lange_1+this->lange_2+this->lange_3;
}

Box::Box():Rectangle(){
	this->hohe = 0;
}

Box::Box(double lange, double weite,double hohe):Rectangle(lange,weite){
	this->hohe = hohe;
}

double Box::volume(){
	return this->lange*this->weite*this->hohe;
}

Cylinder::Cylinder():Circle(){
	this->hohe = 0;
}

Cylinder::Cylinder(double redius,double hohe):Circle(redius){
	this->hohe = hohe;
}

double Cylinder::volume(){
	return this->Circle::area()*this->hohe;
}

Cone::Cone():Circle(){
	this->hohe = 0;
}

Cone::Cone(double redius,double hohe):Circle(redius){
	this->hohe = hohe;
}

double Cone::volume(){
	return this->Circle::area()*this->hohe/3;
}

T_pyramid::T_pyramid():Triangle(){
	this->hohe = 0;
}

T_pyramid::T_pyramid(double lange_1,double lange_2,double lange_3,double hohe):Triangle(lange_1,lange_2,lange_3){
	this->hohe = hohe;
}

double T_pyramid::volume(){
	return this->Triangle::area()*this->hohe/3;
}

T_prism::T_prism():Triangle(){
	this->hohe = 0;
}

T_prism::T_prism(double lange_1,double lange_2,double lange_3,double hohe):Triangle(lange_1,lange_2,lange_3){
	this->hohe = hohe;
}

double T_prism::volume(){
	return this->area()*this->hohe;
}






