//
//  person_info.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/12.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

struct Person{
    std::string return_name()const {return name;};
    std::string return_addr()const {return addr;};
    std::string name;//姓名
    std::string addr;//地址
};

int main()
{
    Person person1;
    
    cin>>person1.name>>person1.addr;
    cout<<"My name is:"<<person1.return_name()<<" I come from "<<person1.return_addr()<<endl;
    return 0;
}
