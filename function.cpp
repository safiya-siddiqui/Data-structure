#include<iostream>
using namespace std;
int add(int num1,int num2){
    int c=num1+num2;
    return c;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}