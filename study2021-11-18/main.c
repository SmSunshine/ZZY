#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()//15
//{
//	int score;
//	char grade;
//	printf("请输入一个分数：\n");
//	scanf("%d", &score);
//	grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
//	printf("%d分的等级为：%c\n", score,grade);
//	return 0;
//}

//#include<stdio.h>
//int main()//16
//{
//	int a, b, num1, num2, temp;
//	printf("please input two numbers:\n");
//	scanf("%d%d", &num1, &num2);
//	if (num1 < num2);
//	{
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	a = num1;
//	b = num2;
//	while (b != 0)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("最大公约数：%d\n", a);
//	printf("最小公倍数%d\n", num1 * num2 / a);
//	return 0;
//}

//#include<stdio.h>
//int main()//17
//{
//	int letters = 0, space = 0, digit = 0, others = 0;
//	char c;
//	printf("please input some characters\n");
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//			letters++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')
//			digit++;
//		else
//			others++;
//	}
//	printf("all in all:char=%d space=%d digit=%d others=%d\n", letters, space, digit, others);
//	return 0;
//}

//#include<stdio.h>
//int main()//18
//{
//	int a, n, count = 1;
//	long int sn = 0, tn = 0;
//	printf("please input a and n:\n");
//	scanf("%d%d", &a, &n);
//	printf("a=%d,n=%d\n", a, n);
//	while (count <= n)
//	{
//		tn += a;
//		sn += tn;
//		a *= 10;
//		count++;
//	}
//	printf("a+aa+...=%ld\n", sn);
//	return 0;
//}

#include<stdio.h>
int main()//19
{
	int i, j, m,n,sn;
	for (i = 2; i <= 1000; i++)
	{
		sn = 1;
		m = i/2;
		for (j = 2; j <= m; j++)
		{
			n = i % j;
			if (n == 0)
			{
				sn += j;
			}
		}
		if (sn == i)
		{
			printf("%dis a wanshu\n", i);
		}
	}
	return 0;
}