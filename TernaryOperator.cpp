#include <iostream>
using namespace std;


int main() {
    
    int no ;
    cin>>no;
    
    
    no&1 ? cout<<"odd " : cout<<"even";
    
    int x = no%2 ? no*no : no; 
    
    
    
    cout<<x <<endl;
    
    
}
