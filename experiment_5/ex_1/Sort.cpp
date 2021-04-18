
#include<iostream>

template<class T>
int *sort(T* array, int length){
        int i = 0;
        int j = 0;
        T temp;
        //this->compare_time[time][time2] = 0;
        //this->move_time[time][time2] = 0;
        //this->beginn_time[time][time2] = clock();
        for (i=1;i<length;i++){
                temp = array[i];
                for(j=i-1;j>=0;j--){
                        //this->compare_time[time][time2]++;
                        if (temp>=array[j]){
                                //this->move_time[time][time2]++;
                                array[j+1] = temp;
                                break;
                        }
                        else if (temp<array[j]){
                                //this->move_time[time][time2]++;
                                array[j+1] = array[j];
                                if (j==0){
                                        array[0] = temp;
                                }
                        }
                }
        }
        //this->end_time[time][time2] = clock();
        //this->execute_time[time][time2] = (double)(this->end_time[time][time2]-this->beginn_time[time][time2])/CLOCKS_PER_SEC;

        //return 1;
	return array;
}


template<class T>
int check(T* array, int length){
        int i = 0;
        for (i=1;i<length;i++){
                if (array[i]<array[i-1]){
                        std::cout<<"Sort Error!"<<std::endl;
                        return -1;
                }
        }
        return 1;
}
