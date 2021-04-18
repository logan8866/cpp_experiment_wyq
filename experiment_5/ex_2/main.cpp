#include"app.h"
#include<iostream>
using namespace std;

int main(){
	Test<int,double> t;
	t.SetData1(100);
	t.SetData2(33.333);
	cout<<t.GetData1()<<endl;
	cout<<t.GetData2()<<endl;
	return 0;
}

