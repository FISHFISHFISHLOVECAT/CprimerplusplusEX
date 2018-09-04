//
//  ex1020.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/4.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include "publicHeader.h"

int main()
{
    string word;
    vector<string> story;
    while(cin>>word)
    {
        story.push_back(word);
    }
    string key_word{"her"};
    for(auto i:story)
        cout<<i<<" ";
    cout<<endl;
    cout<<count_if(story.begin(),story.end(),[=](string &str){return str==word;});
    return 0;
}
