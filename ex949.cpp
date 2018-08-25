//
//  ex949.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/25.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void find_longest_word(ifstream &in);

int main()
{
    ifstream in("/Users/junwuli/Desktop/somewords");
    if(!in)
    {
        cerr<<"不能打开文件！"<<endl;
        return -1;
    }
    
    find_longest_word(in);
    
    return 0;
}

void find_longest_word(ifstream &in)
{
    string s,longest_word;
    int max_length=0;
    
    while(in>>s)
        if(s.find_first_of("bdfghjklpqty")!=string::npos)
            continue;
    cout<<s<<" ";
    if(max_length<s.size())
    {
        max_length=s.size();
        longest_word=s;
    }
    
    cout<<endl<<"最长字符串："<<longest_word<<endl;
    
}
