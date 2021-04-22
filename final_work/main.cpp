/*#ifndef CHAIN
#define CHAIN
#include"chain.h"
#endif
#ifndef CHAIN5
#define CHAIN5
#include"chain5.h"
#endif
#ifndef ST
#define ST
#include"student.h"
#endif*/
#include"chain.cpp"
#include"chain5.cpp"
#include"student.cpp"
#include<iostream>
using namespace std;

int main(){
	StudentManagement<int> sm;
	//sm.show_all();
	int i = 99;
	Student<int> *s;
	s = new Student<int>("kan",i);
        i = sm.end_insert(s);
	sm.statitic(5);
	sm.Sort();
	sm.show_all();
	sm.save();

	
	/*
	StudentManagement<int> sm2(0);
	sm2 = sm.search();
	cout<<sm2.length<<endl;
	sm2.show_all();*/
	return 0;
}
