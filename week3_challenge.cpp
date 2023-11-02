/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
 * Implement its member functions below.
 */
 
 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
  
#include <stdio.h>
#include <iostream>
  
class Pair {
  public:
    int *pa,*pb;
    Pair(int, int);
    Pair(const Pair &);
   ~Pair();
};

Pair::Pair(int a, int b){
    // assign heap memory and copy values of arguments
    pa = new int; *pa = a;
    pb = new int; *pb = b;
};
Pair::Pair(const Pair &p){
    // assign heap memory and copy values from passed Pair
    pa = new int; *pa = *(p.pa);
    pb = new int; *pb = *(p.pb);
};
Pair::~Pair(){
    // delete the memory allocated on the heap
    delete pa; pa = nullptr;
    delete pb; pb = nullptr;
};
  
int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;
  
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}
