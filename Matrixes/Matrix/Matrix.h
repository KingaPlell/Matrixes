//
// Created by Kinga on 2021. 09. 08..
//

#ifndef OOP_MATRIX_H
#define OOP_MATRIX_H


class Matrix {
public:
    Matrix();
    int array[3][3];
    void display();
    void multiply_constant(int constant);
    void addition_matrix(Matrix m);
    void subtraction_matrix(Matrix m);
    void multiply_matrix(Matrix m);
};


#endif //OOP_MATRIX_H
