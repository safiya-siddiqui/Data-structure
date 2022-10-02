#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){

      //to take as an input of string

   // string str;
   // cin>>str;
    //cout<<str;
//string str="ApniKaksha";
//cout<<str;
    
    //to take as an input whole sentence

//string str;
//getline(cin,str);
//cout<<str<<endl;

    //DIFFERENT FUNCTION OF STRING
   //APPEND THE STRING
//string s1="fam";

//string s2="ily";
//s1.append(s2);
//cout<<s1<<endl;

      //character excess

//cout<<s1[2]<<endl;

       //CLEAR THE STRING
      
//string abc="i am safiya siddiqui ";
//abc.clear();
//cout<<abc;

    //COMPARE THE STRING

    //string s1="abc";
    //string s2="xyz";
    // string s2="abc";
    //s1.compare(s2);
   // cout<<s1.compare(s2)<<endl;
  //if(!s1.compare(s2));
 // cout<<"string are equal";

  //STRING EMPTY
  //string s1="abc";
  //cout<<s1<<endl;
  //s1.clear();
  //if(s1.empty())
  //cout<<"string is  empty";

    //ERASE THE STRING
   // string s1="obession";
    //s1.erase(3,3);
    //cout<<s1<<endl;

        // FIND THE POSITION OF STRIMG 

         //string s1="obession";
         //s1.find("ssion");
         //cout<<s1.find("ssion")<<endl;

       //to insert the   another string

       //string s1="apnikaksha";
      // s1.insert(3,"my" );
       //cout<<s1<<endl;
      //cout<<s1.size()<<endl;
      //cout<<s1.length()<<endl;

      //iteration of string
      //for(int i=0; i<s1.length(); i++)
      //cout<<s1[i]<<endl;


      // find the substring
      //string s=s1.substr(3,6);
      //cout<<s<<endl;


       //string to integer
      // string s1="786";
      // int x=stoi(s1);
      // cout<<x+2<<endl;
      // int x=786;
       //cout<<to_string(x) +"2"<<endl;


        //Sorting the string
      //  to sorting the string we use a header file 
       // #include<algorithm>

      //string s1="huiyndvwgbnxkiuwio";
      //sort(s1.begin() ,s1.end());
     // cout<<s1<<endl;


         //convert the string into upper case and lower case
//string str="ASGDHGUIFEWHFKSNCLKAJPSMKMCKLSJ";
  //       for(int i=0; i<=str.length(); i++){
    //         if(str[i]>='A' && str[i]<='Z')
      //       str[i]+=32;
        // }
      //cout<<str;


      //to make a greater string


   //string s1="53241";
   //sort(s1.begin() ,s1.end() ,greater<int>());
   //cout<<s1<<endl;


   // Given a string   find a maximum time character

 string s="abckjhaacbtyua";
 int count[26];
 for(int i=0; i<=count; i++)
 count[i]==0;
 for(int i=0; i<=s.size(); i++)
 count[s[i]-'a']++;
 char ans ='a';
 


 

       


    return 0;
}