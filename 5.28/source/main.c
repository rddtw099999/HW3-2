 #include<stdio.h>
 #include<stdlib.h>
char alphabet;
int main(void)
{
	system("title �^��j�p�g�ഫ");
	printf("�п�J�@�ӭ^��r��:");
	scanf_s("%c",&alphabet);
	printf("%c\n",converter(alphabet));
	system("pause");
	return 0;
}
int converter(int a){

	if (a >= 65 && a <= 90){
		return a += 32;
	}
	else if (a >= 97 && a <= 122){
		return a-= 32;
	}
	else
		return 63;                      //����der�� �^��? der ASCII
}