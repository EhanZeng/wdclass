 ///
 /// @file    memory.cc
 /// @author  ehan(925789251@qq.com)
 /// @date    2017-07-21 06:26:22
 ///
 

#include<stdio.h>
#include<string.h>
#include <iostream>
using std::cout;
using std::endl;

int a=0;//全局变量，生命周期大于main函数，main退出之后，才销毁
char* p1;

int main(void)
{
	int b;
	char s[]="123456";//将字符串赋值到数组，不再是在文字常量区，在只读段，地址值较小
	//s为一个常量，位于栈上,数组地不能改
	char* p2;
	const char* p3="123456";//字符串常量，位于文字常量区，p3在栈空间
	static int c=0;//在全局静态区
	p1=new char[10];//每个指针都有自己的指针地址和自己指向的空间的地址
	p2=new char[5];
	strcpy(p1,"123456");
	printf("123456=%p\n","123456");

//	*p3='x';//error, 文字常量区不能修改，只能读取
//&s=0x0;
	
	printf("&a=%p\n",&a);
	printf("&c=%p\n",&c);
	printf("&p1=%p\n",&p1);//p1自己的地址在全局变量区
	printf("p1=%p\n",p1);//p1指向的地址在堆空间
	printf("&p2=%p\n",&p2);//p2自己的地址在栈空间
	printf("p2=%p\n",p2);//p2指向的地址在堆空间
	printf("&p3=%p\n",&p3);//p3自己在栈空间
	printf("p3=%p\n",p3);//p3指向的地址在文字常量区
	printf("&b=%p\n",&b);//b自己在栈空间
	printf("s=%p\n",s);//s自己在栈空

	return 0;
}
