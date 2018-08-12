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

my_Sales_data& my_Sales_data::combine(const my_Sales_data &rhs)
{
    units_sold+=rhs.units_sold;
    revenue+=rhs.revenue;
    
    return *this;
}

int main()
{
    my_Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        my_Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
