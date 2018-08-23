//
//  ex944.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/23.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
auto replace_with(string &s, string const& oldVal, string const& newVal)
{
    for(int cur=0;cur!=s.size();)
    {
        if(oldVal==string(s,cur,oldVal.size()))
        {
            s.replace(cur, oldVal.size(), newVal);
            cur+=newVal.size();
        }
        else
            cur++;
    }
}

int main()
{
    string s{ "To drive straight thru is a foolish, tho courageous act." };
    replace_with(s, "tho", "though");
    replace_with(s, "thru", "through");
    cout << s << endl;
    
    return 0;
}
