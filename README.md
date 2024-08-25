# Multidimensional Arrays
Experiment 8

## AIM
To study and implement 2 Dimensional arrays in C++

## Theory
A 2D array in C++ is essentially an array of arrays. It can be visualized as a table with rows and columns. Each element in a 2D array can be accessed using two indices: the row index and the column index.
The general form for declaring a 2D array is:
dataType arrayName[rowSize][columnSize];
Where dataType is the type of data (e.g., int, float), arrayName is the name of the array, rowSize is the number of rows, and columnSize is the number of columns.

# Declaration and Initialization
Declaration
int matrix[3][4]; // A 2D array with 3 rows and 4 columns
Initialization
You can initialize a 2D array in several ways:
1.	Static Initialization:
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
2.	Dynamic Initialization:
int rows = 2, cols = 3;
int matrix[2][3] = {0}; // Initializes all elements to 0
# Display
To display a 2D array, you can use nested loops to iterate through the rows and columns:
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
}
## Algorithms:
# To 2D array based on user inputs for rows and columns.
1.	Start
2.	Input:
-	Read the number of rows (r) from the user.
-	Read the number of columns (c) from the user.
3.	Array Declaration:
- Declare a 2D array arr with r rows and c columns.
4.	Input Array Elements:
- For each row index i from 0 to r-1:
-	For each column index j from 0 to c-1:
-	Prompt the user to enter the element for position (i+1, j+1).
-	Read the element value and store it in arr[i][j].
5.	Display Array Elements:
-	For each row index i from 0 to r-1:
-	For each column index j from 0 to c-1:
-	Print the element arr[i][j] followed by a space
-	Print a newline after each row is completed to separate rows.
6.	End

To add two matrices and display the result if they have the same dimensions.

1.Start
2.Input Matrix Dimensions:
- Read number of rows r1 for the first matrix.
- Read number of columns c1 for the first matrix.
- Read number of rows r2 for the second matrix.
- Read number of columns c2 for the second matrix.
3.Check Compatibility:
- If r1 is equal to r2 and c1 is equal to c2:
- Proceed to matrix addition.
Else:
- Display message: "Number of rows or columns do not match for matrix addition."
- End
4.Declare Matrices:
- Declare matrix a of size r1 x c1.
- Declare matrix b of size r2 x c2.
- Declare matrix c of size r1 x c1.
- Input Matrix Elements:

5.For each element in matrix a:
- Prompt user to enter the element.
- Read and store the value in a[i][j].
- For each element in matrix b:
- Prompt user to enter the element.
- Read and store the value in b[i][j].
6.Add Matrices:
- for each element c[i][j]:
- Compute c[i][j] = a[i][j] + b[i][j].
- Display Result:
- Display message: "The resultant matrix after addition is:"
- For each element in matrix c:
- Print c[i][j] followed by a space.
- Print a newline character after each row.
7.End

# To multiply two matrices and display the resultant matrix, ensuring that the dimensions of the matrices are compatible for multiplication.
1.Start
2.Read Matrix Dimensions:
- Display: "Enter the number of rows of the first matrix:"
- Read r1 (rows of the first matrix).
- Display: "Enter the number of columns of the first matrix:"
- Read c1 (columns of the first matrix).
- Display: "Enter the number of rows of the second matrix:"
- Read r2 (rows of the second matrix).
- Display: "Enter the number of columns of the second matrix:"
- Read c2 (columns of the second matrix).
3.Check Matrix Multiplication Feasibility:
- If c1 is not equal to r2:
- Display: "Matrix multiplication is not possible."
- End
4.Declare Matrices:
- Declare matrix A of size r1 x c1.
- Declare matrix B of size r2 x c2.
- Declare matrix C of size r1 x c2 and initialize all elements to 0.
5.Input Matrix A:
- Display: "Enter elements of the first matrix:"
- For each element in A, read and store the value.
- Input Matrix B:
- Display: "Enter elements of the second matrix:"
- For each element in B, read and store the value.
6.Multiply Matrices:
- For each element C[i][j] in the resultant matrix:
- Compute the sum of A[i][k] * B[k][j] for k from 0 to c1-1.
7.Display Result:
- Display: "The resultant matrix is:"
- Print each element of C.
8.End

# To compute and display the transpose of a 2D matrix based on user input.
1.Start
2.Input Matrix Dimensions:
- Read number of rows r.
- Read number of columns c.
3.Declare Matrices:
- Declare arr[r][c] for the input matrix.
- Declare Tarr[c][r] for the transposed matrix.
4.Input Matrix Elements:
- For each row index i from 0 to r-1:
- For each column index j from 0 to c-1:
- Read the element and store it in arr[i][j].
5.Display Input Matrix:
- For each row index i from 0 to r-1:
- For each column index j from 0 to c-1:
- Print arr[i][j] followed by a space.
- Print a newline after each row.
6.Compute Transpose:
- For each row index i from 0 to r-1:
- For each column index j from 0 to c-1:
- Set Tarr[j][i] to arr[i][j].
7.Display Transposed Matrix:
- For each row index i from 0 to c-1:
- For each column index j from 0 to r-1:
- Print Tarr[i][j] followed by a space.
- Print a newline after each row.
8.End

# To compute and display the sum of the principal and secondary diagonals of a square matrix based on user input.
1.Start
2.Read Inputs:
- Display "Enter number of rows:"
- Read integer r.
- Display"Enter number of columns:"
- Read integer c.
3.Check Matrix Compatibility:
- If r is not equal to c:
- Display: "rows and columns of Matrix do not match."
- End the program.
4.Initialize:
- Declare matrix arr[r][c].
- Initialize d (sum of principal diagonal) to 0.
- Initialize s (sum of secondary diagonal) to 0.
5. Input Matrix Elements:
- Display"Enter elements of the matrix:"
- For each element at position (i, j):
- Display "Enter element at position (i+1, j+1):"
- Read and store value in arr[i][j].
6.Display Matrix:
- Display: "The array elements are:"
- Print each row of the matrix.
7. Calculate Diagonal Sums:
- For each element:
- If i == j, add arr[i][j] to d (principal diagonal).
- If i + j == r - 1, add arr[i][j] to s (secondary diagonal).
8.Display Results:
- Display sum of the principal diagonal (d).
- Display sum of the secondary diagonal (s).
9.End

## Conclusion:
From This experiment We have learned and understand the 2D arrays declaration,initialization and operations such as addition,diagonal addition,multiplication of two Matrices.

