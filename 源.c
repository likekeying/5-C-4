#include<stdio.h>
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main(void)
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);
	return 0;
}

//int main(void)
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	return 0;
//}