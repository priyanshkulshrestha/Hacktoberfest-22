#include<bits/stdc++.h>
using namespace std;

// class
class Hero{
private:
    int level;

public:
    static int timeToComplete; // static data members can access without object
    static int getStaticData(){
        return timeToComplete; // in static function we can only use static datamembers
    }
    char name[100];
    int health;
    int val;

    //geter
    int getLevel(){
        return level;
    }
    //seter
    void setLevel(int val){
        level=val;
    }

    // CONSTRUCTOR 
    // when we instentiate an object then a default constuctor is called that has noo return type & no input parameter

    // we can re construct constructor and it will be called when we create an object
    // Non-parameterized Constructor
    Hero() {
        cout<<"constructor called\n";
    }

    // Parameterized Constructor
    Hero(int level){
        cout<<"this -> "<<this<<endl;
        //this keyword stores the address of object
        //so this.level is level of object and level is passed value in constructor
        this->level = level;
    }

    // we can create multiple parameterizd constructor
    Hero(int level, int x){
        this->level = level + x;
    }

    // We can also create COPY CONSTRUCTOR like this 
    // when we write our copy constructor then normal copy constructor will be deleted as default constructor
    // writing own copy constructor is better because default copy constructor create a shallow copy not deep copy
    Hero (Hero& temp){
        cout<<"COPY CONSTRUCTOR CALLED";
        this->health = temp.health;
        this->level = temp.level;
    }
    ~Hero(){
        cout<<"Destructor called";
    }
};
int Hero::timeToComplete = 5; // this is a static data member of class and that does not depend on object

int main()
{
    // WE can directly call static data members
    cout<<Hero::timeToComplete;
    cout<<Hero::getStaticData(); // static function is called
    //Hero class object
    Hero h1; // STATIC OBJECT Insatentiate
    h1.val = 10;
    cout<<h1.val<<endl;
    cout<<sizeof(h1)<<endl; //  padding and greedy alignment
    h1.setLevel(10);
    cout<<h1.getLevel()<<endl; //using dot operator

    // DYNAMICALLY OBJECT CREATION
    Hero *h2 = new Hero;
    (*h2).val = 10;
    //using derefrencing operator
    cout<<(*h2).val<<endl;
 z     (*h2).setLevel(10);
    cout<<(*h2).getLevel()<<endl;

    cout<<h2->val<<endl; //using -> operator
    h2->setLevel(10);
    cout<<h2->getLevel()<<endl;

    // CALLING PARAMETERIZED Constructor 
    Hero h3(10);
    cout<<"Address of h3 object: "<<&h3;
    h3.getLevel();

    // Multiple parameterized constructor
    Hero h3(10,20);
    cout<<"Address of h3 object: "<<&h3;
    h3.getLevel();

    //COPY Constructor
    Hero h4(h3);// this will copy all the things of h3 into h4

    // copy assignment operator
    Hero hnew;
    hnew.setLevel(10);
    hnew.val;

    hnew = h1; //change all the values of hnew with the value of h1


    // DESTRUCTOR 
        // It is same as constructor and called when scope of object ends 

    //Static object
    Hero StaticObject;

    //Dynamic object
    Hero *DynamicObject = new Hero(); // for dynamic object we have to call destructor manually doesnot call itself as in case of static
    delete DynamicObject;   


    return 0;
}