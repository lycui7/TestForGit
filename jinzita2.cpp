#include<stdio.h>

int main(void){

int n = 0;

printf("请输入行号：");  

scanf("%d",&n);    //提示输入行号

for(int i = 1; i <= n; i++){     //第一轮循环是有多少行

for(int j = 1; j <= n-i; j++){    //第二轮循环是每行要打多少空格

printf(" ");

}

for(int j = 1; j <= 2*i-1;j++){    //第三轮循环是每行要打多少星星

printf("*");

}

printf("\n");  //这个是打印回车，这个是第一个for里面运行的。

}

return 0;

}