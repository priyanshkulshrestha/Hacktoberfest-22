#include<iostream>
using namespace std;

// Implementation of Encaptculation 
class Hero
{
    private:
    int data = 10;

    public:
    int GetData(){
        return data;
    }
};

// Implementation of Inheritance
class Human{
    public:
    int height;
    int weight=10;
    int color;
    public:
    int getWeight(){
        return weight;
    }
};

class Male: public Human{
    public:
    int Inteligency;

    void sleep() {
        cout<<"more sleep"<<endl;
    }

};

// Inheritance table 

// Base Class access modifier   |   Public      |   Protected   |   Private |
//          public              |   Public      |   Protected   |   Private |
//          Protected           |   Protected   |   Protected   |   Private |
//          private             |     N.A.      |      N.A.     |     N.A.  |

int main()
{
    Hero h1;
    cout<<h1.GetData();

    Male m1;
    cout<<m1.weight<<endl;
    cout<<m1.height<<endl;
    cout<<m1.color<<endl;
    cout<<m1.Inteligency<<endl;


    return 0;
}