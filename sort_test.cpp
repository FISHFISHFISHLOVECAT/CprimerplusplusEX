//
//  sort_test.cpp
//  Cprimerplusplus
//
//  Created by junwuli on 2018/9/15.
//  Copyright © 2018 GDUT. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int> &ivec);
void simple_selection_sort(vector<int> &ivec);
void insert_sort(vector<int> &ivec);
void shift_left(vector<int> &ivec,int value,size_t pos);

int main()
{
    //vector<int> ivec{2,1,3,4,7,9,8,6,5,2};
    //bubble_sort(ivec);
    //simple_selection_sort(ivec);
    vector<int> ivec{9,8,7,6,5,4,3,2,1};
    insert_sort(ivec);
    for(auto i:ivec)
        cout<<i<<" ";
    cout<<endl;
    
    return 0;
}


void shift_left(vector<int> &ivec,int value,size_t pos)
{
    for(auto i=ivec.size()-pos;i!=-1;i--)
    {
        ivec[i]=ivec[i-1];
    }
    ivec[pos-1]=value;
}
//void insert_sort(vector<int> &ivec)
//{
//    int i,j,temp;
//
//    for(i=1;i!=ivec.size();i++)//要插入的每一个数
//    {
//        temp=ivec[i];//将要插入的数存起来，因为后面要被覆盖掉
//        for(j=i;j>0&&ivec[j-1]>temp;--j)//他是从最后一个开始比较，一直比较到开始位置，或者是合适的位置，比现有序列都要小
//            ivec[j]=ivec[j-1];//沿途经过的所有都进行后移
//        ivec[j]=temp;//还原这个数
//    }
//}
void insert_sort(vector<int> &ivec)
{
    int i,j,temp;
    
    for(i=1;i<ivec.size();i++)
    {
        temp=ivec[i];
        for(j=i;j>=0&&ivec[j-1]>temp;j--)
        {
            ivec[j]=ivec[j-1];
        }
        ivec[j]=temp;
    }
    
}




void simple_selection_sort(vector<int> &ivec)
{
    int min_index,i,j;
    
    for(i=0;i!=ivec.size();i++)
    {
        min_index=i;
        for(j=i;j!=ivec.size();j++)
        {
            if(ivec[min_index]>ivec[j])
            {
                min_index=j;
            }
        }
        swap(ivec[min_index],ivec[i]);
    }
}

void bubble_sort(vector<int> &ivec)
{
    bool flag=true;
    for(auto i=0;i!=ivec.size()&&flag;i++)
    {
        flag=false;
        for(auto j=ivec.size()-1;j!=i;j--)
        {
            if(ivec[j]<ivec[j-1])
            {
                swap(ivec[j],ivec[j-1]);
                flag=true;
            }
        }
    }
}
