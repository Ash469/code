#include<iostream> 
using namespace std;
class baseClass{
    public:
    int var1;
    void display(){
        cout<<"Display base class variable "<<var1<<endl;
    }
};
class derivedClass:public baseClass{
    public:
    int var2;
    void display(){
        cout<<"Display derived class variable "<<var2<<endl;
    }
};
int main(){
baseClass *base_class_pointer;
baseClass obj1;
derivedClass obj2;
//base_class_pointer=&obj1; //pointing base  class pointer to base class object

base_class_pointer=&obj2;//pointing base  class pointer to derive class object
base_class_pointer->var1=34;
base_class_pointer->display();//object  is of derive class but pointer is base class

//above both pointer calls base class function
//base_class_pointer->var2=34;   // !!!!ERROR because base class doesn't have var2

derivedClass *derived_class_pointer;
//derived_class_pointer=&obj1;  !!!ERROR because it can't point  to base class

derived_class_pointer=&obj2;
derived_class_pointer->var1=80;//this print 50 in derive class always but why?????

//derived_class_pointer->var2=99;
derived_class_pointer->display();
base_class_pointer->display();//this print upadated var1
    return 0;

}