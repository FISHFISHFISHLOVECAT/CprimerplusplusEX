//
//  ex120.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/12.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item item;
    
    while(cin>>item)//直接用cin读入到对象，估计里面有运算支持吧！
        cout<<item<<endl;
   
    return 0;
}
