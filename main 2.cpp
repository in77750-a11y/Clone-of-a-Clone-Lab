//
//  main.cpp
//  Clone of a Clone Lab
//
//  Created by Andres Vizoso on 4/28/26.
//

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double distortValue(double original, double maxPercent) {
    double variation = original * maxPercent * ((rand() % 100 - 50) / 100.0);
    return original + variation;
}



class MyPerson {
private:
    string name;
    int age;
    int height;
    int copy_depth;
    int clone_num;
public:
    
    
    MyPerson(string n, int _age, int _height){
        name = n;
        age = _age;
        height = _height;
        copy_depth = 0;
        clone_num = 0;
        
    }
    
    void distortion(){
        
    }
    
    // Copy Constructor
    MyPerson(const MyPerson &other) {
        
        copy_depth = other.copy_depth;
        copy_depth++;
        double defectProbability = 0.10 * copy_depth;
                
                // Generate random number between 0.0 and 1.0
                double randomValue = (double)rand() / RAND_MAX;

                if (randomValue < defectProbability) {
                    // Mutation occurred!
                    name = "Broken_" + other.name;
                    age = other.age + (rand() % 10 - 5); // Age shifts slightly
                    height = other.height * 0.9;         // Height shrinks
                    cout << "[MUTATION] Clone " << copy_depth << " failed." << endl;
                }
                else {
        
            name = other.name;
            age = other.age;
            height = other.height;
            
            clone_num++;
                        }
        
        
        
        
    }
    
    void print_COPY(){
        clone_num = copy_depth;
        

        
        if(copy_depth > 0){
            cout << "Hello, My name is " << name + "_Clone_" << clone_num << ". I am " << age << " years old and my height is " << height << "." << endl;
            
            cout << "copy depth: " << copy_depth << endl;
        }
        
        else{
            cout << "Hello, My name is " << name << ". I am " << age << " years old and my height is " << height << "." << endl;
                    
                    cout << "copy depth: " << copy_depth << endl;
        }
        
        
    }
};




int main() {
    
    srand(time(nullptr));
    
    
    MyPerson p1 = MyPerson("Hailey", 14, 5);
    MyPerson p2 = p1;
    MyPerson p3 = p2;
    MyPerson p4 = p3;
    MyPerson p5 = p4;
    MyPerson p6 = p5;
    
    p1.print_COPY();
    cout << endl;
    p2.print_COPY();
    cout << endl;
    p3.print_COPY();
    cout << endl;
    
    p4.print_COPY();
    cout << endl;
    
    p5.print_COPY();
    cout << endl;
    
    p6.print_COPY();
    cout << endl;
    
    
    
//    Person p1 = Person("Hailey", 14, 5);
//    
//    Person p2 = p1;
//    
//    p1.print();
//    cout << endl;
//    p2.print();
    
    
    
}
