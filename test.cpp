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


int main()
{
    int i=0;
    string filename("/Users/junwuli/Desktop/data");
    ifstream ssin(filename);
    vector<int> ivec;
    while(ssin>>i)
    {
        ivec.push_back(i);
    }
    for(auto i:ivec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int j=1;
    cout<<ivec[j]<<endl;
    cout<<ivec[++j]<<endl;
    return 0;
}
//void ReadFileToVec(const string &filename,vector<string> &vec);
//int main()
//{
//    vector<string> vec;
//    string filename("/Users/junwuli/Desktop/data");
//    ReadFileToVec(filename, vec);
//
//    return 0;
//}
//
//void ReadFileToVec(const string &filename,vector<string> &vec)
//{
//    string buf;
//    ifstream in(filename);
//    if(in)
//    {
//        while(in>>buf)
//            vec.push_back(buf);
//    }
//    for(const auto &i:vec)
//    {
//        cout<<i<<endl;
//    }
//}
