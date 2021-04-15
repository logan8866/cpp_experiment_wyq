#include <8051.h>

void delay(){
	int count = 0;
	for(count = 0; count < 30000; count++){};
}

#define HIGH 1
#define LOW 0
int main(){
	P0_0 = 0;
	P3_2 = 1;
	P3_3 = 0;
	while(1){
		if (P1_6==0&&P1_7==1){
			P1_0 = 0;
			delay();
			P1_0 = 1;
			delay();
		}
		if (P1_7==0&&P1_6==1){
			P1_1 = 0;
			delay();
			P1_1 = 1;
			delay();
		}
		if (P1_7==1&P1_6==1){
			P1_1 = 1;
			P1_0 = 1;
		}
	}

}
