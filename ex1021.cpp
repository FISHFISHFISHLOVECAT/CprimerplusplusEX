//
//  ex1021.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/4.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iterator>
#include "publicHeader.h"
using namespace placeholders;

void f(int a,int b,int c,int d,int e);
int main()
{
    f(1,2,3,4,5);
    auto ff=bind(f,1,_2,_1,3,5);
    ff(12,45);
    return 0;
}
void f(int a,int b,int c,int d,int e)
{
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<e<<endl;
}
