/*
 Created by: Kinga Plell
 Description: Operations with Matrixes
 */

#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    Matrix m;
    int number = 2;
    Matrix n;

    m.multiply_constant(number);
    m.display();
    m.multiply_matrix(n);
    m.display();
}