#include "stringPlus.h"
string stringPlus::getLast() {//获取上次计算得到的结果
	return this->last;
}
string stringPlus::calc(string str, string stra) {//计算
	this->last.clear();
	int addNum = 0;
	int ix = 0;
	int iy = 0;
	bool itIsZero = !str.size();
	bool itaIsZero = !stra.size();
	bool strIsNegative = (str.size() ? '-' == str.front() : false);
	bool straIsNegative = (stra.size() ? '-' == stra.front() : false);
	bool tenSub = 1 == strIsNegative + straIsNegative;
	bool isNegative = '-' == (abs(atoi(str.c_str())) > abs(atoi(stra.c_str())) ? str.front() : stra.front());
	int id = 0;
	int toDel = 0;
	string tempstr;
	if (abs(atoi(stra.c_str())) > abs(atoi(str.c_str()))) {
		str.swap(stra);
	}
	auto it = str.crbegin();
	auto ita = stra.crbegin();
	int digitNum = 0;
	while (!itaIsZero || !itIsZero || addNum) {
		if (str.crend() == it || '0' > *it || '9' < *it) {
			itIsZero = true;
		}
		if (stra.crend() == ita || '0' > *ita || '9' < *ita) {
			itaIsZero = true;
		}
		ix = (1 - 2 * strIsNegative) * (itIsZero ? 0 : *it++ - '0');
		iy = (1 - 2 * straIsNegative) * (itaIsZero ? 0 : *ita++ - '0');
		digitNum = ix + iy;
		digitNum += !(0 > addNum && 2 == itIsZero + itaIsZero) * (1 - 2 * (digitNum < 0)) * addNum;
		addNum = tenSub && abs(ix) < abs(iy) ? -1 : digitNum / 10;
		digitNum = abs(digitNum % 10);
		if (!itIsZero || !itaIsZero || addNum) {
			this->last.insert(this->last.begin(), '0' + digitNum);
		}
	}
	if (this->last.empty()) {
		this->last.push_back('0');
	}
	else if (isNegative) {
		this->last.insert(this->last.begin(), '-');
	}
	while ('-' == this->last[id] && id < this->last.size()) {
		id++;
	}
	while (id < this->last.size() && '0' == this->last[id]) {
		toDel = 0;
		while (toDel < this->last.size()) {
			if (toDel == id && ++toDel) {
				continue;
			}
			tempstr.push_back(this->last[toDel++]);
		}
		this->last = tempstr;
	}
	return this->last;
}
