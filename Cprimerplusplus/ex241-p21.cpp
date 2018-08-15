//
//  ex241-p21.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/12.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
struct my_Sales_data;

class my_Sales_data{
friend istream &read(istream &is,my_Sales_data &item);
friend ostream &print(ostream &os,const my_Sales_data &item);
friend istream &read(istream &is,my_Sales_data &item);
    
public:    //构造函数
    my_Sales_data()=default;//默认构造函数,将使用类内初值初始化数据成员
    my_Sales_data(const string &s1,const string &s2):bookNo(s1),country(s2){};
    my_Sales_data(const string &s1,const string &s2,unsigned n,double p):bookNo(s1),country(s2)
                  ,units_sold(n),revenue(n*p){};
    my_Sales_data(istream &is){read(is,*this);};
    std::string isbn() const{return bookNo;};//这个函数的定义直接在大括号中
    my_Sales_data& combine(const my_Sales_data &rhs);
    my_Sales_data add(const my_Sales_data &lhs,const my_Sales_data &rhs);
    double avg_price()const;
    //成员数据
private:
    
    std::string country;
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};


double my_Sales_data::avg_price()const{
    if(units_sold)
        return revenue/units_sold;//总收入除以卖出总数
    else
        return 0;
}

istream &read(istream &is,my_Sales_data &item)
{
    int price;
    is>>item.country>>item.bookNo>>item.units_sold>>price;
    item.revenue=price*item.units_sold;
    return is;
}


ostream &print(ostream &os,const my_Sales_data &item)
{
    os<<item.country<<" "<<item.isbn()<<" "<<item.units_sold<< " "
    <<item.revenue<<" "<<item.avg_price();
    return os;
}

my_Sales_data add(const my_Sales_data &lhs,const my_Sales_data &rhs)
{
    my_Sales_data sum=lhs;
    sum.combine(rhs);
    return sum;
}

my_Sales_data& my_Sales_data::combine(const my_Sales_data &rhs)
{
    units_sold+=rhs.units_sold;
    revenue+=rhs.revenue;
    return *this;
}

int main()
{
    my_Sales_data total(cin);
    if (!total.isbn().empty())//如果不为空
    {
        while (cin)
        {
            my_Sales_data trans(cin);
            if(!cin)
                break;
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(cout,total);
                cout<<endl;
                total = trans;
            }
        }
        print(cout,total);
        cout<<endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
