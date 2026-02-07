#include<iostream>
int main(){
    float radius;
    std::cin>>radius;
    float pi = 3.14;
    float area = pi * radius * radius;
    std::cout<<"Area of Circle: "<<area<<std::endl;
    return 0;
}