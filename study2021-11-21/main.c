#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()//30
//{
//	long ge, shi, qian, wan, x;
//	printf("请输入一个5位数：");
//	scanf("%ld", &x);
//	wan = x / 10000;
//	qian = x % 10000 / 1000;
//	shi = x % 100 / 10;
//	ge = x % 10;
//	if (ge == wan && shi == qian)
//		printf("This number is a huiwen\n");
//	else
//		printf("This nubmber is not a huiwen\n");
//	return 0;
//}

//#include<stdio.h>
//int main()//31
//{
//	char letter;
//	printf("please input the first letter of someday\n");
//	while ((letter = getch()) != 'Y')
//	{
//		switch (letter)
//		{
//		case'S':printf("please input second letter\n");
//			if ((letter = getch()) == 'a')//getch()不按回车就起作用
//				printf("saturday\n");
//			else if((letter = getch()) == 'u')
//				printf("sunday\n");
//			else
//				printf("data error\n");
//			break;
//		case'F':printf("friday\n"); break;
//		case'M':printf("monday\n"); break;
//		case'T':printf("please input second letter\n");
//			if ((letter = getch()) == 'u')
//				printf("tuseday\n");
//			else if ((letter = getch()) == 'h')
//				printf("thursday\n");
//			else
//				printf("data error\n");
//			break;
//		case'W':printf("wednesday\n"); break;
//		default:printf("data error\n"); break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//void hello_world(void)
//{
//	printf("Hello,world!\n");
//}
//
//void three_hellos(void)
//{
//	int counter;
//	for (counter = 1; counter <= 3;counter++)
//		hello_world();
//}
//int main()//34
//{
//	three_hellos();
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#define N 101
//int main()//36
//{
//	int i, j, line, a[N];
//	for (i = 2; i < N; i++)
//		a[i] = i;
//	for (i = 2; i < sqrt(N); i++)
//	{
//		for (j = i + 1; j < N; j++)
//		{
//			if (a[i] != 0 && a[j] != 0)
//				if (a[j] % a[i] == 0)
//					a[j] = 0;//将不是素数的元素置零
//		}
//		printf("\n");
//	}
//	for (i = 2, line = 0; i < N; i++)
//	{
//		if (a[i] != 0)//输出数组中不为0的元素（都是素数）
//		{
//			printf("%5d", a[i]);
//			line++;
//		}
//		if (line == 10)
//		{
//			printf("\n");
//			line = 0;
//		}
//	}
//	return 0;
//}

