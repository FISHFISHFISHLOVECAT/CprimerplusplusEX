//
//  sort_test.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/1.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void elimDups(vector<string>&words);
bool isShorter(const string &s1,const string &s2);
int main()
{
    vector<string> words{"apple","fox","red","turtle","quick","jumps","slow","over","the","apple","red","fox","fox"};
    elimDups(words);
    
    for(auto i:words)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}

void elimDups(vector<string>&words)
{
    sort(words.begin(),words.end());
    auto end_unique=unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
    stable_sort(words.begin(),words.end(),isShorter);
}
bool isShorter(const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}
