//
//  main.cpp
//  Clone of a Clone Lab
//
//  Created by Andres Vizoso on 4/28/26.
//

#include <iostream>

using namespace std;


class Person {
private:
    string name;
    int age;
    int height;
    int copy_depth;
    
    
public:
    Person(string n, int _age, int _height){
        name = n;
        age = _age;
        height = _height;
        copy_depth = 0;
       
        
    }
    
    Person(const Person& other){
        copy_depth ++;
    }
    
    ~Person(){
        cout << "Deallocated" << endl;
    }
    
//    void operator=(const Person& other){
//        delete ptr;
//        ptr = new T;
//        *ptr = *other.ptr;
//    }
    
    void print(){
        cout << "Hello, My name is " << name << ". I am " << age << " years old and my height is " << height << "." << endl;
        
        cout << "copy depth: " << copy_depth << endl;
    }
    
//    ~Person(){
//        delete copy_depth;
//    }
};

int main() {
    
    Person p1 = Person("Hailey", 14, 5);
    
    Person p2 = p1;
    
    p1.print();
    cout << endl;
    p2.print();
    
    
    
}
