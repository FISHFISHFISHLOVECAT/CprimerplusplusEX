//
//  ex1016.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/2.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <numeric>
#include <list>
#include "publicHeader.h"
using namespace placeholders;

void biggies(vector<string> &word, vector<string>::size_type sz);
void elimDups(vector<string> words);

bool fc(string &s)
{
    return s.size()==5;
}
int main()
{
    string word;
    vector<string> words;
    while(cin>>word)
    {
        words.push_back(word);
    }

    biggies(words, 4);
//    vector<string> vec{"the","quick","red","jumps","over","the","slow","red","turtle"};
//
//    cout<<*find_if(vec.begin(),vec.end(),fc)<<endl;

    return 0;
}

bool check_size(const string &s,string::size_type sz)
{
    return s.size()<=sz;
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
    //auto wc=find_if(words.begin(),words.end(),[sz](const string &a){return a.size()>=sz;});
    //auto wc=stable_partition(words.begin(),words.end(),[sz](const string &s){return s.size()<=sz;});
    auto wc=stable_partition(words.begin(),words.end(),bind(check_size,_1,sz));
    auto count=words.end()-wc;
    cout<<count<<" "<<make_plural(count,"word","s")
    <<" of length "<<sz<<" or longer "<<endl;
    for_each(wc,words.end(),[](const string &s){cout<<s<<" ";});
    cout<<endl;
}
