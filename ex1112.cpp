//
//  ex1112.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/5.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <utility>
#include "publicHeader.h"

int main()
{
    string filepath{"/Users/junwuli/Desktop/ex1112"};
    ifstream fin(filepath);
    
    vector<pair<string,int>> pair_vec;
    pair<string,int> p;
    while(fin>>p.first>>p.second)
        pair_vec.push_back(p);
    for(auto const &i:pair_vec)
        cout<<i.first<<" "<<i.second<<endl;
    
    return 0;
}
