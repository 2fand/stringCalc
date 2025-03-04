#include "stringPlus.h"
string stringPlus::getLast() {//获取上次计算得到的结果
	return this->last;
}
string stringPlus::calc(string str, string stra) {//计算
	this->last.clear();
	bool isAddOne = false;
	bool itIsZero = str.size();
	bool itaIsZero = stra.size();
	auto it = str.crbegin();
	auto ita = stra.crbegin();
	int digitNum = 0;
	while (!itaIsZero || !itIsZero) {
		digitNum = (itIsZero ? 0 : *it++) + (itaIsZero ? 0 : *ita++) + isAddOne;
		isAddOne = digitNum / 10;
		digitNum %= 10;
		this->last.insert(this->last.begin(), '0' + digitNum);
		if (str.crend() == it) {
			itIsZero = true;
		}
		if (stra.crend() == ita) {
			itaIsZero = true;
		}
	}
	return this->last;
}
