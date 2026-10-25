#include<iostream>
using namespace std;
int main(){
    int a[]={3,0,1};
    int sum=0;
     for(int i=0;i<3;i++){
        sum=sum+a[i];
     }
     int total=3*4/2;
     cout<<total-sum;
    return 0;
}