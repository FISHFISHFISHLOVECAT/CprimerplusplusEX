//
//  ex1016.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/2.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include "publicHeader.h"

void biggies(vector<string> &word, vector<string>::size_type sz);
void elimDups(vector<string> words);


int main()
{
    string word;
    vector<string> words;
    while(cin>>word)
    {
        words.push_back(word);
    }
    
    biggies(words, 4);
    return 0;
}

void elimDups(vector<string> words)
{
    sort(words.begin(),words.end());
    auto end_unique=unique(words.begin(), words.end());
    words.erase(end_unique,words.end());
}
string make_plural(size_t ctr,const string &word,const string &ending)
{
    return (ctr>1)?word+ending:word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string &a,const string &b){return a.size()<b.size();});
    auto wc=find_if(words.begin(),words.end(),[sz](const string &a){return a.size()>=sz;});
    auto count=words.end()-wc;
    cout<<count<<" "<<make_plural(count,"word","s")
    <<" of length "<<sz<<" or longer "<<endl;
    for_each(wc,words.end(),[](const string &s){cout<<s<<" ";});
    cout<<endl;
}
