#define _CRT_SECURE_NO_WARNINGS //vs��������sacnf()�Ϸ���������ֻ����scanf_s(),������ֻ����vs��ʹ��
#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

// ��������
//char
// short
//int 
//long 
//long long
//float
//double

//int main()
//{
//	printf("%d\n" ,100);
//	printf("100");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));1�ֽ�
//	printf("%d\n", sizeof(short));2
//  printf("%d\n", sizeof(int));4
//	printf("%d\n", sizeof(long));4
//	printf("%d\n", sizeof(long long));	8
//	printf("%d\n", sizeof(float));4
//	printf("%d\n", sizeof(double));8
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	return 0;
//}

//int a = 20;
//int main()
//{
//	int a = 10;
//	printf("%d\n",a);ȫ�ֱ����;ֲ�����������ͬ������£��ֲ�����
//	return 0;
//}

//int main()
//{
//	int num1 = 0;//��ʼ��
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);//����,scanf_s()��vs�Լ��ĺ�������c��׼��������ƽ̨��scanf()
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;�ֲ�������������ֻ�������ڵĴ�������
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);�������
//	return 0;
//}

//int a = 10;ȫ�ֱ���/extern int a;���������ⲿ����һ���ļ����ı��������������������̣�
//void test()
//{
//	printf("test=%d\n", a);
//}

//int main()
//{
//	test();
//	{
//		
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{//���泣��
//	30;
//	3.14;
//	'w';//�ַ�
//	'abc';
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	a = 20;//�޷��޸ģ�const����Ϊ������
//	printf("a=%d", a);
//	return 0;
//}

//int main()
//{
//	const int n = 10; const ���ε�n�����Ǳ�����ֻ���޷��޸�
//	int arr[n] = { 0 };
//	return 0;
//}

//define ����ı�ʶ������
//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}

//ö�ٳ���
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};

//int main()
//{
//	int num = 10;
//	enum Color c = RED;
//	return 0;
//}

//int main()
//{
//	//char; �ַ�����
//	//'a';
//	//char ch = 'w';
//	//�ַ�����"abcdefg";
//	char arr1[]="abcdef";//���Դ�n���ַ�(�ڷ������ڲ�дn�����Զ����ݺ����ֵ�Զ����ƣ�//7(����һ��\0)
//	char arr2[] = { 'a','b','c','d','e','f' };
//	printf("%s\n", arr1);//abcdef(�ַ���ĩβ����\0����\0Ϊ�ַ���������־
//	printf("%s\n", arr2);//abcdef���������������������̀�O6?
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	int len = strlen("abc");//���ַ�������(������\0)��һ��������string length,ͷ�ļ� string.h/#include <string.h>
//	printf("%d\n", len);
//	return 0;
//}

//ת���ַ���
//%d����
//%c�ַ�
//%s�ַ���
//%f float
//%lf double
//%zu sizeof�ķ���ֵ
//ת���ַ�
//\ddd��ʾ1~3���˽��Ƶ�����
//\xdd��ʾ2��ʮ�����Ƶ�����

//int main()
//{
//	printf("%c\n", '\130');//��ӡX���˽��Ƶ�130ת����ʮ���ƺ������Ӧ��ASCII�������ַ���
//	printf("%c\n", '\x60');//��ӡ`ͬ�ϣ�д060Ҳһ��
//	return 0;
//}

//printf("%d",strlen("c;\test\628\test.c"));//���Ϊ14��\t:��һ���ַ���"\628":ӦΪ"\62"+"8",\ddd��ʾ�˽����������˽�����û��8���ʲ�Ϊ"\628",ͬʱС��"\028","\0"��ʹ�ַ�������

//c����ע�Ϳ�ݼ�:Ctrl+K+C,ȡ��ע�ͣ�Ctrl+K+U
//������/*........
//        ........*/(����Ƕ��ע�ͣ�
//������//........

//��֧���
// if else���
//int main()
//{
//	int input = 0;
//	printf("Ҫ�ú�ѧϰô��1/0����");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 25)    //&&��ʾ���ң�����д��18<=age<25
//	{
//		printf("����\n");
//		printf("��������\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	if (a == 1)
//		if (b == 1)
//			printf("Hello");
//	else
//		printf("World");    //���ʲô��û�д�ӡ������������£�else��ִ������ĸ�if �����޹أ�ϵͳ��Ĭ�ϸ������if����
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 1;
	if (a == 1)
	{
		if (b == 1)
			printf("Hello");
	}
	else
		printf("World");
	return 0;
}

//ѭ�����
//int main()
//{
//	int line = 0;
//	while (line<20000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������");
//	}		
//	return 0;
//}

//����������֮��
//����
//int Add(int x, int y)//int:�������ͣ�Add������
//{
//	int z = x + y;
//	return z;//return (x+y);(Ҳ���Բ�Ҫ���ţ�
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);
//	//int sum = n1 + n2;
//	printf("%d", sum);
//	return 0;
//}

//���飺һ����ͬ����Ԫ�صļ���
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	//printf("%d\n", arr[8]);8
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}

//����������"/":�������˶�����������ִ�����������������һ����������ִ�и�����������float a=7.0/2;  int b=7/2;
//ȡģ"%":ֻ������ȡģ�����ܳ��ָ�����
//��ֵ������:+=
//+:˫Ŀ������(��������������
// 0��ʾ�٣������ʾ��
//��Ŀ������:!,�߼�����������ٻ���
//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("Hello World\n");//ִ�У���flag=1������������ִ��
//	}
//	return 0;
//}
//��Ŀ������:sizeof,���Ǻ���
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4����ȥ���ţ�������(��int������)����ö���
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40:10�����ͣ�ÿ������4���ֽ�,���������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));//4:�����һ��Ԫ����ռ�ֽ�
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10�������Ԫ�ظ���
//	return 0;
//}
//--/++��
//int main()
//{
//
//	int a = 10;
//	int b = a++;//����++,��ʹ�ã���++
//	            //int b=a; a=a+1;
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//	int c = ++a;//ǰ��++����++����ʹ��
//				//a=a+1; c=a;
//
//	printf("%d\n", c);//12
//	printf("%d\n", a);//12
//
//	return 0;
//}

//ǿ������ת��(����)
//int a=(int)3.14;  3.14 ���渡������������Ĭ�����Ϊdouble����
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}

//&&:�߼��롪������
//||:�߼��򡪡�����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a && b)  --��a,b����Ϊ0����ִ��if��ͬʱ���㣩/||��ֻ��һ�����㼴��
//	{
//		printf("Hello World");
//	}
//	return 0;
//}

//��Ŀ������: exp1 ? exp2 : exp3(�򻯰�if)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	return 0;
//}

//���ű��ʽ�����Ÿ�����һ�����ʽ�� �ص㣺�����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);//c=8 ;a=28 ; 5    ���:d=5,��ǰ������ʽ����Ȼ��Ч
//	printf("%d\n", d);//5
//	printf("%d\n", a);//28
//	return 0;
//}

//[]���±����ò�����
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d", arr[3]);//2
//	return 0;
//}

//int Add(int x, int y)
//{	
//	return x+y;
//}
//int main()
//{
//	int sum = Add(2, 3);//()�������ò�������2,3����()�Ĳ�����
//	return 0;
//}

//�ؼ���typedef
//typedef unsighed int us;
//int main()
//{
//	us int num = 0;
//	us num2 = 1;
//	return 0;
//}










//ָ��
//1.�ڴ�
//bit:����λ  byte=8*bit:�ֽ�  KB=1024*byte,MB,GB,PB
//&a;//ȡ��ַ��������printf("%p\n",&a);��ӡ��ַ��ָ�����(���ָ��ı���)����: int* p=&a;-----p��Ϊָ��������ڴ���->��ַ(ָ��),"int*":int˵��pָ��Ķ�����int���ͣ�*˵��p��ָ�����

