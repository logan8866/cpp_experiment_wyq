#include"Myclass.h"

int main(){
	Myclass obj1;
	Myclass obj2(5,8);
	obj1.x = 1;
	obj1.y = 3;
	obj1.print();
	obj2.print();
	return 0;
}
