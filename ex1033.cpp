//
//  ex1033.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/6.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <fstream>
#include <iterator>
#include "publicHeader.h"


int main()
{
    ifstream fin("/Users/junwuli/Desktop/full_num");
    ofstream fout_odd("/Users/junwuli/Desktop/odd_num");
    ofstream fout_even("/Users/junwuli/Desktop/even_num");
    
    istream_iterator<int> in(fin),eof;
    ostream_iterator<int> odd_out(fout_odd," ");
    ostream_iterator<int> even_out(fout_even," ");
    while(in!=eof)
    {
        if(*in%2)//偶数
            even_out=*in;
        else
            odd_out=*in;
        in++;
    }
    
    return 0;
}
