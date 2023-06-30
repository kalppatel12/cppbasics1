// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// struct str{
//     string subst;
// };
// int main(){
//     string input;
//     cin>>input;
//     int n=input.size();
//     int m=n*(n+1)/2;
//     str s1[m];
//     int sum=0;
//     for (int i=0;i<n;i++){
//         for (int j=1;j<=n-i;j++){
//             s1[sum].substr=str.substr(i,j);
//             sum++;
//         }
//     }
//     s1[0].substr="";
//     for (int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             for (int k=0;k<m;k++){
//                 string a=s1[i].substr;
//                 string b=s1[j].substr;
//                 string c=s1[k].substr;
//                 int x=(b+c).size();
//                 int y=(a+c).size();
//             }
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    for(int len1 = 1; len1 < n; len1++) { // loop through all possible lengths of first substring
        for(int len2 = 1; len2 < n - len1; len2++) { // loop through all possible lengths of second substring
            int i = 0, j = i + len1 + len2; // initialize the positions of a and b
            bool flag = true;
            while(j < n) { // loop through the string s
                if(s.substr(i, len1) != s.substr(j - len2, len1) || s.substr(j - len2, len2) != s.substr(i + len1, len2)) {
                    // check if a and b are entangled as per the given conditions
                    flag = false;
                    break;
                }
                i += len1;
                j += len2;
            }
            if(flag) cnt++; // increment the counter if the pair is entangled
        }
    }
    cout << cnt << endl; // print the final count of entangled pairs
    return 0;
}
