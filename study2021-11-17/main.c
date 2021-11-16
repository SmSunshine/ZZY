#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()//10
//{
//	int i, j;
//	printf("\1\1\n");
//	for (i = 1; i < 11; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%c%c", 219, 219);
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()//11
//{
//	long f1, f2;
//	int i;
//	f1 = f2 = 1;
//	for (i = 1; i < 20; i++)
//	{
//		printf("%12ld %12ld", f1, f2);
//		if (i % 2 == 0)//控制输出，每行四个
//			printf("\n");
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//	}
//	//1,1,2,3,5,8,13,21...
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()//13
//{
//	int m, i, k, h = 0,leap = 1;
//	printf("\n");
//	for (m =101; m <= 200; m++)
//	{
//		k = sqrt(m + 1);
//		for (i = 2; i <= k; i++)
//		{
//			if (m % i == 0)
//			{
//				leap = 0;
//				break;
//			}
//		}
//		if (leap)
//		{
//			printf("%-4d", m);
//			h++;
//			if (h % 10 == 0)
//				printf("\n");
//		}
//		leap = 1;
//	}
//	printf("\n全部素数共%d", h);
//	return 0;
//}
//
//#include<stdio.h>
//int main()//12
//{
//	int i, j, m, n;
//	printf("水仙花数为：\n");
//	for (n = 100; n <= 999; n++)
//	{
//		i = n % 10;
//		j = (n / 10) % 10;
//		m = n / 100;
//		if (i*i*i + j*j*j + m*m*m == n)
//			printf("%d ", n);
//	}
//	return 0;
//}

#include<stdio.h>
int main()//14
{
	int n,i;
	printf("请输入一个数进行分解质因数：\n");
	scanf("%d", &n);
	printf("%d=", n);
	for (i = 2; i <= n; i++)
	{
		while (n != 1)
		{
			if (n % i == 0)
			{
				printf("%d*", i);
				n = n / i;;
			}
			else
				break;
		}
	}
	printf("%d", n);
	return 0;
}