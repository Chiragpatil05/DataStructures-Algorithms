#include<iostream>
using namespace std;

class student{
  private:
    string password;
  public:
    string name;
    int age;
    
    // non parameterized constructor
    student(){
      cout << "this is the default copy constructor" << endl;
    }
    
    // --- constructor overloading --------
    // parameterized constructor
    student(string name , int age){
      cout << "this is parameterized constructor with 2 parameter" << endl;
      this->name = name;
      this->age = age;
    }
    
    // parameterized constructor 
    student(string name){
      cout << "this is parameterized constructor with 1 parameter" << endl;
      this->name = name;
    }
  
    
    // inline constructor
    // inline student(string n , int a) : name(n) , age(a){}
    
    // copy constructor : shallow copy and deep copy
    student(student &stu){
      this->name = stu.name;
      this->age = stu.age;
    }
    
    void setName(string name){
      this->name = name;
    }
    
    void setAge(int age){
      this->age = age;
    }
    
    void printStudentInfo(){
      cout << this->name << " " << this->age << endl;
    }
    
    // setter and getter 
    void setter(string password){
      this->password = password;
    }
    
    string getter() {
      return password;
    }
    
};

int main(){
student st1("pihu",5);
st1.printStudentInfo();

// student st2 = st1;
// student st2(st1);
student st2(st1);
st2.printStudentInfo();

return 0;
}
