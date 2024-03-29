// CppTest.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <vector>
using namespace std;

int main()
{
	int a[10];
	vector<int> ar;

	ar.push_back(10);
	ar.push_back(20);
	ar.push_back(30);
	//a[0] = 0;

	for (auto a : ar)
		printf("%d ", a);

	printf("\n");
	ar.pop_back();

	for (auto a : ar)
		printf("%d ", a); 

	ar.push_back(40);
	ar.push_back(50);
	printf("\n");

	//vector<int>::reverse_iterator iter;
	for (auto iter = ar.rbegin(); iter != ar.rend(); iter++)
		printf("%d ", *iter);
    return 0;
}

