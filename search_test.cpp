//
//  search_test.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/15.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int simple_search(vector<int> ivec,int target);
int binary_search(vector<int> ivec,int target);

int main()
{
    vector<int> ivec{2,2,1,4,5,11,9,8,9,3,7};
    
    //cout<<ivec[simple_search(ivec, 3)]<<endl;
    sort(ivec.begin(),ivec.end());
    if(binary_search(ivec,3)!=-1)
        cout<<ivec[binary_search(ivec,3)]<<endl;
    else
        cout<<"not found!"<<endl;
   
    return 0;
}

int binary_search(vector<int> ivec,int target)
{
    size_t front=0,end=ivec.size()-1,mid=(front+end)/2;
    while((end-front)>1)
    {
        if(ivec[mid]==ivec[target])
            return ivec[mid];
        if(ivec[mid]>ivec[target])
            end=mid-1;
        if(ivec[mid]<ivec[target])
            front=mid+1;
        mid=(front+end)/2;
    }
    
    if(ivec[front]==target)
        return ivec[front];
    else if(ivec[end]==target)
        return ivec[end];
    else
        return -1;
}
int simple_search(vector<int> ivec,int target)
{
    for(auto i=0;i!=ivec.size();i++)
    {
        if(ivec[i]==target)
            return i;
    }
    return -1;
}
