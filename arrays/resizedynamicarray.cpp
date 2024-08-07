#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int*arr=new int[size] {10,20,30,40,50};
    cout<<"original array";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;

   int newSize =10;
   int*newArr=new int[newSize];

   copy(arr,arr+size,newArr);
   delete [] arr;
   arr=newArr;

    cout<<"Resized array";
    for(int i=0;i<newSize;i++){
        cout<<newArr[i]<<" ";

    }
    cout<<endl;
    return 0;



}