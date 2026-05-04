//
//  main.cpp
//  Clone of a Clone Lab
//
//  Created by Andres Vizoso on 4/28/26.
//

#include <iostream>

using namespace std;

//template <class T>
class Person {
private:
    string name;
    int* age;
    int* height;
    int* copy_depth;
    
//    int age;
//    int height;
//    int copy_depth;
    
    
public:
    Person(string n, int _age, int _height){
        name = n;
        age = new int;
        
        
        height = new int;
        
        copy_depth = new int;
        
        //*name = n;
        *age = _age;
        *height = _height;
        *copy_depth = 0;

    }
    
    Person(){

    }
    
    Person(const Person& other){
        
        age = new int;
        
        
        height = new int;
        
        copy_depth = new int;


        
        
        *age = *other.age;
        *height = *other.height;
        *copy_depth = *other.copy_depth;
        copy_depth ++;
    }
    
    ~Person(){
        delete age, height, copy_depth;
        
        cout << "Deallocated" << endl;
    }
    
    void operator=(const Person& other){
        delete age, height, copy_depth;
        
        age = new int;
        
        
        height = new int;
        
        copy_depth = new int;
        
        
        *age = *other.age;
        *height = *other.height;
        *copy_depth = *other.copy_depth;
    }
    

    
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
