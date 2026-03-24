#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);
double sum(double,double);
int main()
{
   cout<<sum(10,20)<<endl;
   cout<<sum(10.52f,20.5f)<<endl;
    cout<<sum(10.5,20.5)<<endl;
    return 0;

}
int sum(int n1,int n2){
    return n1+n2;
}
float sum(float n1,float n2){
    return n1+n2;
}
double sum(double n1,double n2){
    return n1+n2;
}