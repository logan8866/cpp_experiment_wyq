#include<iostream>
using namespace std;
int main(){
	int monat = 0;
	cout<<"eingeben Monat:";
	int erst = 1;
	int zweite = 1;
	int result = 1;
	while(cin>>monat){
		if (monat == 0){
			return 0;
		}
		erst = 1;
		zweite = 1;
		result = 1;
		for (int i = 3;i<=monat;++i){
			result = erst + zweite;
			erst = zweite;
			zweite = result;
		}
		cout<<"result ist: "<<result<<endl;
	}
	return 0;
}


