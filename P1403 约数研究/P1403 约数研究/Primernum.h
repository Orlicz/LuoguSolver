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
	long long mindivisor(long long);//��õ�һ�βε���С��������Ϊ1������һ�β�Ϊ1������1
	long countdiv(long long);//��Ŀǰ�Ĳ������£���õ�һ�βε���������
	void generate(long long);//������������ָ������
private:
	Primernum& operator++();//������������һλ
	Primernum& operator++(int);//������������һλ
	vector<long long> all;
	bool express(long long);//��Ŀǰ���������£����ĳ���ǲ��Ǻ���
}primernum;

