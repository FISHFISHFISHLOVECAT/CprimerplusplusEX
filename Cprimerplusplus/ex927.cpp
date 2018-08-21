//
//  ex927.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

//
//  ex926.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flst{0,1,2,3,4,5,6,7,8,9};//单向链表
    auto prev=flst.before_begin();//单向链表第一个之前的不存在元素
    auto curr=flst.begin();//第一个元素
    while(curr!=flst.end())
    {
        if(*curr&0x1)//当前迭代器是否为奇数
            curr=flst.erase_after(prev);//通过输入前面迭代器来删除当前的元素,返回后一个的迭代器
        else
        {
            prev=curr;
            curr++;
        }
    }

    cout<<"forward_list:";
    for(auto i:flst)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}
