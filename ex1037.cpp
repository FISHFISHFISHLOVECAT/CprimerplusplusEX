//
//  ex1037.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/7.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iterator>
#include <fstream>
#include <list>
#include <algorithm>
#include "publicHeader.h"

int main()
{
//    ifstream fin("/Users/junwuli/Desktop/num");
//    vector<int> ivec;
//    list<int> result;
//    int temp;
//    while(fin>>temp)
//        ivec.push_back(temp);
//    for(auto i:ivec)
//    {
//        cout<<i<<endl;
//    }
//
//
//    auto start=ivec.crbegin()+2;
//    auto end=ivec.crend()-2;
//    copy(start,end,back_inserter(result));
//
//    for(auto i:result)
//    {
//        cout<<i<<" ";
//    }
//    cout<<endl;
    vector<int> ivec{1,2,3,4,5,6,7};
    vector<int> rivec_seq;
    cout<<*ivec.crbegin()<<endl;
    cout<<*(ivec.crend()-1)<<endl;
    copy(ivec.crbegin()+2,ivec.crend()-2,back_inserter(rivec_seq));
    for(auto i:rivec_seq)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
