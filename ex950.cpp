//
//  ex950.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/28.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> vec{"3.14","5.56","7.62","1.414"};
    double sum=0;
    for(auto i:vec)
        sum+=stod(i);
    cout<<sum<<endl;
    return 0;
}
