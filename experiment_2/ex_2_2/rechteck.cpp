#include<iostream>
#include"rechteck.h"

Rechteck::Rechteck(){
	this->lange = 0;
	this->weite = 0;
}

Rechteck::Rechteck(double lange, double weite){
	this->lange = lange;
	this->weite = weite;
}

double Rechteck::umfang(){
	std::cout<<"Girth is:"<<2*(lange+weite)<<std::endl;
	return 2*(lange+weite);
}

double Rechteck::flache(){
	std::cout<<"Area is:"<<lange*weite<<std::endl;
	return lange*weite;
}


