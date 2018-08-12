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



struct my_Sales_data{
    
    std::string isbn() const{return bookNo;};//这个函数的定义直接在大括号中
    my_Sales_data & combine(const my_Sales_data &rhs);
    double avg_price() const;
    
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
    double price=0;
    is>>item.country>>item.bookNo>>item.units_sold>>item.revenue;
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
    my_Sales_data total;
    if (read(cin,total))
    {
        my_Sales_data trans;
        while (read(cin,trans))
        {
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
