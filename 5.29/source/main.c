 #include<stdio.h>
 #include<stdlib.h>
long num=1,num1=1, num2=1;
int lcm(int a);

int main(void)
{
	printf("�п�J��ӼƦr(��:10 20):");
	scanf_s("%d %d", &num1, &num2);
	printf("�̤p�����Ƭ�%d\n", lcm(num1,num2));
	system("pause");
	return 0;
}

int lcm(int a,int b){
	while (num%a != 0 || num%b != 0){
		num++;
	}
	return num;
}