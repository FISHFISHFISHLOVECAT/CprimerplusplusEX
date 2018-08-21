//
//  ex928.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <forward_list>
#include <string>
using namespace std;
bool find_and_insert(forward_list<string>&flt,string str1,string str2);
int main()
{
    forward_list<string> flt{"apple","cat","dog","money"};
    string str1("dfog");
    string str2("love");
    cout<<find_and_insert(flt,str1,str2);
    
    for(auto i:flt)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

bool find_and_insert(forward_list<string>&flt,string str1,string str2)
{
    auto pre=flt.before_begin(),cur=flt.begin();
    while(cur!=flt.end())
    {
        if(*cur==str1)
        {
            flt.insert_after(cur,str2);
            return true;
        }
     
        else
        {
            pre=cur;
            cur++;
        }
    }
    
    flt.insert_after(pre,str2);
    return false;
}
