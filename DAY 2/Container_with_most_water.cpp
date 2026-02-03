#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>water={1,8,6,2,5,4,8,3,7};
    int maxwater=0,left=0,right=water.size()-1;
    while(left<right){
        int width=right-left;
        int height =min(water[left],water[right]);
        int area=width* height;
        maxwater=max(maxwater,area);
        water[left]<water[right] ? left++:right--;

    }
    cout<<maxwater;
}
// Container_with_most_water.cpp