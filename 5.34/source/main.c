 #include<stdio.h>
 #include<stdlib.h>
int a, b;
int integerPower(base, exponent);
int main(void)
{
	printf("�п�J���ƪ����Ψ䦸��(��:10��5���� �Y��J:10 5):");
	scanf_s("%d %d", &a, &b);
	printf("�B�⵲�G��:%d\n",integerPower(a, b));
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
