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
	StudentManagement<double> *sm;
	fstream f;
        f.open("./student.dat");
        if (!f){
                cout<<"没有数据文件，您需要初始化数据"<<endl;
		sm = new StudentManagement<double>;
        }
	else{
		cout<<"正在从文件中加载数据....."<<endl;
		sm = new StudentManagement<double>(0);
		sm->load();
	}
	
	int i;
	double leistung;
	string name;

	while(1){
		cout<<"选择操作：1-添加数据 2-查看所有数据 3-对数据分段统计 4-对数据排序 5-保存当前数据 6-查找数据 7-退出"<<endl;
		cout<<"选择操作："<<endl;
		cin>>i;
		if (i==1){
			cout<<"输入学生成绩：";
			cin>>leistung;
			cout<<"输入学生姓名：";
			cin>>name;
			Student<double> *st;
			st = new Student<double>(name,leistung);
			sm->end_insert(st);
		}
		else if (i==2){
			sm->show_all();
		}
		else if (i==3){
			int num;
			cout<<"数据分为几段：";
			cin>>num;
			sm->statitic(num);
		}
		else if (i==4){
			sm->Sort();
		}
		else if (i==5){
			sm->save();
		}
		else if (i==6){
			sm->search().show_all();
		}
		else if (i==7){
			delete sm;
			return 0;
		}
	}
		
	return 0;
}
