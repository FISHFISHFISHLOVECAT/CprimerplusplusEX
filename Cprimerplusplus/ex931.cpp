//
//  ex931.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flt{0,1,2,3,4,5,6,7,8,9};
    auto pre_flt=flt.before_begin(),cur_flt=flt.begin();
    while(cur_flt!=flt.end())
    {
        if(*cur_flt&0x1)
        {
            cur_flt=flt.insert_after(cur_flt,*cur_flt);//复制当前元素
            pre_flt=cur_flt;
            cur_flt++;
        }
        else
        {
            cur_flt=flt.erase_after(pre_flt);
        }
    }
    
    for(auto i:flt)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
