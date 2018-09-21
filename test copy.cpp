#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <memory>

using namespace std;
shared_ptr<vector<int>> f(int n);

int main()
{
    int n=100;
    auto arr=f(n);
    for(auto i:*arr)
        cout<<i<<" ";
    cout<<endl;
    
    cout<<arr.use_count();
   
    return 0;
}

shared_ptr<vector<int>> f(int n)
{
    auto p=make_shared<vector<int>>(n,1);
    return p;
}


