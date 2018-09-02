//
//  ex1015.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/2.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include "publicHeader.h"


int main()
{
    int b=5;
    auto sum=[b](int a){return a+b;};
    cout<<sum(88)<<endl;
    
    return 0;
}
