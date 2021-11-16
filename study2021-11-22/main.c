#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#define N 10
//int main()//37
//{
//	int i, j, min, tem, a[N];
//	printf("please input ten num:\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("a[%d]=", i);
//		scanf("%d", &a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < N; i++)
//		printf("%5d", a[i]);
//	printf("\n");
//	for (i = 0; i < N-1; i++)
//	{
//		min = i;
//		for (j = i + 1; j < N; j++)
//		{
//			if (a[min] > a[j])
//				min = j;
//		}
//		tem = a[i];
//		a[i] = a[min];
//		a[min] = tem;
//	}
//	printf("After sorted \n");
//	for (i = 0; i < N; i++)
//		printf("%5d", a[i]);
//	return 0;
//}

//#include<stdio.h>
//int main()//38
//{
//	float a[3][3], sum = 0;
//	int i, j;
//	printf("please input rectangle element:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			scanf("%f", &a[i][j]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		sum = sum + a[i][i];
//	}
//	printf("duijiaoxian he is %6.2f",sum);//包括小数点6位，保留两位小数，右对齐
//	return 0;
//}

//#include<stdio.h>
//int main()//39
//{
//	int a[11] = { 1,4,6,9,13,16,19,28,40,100 };
//	int temp1, temp2, number, end, i, j;
//	printf("original array is:\n");
//	for (i = 0; i < 10; i++)
//		printf("%5d", a[i]);
//	printf("\n");
//	printf("insert a new number:");
//	scanf("%d", &number);
//	end = a[9];
//	if (number > end)
//		a[10] = number;
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (a[i] > number)
//			{
//				temp1 = a[i];
//				a[i] = number;
//				for (j = i + 1; j < 11; j++)
//				{
//					temp2 = a[j];
//					a[j] = temp1;
//					temp1 = temp2;
//				}
//				break;
//			}
//		}
//	}
//	for (i = 0; i < 11; i++)
//		printf("%6d", a[i]);
//	return 0;
//}

