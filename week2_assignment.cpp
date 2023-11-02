#include <stdio.h>
#include <iostream>
using namespace std;

/*
using namespace std;

class Pair{
  public:
    float Pair;
    int a,b;
    int sum() {
      return (a+b);
    }
};
*/

/*
int main()
{
  int *p;       //declare a pointer
  p = new int;  //allocate a new integer memory in heap
  *p = 0;       //the pointer is derefernced and the object pointed to by the pointer is assigned with the value 0
  return 0;
}
*/

int *allocate_an_integer() {
  int i = 0; //declared on stack memory
  return &i;
}
int main() {
  int *j;
  j = allocate_an_integer();
  int k = *j;
  cout << k << endl;
  return 0;
}
