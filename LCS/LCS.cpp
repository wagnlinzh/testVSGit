// LCS.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"

int LCS(char A[], int n, char B[], int m){
	if (m <= 0 || n<=0)
	{
		return 0;
	}
	if (A[n-1]==B[m-1])
	{
		return LCS(A, n - 1, B, m - 1)+1;
	}
	else
	{
		int a=LCS(A, n- 1, B, m);
		int b = LCS(A, n, B, m - 1);
		return a > b ? a : b;
	}
	
}

/*
LCS（“progra”, “algorith”） + 1 LCS（“progra”, “algorith”） + 1 

LCS（“progra”, “algorithm”）

LCS（“program”, “algorith”）

max{ LCS（“progra”, “algorithm”）, LCS（“program”, “algorith”） }
*/



