#include <stdio.h>

int main(int argc,char *argv[])
{
// 内存中没有字符，只有数字
//一个数字 对应一个字符 sacii
//数字或字符给字符变量赋值等价
//字符类型本质上就是一个字节大小的整型

	char ch = 'a';
	printf("ch1 = %c , ch = %d \n ",ch,ch);
	
	ch = 97;//ascii
	printf("ch2 = %c\n",ch);
	//小写字母比大写字母大 32
	char a = 'A';
	char b = 'a';      
	
	printf("A = %d, a = %d\n",a,b);
	
	printf("小写转大写  %c\n",'a' - 32);

	
       


	return 0;
}



