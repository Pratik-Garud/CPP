#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int count=0;
    
    while(n>=1){
        if(n%10==0){
            count++;
        }
        n =n/10;
    }
    
    cout<<"count "<<count;
    
    return 0;
}
