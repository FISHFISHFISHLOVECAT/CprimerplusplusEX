//
//  ex915.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <list>

using namespace std;

bool is_equal(const list<int> &l1,const vector<int> &v2);
int main()
{
    list<int>l1{1,2,3};
    vector<int>v2{1,2,3,3};
    cout<<is_equal(l1,v2)<<endl;
    return 0;
}

bool is_equal(const list<int> &l1,const vector<int> &v2)
{
    vector<int>v1;
    v1.assign(l1.begin(),l1.end());
    if(v1!=v2)
        return false;
    else
        return true;
    
}
