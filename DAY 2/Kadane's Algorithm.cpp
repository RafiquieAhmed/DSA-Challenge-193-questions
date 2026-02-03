#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int>vec={3,-4,5,4,-1,7,-8};
    int curr_sum=0,max_sum=INT_MIN,size =vec.size();
    for (int i=0;i<size;i++)
    {
        curr_sum+=vec[i];
        max_sum=max(curr_sum,max_sum);

    }
    if(curr_sum<0){
        curr_sum=0;
    }

    cout<<max_sum;
}

// Kadane's Algorithm.cpp


//g++ filname.cpp
// .\a.exe