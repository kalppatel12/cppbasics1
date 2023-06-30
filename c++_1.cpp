#include<iostream>
using namespace std;
// string decimaltohexadecimal(int n,string str){
//     while(n>0){
//         int m=n%16;
//         if (m<10){
//             str=to_string(m)+str;
//         } else{
//             str=char(55+m)+str;
//         }
//         n=n/16;
//     }
//     return str;
// }
// int main(){
//     int n;
//     cin>>n;
//     string str(""); 
//     cout<<decimaltohexadecimal(n,str)<<endl;
//     return 0;
// }




// int main(){
//     int r;
//     int c=0;
//     cin>>r;
//     while(r!=0){
//         c=c+r;
//         r=r/3;
//     }
//     cout<<c<<endl;
//     return 0;
// }

// int main(){
//     int t;
//     cin>>t;
//     for (int h=0;h<t;h++){
//     int n;
//     int arr[n];
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum1=0;
//     int sum2=0;
//     int arr2[n];
//     for (int j=0;j<n-1;j++){
//         cout<<"= = "<<arr[j]<<" ="<<arr[j+1]<<endl;
//         int diff=arr[j+1]-arr[j];
//         cout<<"diff-"<<diff<<endl;
//         if (sum1==diff){
//             arr2[sum2]=arr[j];
//             sum2=sum2+1;
//         }else{
//             sum1=diff;
//         }
//         cout<<"sum1-"<<sum1<<endl;
//     }
//     cout<<"sum2="<<sum2<<endl;
//     for (int k=0;k<sum2;k++){
//         cout<<arr2[k]<<endl;
//     }
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx=arr[0];
//     int sum1;`
//     for (int j=1;j<n-1;j++){
//         mx=max(mx,arr[j]);
//         if (mx==arr[j] && arr[j]>arr[j+1]){
//             sum1++;
//         }
//     }
//     cout<<sum1<<endl;
//     return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     int s;
//     cin>>s;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     int j=0;
//     int start=0;
//     int end;
//     while (sum!=s && j!=n){
//         end=j;
//         sum=sum+arr[j];
//         j++;
//     }
//     cout<<start+1<<" "<<end+1<<endl;
//     return 0;
// }

// for printintg sub arrays;
// also its sum;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=0;
//     for (int x=0;x<n;x++){
//         for (int y=x;y<n;y++){
//             for (int z=x;z<=y;z++){
//                 cout<<arr[z]<<" ";
//                 max=max+arr[z];
//             }
//             cout<<" sum="<<max;
//             max=0;
//             cout<<endl;
//         }
//     }
//     return 0;
// }


//find greatest sum of the sub array;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum1=0;
//     int sum2=0;
//     for (int j=0;j<n;j++){
//         sum1=sum1+arr[j];
//         sum2=max(sum1,sum2);
//         if (arr[j]<0){
//             sum1=0;
//         }
//     }
//         cout<<sum2<<endl;
//     return 0;
// }


//multiple of two matrix;
// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     int mat1[x][y];
//     int mat2[y][z];
//     int mul[x][z];
//     for (int i=0;i<x;i++){
//         for(int j=0;j<y;j++){
//             cin>>mat1[i][j];
//         }
//     }
//     for (int i=0;i<y;i++){
//         for(int j=0;j<z;j++){
//             cin>>mat1[y][z];
//         }
//     }
//     int sum1=0;
//     for (int i=0;i<x;y++){
//         for (int j=0;j<z;j++){
//             mul[i][j]=0;
//         }
//     }     
//     for (int i=0;i<x;y++){
//         for (int j=0;j<z;j++){
//             for (int k=0;k<y;k++){
//                 sum1=sum1+mat1[i][k]*mat2[k][j];
//             }
//             mul[i][j]=sum1;
//         }
//     }
//     for (int i=0;i<x;y++){
//         for (int j=0;j<z;j++){
//             cout<<mul[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// matrix serch 
// but condition that rows and column 
// int main(){
//     int x,y;
//     cin>>x>>y;
//     int mat1[x][y];
//     for (int i=0;i<x;i++){
//         for(int j=0;j<y;j++){
//             cin>>mat1[i][j];
//         }
//     }
//     int target;
//     cin>>target;
//     int r=0;
//     int c=y-1;
//     bool found=false;
//     while(r<x&&c>=0){
//         if (mat1[r][c]==target){
//             found= true;
//         } else if (mat1[r][c]>target){
//             c--;
//         } else{
//             r++;
//         }
//     }
//     if (found){
//         cout<<"yes"<<endl;
//     } else{
//         cout<<"no"<<endl;
//     }
//     return 0;
// }