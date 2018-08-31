//
//  ex103.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/31.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <list>
using namespace std;


int main()
{
    vector<int> vint{1,2,3,4,5};
    cout<<accumulate(vint.begin(),vint.end(),0)<<endl;
    
    return 0;
}
