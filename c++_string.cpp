#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    // cin>>str;
    // cout<<str;
    
    // if want to take the input of the whole line then;
    // getline(cin,str);
    // cout<<str;

    //different type of the string declaration;
    // str="kalp";
    // string str2("kalp",2);

    //function in string;
    //concatenation
    // string s1="kalp";
    // string s2="patel";
    // s1.append(s2);
    // cout<<s1<<endl;
    // cout<<s2;
    //also
    // string s3=s1+s2;
    // cout<<s3<<endl;

    //delet
    // string str4="c++ is good language";
    // cout<<str4<<endl;
    // str4.clear();
    // cout<<str4<<endl;

    //compare
    // string str5="abc";
    // string str6="xyz";
    // cout<<str5.compare(str6)<<endl;

    //if want to check to your string is empty or not
    // string str7="kalp";
    // cout<<str7.empty()<<endl;;

    //for erase the string
    // string str8="kalppatel";
    // int start=2;
    // int ele=3;
    // cout<<str8.erase(start,ele)<<endl;

    //find the position of the substring
    // string str9="abcdefghkl";
    // cout<<str9.find("cdef")<<endl;
    //give the index of the stsrted substring in string

    //finding size
    // string str10="kalp";
    // cout<<str10.size()<<endl;
    // cout<<str10.length()<<endl;

    //insert string in other string
    // string str11="kalp";
    // string str12="patel";
    // cout<<str11.insert(0,str12);

    //substring
    // string str13="abcdefgh";
    // int start=3;
    // int ele=4;
    // cout<<str13.substr(start,ele);

    //string to integer and vice-versa
    // string str14="766";
    // int m=23;
    // cout<<stoi(str14)+2<<endl;
    // cout<<to_string(m)+"2"<<endl;

    //sort the string accroding to alphabeticaly order
    // string str15="abdkjdciubdslaavfvfbknvelntrjil";
    // sort(str15.begin(),str15.end());
    // cout<<str15<<endl;
    //if you want to short the reverse order like gretest number made by the given number string 
    // string str18="3432452677";
    // sort(str15.begin(),str15.end(),greater<char>());
    // cout<<str15<<endl;
    // sort(str18.begin(),str18.end(),greater<int>());
    // cout<<str18<<endl;

    //to convert upper and lover the paticular string part
    // string str16="annonbdubewibje"; 
    // string str17="ODENVBIRBVBRENVIPNR";
    // transform(str16.begin(),str16.end(),str16.begin(),::toupper);
    // transform(str17.begin(),str17.end(),str17.begin(),::tolower);
    // cout<<str16<<endl;
    // cout<<str17<<endl;
    return 0;
}