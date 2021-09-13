//
// Created by Kinga on 2021. 09. 08..
//

#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix() {
    cout << "From left to right and up to down write the elements of the matrix:"<<endl;
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; ++j) {
            cin >> array[i][j];
        }
}

void Matrix::display() {
    for (int i = 0; i < 3; i++)
    {
        cout << array[i][0] << " " << array[i][1] << " " << array[i][2] <<endl;
    }
}

void Matrix::multiply_constant(int constant) {
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; ++j) {
            array[i][j] *= constant;
        }
}

void Matrix::addition_matrix(Matrix m) {
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; ++j) {
            array[i][j] += m.array[i][j];
        }
}

void Matrix::subtraction_matrix(Matrix m) {
    for(int i = 0; i < 3; i++)
        for (int j = 0; j < 3; ++j) {
            array[i][j] -= m.array[i][j];
        }
}

void Matrix::multiply_matrix(Matrix n) {
    int plus = 0;
    int help[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            help[i][j] = array[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++) {
            for(int j = 0; j < 3; j++)
            {
                plus += help[i][j] * n.array[j][k];
            }
            array[i][k] = plus;
            plus = 0;
        }
        }

}

