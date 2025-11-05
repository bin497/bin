#include<stdio.h>
int main()
{char c;
printf("请输入一个字符:");
scanf("%c",&c);
if(c>'0'&&c<='9'){
	printf("该字符是数字字符。\n");
}else{
	printf("该字符不是数字字符。\n");
}
return 0;
}
