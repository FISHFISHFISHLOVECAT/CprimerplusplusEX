//
//  ex127.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/21.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <iostream>
#include <vector>
#include <memory>
using namespace std;

auto make_dynamically()
{
    return make_shared<vector<int>>();
}

auto populate(shared_ptr<vector<int>> Ptr)
{
    int temp;
    while(cin>>temp)
        Ptr->push_back(temp);
    
    return Ptr;
}

auto print(shared_ptr<vector<int>> Ptr)->ostream &
{
    for(auto i:*Ptr)
        cout<<i<<" ";
    return cout;
}
        
int main()
{
    auto vec = populate(make_dynamically());
    print(vec) << std::endl;
    
    return 0;
}
