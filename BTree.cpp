#include "Btree.hpp"
int main()
{
    // Construct a BTree of order 3, which stores int data
    BTree<int, 3> t1;
    t1.Insert(1);
    t1.Insert(5);
    t1.Insert(0);
    t1.Insert(4);
    t1.Insert(3);
    t1.Insert(2);
    t1.Print(); // Expected Output:
    /*
    1,4
    0
    2,3
    5
    */

    BTree<char, 5> t; // Construct a BTree of order 5, which stores char data
    t.Insert('G');
    t.Insert('I');
    t.Insert('B');
    t.Insert('J');
    t.Insert('C');
    t.Insert('A');
    t.Insert('K');
    t.Insert('E');
    t.Insert('D');
    t.Insert('S');
    t.Insert('T');
    t.Insert('R');
    t.Insert('L');
    t.Insert('F');
    t.Insert('H');
    t.Insert('M');
    t.Insert('N');
    t.Insert('P');
    t.Insert('Q');
    t.Print(); // Expected Output:
    /*
    K
    C,G
    A,B
    D,E,F
    H,I,J
    N,R
    L,M
    P,Q
    S,T
    */
    BTree<int, 3> t3;
    t3.Insert(10);
    t3.Insert(5);
    t3.Insert(20);
    t3.Insert(6);
    t3.Insert(12);
    t3.Insert(30);
    t3.Insert(7);
    t3.Insert(17);
    t3.Print();
    return 0;
}
