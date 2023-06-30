#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     // int arr[str.size()];
//     // for (int i=0;i<str.size();i++){
//     //     arr[i]=stoi(str[i]);
//     // }
//     sort(str.begin(),str.end());
//     cout<<str<<endl;56;
//     int i;
//     for (i=(str.size()-1);i<0;i--){
//         cout<<str[i]<<endl;
//     }
//     return 0;
// }

//Easy way to find the highest frequency and which char in the string 
int main(){
    string str;
    cin>>str;
    int freq[26];
    for (int i=0;i<26;i++){
        freq[i]=0;
    }
    for (int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    int maxf=0;
    char ch='a';
    for (int i=0;i<26;i++){
        if (maxf<freq[i]){
            maxf=freq[i];
            ch=i+'a';
        }
    }
    cout<<ch<<" "<<maxf<<endl;
    return 0;
}