#include <iostream>

using namespace std;


     void convert(int x){ 

      int y;
      int digit=0;
      int a=10;
        
        
     y=x;

    while(x/10>1){

        digit++;
        
        x=x/10;

    }
      //digit;


    cout << "number of digits in your number is: " << digit+1 <<endl; // Display the input value 

    int* array = new int[digit];

     cout<<"Your digits: "<<endl;
     
     //(int i=digit; i>=0; i--)
     for(int i=0; i<=digit; i++){
            
            array[digit-i]=y%10;
            //cout<<array[i]<<endl;
            y=y/10;
     }

     cout<<"Output cycle - Your digits: "<<endl;

     for(int i=0; i<=digit; i++){
            
          cout<<array[i]<<endl;
            
     }

      delete[] array;

     
     //system("PAUSE");

     
     }