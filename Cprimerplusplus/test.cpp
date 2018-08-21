//
//  test.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int>v1{1,2,3,4};
    vector<int>v2{2,3,5};
    vector<int>v3{3,5,7};
    vector<int>v4;
    
    cout<<v4.front();
 //   cout<<v4.at(0);
//    auto iter=v1.begin();
//    int tmp=0;
//    while(cin>>tmp)
//        iter=v1.insert(iter,tmp);
    
//    if(v2>v3)
//        cout<<"v2>v3"<<endl;
//    else if(v2<v3)
//        cout<<"v2<v3"<<endl;
//    else
//        cout<<"v2=v3"<<endl;
    
    for(auto i:v1)
    {
        cout<<i<<" "<<endl;
    }
   
    return 0;
}
