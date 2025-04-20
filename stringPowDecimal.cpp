#define _CRT_SECURE_NO_WARNINGS true
#include "stringPowDecimal.h"
string stringPowDecimal::getLast() {//获取上次指数为小数的次方计算之后的结果
	return this->last;
}
string stringPowDecimal::powDecimal(string str, string stra) {//指数为小数的次方计算
	char s[10000] = "";
	sprintf(s, "%lf", pow(strtod(str.c_str(), nullptr), strtod(stra.c_str(), nullptr)));
	regex r("\\.?0+$");
	return regex_replace(string(s), r, "");
}
string stringPowDecimal::powDecimalAssign(string& str, string stra) {//指数为小数的次等计算
	return this->last = str = powDecimal(str, stra);
}
