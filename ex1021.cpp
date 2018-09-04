//
//  ex1021.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/4.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include "publicHeader.h"

int main()
{
    int i=10;
    auto f=[=]()mutable->bool {return i--;};
    cout<<f();
    return 0;
}
