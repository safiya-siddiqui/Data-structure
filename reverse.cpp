#include<iostream>
using namespace std;
int main()
{
    int num ,rev=0 , res,  rem ,temp ;
    cin>>num;
for(int i=1; i<=num; i++){
temp=num;
rem=temp%10;
num=num/10;
res=rev*10+rem;
cout<<res;}
return 0;

}