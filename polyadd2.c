#include <stdio.h>
#include <stdlib.h>

// A utility function to return maximum of two integers
int max(int m, int n) {
    return (m > n) ? m : n;
}

// A[] represents coefficients of first polynomial
// B[] represents coefficients of second polynomial
// m and n are sizes of A[] and B[] respectively
int* add(int A[], int B[], int m, int n)
{
    int size = max(m, n);
    int* sum = (int*)malloc(size * sizeof(int));

    // Initialize the product polynomial
    for (int i = 0; i < m; i++)
        sum[i] = A[i];

    // Take every term of first polynomial
    for (int i = 0; i < n; i++)
        sum[i] += B[i];

    return sum;
}

// A utility function to print a polynomial
void printPoly(int poly[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d", poly[i]);
        if (i != 0)
            printf("x^%d", i);
        if (i != n - 1)
            printf(" + ");
    }
}

// Driver program to test above functions
int main()
{
    // The following array represents polynomial 5 + 10x^2 +
    // 6x^3
    int A[] = { 5, 0, 10, 6 };

    // The following array represents polynomial 1 + 2x +
    // 4x^2
    int B[] = { 1, 2, 4 };
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    printf("First polynomial is \n");
    printPoly(A, m);
    printf("\nSecond polynomial is \n");
    printPoly(B, n);

    int* sum = add(A, B, m, n);
    int size = max(m, n);

    printf("\nSum polynomial is \n");
    printPoly(sum, size);

    return 0;
}