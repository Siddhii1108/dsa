#include <stdio.h>

int main() {
    int a[50][50], b[50][50], c[50][50], d[50][50], e[50][50];
    int i, j, k, r1, c1, r2, c2;
    int choice;

    // Input for first matrix
    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c1);

    printf("Enter elements in first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The elements of first matrix are:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Input for second matrix
    printf("Enter number of rows of second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c2);

    printf("Enter elements in second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The elements of second matrix are:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    do {
        printf("\nChoose an operation:\n");
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Transpose of First Matrix\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(r1 == r2 && c1 == c2) {
                    for(i = 0; i < r1; i++) {
                        for(j = 0; j < c1; j++) {
                            c[i][j] = a[i][j] + b[i][j];
                        }
                    }

                    printf("Addition of two matrices is:\n");
                    for(i = 0; i < r1; i++) {
                        for(j = 0; j < c1; j++) {
                            printf("%d\t", c[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Addition not possible. Matrices must have same dimensions.\n");
                }
                break;

            case 2:
                if(c1 == r2) {
                    for(i = 0; i < r1; i++) {
                        for(j = 0; j < c2; j++) {
                            d[i][j] = 0;
                            for(k = 0; k < c1; k++) {
                                d[i][j] += a[i][k] * b[k][j];
                            }
                        }
                    }

                    printf("Multiplication of two matrices is:\n");
                    for(i = 0; i < r1; i++) {
                        for(j = 0; j < c2; j++) {
                            printf("%d\t", d[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
                }
                break;

            case 3:
                printf("Transpose of first matrix:\n");
                for(i = 0; i < c1; i++) {
                    for(j = 0; j < r1; j++) {
                        printf("%d\t", a[j][i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}