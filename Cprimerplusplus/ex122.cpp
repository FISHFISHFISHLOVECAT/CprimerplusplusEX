//
//  ex122.cpp
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
    Sales_item total;//用来存放记录和
    if(cin>>total)
    {
        Sales_item trans;//存放每个记录
        
        while(cin>>trans)//没有对isbn号进行判断，因为已经是保证相同
        {
            if(trans.isbn()!=total.isbn())
                break;
            total+=trans;
        }
        
        cout<<total<<endl;
    }
    
    return 0;
}
