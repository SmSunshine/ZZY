#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#define N 5
//int main()//40
//{
//	int a[N] = { 9,6,5,4,1 }, i,temp;
//	printf("original array:\n");
//	for (i = 0; i < N; i++)
//		printf("%4d", a[i]);
//	for (i = 0; i < N / 2; i++)
//	{
//		temp = a[i];
//		a[i] = a[N - i - 1];
//		a[N - i - 1] = temp;
//	}
//	printf("\nsorted array:\n");
//	for (i = 0; i < N; i++)
//		printf("%4d", a[i]);
//	return 0;
//}

//#include<stdio.h>
//int main()//61
//{
//	int i, j,r;
//	int a[10][10];
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j < i; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (r = 10 - i; r >= 1; r--)
//			printf("  ");
//		for (j = 0; j <= i; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//void swap(int* i, int* j)
//{
//	int p;
//	p = *i;
//	*i = *j;
//	*j = p;
//}
//int main()//66
//{
//	int n1, n2, n3;
//	int* point1, * point2, * point3;
//	printf("please input three number:n1,n2,n3:");
//	scanf("%d%d%d", &n1, &n2, &n3);
//	point1 = &n1;
//	point2 = &n2;
//	point3 = &n3;
//	if (n1 > n2)
//		swap(point1, point2);
//	if (n1 > n3)
//		swap(point1, point3);
//	if(n2>n3)
//		swap(point2, point3);
//	printf("the sorted numbers are:%d,%d,%d\n", n1, n2, n3);
//	return 0;
//}

#include<stdio.h>
void input(int *p)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", p++);
	}
}
void max_min(int *array)
{
	int* max, * min;
	int k, l,tmp;
	int* p, * arr_end;
	arr_end = array + 9;
	max = min = array;
	for (p = array+1; p <=arr_end; p++)
	{
		if (*p > *max)max = p;
		else if(*p < *min)min = p;
		k = *max;
		l = *min;
	}
	if (*array != l)//¹Ø¼ü
	{
		tmp = *array; *array = k; *max = tmp;
		tmp = *(array + 9); *(array + 9) = l; *min = tmp;
	}
	else
	{
		tmp = *array; *array = k; *max = tmp;
		tmp = *(array + 9); *(array + 9) = l; *max = tmp;
	}
		
}
void output(int* array)
{
	int* p;
	for (p = array; p <= array +9; p++)
		printf("%d ", *p);
}
int main()//67
{
	int number[10] = {0};
	input(number);
	max_min(number);
	output(number);
	return 0;
}