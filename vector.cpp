// SYNTAX:-  vector<data_type> vector_name;
// Initalising a vector:- 
//vector<int> v(1, 2, 3, 4);

//Inserting element in vector
#include <iostream>
#include <vector>
using namespace std;
 void display(vector<int> v){
    cout << "The elements are: "<<endl;
    for (auto it : v){      //??????
        cout << it << " ";
    }
    cout << endl;
}
 
int main(){
    vector<int> v = {1, 2, 3, 4};
    display(v);
    
    v.push_back(5); //5 is inserted at the back
    display(v);

    //Another method to inesrt a number 
    // vector_name.insert(iterator, element);
    v.insert(v.begin(),8);
     display(v);

     auto it=v.begin();
    it++;
    it++;
    v.insert(it,11);//insert 11 at 3rd  pos
    display(v);

    v.pop_back();
    display(v);

    cout<<"Element at index 2 is "<<v.at(2)<<endl;
    
    v.erase(v.begin());
    display(v);
    
   // display(v);
}
