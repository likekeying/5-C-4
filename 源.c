#include<stdio.h>
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main(void)
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);
	return 0;
}

//int main(void)
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	return 0;
//}