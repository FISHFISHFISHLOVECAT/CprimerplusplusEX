//
//  ex118.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/5.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include "publicHeader.h"

int main()
{
    vector<string> unique_word;
    string word;
    while(cin>>word)
    {
        if(find(unique_word.begin(),unique_word.end(),word)==unique_word.end())
            unique_word.push_back(word);
    }
    
    for(auto i:unique_word)
        cout<<i<<" ";
    cout<<endl;
    
    
    
    return 0;
}
