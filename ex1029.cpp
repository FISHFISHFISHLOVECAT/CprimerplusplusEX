//
//  ex1029.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/6.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iterator>
#include <fstream>
#include "publicHeader.h"

int main()
{
    ifstream fin("/Users/junwuli/Desktop/dupwords22");
    istream_iterator<string> ofiter(fin),eof;
    
    vector<string> svec;
    while(ofiter!=eof)
        svec.push_back(*ofiter++);
    
    for(auto i:svec)
        cout<<i<<" ";
    cout<<endl;
    
    return 0;
}
