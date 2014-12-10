//Test code here

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
}
#endif

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include "StringUtils.h"

extern char* Ken_i2a(unsigned i, char* a, unsigned r);
extern TStringVec Ken_SplitString(std::string& strSrc, const char chSep);

int main(void)
{
	// char a[100] = {0};
	// char *end = Ken_i2a(10, a, 3); //将10转换为3进制
	// *end = 0;
	// printf("Ken_i2a(10, a, 3) result: %s\n", a);
	//----------------------------------------------------------------------------------------------------//
	//TStringVec rst;
	//std::string testStr = ":h:llo:world::::";
	//rst = Ken_SplitString(testStr, ':');
	//for (TStringVec::iterator it = rst.begin(); it != rst.end(); it++)
	//	std::cout << *it << " ";
	//---------------------------------------------------------------------------------------------------//

	//std::string str = Ken_FormatInt2Thousands(-123456799);
	//std::cout << str << std::endl;

	char* str = "+123456";  //str = "-1234567", str = "+1234567"
	std::cout << Ken_String2Int(str);

	//std::string str = "-1234567";
	//std::cout << Ken_String2Int(str);
#ifdef _WIN32
	system("pause");
#endif
	return 0;
}
