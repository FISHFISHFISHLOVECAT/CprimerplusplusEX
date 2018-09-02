//
//  ex1014.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/2.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int sum(int a,int b){return a+b;};

int main()
{
    auto sum=[](int a,int b){return a+b;};
    
    cout<<sum(1,3)<<endl;
    return 0;
}
