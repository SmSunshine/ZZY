#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int length(char* p)
//{
//	int n=0;
//	while (*p != '\0')
//	{
//		n++;
//		p++;
//	}
//	return n;
//}
//int main()//70
//{
//	int len;
//	char str[20];
//	printf("please input a string:\n");
//	scanf("%s", str);
//	len = length(str);
//	printf("the string has %d characters.", len);
//	return 0;
//}

//#include<stdio.h>
//double odd(int *array,int n)
//{
//	int* arr_start,*p;
//	double sum=0.0;
//	arr_start = array;
//	for (p = arr_start; p <= array + n - 1; p+=2)
//	{
//		sum += 1.0 / *p;
//	}
//	return sum;
//}
//double doub(int* array, int n)
//{
//	int* arr_start,*p;
//	double sum = 0;
//	arr_start = array+1;
//	for (p = arr_start; p <= array + n - 1; p += 2)
//	{
//		sum += 1.0 / *p;
//	}
//	return sum;
//}
//int main()//76
//{
//	int n,i;
//	double sum;
//	printf("please input a number:\n");
//	scanf("%d", &n);
//	int arr[100] = { 0 };//有限个数
//	for (i = 1; i <= n;i++)
//	{
//		arr[i - 1] = i;
//	}
//	if (n % 2 == 1)
//	{
//		sum = odd(arr,n);
//	}
//	else if (n % 2 == 0)
//	{
//		sum = doub(arr,n);
//	}
//	else
//	{
//		printf("请输入一个奇数或偶数\n");
//	}
//	printf("%lf", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()//80
//{
//	int j, sum = 4;
//	for (j = 1; j <= 5; j++)//5只猴子
//	{
//		sum = (sum + 1) * 5+1;
//	}
//	printf("There is %d peaches\n", sum);
//	return 0;
//}

#include<stdio.h>
int main()//80
{
	int i, m, j, k, count;
	for (i = 4; i < 10000; i+=4)//从第五只分完后开始,此时桃子数%4==0;
	{
		count = 0;
		m = i;
		for (k = 0; k < 5; k++)
		{
			j = i / 4 * 5 + 1;
			i = j;
			if (j % 4 == 0)
				count++;
			else
				break;
		}
		i = m;
		if (count == 4)
		{
			printf("%d\n", j);
			break;
		}
	}
	return 0;
}