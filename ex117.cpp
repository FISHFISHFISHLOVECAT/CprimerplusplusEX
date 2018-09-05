//
//  ex117.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/5.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <map>
#include "publicHeader.h"

void add_family(map<string,vector<string>> &families,const string &family);
void add_child(map<string,vector<string>> &families,const string &family,const string &child);
int main()
{
    map<string,vector<string>> f_names;
  
    add_family(f_names, "424");
    add_child(f_names, "424", "jiequn");
    
    return 0;
}

void add_family(map<string,vector<string>> &families,const string &family)
{
    vector<string> str;//定义一个空的容器用于给
    if(families.find(family)==families.end())
        families[family]=str;
}
void add_child(map<string,vector<string>> &families,const string &family,const string &child)
{
    families[family].push_back(child);
}

