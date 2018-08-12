//
//  ex241-p20.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/12.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

struct my_Sales_data{
    std::string country;
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};

int main()
{
    my_Sales_data item;
    
    cin>>item.country>>item.bookNo>>item.units_sold>>item.revenue;//本来想着直接cin>>item里面，但是不行，应该有没有定义这种操作吧！
    
    cout<<item.country<<item.bookNo<<item.units_sold<<item.revenue<<endl;
    
    return 0;
}
