#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

void reve(string str) 
{ 
   for (int i=str.length()-1; i>=0; i--) 
      cout << str[i];  

} 

int main() {
   char a[] = "hellooooooooo world this is me ";
   char str[1000];
 
   int i = 0, j = 0;
 
 
   while (a[i] != '\0') {
      if (a[i] != ' ') {
         str[j] = a[i];
         j++;
      } else {
         str[j] = '\0';
         reve(str);
         cout <<" ";
         j = 0;
      }
      i++;
   }
 
  
 
return 0;
    
}
