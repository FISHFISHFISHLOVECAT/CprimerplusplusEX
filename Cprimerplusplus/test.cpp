//
//  test.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <list>
using namespace std;


int main()
{
    list<string> str{"apple","cat","catcat","apple","apple"};
    string tar{"apple"};
    int times=0;
    times=count(str.cbegin(),str.cend(),tar);
    
    cout<<tar<<"occurs "<<times<<"times"<<endl;
    
    return 0;
}

