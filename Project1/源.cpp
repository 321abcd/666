//#include<stdio.h>
//int main()
//{
//	printf("hello,word\n");
//
//	return 0;
//}
//
//#include<stdio.h>
//void main()
//{
//	printf("666\n");
//}
//int main()
//{
//	int a, b, c;
//	a = 10;
//	b = 2;
//	c = a*b;
//	printf("c= %d\n ",c);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float max(float x, float y)
{
	float z;
	if (x > y)
	z=x;
	else
		z=y;
	return (z);
}
float main()
{
	float a, b, c;
	float max(float x, float y);
	scanf("%f,%f", &a &b);
	c=max(a, b);
	printf("max=%f,\n",c);
}
