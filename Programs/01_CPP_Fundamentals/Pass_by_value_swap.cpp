#include<iostream>
using namespace std;
void swap(int x,int y)
{
 int a=y;
 int b=x;
 cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}
int main()
{
int a,b;
cout<<"Enter the values of a and b:"<<endl;
cin>>a;
cin>>b;
swap(a,b);
return 0;

}
