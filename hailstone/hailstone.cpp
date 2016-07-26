// hailstone.cpp : �������̨Ӧ�ó������ڵ㡣
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
//����δ�����㷨 �������û��֤������ |hailstone(n)|<����������������ϵ�һ��δ�������

int _tmain(int argc, _TCHAR* argv[])
{
	printf("\t%d\n", hailstone(27));
	return 0;
}

