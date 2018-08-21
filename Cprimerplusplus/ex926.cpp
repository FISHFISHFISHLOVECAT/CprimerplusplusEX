//
//  ex926.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    vector<int> vec(ia,end(ia));
    list<int> lst(ia,end(ia));
    
    for(vector<int>::iterator it=vec.begin();it!=vec.end();)
    {
        if(!(*it&0x1))
            it=vec.erase(it);
        else
            it++;
    }
    
    for(list<int>::iterator it=lst.begin();it!=lst.end();)
    {
        if(*it&0x1)
            it=lst.erase(it);
        else
            it++;
    }

    
    cout<<"vector:";
    for(auto i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"list:"; 
    for(auto i:lst)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}
