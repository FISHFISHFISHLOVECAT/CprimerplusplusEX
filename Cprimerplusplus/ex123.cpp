//
//  ex123.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/12.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include "Sales_item.h"
using namespace std;

// 一开始理解的是：我需要把所有数据都读进来，根据ISBN号码的差异分别创建不一样的对象，最后输出所有对象。输出对象必须记忆，才行，所以需要动态分配对象！
// 题目原本意思其实是只要我们打印出来就行了，打印时机设置在ISBN不一样的时候
int main()
{
    Sales_item cur_item,pre_item;
    
    cin>>cur_item;
    int cnt=1;
    
    pre_item=cur_item;
    
    while(cin>>cur_item)
    {
        if(cur_item.isbn()==pre_item.isbn())
            cnt++;
        else
        {
            cout<<pre_item.isbn()<<"ocurrs "<<cnt<<" times"<<endl;
            pre_item=cur_item;
            cnt=1;
        }
    }
    
}
