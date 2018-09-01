//
//  delete_number.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/1.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst;
    int n;
    cin>>n;
    if(n>999)
        n=999;
    int i;
    for(i=0;i<n;i++)
    {
        lst.push_back(i);
    }
//    for(auto i:lst)
//        cout<<i<<" ";
//    cout<<endl;
    int dis=0;
    auto iter=lst.begin();
    while(!lst.empty())
    {
        //auto iter=lst.begin();
        if(dis==1)
        {
            iter++;
        }
        if(dis==2)
        {
            iter++;
            iter++;
        }
        
        for(iter;iter!=lst.end();iter++)
        {
            iter++;
            iter++;
            cout<<"erase"<<" "<<*iter<<endl;
            lst.erase(iter);
            dis=distance(iter, lst.end())-1;
        }
        cout<<"dis="<<dis<<endl;

    }
    cout<<"result"<<*iter;
    
    
    
    return 0;
}
