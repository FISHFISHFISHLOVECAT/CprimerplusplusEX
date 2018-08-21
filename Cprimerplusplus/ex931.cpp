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
    list<int> vi{0,1,2,3,4,5,6,7,8,9};
    auto iter=vi.begin();
    while(iter!=vi.end())
    {
        if(*iter&0x1)
        {
            iter=vi.insert(iter,*iter);//复制当前元素
            iter++;
            iter++;
        }
        else
            iter=vi.erase(iter);
    }
    
    for(auto i:vi)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
