#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// class info{
//     public: //it is the nesessary to public the class because it help attributes outside the block
//     string name;
//     int age;
//     string dob;
// };
// int main (){
//     int n;
//     cin>>n;
//     info arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i].name;
//         cin>>arr[i].age;
//         cin>>arr[i].dob;
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i].name<<endl;      
//         cout<<arr[i].age<<endl;
//         cout<<arr[i].dob<<endl;
//         cout<<endl;
//     }
//     return 0;
// }


// class Car {
//   public:
//     int speed(int maxSpeed);
// };

// int Car::speed(int maxSpeed) {
//   return maxSpeed;
// }

// int main() {
//   Car myObj;
//   cout << myObj.speed(200);
//   return 0;
// }


///    CONSTRUCTOR
// class MyClass {     // The class
//   public: 
//            // Access specifier
//     MyClass() {     // Constructor
//       cout << "Hello World!"<<endl;
//     }
// };

// int main() {
//   MyClass myObj[5];    // Create an object of MyClass (this will call the constructor)
//   return 0;
// }

//constructor with parameter
// class  student {
//     public:
//     string name;
//     int roll_no;
    
//     student(int roll_no,string name){
//         cout<<"welcome to our school"<<endl;
//         cout<<name<<" ,your new roll no. is "<<roll_no+10<<endl;
//         cout<<endl;
//     }
// }s1;
// int main(){
//     int n;
//     cin>>n;
//     s1[n];
//     for (int i=0;i<n;i++){
//         int _roll_no;
//         string _name;
//         cin>>_name;
//         cin>>_roll_no;
//         s1[i](_roll_no,_name);
//     }
//     return 0;
// }


////    DESTRUCTOR

// class  student {
//     public:
//     string name;
//     int roll_no;

//     // ~student(){
//     //  cout<<"welcome to our school"<<endl;
//     
//         cout<<name<<" ,your new roll no. is "<<roll_no+10<<endl;
//         cout<<endl;
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     student s1[n];
//     for (int i=0;i<n;i++){
//         cin>>s1[i].roll_no;
//         cin>>s1[i].name;
//     }
//     return 0;
// }


//encapsulation

// class Employee {
//   private:
//     int salary;
//   public:
//     void setSalary(int s) {
//       salary = s;
//     }
//     int getSalary() {
//       return salary;
//     }
// };
// int main() {
//   Employee myObj;
//   myObj.setSalary(50000);
//   cout << myObj.getSalary();
//   return 0;
// }


//array of the class and how to implement the value using function
class student {
  int roll_no;
  string name;
  public:
  void get_info(){
    cin>>name;
    cin>>roll_no;
  }
  void set_info(){
    string name_;
    cin>>name_;
    if (name_==name){
      cout<<roll_no<<endl;
    }
  }
};
int main(){
  int n;
  cin>>n;
  student info[n];
  for(int i=0;i<n;i++){
    info[i].get_info();
  }
  cout<<endl;
  for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      info[j].set_info();
    }
    cout<<endl;
  }
  return 0;
}