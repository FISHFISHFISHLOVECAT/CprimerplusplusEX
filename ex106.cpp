//
//  ex106.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/1.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> ivec(10,6);
    
    for(auto i:ivec)
        cout<<i<<" ";
    cout<<endl;
    fill_n(ivec.begin(),ivec.size(),0);
    for(auto i:ivec)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
