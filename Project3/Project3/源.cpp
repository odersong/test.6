#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
//100����3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//100����3�ı���
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
//100����3�ı���
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

//�����Լ��    շת�����
//int main()
//{
//	int m = 36;
//	int n = 16;
//	int r = 0;
//	scanf_s("%d%d", &m, & n);
//	while (m % n )//ʵ����˼m%n==0���ʾ���Ϊ0Ϊ�٣�����ѭ��
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//1000�굽2000��֮�������
//int main()
//{
//	//1.�ܱ�4�������Ҳ��ܱ�һ������������
//	//2.�ܱ�400����������
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
//�����
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


//��ӡ100��200֮�������
//ֻ�ܱ�1����������������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//1.�Գ���
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
//sqrt����  ��ƽ������ѧ�⺯��  �����ŵ���˼
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

//��1��100֮���ж��ٸ�9
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

//��1��100
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
//		sum2 += -1.0/ i;//   /�ǳ���������ֻȡ�̣���ȡ����
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
//		flag = -flag;//�൱��-1*flag
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//��ʮ���������ֵ
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

//�˷��ھ���
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


//���ֲ��ң���д������һ����������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�󳤶ȣ�Ԫ������
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right)/2;//mid���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//	printf("���Խ���һ����֮��ػ���������룺��������ȡ���ػ�\n");
//	scanf_s("%s", input);
//	if (strcmp(input, "������") == 0)
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
//		printf("���µ��Խ���һ��ػ������룺������ ȡ���ػ�\n�����룺");
//		scanf_s("%s", input);
//		if (strcmp(input, "������") == 0)//�Ƚ������ַ���strcmp����ͷ�ļ���#include<stdlid.h>
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

