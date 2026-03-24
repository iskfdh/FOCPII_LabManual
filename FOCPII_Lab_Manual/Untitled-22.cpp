#include<iostream>
using namespace std;
int fact(int a){int c=1;
    for(int i=1;i<=a;i++){
        c*=i;
    }
    return c;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int a;
    cin>>a;
    
    for(int i=0;i<=a;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }cout<<endl;
    }
}