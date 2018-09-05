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
//    map<string,size_t> word_count;
//    string word;
//    while(cin>>word)
//        ++word_count[word];
//    for(const auto &w:word_count)
//        cout<<w.first<<" occurs "<<w.second<<
//        ((w.second>1)?" times":" time")<<endl;
    vector<int> ivec{1,2,4,5,6};
    
    for(auto it=ivec.begin();it!=ivec.end();it++)
    {
        *it*=2*(*it);
        cout<<*it<<endl;
    }
    
    for_each(ivec.begin(),ivec.end(),[] (int element)mutable{cout<<(element*=2)<<endl;});
    
    
}

