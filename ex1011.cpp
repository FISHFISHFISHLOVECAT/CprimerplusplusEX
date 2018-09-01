//
//  ex1011.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/1.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "my_Sales_data.h"
using namespace std;
bool compareIsbn(const my_Sales_data&lhs,const my_Sales_data&rhs);

int main(int argc,char * argv[])
{
    ifstream in(argv[1]);
    if(!in){
        cout<<"cannot open the file!"<<endl;
        exit(1);
    }
    
    vector<my_Sales_data> sds;
    my_Sales_data sd;
    while(read(in,sd))
        sds.push_back(sd);
    
    sort(sds.begin(),sds.end(),compareIsbn);
    
    for(const auto &s:sds)
    {
        print(cout, s);
        cout<<endl;
    }
    
    return 0;
}
bool compareIsbn(const my_Sales_data&lhs,const my_Sales_data&rhs)
{
    return lhs.isbn()<rhs.isbn();
}
