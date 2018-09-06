//
//  ex1034.cpp
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
    vector<int> ivec{1,2,3,4,5,6,7};
    
//    for(auto r_iter=ivec.crbegin();r_iter!=ivec.crend();++r_iter)
//        cout<<*r_iter<<endl;
    for(auto iter=ivec.end()-1;iter!=ivec.begin()-1;iter--)
        cout<<*iter<<endl;
    return 0;
}
