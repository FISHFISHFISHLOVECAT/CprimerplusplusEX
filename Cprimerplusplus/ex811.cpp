//
//  ex811.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/20.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};//PersonInfo类

int main()
{
    string line,word;
    vector<PersonInfo> people;
    istringstream record;
    while(getline(cin,line))
    {
        PersonInfo info;
        record.str(line);
        record>>info.name;
        while(record>>word)
            info.phones.push_back(word);
        record.clear();
        people.push_back(info);
    }
    
    for (auto &p : people)
    {
        std::cout << p.name << " ";
        for (auto &s : p.phones)
            std::cout << s << " ";
        std::cout << std::endl;
    }
    return 0;
}
