#include<iostream>
int main(){
    char input;
    float c,f;
    std::cout<<"Enter temperature 5in Celsius or Fahrenheit: ";
    std::cin>>input;
    if(input == 'C' || input == 'c'){
        std::cin>>c;
        f = (c * 9.0/5) + 32; 
        std::cout<<"Fahrenheit: "<<f<<std::endl;
    }
    else{
        std::cin>>f;
        c = (f - 32) * 5.0/9;
        std::cout<<"Celsius: "<<c<<std::endl;
    }
}