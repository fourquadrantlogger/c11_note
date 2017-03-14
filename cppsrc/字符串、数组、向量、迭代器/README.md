# string

string:
标准库中的string，表示可变长的字符序列

## 子面值中的字符串，并不是标准库string的对象;

## cctype 函数列表
c++中应该是#include <cctype>

c中应该是#include <ctype.h>

以下为字符函数库中常用的函数：

函数名称	返回值
isalnum()	如果参数是字母数字，即字母或数字，该函数返回true
isalpha()	如果参数是字母，该函数返回真
isblank()	如果参数是空格或水平制表符，该函数返回true
iscntrl()	如果参数是控制字符，该函数返回true
isdigit()	如果参数是数字（0～9），该函数返回true
isgraph()	如果参数是除空格之外的打印字符，该函数返回true
islower()	如果参数是小写字母，该函数返回true
isprint()	如果参数是打印字符（包括空格），该函数返回true
ispunct()	如果参数是标点符号，该函数返回true
isspace()	如果参数是标准空白字符，如空格、进纸、换行符、回车、水平制表符或者垂直制表符，该函数返回true
isupper()	如果参数是大写字母，该函数返回true
isxdigit()	如果参数是十六进制的数字，即0～9、a~f、A~F，该函数返回true
tolower()	如果参数是大写字符，则返回其小写，否则返回该参数
toupper()	如果参数是小写字母，则返回其大写，否则返回该参数

## vector

vector 不是类，而是类模板

## 数组
数组，长度固定

+ 必须是一个常量表达式
+ 必须是一个常量表达式

## iter

for(){
    for里面，如该用了迭代器，不能添加元素
}
