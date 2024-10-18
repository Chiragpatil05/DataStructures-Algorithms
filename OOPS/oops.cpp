#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        string enrollmentNo;

    public:
        string name;
        int age;
        string city;

        // Constructor
        // non parameterized constructor
        Student(){
            cout << "Hey i am constructor" << endl;
        }

        // parameterized constructor
        Student(string name , string city){
            this->name = name;
            this->city = city;
        }

        Student(string name , int age , string city){
            this->name = name;
            this->age = age;
            // agePtr = new int;
            // *agePtr = age;
            this->city = city;
        }

        // copy constructor
        Student(Student &obj){
            this->name = obj.name;
            this->age = obj.age;
            // this->agePtr = obj.agePtr;
            this->city = obj.city;
        }

        // destructor
        ~Student(){
            cout << "Hey i am destructor from Winden Cave";
        }

        void getInfo(){
            cout << "name = " << name << endl;
            cout << "age = " << age << endl;
            cout << "city = " << city << endl;
            cout << endl;
        }

        // getter 
        void setter(string enroll){
            enrollmentNo = enroll;
        }

        // setter
        string getter(){
            return enrollmentNo;
        }
};



int main(){
    // Student st1;
    // st1.name = "Chirag";
    // st1.age = 18;
    // st1.city = "Indore";

    // // cout << sizeof(Student);
    // st1.getInfo();

    // st1.setter("CSEA05");
    // cout << "enrollment = " << st1.getter();

    // Student st2("Virat",35,"Delhi");
    // st2.getInfo();

    // Student st3("Peter","Berlin");
    // st3.getInfo();

    // defualt copy constructor
    // Student st4(st2);
    // st4.getInfo();

    Student st5("Henry",38,"Winden");
    st5.getInfo();

    Student st6(st5);
    st6.getInfo();

}