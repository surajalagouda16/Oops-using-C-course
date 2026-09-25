#include<iostream>
using namespace std;
int main()
{
 int arr[5];
 int i,maxi;
 cout<<"Enter the array elements:"<<endl;
 for(i=0;i<5;i++)
 {
  cin>>arr[i];

 }
 maxi=arr[0];
 for(i=1;i<5;i++)
 {
  if(arr[i]>maxi)
  {
   maxi=arr[i];
  }
 }
 cout<<"The max element is :"<<maxi<<endl;
 return 0;
}
