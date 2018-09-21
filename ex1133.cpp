//
//  ex1133.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/10.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

const string& transform(const string &s,const map<string,string> &m);
void word_transform(ifstream &map_file,ifstream &input);
map<string,string> buildMap(ifstream &map_file);


int main()
{
    ifstream rules{"/Users/junwuli/Desktop/rules"};
    ifstream input{"/Users/junwuli/Desktop/input"};
    word_transform(rules,input);
    
    return 0;
}


const string& transform(const string &s,const map<string,string> &m)
{
    auto map_it=m.find(s);
    if(map_it!=m.cend())
        return map_it->second;
    else
        return s;
}

void word_transform(ifstream &map_file,ifstream &input)
{
    auto trans_map=buildMap(map_file);
    string text;
    while(getline(input, text))
    {
        istringstream stream(text);
        string word;
        bool firstword=true;
        while(stream>>word)
        {
            if(firstword)
                firstword=false;
            else
                cout<<" ";
            cout<<transform(word, trans_map);
        }
        cout<<endl;
    }
}

map<string,string> buildMap(ifstream &map_file)
{
    map<string,string> trans_map;
    string key;
    string value;
    while(map_file>>key && getline(map_file,value))
    {
        if(value.size()>1)
            trans_map[key]=value.substr(1);//跳过前导空格
        else
            throw runtime_error("no rule for"+key);
    }
    return trans_map;
}
