#include"chain5.h"
#include<string>

template<class T>
class Student:public ChainNode<T>{
	public:
		string name;
		Student();
		Student(string name,T &element);
		Student(string name,T &element,ChainNode<T> *next);
		Student(ChainNode<T> &st);
};

template<class T>
class StudentManagement:public Chain5{
	public:
		ChainNode* search();
		void statitic();
		void Sort();
};

