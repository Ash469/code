#include<iostream> 
using namespace std;
class  employee{       //Base Class
    public:
    int id;
    float salary;
    employee(int empid){  //constructor
        id =empid;
        salary=43.0;
    }
    void details(){
 cout<<"Employee Id: "<<id<<endl;
   cout<<"Employee Salary: "<<salary<<endl;
    }
    employee(){}  //default constructor
};
class programmer:public employee{   //deerived class:visibility mode base  class 
public:
programmer(int empid){
    id=empid;
}
int languageCode=9;
};
int main(){
   employee ayush(1),ashish(2);
  ayush.details();
  ashish.details(); 
   programmer  skillF(10);
   skillF.salary=38.0;
   skillF.details();
   cout<<"language code: "<<skillF.languageCode<<endl;
    return 0;

}
/*notes:- protected are private members which can be derived.
                    public      private     protected
        private     not derive  not derive   not derive
        protected   protected    private     protected
         public      public      private      protected */