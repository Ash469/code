#include <iostream>
#include <map>
using namespace std;
 
void display(map<string, int> m){
    cout << "The elements are: " << endl;
    for (auto it : m){
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;
}
 
int main(){
    //initalising map
    map<string, int> m = {{"Harry", 2}, {"Rohan", 4}};
    display(m);
    m["Coder"] = 3;
    display(m);

m.insert({{"Ayush", 7}, {"Rahul", 5}});
display(m);

m["Ayush"]=1;
display(m);

m.erase("Rohan");
display(m);

}
