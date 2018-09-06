//
//  ex1030.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/6.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iterator>
#include <algorithm>
#include "publicHeader.h"

int main()
{
    vector<int> ivec;
    istream_iterator<int> in(cin),eof;
    while(in!=eof)
        ivec.push_back(*in++);
    sort(ivec.begin(),ivec.end());
    ostream_iterator<int> out(cout," ");
        unique_copy(ivec.begin(),ivec.end(),*out);
    return 0;
}
