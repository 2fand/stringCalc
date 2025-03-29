#include "stringMod.h"
string stringMod::mod(string str, string stra) {//模计算
	this->last = sub(str, tim(stra, div(str, stra, false)));
	return this->last;
}
string stringMod::modAssign(string& str, string stra) {//模等计算
	this->last = subAssign(str, tim(stra, div(str, stra, false)));
	return this->last;
}
string stringMod::getLast() {//获取上次模运算之后的结果
	return this->last;
}
