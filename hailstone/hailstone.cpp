// hailstone.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int hailstone(int n){
	int length = 1;
	while (n>1)
	{
		(n % 2) ? n = 3 * n + 1 : n = n / 2;
		length++;
	}
	return length;
}
//程序未必是算法 这个问题没有证明存在 |hailstone(n)|<无穷。。，，，世界上的一个未解的问题

int _tmain(int argc, _TCHAR* argv[])
{
	printf("\t%d\n", hailstone(27));
	return 0;
}

