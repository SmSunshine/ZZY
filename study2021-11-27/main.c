#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()//83
//{
//	long sum = 4, s = 4;//���һλ�������������������
//	int j;
//	for (j = 2; j <= 8; j++)
//	{
//		printf("\n%ld", sum);
//		if (j <= 2)
//			s *= 7;//��λ��Ϊ0
//		else
//			s *= 8;
//		sum += s;
//	}
//	printf("\nsum=%ld", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()//88
//{
//	int i, a, n = 1;
//	while (n <= 7)//��ȡ7����Чֵ�����
//	{
//		do 
//		{
//			scanf("%d", &a);
//		} while (a < 1 || a>50);
//		for (i = 1; i <= a; i++)
//			printf("*");
//		printf("\n");
//		n++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()//88
//{
//	int a, i, aa[4], t;
//	scanf("%d", &a);//��1��2��3��4����4,3,2,1(�绰������)
//	aa[0] = a % 10;//��λ
//	aa[1] = a % 100 / 10;//ʮλ
//	aa[2] = a % 1000 / 100;//��λ
//	aa[3] = a / 1000;//ǧ
//	for(i=0;i<=3;i++)
//	{
//		aa[i] += 5;
//		aa[i] % 10;
//	}
//	for (i = 0; i <= 3/2; i++)
//	{
//		t = aa[i];
//		aa[i] = aa[3 - i];
//		aa[3 - i] = t;
//	}
//	for (i = 0; i <= 3; i++)
//		printf("%d", aa[i]);
//	return 0;
//}

#include<stdio.h>
int main()//96
{
	char str1[20], str2[20], * p1, * p2;
	int sum = 0;
	printf("pleaase input two strings\n");
	scanf("%s%s", str1, str2);
	p1 = str1; p2 = str2;
	while (*p1 != '\0')
	{
		if (*p1 == *p2)
		{
			while (*p1 == *p2 && *p2 != '\0')
			{
				p1++;
				p2++;
			}
		}
		else
			p1++;
		if (*p2 == '\0')
			sum++;
		p2 = str2;//�ڶ����ַ���Ϊ�Ӵ���Ҫ��ͷ��ʼ�Ա�
	}
	printf("%d", sum);
	return 0;
}