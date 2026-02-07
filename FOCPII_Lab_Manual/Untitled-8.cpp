#include<iostream>
int main(){
    int a = 5,b=10;
    int c;
    c=a;
     a=b;
    b=c;
   
    std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
    return 0;
}