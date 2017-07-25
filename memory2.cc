///
/// @file    memory2.cc
/// @author  ehan(925789251@qq.com)
/// @date    2017-07-21 07:21:41
///
#include<stdio.h> 
#include <iostream>
using std::cout;
using std::endl;

int a=10;//全局变量区
const int b=20;//放在文字常量区

int test(void)
{
	int c=30;//栈空间
	const int d=40;//放在栈区，与其生命周期有关
	const char* p1="123456";//p1本身在栈空间，p1指向的在文字常量区

	printf("&a=%p\n",&a);
	printf("&b=%p\n",&b);
	printf("&c=%p\n",&c);
	printf("&d=%p\n",&d);
	printf("p1=%p\n",p1);
	printf("&p1=%p\n",&p1);
	return 0;
}
int main(void)
{
	test();
	return 0;
}

