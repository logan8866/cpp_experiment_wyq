#include"student.h"
#include<iostream>
using namespace std;

template<class T>
Student::Student(){
	this->next = NULL;
	this->element = 0;
	this->name = "anonym";
}

template<class T>
Student::Student(string name, T &element):ChainNode(element){
	this->next = NULL;
	this->name = name;
}

template<class T>
Student::Student(string name, T &element, ChainNode *next):ChainNode(element,next){
	this->name = name;
}

template<class T>
Student::Student(Student &st){
	this->next = st.next;
	this->name = st.name;
	this->element = st.element;
}

template<class T>
Chain &StudentManagement::search(){
	string search_str;
	cin>>search_str;
	ChainNode *now = this->head;
	Chain c;
	while(now!=NULL){
		idx = now->name.find(search_str);
		if (idx == string::npos){
			continue;
		}
		else{
			ChainNode cn(&now);
			c.end_insert(cn);
		}
		now = now->next;
	}
	return c;
}




