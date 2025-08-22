#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	cout<<"Enter a string : ";
	cin>>str;
	
    int start=0;
    int end = str.length()-1;
    
   while(start<end)
   {
   	if(str[start] != str[end])
	   {
   		cout<<"This is not pallindrome";
   		return 0;
	   }
	else
	   {
        	start++; 
			end--;
	   }
   }
    cout<<"This is pallindrome";
	return 0;
}
