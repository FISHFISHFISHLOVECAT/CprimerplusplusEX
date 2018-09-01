//
//  ex104.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/8/31.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <list>
using namespace std;


int main()
{
    vector<double> vint{1.2,2.2,3.3,4.4,5.5};
    cout<<accumulate(vint.begin(),vint.end(),0.0)<<endl;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sizeof(a)<<endl;
    
    return 0;
}

//void f(int a ){
//    
//    //zhao lingjin
//    
//    return list
//}
//
//globale i
//globle list
//
//f2(int linjin){
//    list1 = f(a);
//    list +=list1;
//    if list is not null:
//        for linjin in list1:
//            f2(linjin)
//    else
//        
//        return 0
//    
//}





