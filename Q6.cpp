#include<iostream>
using namespace std;
int main(){
    int a[]={7,1,5,3,6,4};
    int n=6;
    int minPrice=a[0];
    int profit=0;
    for(int i=1;i<n;i++){
        int current=a[i]-minPrice;
        if(current>profit){
            profit=current;
        }
        if(a[i]<minPrice){
            minPrice=a[i];
        }
    }
    cout<<profit;
    return 0;
}