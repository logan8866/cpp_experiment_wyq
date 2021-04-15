#include <8051.h>

void delay(){
	int count = 0;
	for(count = 0; count < 30000; count++){};
}

#define HIGH 1
#define LOW 0
int main(){
	while(1){
		if (P3_0==0){
			P1_0 = 0;
			delay();
			P1_0 = 1;
			delay();
		}
		else if (P3_1==0){
			P1_1 = 0;
			delay();
			P1_1 = 1;
			delay();
		}
	}

}
