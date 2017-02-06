#include <iostream>
using namespace std;

int main()
{
	int a[10][10], b[10][10], mult[10][10], row1, col1, row2, col2, i, j, k;

	cout << "Enter rows and columns for Matrix 1: ";
	cin >> row1 >> col1;
	cout << "Enter rows and columns for Matrix 2: ";
	cin >> row2 >> col2;

	// Check if matrices can be multiplied
	while (col1 != row2)
	{
		cout << "Error -- Columns of first matrix do not equal the rows of the second";

		cout << "Enter rows and columns for Matrix 1: ";
		cin >> row1 >> col1;

		cout << "Enter rows and columns for Matrix 2: ";
		cin >> row2 >> col2;
	}

	// Storing elements of Matrix 1
	cout << endl << "Enter elements of Matrix 1: " << endl;
	for (i = 0; i < row1; ++i)
	for (j = 0; j < col1; ++j)
	{
		cout << "Enter element A" << i + 1 << j + 1 << " : ";
		cin >> a[i][j];
	}

	// Storing elements of Matrix 2
	cout << endl << "Enter elements of Matrix 2: " << endl;
	for (i = 0; i < row2; ++i)
	for (j = 0; j < col2; ++j)
	{
		cout << "Enter element B" << i + 1 << j + 1 << " : ";
		cin >> b[i][j];
	}

	// Initializing elements of matrix to multiply zero
	for (i = 0; i < row1; ++i)
	for (j = 0; j < col2; ++j)
	{
		mult[i][j] = 0;
	}

	// Multiplying Matrix 1 and 2 and storing in array mult
	for (i = 0; i < row1; ++i)
	for (j = 0; j < col2; ++j)
	for (k = 0; k < col1; ++k)
	{
		mult[i][j] += a[i][k] * b[k][j];
	}

	// Displaying the multiplication of two matrix
	cout << endl << "Output Matrix: " << endl;
	for (i = 0; i < row1; ++i)
	for (j = 0; j < col2; ++j)
	{
		cout << " " << mult[i][j];
		if (j == col2 - 1)
			cout << endl;
	}
	return 0;
}