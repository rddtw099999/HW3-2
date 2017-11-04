#include "stdlib.h"
#include "stdio.h"
int x, counter,overflowed=0;
unsigned long long int n1 = 0, n2 = 1, tmpLatest, tmpOlder;
unsigned long long int fibonachi();

int main(void){
	printf("Fobonachi(n) Enter n:");
	scanf_s("%d", &x);
	printf("\n\n(a)\n\n");

	while (counter != x){
		printf("Fibonachi(%d)=\t%llu\n",counter, fibonachi());
	}

	//==========================================================
	printf("\n\n(b)\n\n");
	n1 = 0; n2 = 1; counter = 0;
	while (overflowed== 0){
		tmpOlder = tmpLatest;
		tmpLatest = fibonachi();
		if (tmpOlder <= tmpLatest)                                  //下一位較前一位小時，代表溢位?
			printf("Fibonachi(%d)=\t%llu\n", counter, tmpLatest);
		else{
			overflowed = 1;
			printf("\n\nNext Number of fibonachi has been Overflowed\n");
		}
		
	}


	system("pause");
}

unsigned long long int fibonachi()	{
	unsigned long long int returnVal = 0;
	if (counter != 0){     //數列的0要計算壓 
		if (counter % 2 == 0){
			n1 = n1 + n2;
			returnVal = n1;
		}
		else{
			n2 = n2 + n1;
			returnVal = n2;
		}
	}
	++counter;
	return returnVal;
}