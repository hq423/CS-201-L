#include <iostream> 

#include <fstream> 

using namespace std; 




int main() 

{ 

ifstream in("values.txt"); 

int count; 

in >> count; 

int arr[count]; 

for(int i=0;i<count;i++) 

in>>arr[i]; 




for(int i=0;i<count;i++) 

cout<<arr[i]<<" "; 

cout<<endl; 




int key; 

cout<<"Enter a number to search :"; 

cin>>key; 

for(int i=0;i<count;i++) 

{ 

if(arr[i]==key) 

{ 

cout<<key <<" found at position "<<i+1<<endl; 

return 0; 

} 

} 

cout<<key<<" not found"<<endl; 

return 0; 

} 
