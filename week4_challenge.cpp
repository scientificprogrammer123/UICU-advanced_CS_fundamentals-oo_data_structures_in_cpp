 #include <stdio.h>
 #include <iostream>

/* Class Pair has already been
 * declared and defined with the
 * following constructor:

Pair(int,int);
*/

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

 /*
 * that stores its two arguments in
 * two private member variables of Pair.
 *
 * Class sumPair has also already been
 * defined as follows:
 */
 

class sumPair : public Pair {
  public:
  int sum;
  sumPair(int,int);
};
 /* 
 * Implement the constructor
 * sumPair(int,int) such that it
 * loads the two member variables of
 * the base Pair class with its
 * arguments, and initializes the
 * member variable sum with their sum.
 */

//The required definition is

sumPair::sumPair(int a, int b) : Pair(a, b){
  sum = a + b;
}


/* Below is a main() function
 * you can use to test your
 * implementation of the
 * sumPair constructor.
 */
 
int main() {
  sumPair sp(15,16);
  std::cout << "sp(15,16).sum =" << sp.sum << std::endl;
  return 0;
}
