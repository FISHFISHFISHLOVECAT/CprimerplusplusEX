#include <iostream>
#include <vector>
using namespace std;

vector<int> * make_dynamically()
{
    auto Ptr = new vector<int>{};
    return Ptr;
}

auto populate(vector<int> * Ptr)
{
    int temp;
    while(cin>>temp)
        Ptr->push_back(temp);
    
    return Ptr;
}

auto print(vector<int> * Ptr)->ostream &
{
    for(auto i:*Ptr)
        cout<<i<<" ";
    return cout;
}
        
int main()
{
    auto vec = populate(make_dynamically());
    print(vec) << std::endl;
    delete vec;
    
    return 0;
}


