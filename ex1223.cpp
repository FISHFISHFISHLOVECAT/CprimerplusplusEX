#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <memory>
using namespace std;

int main()
{
    const char * str1="apple";
    const char * str2="banana";
    
    char *r = new char[strlen(str1)+strlen(str2)+1];
    strcpy(r,str1);
    strcat(r,str2);
    cout<<r<<endl;
    
    string s1="cat";
    string s2="dog";
    strcpy(r,(s1+s2).c_str());
    cout<<r<<endl;
    
    delete [] r;
    
}
