#include<iostream>
using namespace std;
void swap( int a,int b) {
  int temp;
  temp=a;
  a=b;
  b=temp;
cout<<a<<endl;
cout<<b;
}

int main(){
    int num1,num2 ;
    
    cout<<"enter the num1";
    cin>>num1;
    cout<<"enter the num2";
    cin>>num2;
      swap(num1,num2);
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  