//
//  ex951.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/28.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
vector<string> month_convert
{
    "January","February","March","Apirl","May","June","July",
    "Augest","September","October","November","December"
};

vector<string> month_convert_abbr
{
    "Jan","Feb","Mar","Apr","May","Jun","Jul",
    "Aug","Sep","Oct","Nov","Dec"
};

class time_info
{
private:
    unsigned year=0;
    unsigned month=0;
    unsigned day=0;
    unsigned get_month(string str);
    unsigned get_day(string str);
    unsigned get_year(string str);
public:
    time_info()=default;
    time_info(string &info)
    {
        month=get_month(info);
        day=get_day(info);
        year=get_year(info);
    };
    void print(){cout<<year<<month<<day;};
};


int main()
{
    string str{"1/1,1980"};
    time_info a(str);
    a.print();
    cout<<endl;
    
    return 0;
}

unsigned time_info::get_year(string str)
{
    string alphabet_list{"qwertyuiopasdgghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBBNM"};
    string number_list{"0123456789"};
    
    auto n_e=str.find_last_of(number_list);
    auto n_b=n_e-3;
    if(n_b!=string::npos&&n_e!=string::npos)
    {
        return stoi(str.substr(n_b,n_e));
    };
    
    return 0;
}

unsigned time_info::get_day(string str)
{
    string alphabet_list{"qwertyuiopasdgghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBBNM"};
    string number_list{"0123456789"};
    
    auto n_b=str.find_first_of(number_list);
    auto n_e=str.find_first_not_of(number_list,n_b);
    
    if(n_b!=string::npos&&n_e!=string::npos)
    {
        return stoi(str.substr(n_b,n_e));
    };
    
    return 0;
}

unsigned time_info::get_month(string str)
{
    string alphabet_list{"qwertyuiopasdgghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBBNM"};
    string number_list{"0123456789"};
    
    auto b=str.find_first_of(alphabet_list);
    auto e=str.find_first_not_of(alphabet_list);
    if(b!=string::npos&&e!=string::npos)
    {
        int month=0;
        string str_month=str.substr(b,e);
        for(auto i:str_month.size()>=4?month_convert:month_convert_abbr)
        {
            month++;
            if(!str_month.compare(i))
                return month;
        }
        return 0;
    }
    
    auto n_b=str.find_first_of(number_list);
    auto n_e=str.find_first_not_of(number_list);
    if(n_b!=string::npos&&n_e!=string::npos)
    {
        return stoi(str.substr(n_b,n_e));
    }
    
    return 0;
}
