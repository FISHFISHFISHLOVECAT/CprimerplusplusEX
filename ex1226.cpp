//
//  ex1226.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/10/1.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main()
{
    allocator<string> alloc;//定义一个allocator类
    auto const p = alloc.allocate(100);//指针指向这个区域
    string s;
    string * q = p;
    while(cin>>s&&q!=p+100)
        alloc.construct(q++, s);//构造
    const size_t size = q-p;
    for(size_t i=0;i!=size;i++)
        cout<<p[i]<<" ";
    cout<<endl;
    
    while(p!=q)
        alloc.destroy(--q);
    alloc.deallocate(p, 100);
    
        
    return 0;
}

