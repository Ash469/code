/*Syntax:-
template<class T>//T can be int,float,char,double
class vector{
    T*arr;
    public:
};*/

#include<iostream> 
using namespace std;
template<class T>
class vector{
    public:
    T*arr;
    int size;
    vector(int m){
        size=m;
        arr=new T[size];//creating new array with data type T
    }
    T dotProduct(vector &v){     //read T as int,char,float.
        T d=0;                
        for (int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];//without this also works
        }
        return d;
    }
};
int main(){
   vector<float> v1(3);// int in place of float gives error in dotproduct
   v1.arr[0]=1;
   v1.arr[1]=2;
   v1.arr[2]=3;
   vector<float> v2(3);
   v2.arr[0]=1.1;
   v2.arr[1]=2.2;
   v2.arr[2]=3.3;
   float a=v2.dotProduct(v1);
   cout<<a<<endl;

    return 0;

}
/*
#include<iostream> 
using namespace std;
template<class t1,class t2>
class myclass{
    public:
    t1 data1;
    t2 data2;
    void display(){
        cout<<this->data1<<this->data2<<endl;//without this also works
    }
    myclass(t1 a,t2 b):data1(a),data2(b){}//initalization list
};
int main(){
   myclass<int,char>obj(1,'c');
   obj.display();
    return 0;

}*/