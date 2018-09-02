#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::ifstream;
using std::endl;

bool lengthCompare(const string&,const string &);
bool lengthCompare1(const string&,const string &,int a);
int main()
{
    bool (*pf)(const string&s1,const string &s2);
    string s1{"app"};
    string s2{"apple"};
    pf=nullptr;
    
    cout<<pf(s1, s2)<<endl;
    
    //cout<<lengthCompare(s1, s2)<<endl;
    return 0;
}
bool lengthCompare(const string&s1,const string &s2)
{
    return s1.size()>s2.size();
}
bool lengthCompare1(const string &s1,const string &s2,int a)
{
    cout<<a<<endl;
    return s1.size()>s2.size();
}
