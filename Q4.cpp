#include<iostream>
#include<string>
using namespace std;
int main(){
     string s="vs code";
     for(int i=0;i<s.size();i++){
        int count =0;
        for(int j=0;j<s.size();j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count==1){
            cout<<i;
            return 0;
        }
     }
     cout<<-1;
    return 0;
}