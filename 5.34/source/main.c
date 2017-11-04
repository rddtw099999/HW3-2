 #include<stdio.h>
 #include<stdlib.h>
int a, b;
int integerPower(base, exponent);
int main(void)
{
	printf("請輸入指數的底及其次方(例:10的5次方 即輸入:10 5):");
	scanf_s("%d %d", &a, &b);
	printf("運算結果為:%d\n",integerPower(a, b));
	system("pause");
	return 0;
}
int integerPower(base, exponent)
{
	if (exponent >= 1)
		return base*integerPower(base, exponent - 1);
	else
		return 1;
    
}
