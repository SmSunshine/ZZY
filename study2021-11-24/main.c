#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//void move(int* array, int n, int m)
//{
//	int* p;
//	int tmp = m;
//	for (p = array + n - 1; p > array; p--)
//	{
//		int array_end;
//		array_end = *(array + n - 1);
//		for(p=array+n-1;p>array;p--)
//			*p = *(p - 1);
//		*array = array_end;
//		m--;
//		if (m > 0)move(array, n, m);
//	}
//}
//int main()//68
//{
//	int number[20], n, m, i;
//	printf("the total numbers is:");
//	scanf("%d", &n);
//	printf("back m:");
//	scanf("%d", &m);
//	for (i = 0; i < n; i++)
//		scanf("%d,", &number[i]);
//	move(number, n, m);
//	for (i = 0; i < n; i++)
//		printf("%d,", number[i]);
//	return 0;
//}

#include<stdio.h>
#define nmax 50
int main()//68
{
	int i, k, m, n; 
	int num[nmax] = { 0 };
	int* p;
	printf("please input the total of numbers:");
	scanf("%d", &n);
	p = num;
	for (i = 0; i < n; i++)
		*(p + i) = i + 1;
	i = 0; k = 0; m = 0;
	while (m < n - 1)
	{
		if (*(p + i) != 0)k++;//报数
		if (k == 3)//报到3的人置0，下一个人开始数
		{
			*(p + i) = 0;
			k = 0;
			m++;
		}
		i++;//号数
		if (i == n)i = 0;//报数到最后号时从头报数
	}
	while (*p == 0)p++;//最后只剩余一个不为0的数
	printf("%d is left\n", *p);
	return 0;
}