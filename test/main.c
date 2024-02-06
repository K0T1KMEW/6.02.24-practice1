#include "matrix.h"

int main() {
    Matrix* matrix = create_matrix(10, 10);
    if (matrix == NULL) {
    printf("all err");
    return 1;
    }
    for (int i = 0; i < matrix->rows; i++) {
        for (int j = 0; j < matrix->cols; j++) {
            set_element(matrix, i, j, i * matrix->cols + j + 1);
        }
    }
    print_matrix(matrix);

    int element = get_element(matrix, 3, 4);
    printf("%d", element);

    free_matrix(matrix);

    return 0;
}
