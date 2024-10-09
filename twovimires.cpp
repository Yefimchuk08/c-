#include <iostream>
using namespace std;

void addColumn(int**& matrix, int rows, int& cols, int position, int* newColumn) {
    if (position < 0 || position > cols) {
        cout << "Invalid position" << endl;
        return;
    }

   
    int** newMatrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        newMatrix[i] = new int[cols + 1];
        for (int j = 0; j < position; ++j) {
            newMatrix[i][j] = matrix[i][j];
        }
        newMatrix[i][position] = newColumn[i];  
        for (int j = position; j < cols; ++j) {
            newMatrix[i][j + 1] = matrix[i][j];
        }
    }


    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    
    matrix = newMatrix;
    cols++;
}

void shiftRows(int** matrix, int rows, int cols, int shifts, bool toRight) {
    shifts %= rows;  

    for (int s = 0; s < shifts; ++s) {
        if (toRight) {
            int* temp = matrix[rows - 1];
            for (int i = rows - 1; i > 0; --i) {
                matrix[i] = matrix[i - 1];
            }
            matrix[0] = temp;
        }
        else {
            int* temp = matrix[0];
            for (int i = 0; i < rows - 1; ++i) {
                matrix[i] = matrix[i + 1];
            }
            matrix[rows - 1] = temp;
        }
    }
}

void shiftColumns(int** matrix, int rows, int cols, int shifts, bool toDown) {
    shifts %= cols;  

    for (int s = 0; s < shifts; ++s) {
        if (toDown) {
            for (int i = 0; i < rows; ++i) {
                int temp = matrix[i][cols - 1];
                for (int j = cols - 1; j > 0; --j) {
                    matrix[i][j] = matrix[i][j - 1];
                }
                matrix[i][0] = temp;
            }
        }
        else {
            for (int i = 0; i < rows; ++i) {
                int temp = matrix[i][0];
                for (int j = 0; j < cols - 1; ++j) {
                    matrix[i][j] = matrix[i][j + 1];
                }
                matrix[i][cols - 1] = temp;
            }
        }
    }
}


void removeColumn(int**& matrix, int rows, int& cols, int columnIndex) {
    if (columnIndex < 0 || columnIndex >= cols) {
        cout << "Invalid column index" << endl;
        return;
    }


    int** newMatrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        newMatrix[i] = new int[cols - 1];
        for (int j = 0; j < columnIndex; ++j) {
            newMatrix[i][j] = matrix[i][j];
        }
        for (int j = columnIndex + 1; j < cols; ++j) {
            newMatrix[i][j - 1] = matrix[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

  
    matrix = newMatrix;
    cols--;
}
int main() {
    int rows = 3, cols = 3;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols] {i* cols + 1, i* cols + 2, i* cols + 3};
    }

    int newColumn[] = { 10, 11, 12 };
    int position = 1;

    addColumn(matrix, rows, cols, position, newColumn);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;




    //task 2
    int rows = 3, cols = 3;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols] {i* cols + 1, i* cols + 2, i* cols + 3};
    }

    int columnIndex = 1;
    removeColumn(matrix, rows, cols, columnIndex);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

 
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

   //task 3
    int rows = 3, cols = 4;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols] {i* cols + 1, i* cols + 2, i* cols + 3, i* cols + 4};
    }

    int rowShifts = 1;
    int colShifts = 1;
    bool shiftRowsRight = true;
    bool shiftColsDown = false;

    shiftRows(matrix, rows, cols, rowShifts, shiftRowsRight);
    shiftColumns(matrix, rows, cols, colShifts, shiftColsDown);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

}

