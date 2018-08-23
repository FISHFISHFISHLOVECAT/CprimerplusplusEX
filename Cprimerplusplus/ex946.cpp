//
//  ex946.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/23.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void GetPreAndPost(string &str,const string & pre,const string & post);

int main()
{
    string name{"Bruce"};
    GetPreAndPost(name,"Mr.","III");
    cout<<name<<endl;
    
    return 0;
}

void GetPreAndPost(string &str,const string & pre,const string & post)
{
    str.insert(0,pre);
    str.insert(str.size(), post);
}
