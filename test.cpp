#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{

    int temp;
    int n;
    vector<int> ivec;

    cin>>n;

    while(cin>>temp)
        ivec.push_back(temp);

    sort(ivec.begin(),ivec.end());

    double mid;
    int t=n%2;
    if(t)//jishu
    {
        mid=static_cast<int>(ivec[(n-1)/2]);
    }
    else//oushu
    {
        mid=(ivec[n/2-1]+ivec[n/2])/2.0;//防止隐式转换
        if((static_cast<int>(ivec[n/2-1]+ivec[n/2])%2)==0)
        {
            mid=static_cast<int>((ivec[n/2-1]+ivec[n/2])/2);
        }
    }
    cout<<mid<<endl;
    
    return 0;
   
}

