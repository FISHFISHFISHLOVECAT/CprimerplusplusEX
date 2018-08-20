//
//  ex81.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/20.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
//istream & read_data(istream & is)
//{
//    string buf;
//    while(is>>buf)
//    {
//        cout<<buf<<endl;
//    }
//    cin.clear();
//    return is;
//}

int main()
{
    //istringstream is("Hello word!");
    //read_data(is);
    ifstream ifs("/Users/junwuli/Desktop/strdata");
    if(!ifs)
    {
        cerr<<"Cannot open the file?"<<endl;
        return -1;
    }
    
    vector<std::string> vecLine;
    string line;
    
    while(getline(ifs,line))
        vecLine.push_back(line);
    
    for(auto &s:vecLine)
    {
        istringstream iss(s);
        string words;
        
        while(iss>>words)
        {
            cout<<words<<endl;
        }
    }
    
    return 0;
}
