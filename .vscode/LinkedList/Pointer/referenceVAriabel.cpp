#include<iostream>
using namespace std;
int* solve()
{
int a=5;
int *ans=&a;
return ans;
}
int main()
{
    //Same Memory Location Difference Name
    //why reference-
    /*
    you can not set reference with null value
    pointer is to much difficult to understand 
    whereas reference variable have good readability
    
    */
   // int  a=6;
   //num(a);
   // int& b=a;//bar bar is syntax ko galat likhoge  
    //cout<<a<<endl;
  //  int a=solve(int);
//cout<<a;
///return 0;

//};
 /*

#include <iostream>
using namespace std;

int* solve() {
    int* ans = new int; // Allocate memory on the heap
    *ans = 5; // Assign value to the allocated memory
    return ans;
}

int main() {
    /*
    int* ptr = solve(); // Call solve() and get the pointer
    cout << *ptr << endl; // Dereference the pointer to get the value

    delete ptr; // Free the allocated memory
    *//*
   char b[]="XYZ";
   char *c=&b[0];
   cout<<*c<<endl;
   */
  int ***r,**q,*p,i=8;
  p=&i;
  (*p)++;
  q=&p;
  (**q)++;r=&q;
  cout<<*p<<" "<<**q<<" "<<***r;
    return 0;
}
