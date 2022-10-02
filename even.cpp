#include<iostream>
using namespace std ;
int check(int num){
    int i=2;
    if(num%2==0){
    return true;
    }
    
    return false;
    
}
int main(){
int n;
cin>>n;
if(check(n))
cout<< "even";
else
cout<<"odd";
return 0;
}