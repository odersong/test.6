#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
//100以内3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//100以内3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//100以内3的倍数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//求最大公约数    辗转相除法
//int main()
//{
//	int m = 36;
//	int n = 16;
//	int r = 0;
//	scanf_s("%d%d", &m, & n);
//	while (m % n )//实际意思m%n==0则表示结果为0为假，跳出循环
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//1000年到2000年之间的闰年
//int main()
//{
//	//1.能被4整除并且不能被一百整除是闰年
//	//2.能被400整除是闰年
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//更简洁
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//打印100到200之间的素数
//只能被1和它本身整除的数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//1.试除法
//		//2->i-1
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//sqrt（）  开平方的数学库函数  开根号的意思
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d ", count);
	return 0;
}

//求1到100之间有多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//求1到100
//int main()
//{
//	int i = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double add = 0.0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1 += 1.0 / i;
//	}
//	printf("sum1=%lf\n", sum1);
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 += -1.0/ i;//   /是除法，除法只取商，不取余数
//	}
//	printf("sum2=%lf\n", sum2);
//	add = sum1 + sum2;
//	printf("add=%lf\n", add);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;//相当于-1*flag
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求十个数的最大值
//int main()
//{
//	int i = 0;
//	int arr[] = {1,4,15,14};
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//乘法口诀表
//int main()
//{
//	int i = 0;
//	int a = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (a=1;a<=i;a++)
//		{
//			printf("%d*%d=%2d ", a,i,a*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二分查找，编写代码在一个整型有序的数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求长度，元数个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right)/2;//mid是下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

#include<Windows.h>
#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 3600");
//	again:
//	printf("电脑将在一分钟之后关机，如果输入：我是猪，就取消关机\n");
//	scanf_s("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 3600");
//	while (1)
//	{
//		printf("宁德电脑将在一会关机，输入：我是猪 取消关机\n请输入：");
//		scanf_s("%s", input);
//		if (strcmp(input, "我是猪") == 0)//比较两个字符串strcmp（）头文件是#include<stdlid.h>
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

