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

struct Person;
Person & read(istream &,Person& someone);

struct Person{
    Person()=default;
    Person(istream &is){read(is,*this);};
    Person(string &s1,string &s2):name(s1),addr(s2){}
    
    std::string return_name()const {return name;};
    std::string return_addr()const {return addr;};
    std::string name="unknown";//姓名
    std::string addr="somewhere";//地址
};


Person& read(istream &,Person &someone)
{
    cin>>someone.name>>someone.addr;
    return someone;
};

int main()
{
    //Person person1(cin);
    //Person person1;
    string s1="Jack";
    string s2="Guanghzou";
    Person person1(s1,s2);
    cout<<"My name is:"<<person1.return_name()<<" I come from "<<person1.return_addr()<<endl;
    return 0;
}
