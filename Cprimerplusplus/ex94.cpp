//
//  ex94.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/20.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
bool find_num(vector<int> &vec,int num);

int main()
{
    vector<int> vec{1,3,5,7,9,2,3,5,711};
    int num=5;
    cout<<find_num(vec, num)<<endl;

    return 0;
}

bool find_num(vector<int> &vec,int num)
{
    auto b=vec.begin(),e=vec.end();
    while(b!=e)
    {
        if(*b==num)
            return true;
        b++;
    }
    return false;
}
