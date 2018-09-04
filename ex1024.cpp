//
//  ex1024.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/4.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include "publicHeader.h"
#include <iterator>
#include <functional>
using namespace placeholders;
bool check_size(const string &s,string::size_type sz);
int main()
{
    vector<int> ivec{1,2,3,4,5,6,7};
    string str{"applje"};
    cout<<*find_if(ivec.begin(),ivec.end(),bind(check_size,str,_1))<<endl;
}
bool check_size(const string &s,string::size_type sz)
{
    return s.size()<=sz;
}
