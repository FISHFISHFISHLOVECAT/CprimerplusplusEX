//
//  ex938.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/23.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout<<"size="<<vec.size()<<" "<<"capacity="<<vec.capacity()<<endl;
    for(int i=0;i!=600;i++)
    {
        vec.push_back(i);
        cout<<"size="<<vec.size()<<" "<<"capacity="<<vec.capacity()<<endl;
    }
    //cout<<"size="<<vec.size()<<" "<<"capacity="<<vec.capacity()<<endl;
    
    return 0;
}
