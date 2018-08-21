//
//  ex914.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/20.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<const char *> l{"apple","banana","cat"};
    list<const char *>::iterator b=l.begin();
    auto e=l.end();
    vector<string> vec;
    vec.assign(b,e);
    cout<<vec.max_size();
    
    for(const auto &i:vec)
    {
        cout<<i<<" "<<endl;
    }
    return 0;
}
