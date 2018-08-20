//
//  ex911.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/20.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1{1,2,3,4};
    vector<int> vec2=vec1;
    vector<int> vec3={1,2,4,6,7,8};
    
    for(auto &i:vec3)
    {
        cout<<i<<" "<<endl;
    }
    
    return 0;
}
