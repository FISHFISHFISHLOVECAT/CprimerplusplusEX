//
//  ex918.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    string str;
    deque<string> dq;
    while(cin>>str)
    {
        dq.push_back(str);
    }
    
//    for(auto &i:dq)
//    {
//        cout<<i<<" ";
//    }
    for(auto iter=dq.cbegin();iter!=dq.end();iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
    
    return 0;
}
