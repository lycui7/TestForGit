#include<stdio.h>

int main(void){

int n = 0;

printf("�������кţ�");  

scanf("%d",&n);    //��ʾ�����к�

for(int i = 1; i <= n; i++){     //��һ��ѭ�����ж�����

for(int j = 1; j <= n-i; j++){    //�ڶ���ѭ����ÿ��Ҫ����ٿո�

printf(" ");

}

for(int j = 1; j <= 2*i-1;j++){    //������ѭ����ÿ��Ҫ���������

printf("*");

}

printf("\n");  //����Ǵ�ӡ�س�������ǵ�һ��for�������еġ�

}

return 0;

}