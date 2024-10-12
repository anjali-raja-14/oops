//wap to make a multiple class
#include<iostream>
using namespace std;

    class myclass //class name is  myclass
    {
        public:
     string name;
     int age;
     int Class;

//mymethods
     void mymethod()
     {
        cout<<"helloworld";
     }
    };

 int main()
 {
    myclass myobj;//name of  object is myobj
    myobj.name=("Yash");
    myobj.age=18;
    myobj.Class=12;

    myclass myobj1;//name of  object is myobj1
    myobj1.name=("falaq");
    myobj1.age=17;
    myobj1.Class=9;
    
    //access class members
 myclass myobj2;
 myobj2.mymethod();
    
    cout<<myobj.name<<" "<<myobj.age<<" "<<myobj.Class<<endl;
    cout<<myobj1.name<<" "<<myobj1.age<<" "<<myobj1.Class;
    return 0;
}