#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
vector<int>::iterator find_num(vector<int> &vec,int num);

int main()
{
    vector<int> vec{1,3,5,7,9,2,3,5,711};
    int num=5;
    cout<<*find_num(vec, num);
    
    return 0;
}

vector<int>::iterator find_num(vector<int> &vec,int num)
{
    vector<int>::iterator b=vec.begin(),e=vec.end();
    while(b!=e)
    {
        if(*b==num)
            return b;
        b++;
    }
    return e;
}
