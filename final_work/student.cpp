#ifndef ST
#define ST
#include"student.h"
#endif
#include<iostream>
#include<fstream>
using namespace std;

template<class T>
Student<T>::Student(){
	this->next = NULL;
	this->element = 0;
	this->name = "anonym";
}

template<class T>
Student<T>::Student(string name, T &element):ChainNode<T>(element){
	this->next = NULL;
	this->name = name;
}

template<class T>
Student<T>::Student(string name, T &element, ChainNode<T> *next):ChainNode<T>(element,next){
	this->name = name;
}

template<class T>
Student<T>::Student(Student<T> &st):ChainNode<T>(0){
	this->next = st.next;
	this->name = st.name;
	this->element = st.element;
}

template<class T>
StudentManagement<T>::StudentManagement():Chain5<T>(0){
	cout<<"hello"<<endl;
	this->length = 0;
        T element;
	string name;
        cin>>element;
	cin>>name;
        this->head = new Student<T>(name,element);
        this->end = this->head;
        this->length++;
        while(true){
               	cin>>element;
		cin>>name;
                if (element==-1){
                        break;
                }
                this->end->next = new Student<T>(name,element);
                this->end = this->end->next;
                this->length++;
        }
	cout<<"end"<<endl;
}

template<class T>
StudentManagement<T>::StudentManagement(StudentManagement<T>& sm):Chain5<T>(0){
	this->length = sm.length;
        Student<T>* c1;
        Student<T>* c2;
        c1 = new Student<T>(*(Student<T>*)sm.head);
        this->head = c1;
        int i;
        for (i=0;i<this->length-1;i++){
                c2 = new Student<T>(*(Student<T>*)(c1->next));
                c1->next = c2;
                c1 = (Student<T>*)c1->next;
        }
        this->end = c2;	
}

template<class T>
StudentManagement<T>::StudentManagement(int i):Chain5<T>(i){
	this->head = NULL;
	this->end = NULL;
	this->length = 0;
}

template<class T>
StudentManagement<T>& StudentManagement<T>::search(){
	cout<<"start search"<<endl;
	string::size_type idx;
	string search_str;
	cin>>search_str;
	Student<T> *now = (Student<T>*)this->head;
	cout<<"head:"<<this->head->element<<endl;
	StudentManagement<T> *c;
	c = new StudentManagement(0);
	while(now!=NULL){
		idx = now->name.find(search_str);
		if (idx == string::npos){
			now = (Student<T>*)now->next;
		}
		else{
			Student<T> *cn;
			cn = new Student<T>(*now);
			c->end_insert(cn);
			now = (Student<T>*)now->next;
		}
	}
	c->end->next = NULL;
	//cout<<"end search"<<((Student<T>*)(c->end))->name<<endl;
	return *c;
}

template<class T>
void StudentManagement<T>::show_all(){
	Student<T>* cn1;
        cn1 = (Student<T>*)this->head;
        int i = 0;
        for (;cn1!=NULL;cn1=(Student<T>*)cn1->next){
                std::cout<<"the "<<i<<"nd "<<"T: "<<cn1->element<<" name is:"<<cn1->name<<std::endl;
                i++;
        }
}

template<class T>
void StudentManagement<T>::statitic(int n){
	T max = this->head->element;
	T min = this->head->element;
	Student<T> *now = (Student<T>*)this->head;
	int i = 0;
	for (i=0;i<this->length;i++){
		if (max<now->element){
			max = now->element;
		}
		if (min>now->element){
			min = now->element;
		}
		now = (Student<T>*)now->next;
	}
	double abstand = (max-min)/n;
	int j = 0;
	now = (Student<T>*)this->head;
	int up,down;
	for (j=0;j<n;j++){
		if(j==n-1){
			up = max+1;
			down = min+j*abstand;
		}
		else{
			up = min+(j+1)*abstand;
                        down = min+j*abstand;
		}
		std::cout<<"result between "<<down<<" and "<<up<<":"<<std::endl;
		now = (Student<T>*)this->head;
		for (i=0;i<this->length;i++){

			if (now->element>=down&&now->element<up){
				std::cout<<"the "<<i<<"nd "<<"T: "<<now->element<<" name is:"<<now->name<<std::endl;
			}
			now = (Student<T>*)now->next;
		}
	}
}

template<class T>
void StudentManagement<T>::Sort(){
	T max;
	int i,j;
	Student<T> *now = (Student<T>*)this->head;
	Student<T> *bevor;
	Student<T> *temp;
	for (i=0;i<this->length-1;i++){
		now = (Student<T>*)this->head;
		//this->show_all();
		for(j=0;j<this->length-i-1;j++){
			if (j==0){
				if(now->element>now->next->element){
					//std::cout<<"0"<<std::endl;
					this->head = (Student<T>*)now->next;
					now->next = (Student<T>*)now->next->next;
					this->head->next = (Student<T>*)now;
					bevor = (Student<T>*)this->head;
					//this->show_all();
				}
				else{
					//std::cout<<"0"<<std::endl;
					now = (Student<T>*)now->next;
					bevor = (Student<T>*)this->head;
				}
			}
			if(j==this->length-2){
				if (now->element>now->next->element){
					//std::cout<<"e"<<std::endl;
					bevor->next = (Student<T>*)now->next;
					this->end = (Student<T>*)now;
					now->next = NULL;
					bevor->next->next = (Student<T>*)this->end;
					break;
				}
				else{
					//std::cout<<"e"<<std::endl;
					break;
				}
			}
			if(j!=0&&j!=this->length-2){
				if (now->element>now->next->element){
					//std::cout<<"1"<<std::endl;
					bevor->next = (Student<T>*)now->next;
					bevor = (Student<T>*)now->next;
					now->next = (Student<T>*)bevor->next;
					bevor->next = (Student<T>*)now;

				}
				else{
					//std::cout<<"1"<<std::endl;
					bevor = (Student<T>*)now;
					now = (Student<T>*)now->next;
				}
			}
		
		}
	}
					


}


template<class T>
void StudentManagement<T>::save(){
	int i;
	fstream f;
	f.open("./student.dat",ios::app);
	if (!f){
		ofstream fout("./student.dat");
		if (fout){
			fout.close();
			f.open("./student.dat");
		}
	}
	Student<T> *now = (Student<T>*)this->head;
	f<<this->length<<std::endl;
	for (i=0;i<this->length;i++){
		f<<now->element<<" "<<now->name<<std::endl;	
		now = (Student<T>*)now->next;
	}
}


template<class T>
void StudentManagement<T>::load(){
	fstream f;
	f.open("./student.dat",ios::app);
	f>>this->length;
	int i;
	this->head = new Student<T>();
	this->end = this->head;
	for (i=0;i<this->length;i++){
		f>>this->end->element;
		f>>this->end->name;
		this->end->next = new Student<T>();
		this->end = this->end->next;
	}
}

		




