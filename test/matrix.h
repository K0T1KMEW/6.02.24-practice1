#pragma once

typedef struct {
	int* data;
	int rows;
	int cols;
} Matrix;

Matrix* create_matrix(int rows, int cols);

void free_matrix(Matrix* matrix);

int get_element(Matrix* matrix, int row, int col);

void set_element(Matrix* matrix, int row, int col, int value);

void print_matrix(Matrix* matrix);

