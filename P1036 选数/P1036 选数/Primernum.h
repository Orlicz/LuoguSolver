#pragma once
#include <vector>
#include <cmath>

using std::vector;

class Primernum
{
public:
	Primernum();
	~Primernum();
	Primernum(const Primernum&);
	long long mindivisor(long long);//��õ�һ��������С����������Ϊ1������һ����Ϊ1������1
	void generate(long long);//������������ָ������
private:
	Primernum& operator++();//������������һλ
	Primernum& operator++(int);//������������һλ
	vector<long long> all;
	bool express(long long);
}primernum;
