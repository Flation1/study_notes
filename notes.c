#define _CRT_SECURE_NO_WARNINGS //vs��������sacnf()�Ϸ���������ֻ����scanf_s(),������ֻ����vs��ʹ��
#include <stdio.h>
#include <string.h>
#include <time.h>
//D:\c����\practice\notes.c
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
//	printf("%d\n", sizeof(char));1���ֽ�
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
//	int num1 = 0;//��������ʼ��
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
//	'w';//�ַ����ַ�����˫����
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
//\ddd��ʾ1~3λ�˽��Ƶ�����
//\xdd��ʾ2λʮ�����Ƶ�����

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
//int main()
//{
//	int a = 0;
//	int b = 1;
//	if (a == 1)
//	{
//		if (b == 1)
//			printf("Hello");
//	}
//	else
//		printf("World");    //��ӡWorld���ô����{}������
//	return 0;
//}
//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)            //switch���ʽ����Ϊ����
//	{
//	case 1:                 //case����Ϊ���ͳ������ʽ�����ַ�(�ƺ����ܼӵ�����)
//		printf("����1\n");
//	case 2:
//		printf("����2\n");
//	case 3:
//		printf("����3\n");
//	case 4:
//		printf("����4\n");
//	}
//	return 0;                //�������2������ӡ2,3,4
//}
//һ�ָ����ŵı��ʽ
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:                   //����д�� case (day<6)  ,day<6�ᱨ����ʾ���ʽ�����г���ֵ����day�Ǳ���
//		printf("weekday");
//      break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;               
//	}
//	return 0;                //ԭ��ͬ��
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;                //���һ��break;������ӣ���ʡ��
//		
//  default:                  //������������case����ƥ�������½���default����
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;                 //��ɶ��ɶ  switch֧��Ƕ��
//}                                        

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
//while���
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 8)
//			break;            //������ֹѭ��
//		if (i == 6)
//			continue;         //������ѭ����i==5������i++,ֱ����ȥ�жϣ�i��������
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	/*int ch = 0;
//	while(getchar())*/
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);             //�������벢�س���scanf()�����뻺����ȡ�������������\n,getchar()��������\n�ŵ�ret�У���ӡNo
//	printf("��ȷ������(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	getchar();                         //ȡ��������������\n,����һ��getcahr()�ȴ����룬
//	printf("��ȷ������(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')     //��ѭ��������ɷ���ȡֵ��ֱ���յ�\n
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//�������ӣ��������
//int main()
//{
//	char ch = '\0';                        //��ʼ������
//	while ((ch = getchar()) != EOF)        //�����뻺������ȡ�ַ�(���ֶ����������ַ�)����ѭ���з�����ȡ
//	{
//		if (ch < '0' || ch>'9')            //ʵ�ʱȽϵ���ASCII��ֵ(ע�����Ǿ�������)��0��48��9��57���ʽ��ֻ���ӡ0����9��������0��9��
//			continue;
//		putchar(ch);                       //��������abc123efg,ʵ�����Ϊ123 
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 8)
//			break;
//		if (i == 6)
//			continue;         //��ӡ2 3 4 5 7��continue��������ѭ������Ĵ��룬ֱ�ӻص��жϲ��֣�������һ��ѭ�����ж�
//		printf("%d ", i);
//
//	}
//	return 0;
//}

//forѭ��
//for (���ʽ1;���ʽ2;���ʽ3)          /// exp1����ʼ��ѭ������   exp2:�����жϲ���    exp3:�������֣�ѭ�������ĵ���
//    ѭ�����;
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)           //ִ��˳��: i=1 --> �ж� i<=10 --> �������� -->��i++��--> �ж�i<=10
//	{
//		if (i == 5)
//		{
//			break;                      //��������ѭ�������Ϊ1234��������continue����Ϊ1-10�в���5
//		}
//		printf("%d\n", i);
//		
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };      
//	int i = 0;
//	for (i = 0; i < 10; i++)             
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// һЩforѭ���ı���
//int main()
//{
//	for (;;)                    //for ѭ���жϲ���ʡ����ζ�����жϻ�����
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i <= 10; i++)     //ֱ���� exp1�д�����������ʼ����c++��Ҳ֧��
//	{
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)          //j���ٴο�ʼѭ��ʱ���ٴγ�ʼ��Ϊ0
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int x, y;                                           //�˴�ֻ��������
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)        //exp1�и�ֵ
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()                                    //��; ��ѭ��ִ�м���?
//{
//	int i, j;
//	for (i = 0, j = 0; j = 0; i++, j++)
//	{
//		j++;
//	}
//	return 0;                                   //��: 0�Ρ� forѭ�����ж����Ϊ��ֵ�䣬ʹj��Ϊ0,���жϺ�Ϊ�٣�������ѭ����ִ��0�Ρ�
//}

//do..while..ѭ��
//do
//    ѭ�����;
//while (���ʽ);
//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;                          //��ӡ2-11û��5
//		printf("%d", i);
//	}
//	while (i <= 10);
//
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
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	//printf("%d\n", arr[8]);8
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}
// 
//int main()
//{
//	const int days[] = { 31,28,31,30,31,30,31,31,30,31 };
//	int index;
//	for (index = 0; index < sizeof days / sizeof(days[0]); index++)      sizeof ���Բ������ţ��������
//	{
//		printf("Month %2d has %d days.\n", index + 1, days[index]);      %2d��Ϊ�˶��룬ʹ�·ݵ����ֳ���Ϊ2
//	}
//	return 0;
//}
 

//��ά����:  Type Name[size1][size2]...[sizeN];
//��ά����:  Type Name[x][y]  :x��y�еı��
//��ά�������ͨ����������Ϊÿ��ָ��ֵ�����г�ʼ����������һ������ 3 �� 4 �е����顣
//int a[3][4] = {
// {0, 1, 2, 3} ,   /*  ��ʼ��������Ϊ 0 ���� */
// {4, 5, 6, 7} ,   /*  ��ʼ��������Ϊ 1 ���� */
// {8, 9, 10, 11}   /*  ��ʼ��������Ϊ 2 ���� */
//};
//�ڲ�Ƕ�׵������ǿ�ѡ�ģ�����ĳ�ʼ���������ǵ�ͬ�ģ�
//
//int a[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
//
//��ά�����е�Ԫ����ͨ��ʹ���±꣨����������������������������ʵġ����磺
//int val = a[2][3];
//�������佫��ȡ�����е� 3 �е� 4 ��Ԫ�أ�ʹ��Ƕ��ѭ���������ά���飺
//int main()
//{
//	int arr[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8} };          Ҳ����ֻ���������Ļ�����
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
//		}
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

//����
// �����������ͱ���������
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	Swap(a,b);
//	printf("������:a=%d,b=%d", a, b);            //���δ�ӡ�����ͬ��ֻ�������β�(ʵ�ε�һ����ʱ����)����ʵ����Ӱ��
//	return 0;
//}
// ���⣺
//void Swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("������:a=%d,b=%d", a, b);
//	return 0;
//}

//��ʽ����
//int main()
//{
//	//printf("%d", printf("%d", printf("%d", 43)));                  ���Ϊ4321��printf�ķ���ֵ������ӡ���ַ���������ʽ���ʺ��ӡ�����ֻ�����һ��
//	/*printf("%d\n", printf("%d\n", printf("%d\n", 43))); */         //���Ϊ43
//																	 //      3             \nҲ��һ���ַ����ᱻ��ȡ
//	                                                                 //      2     
//	return 0;  
//}


//�ж�һ�����ǲ�������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//





//ָ��
// ��������������:���ƺ�ֵ(���಻����),����������,Ҳ��Ϊ����������:��ַ��ֵ,��ַ�������ڼ�����ڲ�������
// ��ͨ������ֵ��Ϊ���������ѵ�ַ��Ϊͨ��&������õ���������,��ָ������ѵ�ַ��Ϊ������,��ֵ��Ϊͨ��*������õ���������
//1.�ڴ�
//bit:����λ  byte=8*bit:�ֽ�  KB=1024*byte,MB,GB,PB
//���a�Ǳ�����,&a�Ǳ����ĵ�ַ��%p�������ַ��ת��˵��,��ʮ��������ʾ��ַ��ÿ��ʮ����������Ӧ4λ����ӡ��������λ������4���Ƕ���λ�ĵ�ַ 
//&:ȡ��ַ��������printf("%p\n",&a);��ӡ��ַ��ָ�����(���ָ��/��ַ�ı���)����: int* p=&a;-----p��Ϊָ��������ڴ���->��ַ(ָ��),"int*":int˵��pָ��Ķ�����int���ͣ�*˵��p��ָ�����
// *p=20; �����ò�����,��˼��ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//int main()
//{
//	int var = 10;
//	int* p;
//	p = &var;
//	printf("%p\n", &var);
//	printf("%p\n", &p);
//	printf("%d\n", *p);
//	return 0;
//}
//function(x) ���ݵ���x��ֵ    Ҫ���������е���ʽ����������һ����x��������ͬ�ı������ɣ�һ�����ڼ������ֵ
//function(&x) ���ݵ���x�ĵ�ַ  Ҫ���������е���ʽ����������һ��ָ����ȷ���͵�ָ�������һ��Ҫ�ڱ��������иı����������ı�����ֵ������scanf()

//�������Ǹ�������Ԫ�صĵ�ַ
//#define SIZE 4
//int main()
//{
//	short datas[SIZE];
//	short* pti;
//	short index;
//	double bills[SIZE];
//	double* ptf;
//	pti = datas;                 //�������ַ����ָ��       ��ͬ�ĵ�ַ:datas+2==&datas[2]
//	ptf = bills;                                            ��ͬ��ֵ:*(datas+2)==datas[2]   ���ڴ�datas��λ�ã�Ȼ���ƶ�2����Ԫ�����������������ֵ
//	printf("%23s %15s\n", "short", "double");               ע��*���������ȼ�����+��*(datas+2):datas������Ԫ�ص�ֵ
//	for (index = 0; index < SIZE; index++)                                          *datas+2:datas��һ��Ԫ�ص�ֵ��2
//	{
//		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
//	}
//	return 0;                                                                       
//}
//#define MONTHS 12
//int main()
//{
//	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int index = 0; 
//	for (index = 0; index < MONTHS; index++)       
//	{
//		printf("Month %2d has %d days\n", index+1, *(days + index));   *(days+idnex)��days[index]��ͬ��days��������Ԫ�صĵ�ַ��days+index��Ԫ��days[index]�ĵ�ַ
//	}
//	return 0;
//}
//
//const int Max = 3;
//int main()
//{
//	int arr[] = { 10,20,30 };
//	int i, * p;
//	p = arr;
//	for (i = 0; i < Max; i++)
//	{
//		printf("��ַΪ:%p\n", p);
//		printf("����ֵΪ:%d\n", *p);
//		p++;                          //ָ�����������ָ����һ�����浥Ԫ��ָ���һ��ָ���ֵ�Զ���������ָ�����͵Ĵ�С(���ֽ�Ϊ��λ)
//	}
//
//	return 0;
//}

//const int Max = 3;
//int main()
//{
//	int arr[] = { 10,20,30 };
//	int i, * p;
//	p = &arr[Max - 1];
//	for (i = Max; i>0; i--)
//	{
//		printf("��ַΪ:%p\n", p);
//		printf("����ֵΪ:%d\n", *p);
//		p--;                          //ָ������ݼ���ָ����һ�����浥Ԫ
//	}
//
//	return 0;
//}

//const int Max = 3;
//int main()
//{
//	int arr[] = { 10,20,30 };
//	int i, * p;
//	p = arr;
//	while (p<=&arr[Max-1])            //ָ��Ҳ�й�ϵ�ȽϷ�
//	{
//		printf("��ַΪ:%p\n", p);
//		printf("����ֵΪ:%d\n", *p);
//		p++;                          
//	}
//
//	return 0;
//}

//#define Max 3
//int main()
//{
//	int var[] = { 10,100,200 };
//	int i, * p[Max];
//	for (i = 0; i < Max; i++)
//	{
//		p[i] = &var[i];
//	}
//	for (i = 0; i < Max; i++)
//	{
//		printf("Value of var[%d] = %d\n", i, *p[i]);
//	}
//
//	return 0;
//}

//void f(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	printf("����ǰ:x=%d,y=%d", x, y);
//	f(&x, &y);
//	printf("������:x=%d,y=%d", x, y);
//
//	return 0;
//}

//ָ������
//#define Max 3
//int main()
//{
//	int var[] = { 10,20,30 };
//	int i, * p[Max];
//	for (i = 0; i < Max; i++)
//	{
//		p[i] = &var[i];       //��ֵΪ�����ĵ�ַ���ַ���ͬ��
//	}
//	for (i = 0; i < Max; i++)
//	{
//		printf("Value of var[%d]=%d\n", i, *p[i]);
//	}
//	return 0;
//}
//
//ָ��ָ���ָ��
//int main()
//{
//	int v, * p1, ** p2;
//	v = 100;
//	p1 = &v;
//	p2 = &p1;
//	printf("var=%d\n", v);
//	printf("p1=%p\n", p1);
//	printf("p1=%d\n", *p1);
//	printf("p2=%p\n", p2);
//	printf("p2=%d\n", **p2);		//���	var = 100
//											p1 = 000000CA93EFFBF4
//											p1 = 100
//											p2 = 000000CA93EFFC18
//											p2 = 100
//	return 0;
//}

//����ָ�������
//void getSeconds(unsigned long* p)
//{
//	*p = time(NULL);               //��ȡ��ǰ����
//	return;
//}
//int main()
//{
//	unsigned long sec;
//	getSeconds(&sec);
//	printf("Number of seconds:%ld\n", sec);
//
//	return 0;                      //�ܽ���ָ����Ϊ�����ĺ���Ҳ�ܽ���������Ϊ����
//}
//int sum(int* p)                  //��ȡ��������Ԫ�صĵ�ַ
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < 10; i++)       //ֱ�Ӵ�������Ԫ�ظ���
//	{
//		total += p[i];             
//	}
//	return total;
//}
//int sum(int arr[],int n)         //�����������β�ʱ,int arr[] ��int *pЧ��һ��,��Ϊ�������Ǹ�������Ԫ�صĵ�ַ����Ϊʵ�ʲ�����������Ҫ����ʽ������һ����֮ƥ���ָ��
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < n; i++)
//	{
//		total += p[i];
//	}
//}
//������
//#define SIZE 10
//int sum(int* p, int n)
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < n; i++)
//	{
//		total += p[i];
//	}
//	return total;
//}
//int main()
//{
//	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
//	long answer;
//	answer = sum(marbles, SIZE);
//	printf("The total number of marbles is %ld.\n", answer);
//	printf("The size of marbles is %zd bytes.\n", sizeof marbles);
//	return 0;
//}
//˫ָ���
//#define SIZE 10
//int sum(int* start, int* end)
//{
//	int total=0;
//	while (start < end)
//	{
//		total += *start;
//		start++;                   //����д��total+=*start++;   *��++���ȼ���ͬ����������Ǵ�����������start�ȵ���
//	}
//	return total;
//}
//int main(void)
//{
//	int marbles[] = { 20,10,5,39,4,16,19,26,31,20 };
//	int total = sum(marbles, marbles + SIZE);
//	printf("The total number of marbles is %d.\n", total);
//	return 0;
//}
// ָ�������е����ȼ�
//int main()
//{
//	int data[2] = { 100,200 };                                
//	int moredata[2] = { 300,400 };                                            
//	int* p1, * p2, * p3;
//	p1 = p2 = data;
//	p3 = moredata;
//	printf("*p1 = %d,*p2 =% d,p3 = %d\n", *p1, *p2, *p3);                                  
//	printf("*p1++ = %d,*++p2 = %d,(*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
//	printf("*p1 = %d,*p2 =% d,p3 = %d\n", *p1, *p2, *p3);
//	
//	return 0;
//}
// ���:
//   *p1 = 100,  * p2 = 100,      p3 = 300
//* p1++ = 100, *++p2 = 200, (*p3)++ = 300
//  * p1 = 200,   *p2 = 200,      p3 = 301
//ֻ��(*p3)++�ı�������Ԫ�ص�ֵ 

//ָ�����
//int main()
//{
//	int urn[5] = { 100,200,300,400,500 };
//	int* p1, * p2, * p3;
//	p1 = urn;
//	p2 = &urn[2];                                      ��ֵ
//	printf("urn[2]=%d\n", *p2);             300        ������
//	int p4 = &p1;                                      ȡַ(ָ��ĵ�ַ),ָ��Ҳ�Ǳ������ñ�����ֵ��һ����һ��ֵ�ĵ�ַ  
//	printf("urn[2+2]=%d\n", *(p2 + 2));     500        ָ�����������(��),�����ȳ���ָ����ָ������͵��ֽڴ�С(int:4),����ָ����ӣ��õ�һ����ָ��
//	p1++;                                              ָ�����(��)һ����ָ������͵��ֽڴ�С
//	printf("urn[2-1]=%d\n", *(p2 - 1));     200        
//	printf("urn[2]-urn=%d\n", p2 - p1);     1          ָ������õ�������������Ԫ��֮��ľ��룬��ֵ�ĵ�λ����������͵ĵ�λ��ͬ(int:4)
//	return 0;
//}
// ����const:
// ��д�������Դ�ֵҲ���Դ�ָ�룬ͨ������ֱ�Ӵ�����ֵ��ֻ�г�����Ҫ�ں����иı��ֵʱ���Żᴫ��ָ��(��Ч)
// �����������β�ʱ����������޸Ĵ�������飬����const���Σ�����:const int arr[]/*p,��������
// ָ��const��ָ��ͨ�����ں��������У��������ú�������ʹ��ָ��ı�����,����:void show_array(const double *ar,int n);
// ��const���ݻ��߷�const���ݵĵ�ַ��ʼ��Ϊָ��const��ָ���Ϊ�丳ֵ�ǺϷ���
// ������������ʼ��һ������ָ��𴦵�ָ�룬�ؼ���const��λ��:double *const pc=rates (ratesΪ������),
// �ڴ���ָ���ʱ�����ʹ��const����,��ָ��Ȳ��ܸ�������ָ��ĵ�ַ,Ҳ�����޸�ָ���ַ�ϵ�ֵ
// 
// ָ�����ά����:
// int zippo[4][2];   zippo��������Ԫ�صĵ�ַ����zippo��ֵ��zippo[0]�ĵ�ַ,zippo=&zippo[0]=&zippo[0][0]
// ��zippo[0]������һ���ں��������������飬,����zip[0][0]������zip[0]��ʼ��ͬһ����ַ
// ����֮,zippo[0]��һ��ռ��һ��int��С����ĵ�ַ����zippo��һ��ռ������int��С�������ֵ
//��zippo[0]��һ��ռ��һ��int��С����ĵ�ַ(�ڲ�ÿ��Ԫ��ռ��һ��int��С),��zippo��һ��ռ������int��С����ĵ�ַ(�ڲ�ÿ��Ԫ��ռ������int��С)
//������һ��ָ��(*p),������������ʹ�ô��±��[]�����,�õ����ö�������ֵ


// ��������:
//�׵�ַ��������Ԫ�ص�ַ��һά�����Ϊһ����Ӧ����������ռ�ڴ泤�ȣ���ά�����Ϊһ��һά���飨&arr[]������ά�����Ϊһ����ά����(&arr[][])���Դ����ơ�
//��������������׵�ַ��
// һά����:
// int arr[5] = {6,5,4,3,2,1};
//���Ƿֱ��arr��& arr[0]��& arr���д�ӡ�鿴��
//
//printf("%x\n", arr);    //60fee4
//printf("%x\n", &arr);    //60fee4
//printf("%x\n", &arr[0]);    //60fee4
//���Կ������ڲ������߽��в���������£�����ָ��ĵ�ַ��Ϊ��Ԫ�ص�ַ��
//
//printf("%x\n", arr + 1);    //60fee8
//printf("%x\n", &arr + 1);    //60ff00
//printf("%x\n", &arr[1]);    //60fee8
//����Եڶ�������ĵ�ֵַ��ǰ������ĵ�ֵַ���� / sizeof(int), ���ֳ��ȸպ�Ϊ����ĳ��ȡ��ó����½��ۣ�
//1�� & arr[0]��Ϊarr��������ȫһ������ָ������Ϊint * ��ָ��һ��int�ڴ浥Ԫ��
//2�� & arrΪ����ָ�룬��ָ������Ϊint(*)[7]��ָ��һ�����������顣
//3��ָ��ļӼ���ָ����ָ��������ڴ泤��Ϊ��λ����ƫ�ơ�
//��ά����:
//int arr[3][7] = {{6,5,4,3,2,1},{1,2,3,4,5,6},{4,5,6,7,8,9}};
//����Ķ�ά�������Ԫ��Ϊһά���飬����arrָ����ǵ�һ��һά���飬����Ϊint(*)[7]��
//��ʵ�����arr[0]����һά�������������arr[0]�������һ��һά���飬������ָ��ĵ�ַΪa[0][0]�ĵ�ַ��(*arr[0]) = a[0][0])��
// ������ô�������ǰ�arr[0]��Ϊx������int x[7]��˵��x����x[0]�ĵ�ַ����a[0][0]�ĵ�ַ��
// ���һ�㣬& arr�����ʲô�أ�����һά���飬����& arrָ�����������ά���飬����Ϊint(*)[3][7]��
//�����������������ƶϳ����¼�������ǵȼ۵ģ�
//* (arr[0] + 2) == arr[0][2];
//*(*(arr + 1) + 2) == arr[1][2];
//��ά����:
//����һ��8ά���飬����Ӧ�á���Ԫ����˼������滻����
	/*int arr[2][3][4][5][6][7][8][9] = { ... };
	&arr ���� > 8ά
	arr ���� > 7ά ���� > int(*)[][][][][][][]
	arr[] ���� > 6ά ���� > int(*)[][][][][][](��arr[]��ԪΪx��7��������һ����Ϊ6άint x[][][][][][]���·�ͬ��
	arr[][] ���� > 5ά ���� > int(*)[][][][][]
	arr[][][] ���� > 4ά ���� > int(*)[][][][]
	arr[][][][] ���� > 3ά ���� > int(*)[][][]
	arr[][][][][] ���� > 2ά ���� > int(*)[][]
	arr[][][][][][]  ���� > 1ά ���� > int(*)[]
	arr[][][][][][][]  ���� > 0ά ���� > int*
	arr[][][][][][][][] ���� > ֱ��ȡֵ
	�ƹ㵽nά��
	& arr ���� > nά
	arr ���� > n - 1ά
	arr[] ���� > n - 2ά
	arr[][] ���� > n - 3ά
	...              ....
	arr n - 1��[]  ���� > 0ά
	arr n��[] ���� > ֱ��ȡֵ*/





















