 #include<stdio.h>
 #include<stdlib.h>
long num=1,num1=1, num2=1;
int lcm(int a);

int main(void)
{
	printf("請輸入兩個數字(例:10 20):");
	scanf_s("%d %d", &num1, &num2);
	printf("最小公倍數為%d\n", lcm(num1,num2));
	system("pause");
	return 0;
}

int lcm(int a,int b){
	while (num%a != 0 || num%b != 0){
		num++;
	}
	return num;
}