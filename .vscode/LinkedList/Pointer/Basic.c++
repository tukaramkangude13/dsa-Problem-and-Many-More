 #include<iostream>
 using namespace std;
 void solve(int arr[])
 {
   cout<<"size inside solve function"<<sizeof(arr)<<endl;
   arr[0]=50;
 }
 int util(int* p)
{
   p=p+1;
}
 int main()

 {
   /*
    int a=5;
    cout<<a<<endl;
    cout<<&a<<endl;
    int arr[4]={10,20,30,40};
    int i=0;
    cout<<arr<<endl;//arr||&arr||arr[0]=all are the equal address
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl; 
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl; 
    cout<<arr[i]<<endl;
    cout<<arr[i]<<endl;
    cout<<i [arr] <<endl;/*why this work
    in memory this equation always solved in this form=*(I+arr)that why i's work
    */
   //diffrence between arrays &pointer-
   /*
   arr[10] this is the simple array that why answer is will be come-40 byte but in the pointer arry ans will be come int * p=arr; 8 bytes
   */
    //in array you can not  update the value only print the value 
    //arr is constant pointer you can   not change value of symbol tabel 
    //cout is diffrent for array (pointer)&&& for character ch(pointer)
   // cout<<*(arr + i)<<endl;
    //cout<<*(i+arr)<<endl;
    //strings
    //char name[10]='sherbano';
    
    //cout<<
//function 
/*
int arrr[10]={1,2,3,4};
cout<<"size inside main function. "<<sizeof(arrr)<<
endl;
//printing array inside main
for(int i=0;i<10;i++)
{
   cout<<arr[i]<<" "<<endl;

}  cout<<endl;
cout<<"now Calling Main function me aagye h "<<endl;

solve(arr);
cout<<"wapas main function me aaye h"<<endl;
for(int i=0;i<10;i++)
{
   cout<<arr[i]<<" "<<endl
   ;
}cout<<endl;
*/
/*
int a=5;
int* p=&a;
int** q=&p;
cout<<&a<<endl;
cout<<a<<endl;
cout<<p<<endl;
cout<<&p<<endl;
cout<<*p<<endl;
cout<<q<<endl;
cout<<&q<<endl;
cout<<*q<<endl; 
cout<<**q<<endl;
*/
/*
int a=5;
int*p=&a;
cout<<"before"<<endl;
cout<<a<<endl;
cout<<p<<endl;
cout<<*p<<endl;
util(p);
cout<<"after"<<endl;
cout<<a<<endl;
cout<<p<<endl;*/
// one of the confusion topic in the pointer


    return 0;
 }  