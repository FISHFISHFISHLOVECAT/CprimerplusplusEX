//
//  ex947.cpp
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

int main()
{
//    string str{"ab2c3d7R4E6"};
//    string num;
//    string numbers{"0123456789"};
//    string not_num;
//
//    string::size_type pos=0;
//
//    while((pos=str.find_first_of(numbers,pos))!=string::npos)
//    {
//        num.push_back(str[pos]);
//        pos++;
//    }
//    pos=0;
//    while((pos=str.find_first_not_of(numbers,pos))!=string::npos)
//    {
//        not_num.push_back(str[pos]);
//        pos++;
//    }
//
//
//    cout<<num<<endl;
//    cout<<not_num<<endl;
    string name("3a2aAnnaB4elle");
    string list("0123456789");
    auto pos=name.find_first_of(list,5);//查找匹配的字符串
    cout<<name[pos]<<endl;
    return 0;
}
