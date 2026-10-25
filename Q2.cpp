#include<iostream>
using namespace std;
int main(){
    int a[]={2,7,11,15};
    int target=9;
    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
            if(a[i]+a[j]==target){
                cout<<i<<""<<j;
            }
        }
    }
    return 0;
}