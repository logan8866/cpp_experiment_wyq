#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Management{
	public:
		int num = 0;
		void input(){
			int num_temp;
			cout<<"student count:";
			cin>>num_temp;
			this->num = this->num + num_temp;
			long number;
			double leistung;
			string name;
			fstream f;
			f.open("./student.dat",ios::app);
			if (!f){
				ofstream fout("./student.dat");
				if (fout){
					fout.close();
					f.open("./student.dat");
				}
			}
			for (int i=0;i<num_temp;i++){
				cout<<i+1<<" student(number name leistung):";
				cin>>number;
				cin>>name;
				cin>>leistung;
				f<<number<<" "<<name<<" "<<leistung<<endl;;
			}
			f.close();
		}

		void output(){
			int i = 0;
			fstream f;
			f.open("./student.dat");
			long number;
			double leistung;
			string name;
			for (i=0;i<this->num;i++){
				f>>number;
				f>>name;
				f>>leistung;
				cout<<number<<name<<leistung<<endl;
			}
			f.close();
		}

		void search(){
			string::size_type idx;
			int i = 0;
			fstream f;
                        f.open("./student.dat");
                        long number;
                        double leistung;
                        string name;
			string search_str;
			cout<<"what str you want:";
			cin>>search_str;
			for (i=0;i<this->num;i++){
                                f>>number;
                                f>>name;
                                f>>leistung;
                                idx = name.find(search_str);
				if (idx == string::npos){
					continue;
				}
				else{
					cout<<number<<name<<leistung<<endl;
				}
                        }
                        f.close();
		}


};


int main(){
	int symbol;
	Management m;
	m.input();
	cout<<"what next do?(1 input 2 output 3 search other quit):";
	cin>>symbol;
	while(symbol==1||symbol==2||symbol==3){
		if (symbol==1){
			m.input();
		}
		if (symbol==2){
			m.output();
		}
		if (symbol==3){
			m.search();
		}
		cout<<"what next do?(1 input 2 output 3 search other quit):";
        	cin>>symbol;
	}

}


