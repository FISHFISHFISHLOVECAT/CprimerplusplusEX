//
//  ex241-p21.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/12.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "my_Sales_data.h"
using namespace std;

int main(int argc,char *argv[])
{
    if(argc!=3)
        cout<<"please enter the iputput filename and output filename!:";
    
    ifstream in(argv[1]);
    ofstream out(argv[2],ofstream::app);
    
    my_Sales_data total(in);
    if (!total.isbn().empty())//如果不为空
    {
        while (in)
        {
            my_Sales_data trans(in);
            if(!in)
                break;
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(out,total);
                out<<endl;
                total = trans;
            }
        }
        print(out,total);
        out<<endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
