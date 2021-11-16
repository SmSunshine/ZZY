#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()//1
//{
//	int i, j, k;
//	for(i=1;i<5;i++)//三重循环
//		for(j=1;j<5;j++)
//			for (k = 1; k < 5; k++)
//			{
//				if (i != j && i!= k && j!=k)//确保i，j，k三位互不相同
//				printf("%d%d%d\n", i, j, k);
//			}
//	return 0;
//}

//#include<stdio.h>
//
//int main()//2
//{
//	long int i;
//	int bonus1, bonus2, bonus4, bonus6, bonus10,bonus;
//	scanf("%ld", &i);
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus1 + 100000 * 0.075;
//	bonus4 = bonus2 + 200000 * 0.05;
//	bonus6 = bonus4 + 200000 * 0.03;
//	bonus10 = bonus6 + 400000 * 0.15;
//	if (i <=100000)
//		bonus = i * 0.1;
//	else if (i <= 200000)
//		bonus = bonus1 + (i - 100000) * 0.075;
//	else if (i <= 400000)
//		bonus = bonus2 + (i - 200000) * 0.05;
//	else if (i <= 600000)
//		bonus = bonus4 + (i - 400000) * 0.03;
//	else if (i <= 1000000)
//		bonus = bonus6 + (i - 600000) * 0.015;
//	else
//		bonus=bonus10+ (i - 1000000) * 0.015;
//	printf("bonus=%d\n", bonus);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()//3
//{
//	long int i, x, y, z;
//	for (i = 1; i < 100000; i++)
//	{
//		x = sqrt(i + 100);
//		y = sqrt(i + 268);
//		if (x* x == (i + 100) && y * y == (i + 268))
//			printf("%ld\n", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()//4
//{
//	int day, month,year, sum, leap;
//	printf("please input year,month,day\n");
//	scanf("%d%d%d", &year, &month, &day);
//	switch (month)
//	{
//	case 1:sum = 0; break;
//	case 2:sum = 31; break;
//	case 3:sum = 59; break;
//	case 4:sum = 90; break;
//	case 5:sum = 120; break;
//	case 6:sum = 151; break;
//	case 7:sum = 181; break;
//	case 8:sum = 212; break;
//	case 9:sum = 243; break;
//	case 10:sum = 273; break;
//	case 11:sum = 304; break;
//	case 12:sum = 334; break;
//	default:printf("data error"); break;
//	}
//	sum = sum + day;
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 == 0))
//		leap = 1;
//	else
//		leap = 0;
//	if (leap == 1 && month > 3)
//		sum++;
//	printf("It is the %dth day.",sum);
//	return 0;
//}