#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()//20
//{
//	float sn = 100, hn = sn / 2;
//	int n = 2;
//	for (n = 2; n <= 10; n++)
//	{
//		sn = sn + 2 * hn;
//		hn = hn / 2;
//	}
//	printf("the total of road is %f\n", sn);
//	printf("the tench is %f\n", hn);
//	return 0;
//}

//#include<stdio.h>
//int main()//21
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;//��һ����������ǵڶ����1��Ķ���
//		x2 = x1;
//		day--;
//	}
//	printf("the total is %d\n", x1);
//	return 0;
//}

//#include<stdio.h>
//int main()//22
//{
//	int i, j, k;//i��a�Ķ��֣�j��b�Ķ��֣�k��c�Ķ���
//	for (i = 'x'; i <= 'z'; i++)
//	{
//		for (j = 'x'; j <= 'z'; j++)
//		{
//			if (i != j)
//			{
//				for (k = 'x'; k <= 'z'; k++)
//				{
//					if (k != i && k != j)
//						if(i != 'x' && k != 'x' && k != 'z')
//						printf("a�Ķ�����%c,b�Ķ�����%c��c�Ķ�����%c\n", i, j, k);
//				}
//			}
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()//23
{
	int i, j, k;//i��a�Ķ��֣�j��b�Ķ��֣�k��c�Ķ���
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 2 - i; j++)
			printf(" ");
		for (k = 0; k <= 2 * i; k++)
			printf("*");
		printf("\n");

	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= i; j++)
			printf(" ");
		for (k = 0; k <= 4 - 2 * i; k++) 
			printf("*");
		printf("\n");

	}
	return 0;
}