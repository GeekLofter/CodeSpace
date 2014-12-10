#ifndef STRINGUTILS_HPP
#define STRINGUTILS_HPP


#include <string>
#include <vector>

//将i转换成r进制，并以字符串的形式存储在a中
// example 见 MainTest.cpp
//@i :输入数字（要转换的数字）
//@a :结果
//@r :要转的进制
extern char* Ken_i2a(unsigned i, char* a, unsigned r);

typedef std::vector<std::string> TStringVec;
extern TStringVec Ken_SplitString(std::string& strSrc, const char chSep);

//convert ansi string to wide string
extern std::wstring A2W(std::string& astr_);
//convert wide string to ansi string
extern std::string W2A(std::wstring wstr_);

//将int转换为string
extern std::string Ken_Int2String(const int num);

//将整形数字转化成千分位表示形式
//需要更大的数字，可以用long long表示
extern std::string Ken_FormatInt2Thousands(const int num);

//将字符串转换成int ，不考虑非法字符，不考虑int溢出
//下面几个相同，函数重载
extern int Ken_String2Int(char* str);

extern int Ken_String2Int(const char* str);

extern int Ken_String2Int(std::string& str);

#endif /* end of include guard: STRINGUTILS_HPP */

