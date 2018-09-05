//
//  ex113.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/5.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <map>
#include "publicHeader.h"

void trans(string &str);

int main()
{
    map<string,size_t> word_count;
    
    string word;
    while(cin>>word)
    {
        trans(word);
        ++word_count[word];
    }
    
    for(auto const &w:word_count )
    {
        cout<<w.first<<" occurs "<<w.second<<((w.second>1)?" times":" time")<<endl;
    }
    return 0;
}

void trans(string &str)
{
    if(str[0]>='A'&&str[0]<='B')
        str[0]-='A'-'a';
    if(str.back()==','||str.back()=='.')
        str.erase(--str.end());
}
