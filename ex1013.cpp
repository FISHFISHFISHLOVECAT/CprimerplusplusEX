//
//  ex1013.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/2.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool over_three(const string&str);
int main()
{
    string word;
    vector<string> words;
    
    while(cin>>word)
        words.push_back(word);
    auto iter=partition(words.begin(),words.end(),over_three);
    for(auto b=words.begin();b!=iter;b++)
    {
        cout<<*b<<endl;
    }
    return 0;
}
bool over_three(const string&str)
{
    return str.size()>=3;
}

