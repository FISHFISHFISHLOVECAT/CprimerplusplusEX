//
//  ex1131.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/10.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <map>
#include "publicHeader.h"

int main()
{
    multimap<string,string> authors{
            {"alan","DMA"},
            {"pezy","Leetcode"},
            {"alan","CLRS"},
            {"wang","FTP"},
            {"pezy","CP5"},
            {"wang","CPP-Concurrency"}
        };
    string author="pezy";
    string work="CP5";
    
    auto found=authors.find(author);
    auto count=authors.count(author);
    while(count){
        if(found->second==work){
        authors.erase(found);
        break;
        }
        ++found;
        --count;
    }
    
    for(const auto &author:authors)
        cout<<author.first<<" "<<author.second<<endl;
    
    return 0;
}
