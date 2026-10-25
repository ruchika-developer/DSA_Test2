#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int a[]={8,3,5,8,6};
     int n=5;
     sort(a,a+n);
     for(int i=n-2;i>=0;i--){
        if(a[i]!=a[n-1]){
            cout<<a[i];
            return 0;
        }
     }
     cout<<-1;
    return 0;
}