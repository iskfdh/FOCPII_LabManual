#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int bredth;
    int area;
};
int main(){
    Rectangle r1;
    cin>>r1.length;
    cin>>r1.bredth;
    r1.area=r1.length*r1.bredth;
    cout<<r1.area<<endl;
    return 0;
}