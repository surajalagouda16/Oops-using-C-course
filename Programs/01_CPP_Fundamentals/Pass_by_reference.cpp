#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    cout<<"a:"<<y<<endl<<"b:"<<x<<endl;
}
int main()
{
int a,b,x,y;
cout<<"Enter the values of a and b:"<<endl;
cin>>a;
cin>>b;
swap(a,b);

return 0;

}
