//
//  ex122.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/19.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class StrBlob{
public:
    typedef std::vector<std::string>::size_type size_type;//定义一个类型vector<string>
    StrBlob();//默认初始化
    StrBlob(std::initializer_list<std::string> il);//列表初始化
    size_type size() const {return data->size();};//调用string的size()
    std::string& front();//调用string 的front()
    std::string& back();//调用string 的back()
private:
    std::shared_ptr<std::vector<std::string>> data;//数据成员
    void check(size_type i,const std::string &msg)const;//参数检查
};

void StrBlob::check(size_type i,const string &msg) const
{
    if(i>=data->size())
        throw out_of_range(msg);
}

string & StrBlob::front()
{
    check(0,"front on empty StrBlob");
    return data->front();
}

int main()
{
    
}
