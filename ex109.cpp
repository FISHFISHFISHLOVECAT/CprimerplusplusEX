//
//  ex109.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/1.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void elimDups(istream & is)
{
    string word;
    vector<string> svec;
    while(is>>word)
    {
        svec.push_back(word);
    }
    cout<<"before sort:"<<endl;
    for(auto i:svec)
        cout<<i<<" ";
    cout<<endl;

    sort(svec.begin(),svec.end());
    cout<<"after sort:"<<endl;
    for(auto i:svec)
        cout<<i<<" ";
    cout<<endl;
    
    auto end_unique=unique(svec.begin(),svec.end());
    cout<<"after unique:"<<endl;
    for(auto i:svec)
        cout<<i<<" ";
    cout<<endl;
    
    svec.erase(end_unique,svec.end());
    cout<<"after erase:"<<endl;
    for(auto i:svec)
        cout<<i<<" ";
    cout<<endl;
}

using namespace std;
int main()
{
    elimDups(cin);
    return 0;
}
