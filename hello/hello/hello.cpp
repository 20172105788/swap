// hello.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"
#include "iostream"
using namespace std;

void MyPrintf(char * p)
{
	cout << p << endl;
	*p = 'H';
}
int main()
{
	char s[100] = "hello!";
	MyPrintf(s);
	cout << s << endl;
    return 0;
}

