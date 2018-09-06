//
//  ex1116.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/5.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include "publicHeader.h"
#include <utility>
#include <list>
#include <map>

void print_iter(list<int> list);

int main()
{
    list<int> lst={1,2,3,4};//为了用到三个插入迭代器选的list
    list<int> lst1,lst2,lst3;//分别保留三个版本的插入迭代器结果
    front_inserter(lst1)=55;
    auto t=front_inserter(lst1)++;
    t=66;
    //copy(lst.cbegin(),lst.cend(),front_inserter(lst1));
    copy(lst.cbegin(),lst.cend(),back_inserter(lst2));
    copy(lst.cbegin(),lst.cend(),inserter(lst3,lst3.begin()));
    cout<<"lst1:";
    print_iter(lst1);
    cout<<"lst2:";
    print_iter(lst2);
    cout<<"lst3:";
    print_iter(lst3);
    
    return 0;
}

void print_iter(list<int> list)
{
    for(auto i:list)
        cout<<i<<" ";
    cout<<endl;
}
