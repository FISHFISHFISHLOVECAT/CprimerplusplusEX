////
////  ex732.cpp
////  Cprimerplusplus
////
////  Created by junwuli on 2018/8/15.
////  Copyright © 2018 GDUT. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//class Window_mgr
//{
//public:
//    void clear();
//};//声明需要友员函数
//
//class Screen{
//    friend void Window_mgr::clear();
//private:
//    unsigned height=0,width=0;
//    unsigned cursor=0;
//    std::string contents;
//public:
//    Screen()=default;
//    Screen(unsigned ht,unsigned wd):height(ht),width(wd),contents(ht *wd,' '){}
//    Screen(unsigned ht,unsigned wd,char c):height(ht),width(wd),contents(ht * wd,c){}
//};//承认友员身份
//
//void Window_mgr::clear()
//{
//    Screen myScreen(10,20,'X');
//    cout<<"清理之前的内容是："<<endl;
//    cout<<myScreen.contents<<endl;
//    myScreen.contents="";
//    cout<<"清理之后的内容是:"<<endl;
//    cout<<myScreen.contents<<endl;
//}
//
//int main()
//{
//    Window_mgr w;
//    w.clear();
//    return 0;
//}
