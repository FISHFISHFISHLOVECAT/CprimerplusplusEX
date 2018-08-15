//
//  Screen.h
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/15.
//  Copyright © 2018 GDUT. All rights reserved.
//

#ifndef Screen_h
#define Screen_h
#include <vector>
#include <iostream>
class Screen{
private:
    unsigned height=0,with=0;
    unsigned cursor=0;
    std::string content;
public:
    Screen()=default;
    Screen(unsigned ht,unsigned wd):height(ht),width(wd),content(ht *wd,' '){}
    Screen(unsigned ht,unsigned wd,char c):height(ht),width(wd),content(ht * wd,c){}
}

#endif /* Screen_h */
