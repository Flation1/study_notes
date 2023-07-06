#定义 _ CRT_ SECURE_ NO_ WARNINGS//vs Control input sacnf() is legalized. Otherwise, only scanf can be used_ S(), but it can only be used in vs
#包括<stdio.h>
 //D： \c­\practice\notes.c
//整型main（）
 //{
 /printf（“hehe\n”）；
//返回0；
 //}

 //Data type
//字符
//短
//整数
//长
//长-长
//浮子
//双倍的

//整型main（）
 //{
 /printf（“%d\n”，100）；
//printf（“100”）；
//返回0；
 //}

//整型main（）
 //{
//printf（“%d\n”，sizeof（char））；1个字节
//printf（“%d\n”，sizeof（短））；2
 /printf（“%d\n”，sizeof（int））； 4
//printf（“%d\n”，sizeof（long））；4
//printf（“%d\n”，sizeof（long-long））；8
//printf（“%d\n”，sizeof（float））；4
//printf（“%d\n”，sizeof（double））；8
//返回0；
 //}

//整型main（）
 //{
//	int age = 20;
//	double price = 66.6;
//返回0；
 //}

//int a = 20;
//整型main（）
 //{
//	int a = 10;
 //	printf(&#34;%d\n&#34;,a); When the names of global variables and local variables are the same, local variables take precedence
//返回0；
 //}

//整型main（）
 //{
//	int num1 = 0;//初始化
//	int num2 = 0;
 //	scanf(&#34;%d %d&#34;, &#38;num1, &#38;num2);// Input, scanf_ S () is vs&#39;s own function, not c standard function, and scanf() is used across platforms
//	int sum = num1 + num2;
//printf（“%d\n”，总和）；
//返回0；
 //}

//整型main（）
 //{
 //	{
//		int a = 10;局部变量的作用域只在它所在的大括号内
 /printf（“%d\n”，a）；
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
//	'w';//字符
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
//	printf("%s\n", arr2);//abcdef烫烫烫烫烫烫烫烫烫烫烫€鱋6?
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
//\ddd表示1~3个八进制的数字
//\xdd表示2个十六进制的数字

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
/*int main()
{
	int a = 0;
	int b = 1;
	if (a == 1)
	{
		if (b == 1)
			printf("Hello");
	}
	else
		printf("World");    //打印Wor;d，用代码块{}来控制
	return 0;
}*/
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
/*int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);             //输入密码并回车后，scanf()从输入缓冲区取走密码后，留下了\n,getchar()就拿走了\n放到ret中，打印No
	printf("请确认密码(Y/N):>");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}*/
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










//指针
//1.内存
//bit:比特位  byte=8*bit:字节  KB=1024*byte,MB,GB,PB
//&a;//取地址操作符，printf("%p\n",&a);打印地址，指针变量(存放指针的变量)创建: int* p=&a;-----p即为指针变量，内存编号->地址(指针),"int*":int说明p指向的对象是int类型，*说明p是指针变量

