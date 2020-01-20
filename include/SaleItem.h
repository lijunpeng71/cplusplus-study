#ifndef SALEITEM_H
#define SALEITEM_H

#include <iostream>
#include <string>
using namespace std;
class SaleItem
{
	friend istream& operator>>(istream&, SaleItem&);
	friend ostream& operator<<(ostream&, const SaleItem&);
	friend bool operator<(const SaleItem&, const SaleItem&);
	friend bool operator==(const SaleItem&, const SaleItem&);
public:
	SaleItem() = default;
	SaleItem(const string &book) :bookNo(book) {}
	SaleItem(istream &is) { is >> *this; }
public:
	SaleItem& operator+=(const SaleItem&);
	string isbn() const { return bookNo; }
	double avg_price()const;
private:
	string bookNo;
	unsigned unit_sold = 0;
	double revenue = 0.0;

};
inline bool compareIsbn(const SaleItem &lhs, const SaleItem &rhs)
{
	return lhs.isbn() == rhs.isbn();
}

SaleItem operator+(const SaleItem&, const SaleItem&);
inline bool operator==(const SaleItem &lhs, const SaleItem &rhs)
{
	return lhs.unit_sold == rhs.unit_sold &&
		lhs.revenue == rhs.revenue &&
		lhs.isbn() == rhs.isbn();
}
istream& operator>>(istream& in, SaleItem& saleItem)
{
	double price;
	in >> saleItem.bookNo >> saleItem.unit_sold >> price;
	if (in)
	{
		saleItem.revenue = saleItem.unit_sold*price;
	}
	else
	{
		saleItem = SaleItem();
	}
	return in;
}
ostream& operator<<(ostream& out, const SaleItem& saleItem)
{
	out << saleItem.isbn() << "\t" << saleItem.unit_sold << "\t" << saleItem.revenue << "\t" << saleItem.avg_price() << endl;
	return out;
}
double SaleItem::avg_price() const
{
	if (unit_sold)
	{
		return revenue / unit_sold;
	}
	else
	{
		return 0;
	}
}
#endif
