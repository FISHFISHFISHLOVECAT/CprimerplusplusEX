//
//  ex1036.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/6.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iterator>
#include <algorithm>
#include "publicHeader.h"

int main()
{
    vector<string> str{"apple"};
    vector<int> ivec{1,0,2,3,4,5,0,6,7};
    auto result=find(ivec.crbegin(),ivec.crend(),0),ivec.cbegin());
    cout<<*result;
 
    return 0;
}
