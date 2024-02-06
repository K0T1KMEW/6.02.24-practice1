#include "matrix.h"
#include <stdio.h>
#include <malloc.h>

Matrix* create_matrix(int rows, int cols) {
    Matrix* matrix = malloc(sizeof(Matrix));
    if (matrix != NULL) {
        matrix->data = malloc(rows * cols * sizeof(int));
        matrix->rows = rows;
        matrix->cols = cols;
    }
    return matrix;
}

void free_matrix(Matrix* matrix) {
    if (matrix != NULL) {
        free(matrix->data);
        free(matrix);
    }
}

int get_element(Matrix* matrix, int row, int col) {
    if (row < 0 || row >= matrix->rows || col < 0 || col >= matrix->cols) {
        return -1;
    }
    if (matrix != NULL) {
        int index = row * matrix->cols + col;
        return matrix->data[index];
    }
}

void set_element(Matrix* matrix, int row, int col, int value) {
    if (row < 0 || row >= matrix->rows || col < 0 || col >= matrix->cols) {
        return;
    }

    if (matrix != NULL) {
        int index = row * matrix->cols + col;
        matrix->data[index] = value;
    }
}

void print_matrix(Matrix* matrix) {
    if (matrix != NULL) {
        for (int i = 0; i < matrix->rows; i++) {
            for (int j = 0; j < matrix->cols; j++) {
                printf("%d ", get_element(matrix, i, j));
            }
            printf("\n");
        }
    }
}
