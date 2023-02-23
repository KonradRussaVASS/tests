#include <iostream>
#include <assert.h>
int main() {
    int i = 1;
    int *j = &i; //pointer, is a variable that stores the memory address as its value.
    int &k = i; //reference, reference operator (&)
    int **l = &j; //pointer to pointer
    int &&m = i + k; //rvalue reference c++11

    // * is used in declaration (string *ptr, string* ptr), it creates a pointer variable.
    // * not used in declaration, it act as a dereference operator.
    
    std::cout << "i = " << i << " &i = " << &i << std::endl;
    std::cout << "j = " << j << " &j = " << &j << " *j = " << *j << std::endl;
    std::cout << "k = " << k << " &k = " << &k << std::endl;
    std::cout << "l = " << l << " &l = " << &l << " *l = " << *l << " **l = " << **l << std::endl;
    std::cout << "m = " << m << " &m = " << std::endl;
    assert(j == &i);
    assert(*j == i);
    assert(k == i);
    assert(&k == &i);
    assert(l == &j);
    assert(*l == &i);
    assert(**l == i);
    assert(m == i + k);
}
/*
int i = 1;      i = 1 &i = 0xfd915ffdc4
int *j = &i;    j = 0xfd915ffdc4 &j = 0x50c2dff9e8 *j = 1
int &k = i;     k = 1 &k = 0xfd915ffdc4
int **l = &j;   l = 0x50c2dff9e8 &l = 0x50c2dff9e0 *l = 0x50c2dff9f4 **l = 1
m = 2 &m =
*/
