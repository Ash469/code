/*Syntax:-
template <class T1, class T2>
data_type function_name(T1 a, T2 b)
{
    //function body
}*/
#include <iostream>
using namespace std;
 
template <class T1, class T2>
float findAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
 
int main()
{
    int n1;
    float n2;
    cout<<"Enter Your Number"<<endl;
    cin>>n1>>n2;

    float avg = findAverage(n1, n2);
    cout << avg << endl;
}
                    