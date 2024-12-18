#include <iostream>
#include <cmath>
#include "lucky.hpp"
using namespace std;



int main()
{
    int n;
    cin >> n;
    
    int ** A = create_and_fill_array(n);
    print_array(A, n);
    
    if (has_identical_columns(A, n) && has_prime_element(A,n))
        sort_array(A,n);
    
    print_array(A,n);    
    delete_array(A, n);
    return 0;
}
