#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main(void)
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name, "C++");//字符串拷贝
	b1.price = 15;//可以直接改，因为price是一个变量
	struct Book* pb = &b1;
	//利用pb打印我的书名的价格
	//.  结构体变量.成员
	//-> 结构体指针->成员

	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	printf("%s\n",(*pb).name);
	printf("%d\n", (*pb).price);

	/*printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);*/
	return 0;
}

//int main(void)
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	return 0;
//}