#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()//24
//{
//	int n, t;
//	float a = 2, b = 1, s = 0;
//	for (n = 1; n <= 20;n++)
//	{
//		s = s + a / b;
//		t = a;
//		a = a + b;
//		b = t;
//	}
//	printf("sum is %9.6f\n", s);//%9.6f输出数据共九列，小数部分有六位
//	return 0;
//}

//#include<stdio.h>
//int main()//25
//{
//	float i, s = 0,n=1;//阶乘结果很大
//	for (i = 1; i <= 20; i++)
//	{
//		n = n * i;
//		s = s + n;
//	}
//	printf("1+2!+3!+...+20!=%e\n", s);
//	return 0;
//}

//#include<stdio.h>
//int get(int j)
//{
//	int sum;
//	if (j == 0)
//	{
//		sum = 1;
//	}
//	else
//	{
//		sum = j * get(j - 1);
//	}
//	return sum;
//}
//
//int main()//27
//{
//	int s = 0;
//	int i = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		s = get(i);
//		printf(" %d!=%d\n", i, get(i));
//	}
//	return 0;
//}

//#include<stdio.h>
//void palin(int n)
//{
//	char next;
//	if (n <= 1)
//	{
//		next = getchar();
//		printf("\n\0:");//直接换行也可
//		putchar(next);
//	}
//	else
//	{
//		next = getchar();
//		palin(n - 1);
//		putchar(next);
//	}
//}
//
//int main()//27
//{
//	int i = 5;
//	palin(i);
//	return 0;
//}


//#include<stdio.h>
//int age(int n)
//{
//	if (n == 1)
//	{
//		return 10;
//	}
//	else
//	{
//		return age(n - 1)+2;
//	}
//}
//int main()//28
//{
//	printf("第五个人年龄为%d岁\n", age(5));
//	return 0;
//}

#include<stdio.h>
int main()//29
{
	long a, b, c, d, e, x;
	printf("输入一个不多于五位的正整数：\n");
	scanf("%ld", &x);
	a = x / 10000;//分解出万位
	b = x % 10000 / 1000;//分解出千位
	c = x % 1000 / 100;//分解出百位
	d = x % 100 / 10;//分解出十位
	e = x % 10;//分解出个位
	if (a != 0)
		printf("there is 5,%ld %ld %ld %ld %ld\n", e, d, c, b, a);
	else if (b != 0)
		printf("there is 4,%ld %ld %ld %ld\n", e, d, c, b);
	else if (c != 0)
		printf("there is 3,%ld %ld %ld\n", e, d, c);
	else if (d != 0)
		printf("there is 2,%ld %ld\n", e, d);
	else if (e != 0)
		printf("there is 1,%ld\n", e);
	return 0;
}