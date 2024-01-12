//Syntax:- list<data_type> list_name;
//list<int> l = {1, 2, 3, 4};

//Inserting element in  list:-
#include <iostream>
#include <list>
using namespace std;
 
void display(list<int> L){
    cout << "The elements are: ";
    for (auto it : L){
        cout << it << " ";
    }
    cout << endl;
}
 
int main(){
    list<int> L = {1, 2, 3, 4};
    display(L);

    L.push_back(5);
    display(L);

    L.push_front(0);// it doesn't work with vector
    display(L);

    L.insert(L.begin(),9);
    display(L);

    auto it=L.begin();
    it++;
    it++;
    L.insert(it,11);//insert 11 at 3rd  position
    display(L);
    
    L.pop_back();
    display(L);
    L.pop_front();
    display(L);

    auto itc=L.begin();
    itc++;
    itc++;
    L.erase(itc);
    display(L);
}
