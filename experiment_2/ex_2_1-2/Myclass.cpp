#include"Myclass.h"
#include<iostream>
Myclass::Myclass(){
	this->x = 0;
	this->y = 0;
}

Myclass::Myclass(int a = 0,int b = 0){
	this->x = a;
	this->y = b;
}

void Myclass::print(){
	std::cout<<"x = "<<this->x<<std::endl;
	std::cout<<"y = "<<this->y<<std::endl;
}


