#include<iostream>
using namespace std;
// POINTER
   // int a=5;
   // int *aptr=&a;
   
   
   // cout<<*aptr<<endl;
   // *aptr=10;
   // cout<<*aptr<<endl;

       //INCREAMENT OF POINTER

 //int a=5;
  // int *aptr=&a;
   
 //cout<<aptr<<endl;
 //aptr++;
 //cout<<aptr<<endl;


//      POINTERS AND ARRAYS


//int arr[]={10,20,30};
//cout<<*arr<<endl;

//int *ptr=arr;
//for(int i =0; i<3; i++)
//cout<<*(arr+i)<<endl;
   

   //POINTER TO POINTER



  // int a=10;
   //int*p=&a;
   //cout<<*p<<endl;
   //int **q=&p;
   //cout<<*q<<endl;
   //cout<<**q<<endl;
//int ***r=&q;
//cout<<*r<<endl;
//cout<<**r<<endl;


    //SWAP TWO NUMBER  USING POINTER

void swap( int* a,int *b) {
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;

}

int main(){
    int num1,num2 ;
    
    cout<<"enter the num1";
    cin>>num1;
    cout<<"enter the num2";
    cin>>num2;
      swap(num1,num2);
     cout<<num1<< "  "  <<num2;
    return 0;
}
