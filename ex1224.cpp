//
//  ex1224.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/10/1.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char * dynamic_str =  new char [1000];
    cin>>dynamic_str;
    
    cout<<dynamic_str<<endl;
    delete [] dynamic_str;
    
    return 0;
}

