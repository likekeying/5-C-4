#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main(void)
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	strcpy(b1.name, "C++");//�ַ�������
	b1.price = 15;//����ֱ�Ӹģ���Ϊprice��һ������
	struct Book* pb = &b1;
	//����pb��ӡ�ҵ������ļ۸�
	//.  �ṹ�����.��Ա
	//-> �ṹ��ָ��->��Ա

	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	printf("%s\n",(*pb).name);
	printf("%d\n", (*pb).price);

	/*printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);*/
	return 0;
}

//int main(void)
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	return 0;
//}