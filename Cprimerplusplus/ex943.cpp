//
//  ex943.cpp
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
    for(auto cur=s.begin();cur!=s.end()-oldVal.size();)
    {
        if(oldVal==string(cur,cur+oldVal.size()))
        {
            s.erase(cur,cur+oldVal.size());
            s.insert(cur,newVal.begin(),newVal.end());
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
