#include"Sort.cpp"
#include<time.h>
#include<iostream>
#include<random>
#include<fstream>


int main(){
        int len[5] = {100,200,300,1000,2000};
        int array[5][2000] = {0};
        int i;
        int j;
        int x;
        std::default_random_engine e(clock());
        std::uniform_int_distribution<int>* u;
        /*
        int all_compare_time = 0;
        double all_execute_time = 0;
        int all_move_time = 0;*/

        /*int part_compare_time = 0;
        double part_execute_time = 0;
        int part_move_time = 0;
        int ck = 0;
        std::fstream f;
        f.open(this->name+".txt",std::ios::out);*/

	int ck = 0;
	int *re;
        for (i=0;i<5;i++){
                u = new std::uniform_int_distribution<int>(0,len[i]);
                for (x=0;x<10;x++){
                        e.seed(clock());
                        for (j=0;j<len[i];j++){
                                array[i][j] = (*u)(e);
                        }
			//std::cout<<"begin"<<std::endl;
                        re = sort(array[i],len[i]);//,i,x);
                        ck = check(re,len[i]);
                        if (ck==-1){
				std::cout<<"fail!"<<std::endl;
                                return -1;
                        }
			if (ck==1){
				std::cout<<"successed!"<<std::endl;
			}
                        /*part_compare_time += this->compare_time[i][x];
                        part_execute_time += this->execute_time[i][x];
                        part_move_time += this->move_time[i][x];*/
                }
                delete u;
		/*
                this->ave_compare_time[i] = part_compare_time/10;
                this->ave_execute_time[i] = (double)(part_execute_time/10);
                this->ave_move_time[i] = part_move_time/10;
                std::cout<<i<<" st "<<"compare time: "<<this->ave_compare_time[i]<<std::endl;
                std::cout<<i<<" st "<<"execute time: "<<this->ave_execute_time[i]<<std::endl;
                std::cout<<i<<" st "<<"move time: "<<this->ave_move_time[i]<<std::endl;
                f<<this->ave_compare_time[i]<<","<<this->ave_execute_time[i]<<","<<this->ave_move_time[i]<<std::endl;
*/
        }
        //f.close();
}
