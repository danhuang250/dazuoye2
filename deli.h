#pragma once
#include"Goods.h"
class deli :virtual public Goods
{
protected:

	static int num;// 记录此类中的商品数量
	friend class GoodsManage_Employee;
	friend class GoodsManage_Administrator;
	friend class Supermarket;
	template<typename t>
	friend void sortnum(t*& a, int& size);
	template<typename t>
	friend void sortmoney(t*& a, int& size);
public:
	~deli()
	{

	}
	deli()
	{

	}
	deli(string i, string n, string t, int r, double p, double s, double m);
	deli(string i, string n, string t, int r, double p, double s);
};