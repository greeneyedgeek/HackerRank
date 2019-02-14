#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
public: 
    string name;
    int age;
    virtual void getdata(){};
    virtual void putdata(){};
};

class Professor : public Person {
private:
    int cur_id;
    int publications;
public:
    static int id;
    Professor(){
        this->cur_id = id;
        id++;
    }

    void getdata(){
        cin >> this->name >> this->age >> this->publications;
    }

    void putdata(){
        cout << this->name << " " 
        << this->age << " "
        << this->publications << " " 
        << this->cur_id << endl;
    } 
};
int Professor::id { 1 };

class Student : public Person {
private:
    int cur_id;
    static int id;
    int marks[6];
public:   
    Student(){
        this->cur_id = id;
        id++;
    }
    
    void getdata(){
        cin >> this->name >> this->age;
        for(int i = 0; i < 6; i++){
            cin >> marks[i];
        }
    }
    void putdata(){
 
        int sum = 0;
        for(int i = 0; i < 6; i++){
            sum += marks[i];
        }
        cout << this->name << " " 
        << this->age << " " 
        << sum << " "
        << this->cur_id << endl;
    }
};
int Student::id { 1 };

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
