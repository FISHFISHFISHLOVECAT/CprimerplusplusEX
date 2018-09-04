//
//  ex1027.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/4.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <list>
#include "publicHeader.h"

int main()
{
    list<int> ivec{1,1,2,3,4,4,5,6,7,8};
    list<int> result_ivec{8,0,3};
    unique_copy(ivec.begin(), ivec.end(), inserter(result_ivec,result_ivec.begin()++));
    for(auto i:result_ivec)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
