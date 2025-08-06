#include <iostream>
using namespace std;
  

int main(){
    int number ;
    cout<<"please enter your number:";
    cin>>number;

 if(number < 0){

   number = -number;
 }
   int sum = 0;

  while(number>0){
    int digit = number % 10;
    sum +=digit;
    number = number/10;
}
   cout<<"sum of digits:"<<sum<<endl;

return 0;
}
