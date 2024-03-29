// CppTest04.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

//class CTest {
//public:
//	static int m_a;
//	int m_b;
//
//	CTest():m_b(0)
//	{
//		m_a++;
//		m_b = m_a;
//	}
//};

//int CTest::m_a = 0;

int main()
{
	/*CTest a, b;

	std::cout << a.m_a << " " << a.m_b << std::endl;
	std::cout << b.m_a << " " << b.m_b << std::endl;

	std::cout << CTest::m_a << std::endl;

	getchar();
    return 0;*/
	map<wstring, int> myMap;

	myMap.insert(pair<wstring, int>(L"Test", 100));
	myMap.insert(pair<wstring, int>(L"Abc", 200));

	myMap[L"def"] = 300;
	
	//맵 순회하기
	for (auto iter = myMap.begin(); iter != myMap.end(); ++iter)
		wcout << (*iter).first.c_str() << " = " << iter->second << endl;
	wcout << endl;

	//키 값으로 아이템 갖기
	auto iter = myMap.find(L"Test");
	if (iter != myMap.end())
		wcout << "Find : " << (*iter).first.c_str() << " " << iter->second << endl;
	wcout << endl;

	//아이템 삭제하기
	myMap.erase(L"Abc");

	for (auto iter = myMap.begin(); iter != myMap.end(); ++iter)
		wcout << iter->first.c_str() << " = " << iter->second << endl;
	wcout << endl;

}


