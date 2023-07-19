#define _CRT_SECURE_NO_WARNINGS //vs控制输入sacnf()合法化，否则只能用scanf_s(),但它又只能在vs中使用
#include <stdio.h>
#include <string.h>
#include <time.h>
//D:\c语言\practice\notes.c
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

// 数据类型
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
//	printf("%d\n", sizeof(char));1个字节
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
//	printf("%d\n",a);全局变量和局部变量名称相同的情况下，局部优先
//	return 0;
//}

//int main()
//{
//	int num1 = 0;//声明并初始化
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);//输入,scanf_s()是vs自己的函数，非c标准函数，跨平台用scanf()
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;局部变量的作用域只在它所在的大括号内
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);错误代码
//	return 0;
//}

//int a = 10;全局变量/extern int a;声明来自外部（另一个文件）的变量（作用域是整个工程）
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
//{//字面常量
//	30;
//	3.14;
//	'w';//字符，字符串用双引号
//	'abc';
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	a = 20;//无法修改，const修饰为常变量
//	printf("a=%d", a);
//	return 0;
//}

//int main()
//{
//	const int n = 10; const 修饰的n本质是变量，只是无法修改
//	int arr[n] = { 0 };
//	return 0;
//}

//define 定义的标识符常量
//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}

//枚举常量
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
//	//char; 字符类型
//	//'a';
//	//char ch = 'w';
//	//字符串："abcdefg";
//	char arr1[]="abcdef";//可以存n个字符(在方括号内不写n可以自动根据后面的值自动控制）//7(隐藏一个\0)
//	char arr2[] = { 'a','b','c','d','e','f' };
//	printf("%s\n", arr1);//abcdef(字符串末尾隐藏\0，且\0为字符串结束标志
//	printf("%s\n", arr2);//abcdef烫烫烫烫烫烫烫烫烫烫烫�鱋6?
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	int len = strlen("abc");//求字符串长度(不包含\0)的一个函数，string length,头文件 string.h/#include <string.h>
//	printf("%d\n", len);
//	return 0;
//}

//转义字符：
//%d整型
//%c字符
//%s字符串
//%f float
//%lf double
//%zu sizeof的返回值
//转义字符
//\ddd表示1~3位八进制的数字
//\xdd表示2位十六进制的数字

//int main()
//{
//	printf("%c\n", '\130');//打印X（八进制的130转化成十进制后的数对应的ASCII码代表的字符）
//	printf("%c\n", '\x60');//打印`同上，写060也一样
//	return 0;
//}
//printf("%d",strlen("c;\test\628\test.c"));//结果为14，\t:算一个字符，"\628":应为"\62"+"8",\ddd表示八进制数，而八进制中没有8，故不为"\628",同时小心"\028","\0"会使字符串结束
//c语言注释快捷键:Ctrl+K+C,取消注释：Ctrl+K+U
//法二：/*........
//        ........*/(不能嵌套注释）
//法三：//........

//分支语句
// if else语句
//int main()
//{
//	int input = 0;
//	printf("要好好学习么（1/0）？");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 25)    //&&表示并且，不能写成18<=age<25
//	{
//		printf("青年\n");
//		printf("可以饮酒\n");
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
//		printf("World");    //结果什么都没有打印，在这种情况下，else的执行与跟哪个if 对齐无关，系统会默认跟最近的if对齐
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
//		printf("World");    //打印World，用代码块{}来控制
//	return 0;
//}
//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)            //switch表达式必须为整型
//	{
//	case 1:                 //case必须为整型常量表达式或者字符(似乎不能加单引号)
//		printf("星期1\n");
//	case 2:
//		printf("星期2\n");
//	case 3:
//		printf("星期3\n");
//	case 4:
//		printf("星期4\n");
//	}
//	return 0;                //如果输入2，则会打印2,3,4
//}
//一种更优雅的表达式
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
//	case 5:                   //不能写成 case (day<6)  ,day<6会报错，提示表达式必须有常量值，而day是变量
//		printf("weekday");
//      break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;               
//	}
//	return 0;                //原理同上
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;                //最后一个break;建议添加，不省略
//		
//  default:                  //在输入与上述case均不匹配的情况下进入default操作
//		printf("选择错误\n");
//		break;
//	}
//	return 0;                 //输啥得啥  switch支持嵌套
//}                                        

//循环语句
//int main()
//{
//	int line = 0;
//	while (line<20000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油");
//	}		
//	return 0;
//}
//while语句
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 8)
//			break;            //永久终止循环
//		if (i == 6)
//			continue;         //进入死循环，i==5后跳过i++,直接又去判断，i不再增加
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
//	printf("请输入密码:>");
//	scanf("%s", password);             //输入密码并回车后，scanf()从输入缓冲区取走密码后，留下了\n,getchar()就拿走了\n放到ret中，打印No
//	printf("请确认密码(Y/N):>");
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
//	printf("请输入密码:>");
//	scanf("%s", password);
//	getchar();                         //取走了上面遗留的\n,让下一个getcahr()等待输入，
//	printf("请确认密码(Y/N):>");
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
//	printf("请输入密码:");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')     //用循环解决，可反复取值，直到终点\n
//	{
//		;
//	}
//	printf("请确认密码(Y/N):>");
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
//补充例子，方便理解
//int main()
//{
//	char ch = '\0';                        //初始化变量
//	while ((ch = getchar()) != EOF)        //从输入缓冲区获取字符(需手动输入任意字符)，在循环中反复读取
//	{
//		if (ch < '0' || ch>'9')            //实际比较的是ASCII码值(注意它们均有引号)，0：48，9：57，故结果只会打印0——9的数（含0，9）
//			continue;
//		putchar(ch);                       //例如输入abc123efg,实际输出为123 
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
//			continue;         //打印2 3 4 5 7，continue跳过本次循环后面的代码，直接回到判断部分，进行下一次循环的判断
//		printf("%d ", i);
//
//	}
//	return 0;
//}

//for循环
//for (表达式1;表达式2;表达式3)          /// exp1：初始化循环变量   exp2:条件判断部分    exp3:调整部分，循环条件的调整
//    循环语句;
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)           //执行顺序: i=1 --> 判断 i<=10 --> 主体代码块 -->（i++）--> 判断i<=10
//	{
//		if (i == 5)
//		{
//			break;                      //永久跳出循环，结果为1234，若换成continue，则为1-10中不含5
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
// 一些for循环的变种
//int main()
//{
//	for (;;)                    //for 循环判断部分省略意味着这判断会恒成立
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i <= 10; i++)     //直接在 exp1中创建变量并初始化，c++中也支持
//	{
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)          //j在再次开始循环时会再次初始化为0
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int x, y;                                           //此处只创建变量
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)        //exp1中赋值
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()                                    //问; 该循环执行几次?
//{
//	int i, j;
//	for (i = 0, j = 0; j = 0; i++, j++)
//	{
//		j++;
//	}
//	return 0;                                   //答: 0次。 for循环中判断语句为赋值句，使j恒为0,故判断恒为假，不进入循环，执行0次。
//}

//do..while..循环
//do
//    循环语句;
//while (表达式);
//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;                          //打印2-11没有5
//		printf("%d", i);
//	}
//	while (i <= 10);
//
//	return 0;
//}

//求任意两数之和
//函数
//int Add(int x, int y)//int:返回类型，Add函数名
//{
//	int z = x + y;
//	return z;//return (x+y);(也可以不要括号）
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

//数组：一组相同类型元素的集合
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
//	for (index = 0; index < sizeof days / sizeof(days[0]); index++)      sizeof 可以不加括号，建议添加
//	{
//		printf("Month %2d has %d days.\n", index + 1, days[index]);      %2d是为了对齐，使月份的数字长度为2
//	}
//	return 0;
//}
 

//多维数组:  Type Name[size1][size2]...[sizeN];
//二维数组:  Type Name[x][y]  :x行y列的表格
//多维数组可以通过在括号内为每行指定值来进行初始化。下面是一个带有 3 行 4 列的数组。
//int a[3][4] = {
// {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
// {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
// {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
//};
//内部嵌套的括号是可选的，下面的初始化与上面是等同的：
//
//int a[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
//
//二维数组中的元素是通过使用下标（即数组的行索引和列索引）来访问的。例如：
//int val = a[2][3];
//上面的语句将获取数组中第 3 行第 4 个元素，使用嵌套循环来处理二维数组：
//int main()
//{
//	int arr[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8} };          也可以只保留最外层的花括号
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

//算数操作符"/":除号两端都是整数，才执行整数除法，如果有一个浮点数就执行浮点数除法：float a=7.0/2;  int b=7/2;
//取模"%":只能整数取模，不能出现浮点数
//赋值操作符:+=
//+:双目操作符(有两个操作数）
// 0表示假，非零表示真
//单目操作符:!,逻辑反操作，真假互换
//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("Hello World\n");//执行，若flag=1或其他数，则不执行
//	}
//	return 0;
//}
//单目操作符:sizeof,不是函数
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4，可去括号，对类型(如int不适用)，最好都加
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40:10个整型，每个整型4个字节,计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//4:数组第一个元素所占字节
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10：数组的元素个数
//	return 0;
//}
//--/++：
//int main()
//{
//
//	int a = 10;
//	int b = a++;//后置++,先使用，后++
//	            //int b=a; a=a+1;
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//	int c = ++a;//前置++，先++，后使用
//				//a=a+1; c=a;
//
//	printf("%d\n", c);//12
//	printf("%d\n", a);//12
//
//	return 0;
//}

//强制类型转换(类型)
//int a=(int)3.14;  3.14 字面浮点数，编译器默认理解为double类型
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}

//&&:逻辑与——并且
//||:逻辑或——或者
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a && b)  --若a,b均不为0，则执行if（同时满足）/||：只需一个满足即可
//	{
//		printf("Hello World");
//	}
//	return 0;
//}

//三目操作符: exp1 ? exp2 : exp3(简化版if)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	return 0;
//}

//逗号表达式：逗号隔开的一串表达式。 特点：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);//c=8 ;a=28 ; 5    结果:d=5,但前面两个式子仍然有效
//	printf("%d\n", d);//5
//	printf("%d\n", a);//28
//	return 0;
//}

//[]：下标引用操作符
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
//	int sum = Add(2, 3);//()函数调用操作符，2,3都是()的操作数
//	return 0;
//}

//关键字typedef
//typedef unsighed int us;
//int main()
//{
//	us int num = 0;
//	us num2 = 1;
//	return 0;
//}

//函数
// 交换两个整型变量的内容
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
//	printf("交换前:a=%d,b=%d\n", a, b);
//	Swap(a,b);
//	printf("交换后:a=%d,b=%d", a, b);            //两次打印结果相同，只交换了形参(实参的一份临时拷贝)，对实参无影响
//	return 0;
//}
// 正解：
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
//	printf("交换前:a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后:a=%d,b=%d", a, b);
//	return 0;
//}

//链式访问
//int main()
//{
//	//printf("%d", printf("%d", printf("%d", 43)));                  结果为4321，printf的返回值是它打印的字符个数，链式访问后打印的数字会连在一起
//	/*printf("%d\n", printf("%d\n", printf("%d\n", 43))); */         //结果为43
//																	 //      3             \n也是一个字符，会被读取
//	                                                                 //      2     
//	return 0;  
//}


//判断一个数是不是素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//flag是1，表示是素数
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





//指针
// 变量有两个属性:名称和值(其余不讨论),计算机编译后,也认为有两个属性:地址和值,地址即变量在计算机内部的名称
// 普通变量把值作为基本量，把地址作为通过&运算符得到的派生量,而指针变量把地址作为基本量,把值作为通过*运算符得到的派生量
//1.内存
//bit:比特位  byte=8*bit:字节  KB=1024*byte,MB,GB,PB
//如果a是变量名,&a是变量的地址，%p是输出地址的转换说明,以十六进制显示地址，每个十六进制数对应4位，打印出的数的位数乘以4即是多少位的地址 
//&:取地址操作符，printf("%p\n",&a);打印地址，指针变量(存放指针/地址的变量)创建: int* p=&a;-----p即为指针变量，内存编号->地址(指针),"int*":int说明p指向的对象是int类型，*说明p是指针变量
// *p=20; 解引用操作符,意思是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
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
//function(x) 传递的是x的值    要求函数定义中的形式参数必须是一个与x的类型相同的变量即可，一般用于计算或处理值
//function(&x) 传递的是x的地址  要求函数定义中的形式参数必须是一个指向正确类型的指针变量，一般要在被调函数中改变主调函数的变量的值，比如scanf()

//数组名是该数组首元素的地址
//#define SIZE 4
//int main()
//{
//	short datas[SIZE];
//	short* pti;
//	short index;
//	double bills[SIZE];
//	double* ptf;
//	pti = datas;                 //把数组地址赋给指针       相同的地址:datas+2==&datas[2]
//	ptf = bills;                                            相同的值:*(datas+2)==datas[2]   到内存datas的位置，然后移动2个单元，检索储存在那里的值
//	printf("%23s %15s\n", "short", "double");               注意*的运算优先级高于+，*(datas+2):datas第三个元素的值
//	for (index = 0; index < SIZE; index++)                                          *datas+2:datas第一个元素的值加2
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
//		printf("Month %2d has %d days\n", index+1, *(days + index));   *(days+idnex)与days[index]相同（days是数组首元素的地址）days+index是元素days[index]的地址
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
//		printf("地址为:%p\n", p);
//		printf("变量值为:%d\n", *p);
//		p++;                          //指针变量递增，指向下一个储存单元，指针加一，指针的值自动递增它所指向类型的大小(以字节为单位)
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
//		printf("地址为:%p\n", p);
//		printf("变量值为:%d\n", *p);
//		p--;                          //指针变量递减，指向上一个储存单元
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
//	while (p<=&arr[Max-1])            //指针也有关系比较符
//	{
//		printf("地址为:%p\n", p);
//		printf("变量值为:%d\n", *p);
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
//	printf("交换前:x=%d,y=%d", x, y);
//	f(&x, &y);
//	printf("交换后:x=%d,y=%d", x, y);
//
//	return 0;
//}

//指针数组
//#define Max 3
//int main()
//{
//	int var[] = { 10,20,30 };
//	int i, * p[Max];
//	for (i = 0; i < Max; i++)
//	{
//		p[i] = &var[i];       //赋值为整数的地址，字符串同理
//	}
//	for (i = 0; i < Max; i++)
//	{
//		printf("Value of var[%d]=%d\n", i, *p[i]);
//	}
//	return 0;
//}
//
//指向指针的指针
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
//	printf("p2=%d\n", **p2);		//结果	var = 100
//											p1 = 000000CA93EFFBF4
//											p1 = 100
//											p2 = 000000CA93EFFC18
//											p2 = 100
//	return 0;
//}

//传递指针给函数
//void getSeconds(unsigned long* p)
//{
//	*p = time(NULL);               //获取当前秒数
//	return;
//}
//int main()
//{
//	unsigned long sec;
//	getSeconds(&sec);
//	printf("Number of seconds:%ld\n", sec);
//
//	return 0;                      //能接受指针作为参数的函数也能接受数组作为参数
//}
//int sum(int* p)                  //获取该数组首元素的地址
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < 10; i++)       //直接传入数组元素个数
//	{
//		total += p[i];             
//	}
//	return total;
//}
//int sum(int arr[],int n)         //在声明函数形参时,int arr[] 与int *p效果一样,因为数组名是该数组首元素的地址，作为实际参数的数组名要求形式参数是一个与之匹配的指针
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < n; i++)
//	{
//		total += p[i];
//	}
//}
//完整版
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
//双指针版
//#define SIZE 10
//int sum(int* start, int* end)
//{
//	int total=0;
//	while (start < end)
//	{
//		total += *start;
//		start++;                   //可以写成total+=*start++;   *与++优先级相同，但结合律是从右往左，所以start先递增
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
// 指针运算中的优先级
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
// 结果:
//   *p1 = 100,  * p2 = 100,      p3 = 300
//* p1++ = 100, *++p2 = 200, (*p3)++ = 300
//  * p1 = 200,   *p2 = 200,      p3 = 301
//只有(*p3)++改变了数组元素的值 

//指针操作
//int main()
//{
//	int urn[5] = { 100,200,300,400,500 };
//	int* p1, * p2, * p3;
//	p1 = urn;
//	p2 = &urn[2];                                      赋值
//	printf("urn[2]=%d\n", *p2);             300        解引用
//	int p4 = &p1;                                      取址(指针的地址),指针也是变量，该变量的值是一个另一个值的地址  
//	printf("urn[2+2]=%d\n", *(p2 + 2));     500        指针与整数相加(减),整数先乘以指针所指向的类型的字节大小(int:4),再与指针相加，得到一个新指针
//	p1++;                                              指针递增(减)一个所指向的类型的字节大小
//	printf("urn[2-1]=%d\n", *(p2 - 1));     200        
//	printf("urn[2]-urn=%d\n", p2 - p1);     1          指针相减得到整数，代表两元素之间的距离，差值的单位与数组的类型的单位相同(int:4)
//	return 0;
//}
// 关于const:
// 编写函数可以传值也可以传指针，通常都是直接传递数值，只有程序需要在函数中改变该值时，才会传递指针(高效)
// 在声明函数形参时，如果不想修改传入的数组，考虑const修饰，例如:const int arr[]/*p,否则不修饰
// 指向const的指针通常用在函数传参中，，表明该函数不会使用指针改变数据,例如:void show_array(const double *ar,int n);
// 把const数据或者非const数据的地址初始化为指向const的指针或为其赋值是合法的
// 可以声明并初始化一个不能指向别处的指针，关键是const的位置:double *const pc=rates (rates为数组名),
// 在创建指针的时候可以使用const两次,该指针既不能更改它所指向的地址,也不能修改指向地址上的值
// 
// 指针与多维数组:
// int zippo[4][2];   zippo是数组首元素的地址，故zippo的值是zippo[0]的地址,zippo=&zippo[0]=&zippo[0][0]
// 而zippo[0]本身是一个内含两个整数的数组，,整数zip[0][0]与数组zip[0]开始于同一个地址
// 简言之,zippo[0]是一个占用一个int大小对象的地址，而zippo是一个占用两个int大小对象的数值
//但zippo[0]是一个占用一个int大小对象的地址(内部每个元素占用一个int大小),而zippo是一个占用两个int大小对象的地址(内部每个元素占用两个int大小)
//解引用一个指针(*p),或在数组名后使用带下标的[]运算符,得到引用对象代表的值


// 文章引用:
//首地址：数组首元素地址。一维数组的为一个对应数据类型所占内存长度，二维数组的为一个一维数组（&arr[]），三维数组的为一个二维数组(&arr[][])，以此类推。
//数组名是数组的首地址。
// 一维数组:
// int arr[5] = {6,5,4,3,2,1};
//我们分别对arr、& arr[0]、& arr进行打印查看：
//
//printf("%x\n", arr);    //60fee4
//printf("%x\n", &arr);    //60fee4
//printf("%x\n", &arr[0]);    //60fee4
//可以看到，在不对三者进行操作的情况下，三者指向的地址都为首元素地址。
//
//printf("%x\n", arr + 1);    //60fee8
//printf("%x\n", &arr + 1);    //60ff00
//printf("%x\n", &arr[1]);    //60fee8
//如果对第二项算出的地址值与前面算出的地址值做差 / sizeof(int), 发现长度刚好为数组的长度。得出以下结论：
//1、 & arr[0]即为arr，两者完全一样，其指针类型为int * ，指向一个int内存单元。
//2、 & arr为数组指针，其指针类型为int(*)[7]，指向一个完整的数组。
//3、指针的加减以指针所指向的类型内存长度为单位进行偏移。
//二维数组:
//int arr[3][7] = {{6,5,4,3,2,1},{1,2,3,4,5,6},{4,5,6,7,8,9}};
//这里的二维数组的首元素为一维数组，所以arr指向的是第一个一维数组，类型为int(*)[7]。
//其实这里的arr[0]就是一维数组的数组名。arr[0]代表的是一个一维数组，所以其指向的地址为a[0][0]的地址（(*arr[0]) = a[0][0])。
// 可以这么看，我们把arr[0]换为x，对于int x[7]来说，x便是x[0]的地址，即a[0][0]的地址。
// 最后一点，& arr代表的什么呢？参照一维数组，这里& arr指向的是整个二维数组，类型为int(*)[3][7]。
//根据上述描述可以推断出以下几种情况是等价的：
//* (arr[0] + 2) == arr[0][2];
//*(*(arr + 1) + 2) == arr[1][2];
//高维数组:
//对于一个8维数组，我们应用“换元”的思想进行替换分析
	/*int arr[2][3][4][5][6][7][8][9] = { ... };
	&arr —— > 8维
	arr —— > 7维 —— > int(*)[][][][][][][]
	arr[] —— > 6维 —— > int(*)[][][][][][](将arr[]换元为x，7个括号少一个变为6维int x[][][][][][]。下方同理）
	arr[][] —— > 5维 —— > int(*)[][][][][]
	arr[][][] —— > 4维 —— > int(*)[][][][]
	arr[][][][] —— > 3维 —— > int(*)[][][]
	arr[][][][][] —— > 2维 —— > int(*)[][]
	arr[][][][][][]  —— > 1维 —— > int(*)[]
	arr[][][][][][][]  —— > 0维 —— > int*
	arr[][][][][][][][] —— > 直接取值
	推广到n维：
	& arr —— > n维
	arr —— > n - 1维
	arr[] —— > n - 2维
	arr[][] —— > n - 3维
	...              ....
	arr n - 1个[]  —— > 0维
	arr n个[] —— > 直接取值*/





















