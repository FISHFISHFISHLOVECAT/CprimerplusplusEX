//
//  ex920.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <deque>
#include <list>
using namespace std;

int main()
{
    list<int>l1{1,3,21,11,3,40,25,46,447,18};
    deque<int>odd;
    deque<int>even;
    
    for(auto iter=l1.begin();iter!=l1.end();iter++)
    {
        if(*iter%2)
            odd.push_back(*iter);
        else
            even.push_back(*iter);
    }
    cout<<"ood:";
    for(auto iter=odd.begin();iter!=odd.end();iter++)
        cout<<*iter<<" ";
    cout<<endl;
    
    cout<<"even:";
    for(auto iter=even.begin();iter!=even.end();iter++)
        cout<<*iter<<" ";
    cout<<endl;
    
    return 0;
}
