#include <iostream>

#include "matrix.hpp"

int main() {
    mat::matrix<double> empty_matrix;
    assert(empty_matrix.empty());
    mat::matrix<double> matrix(2, 2, 0);
    mat::matrix<double> id(2, 2, 0);
    id.set(0, 0, 1);
    id.set(1, 1, 1);
    matrix.set(0, 0, 1);
    matrix.set(0, 1, 2);
    matrix.set(1, 0, 3);
    matrix.set(1, 1, 4);
    matrix.print();
    matrix.transpose().print();
    id.print();
    matrix.dot(id).print();
    id.dot(matrix).print();

    (1 + id + 1).print();
    (id + id).print();
    (id - 10).print();
    (id / 2).print();
    (id * 100).print();
    return 0;
}