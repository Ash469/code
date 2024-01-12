//syntax:- class B:virtual public A{};
#include<iostream> 
using namespace std;
class student{
   protected:
   int rollno;
   public:
   void setNum(int a){
      rollno=a;
   }
   void printNum(void){
  cout<<"Your Roll No is "<<rollno<<endl;
   }
};
class test:virtual public student{
   protected:
   float maths,physics;
   public:
   void setmarks(float m,float p){
      maths=m;
      physics=p;
   }
   void printMarks(void){
      cout<<"Your Result is here!"<<endl;
      cout<<"maths: "<<maths<<endl;
      cout<<"physics: "<<physics<<endl;
   }
};
class  sports:virtual public student{
protected:
  float score;
  public:
  void setScore(float sc){
   score=sc;
  }
  void printScore(void){
   cout<<"Your PT score is "<<score<<endl;
  }
};
class result:public test,public sports{
private:
 float   total;
 public:
   void display(){
      total=maths+physics+score;
      printNum();
      printMarks();
      printScore();
      cout<<"Your toatl score is:"<<total<<endl;
   }
};

int main(){
   result harry;
   harry.setmarks(78.9,98.5);
   harry.setNum(42);
   harry.setScore(9);
   harry.display();
    return 0;

}