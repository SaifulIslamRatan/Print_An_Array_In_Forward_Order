///...Topic: Print_An_Array_In_Forward_Order...///
///Like:Array:[1,2,3]
/*
1
2
3
*/
#include <iostream>

using namespace std;
void Print_An_Array_In_Forward_Order(int Array[], int Size){
     if(Size==1){
          cout<< Array[0]<<endl;
     }

     else{
          int My_Part = Array[Size-1];
          Print_An_Array_In_Forward_Order(Array,Size-1);
          cout << My_Part << endl;
          }
}
int main() ///My_CEO
{
    int Array[]={1,2,3,4,5};
    Print_An_Array_In_Forward_Order(Array,5);
    return 0;
}
