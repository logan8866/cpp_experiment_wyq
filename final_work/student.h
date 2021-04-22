#ifndef CHAIN5
#define CHAIN5
#include"chain5.h"
#endif
#ifndef CHAIN
#define CHAIN
#include"chain.h"
#endif
#include<string>
using namespace std;

template<class T>
class Student:public ChainNode<T>{
	public:
		string name;
		Student();
		Student(string name,T &element);
		Student(string name,T &element,ChainNode<T> *next);
		Student(Student<T> &st);
};

template<class T>
class StudentManagement:public Chain5<T>{
	public:
		StudentManagement();
		StudentManagement(int i);
		StudentManagement(StudentManagement<T>& sm);
		StudentManagement<T> &search();
		void show_all();
		void statitic(int n);
		void Sort();
		void save();
		void load();
};

