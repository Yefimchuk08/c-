#include <iostream>
#include <iomanip>

using namespace std;

void initializeMatrix(int size, int** matrix) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int size, int** matrix) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << setw(5) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void findMinMaxDiagonal(int size, int** matrix, int& min, int& max) {
    min = matrix[0][0];
    max = matrix[0][0];
    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
}

void sortRows(int size, int** matrix) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            for (int k = 0; k < size - j - 1; ++k) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}


//task 2
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

//task 3


void playGame(int secret, int& attempts) {
    int guess;
    cout << "Enter your 4-digit guess: ";
    cin >> guess;

    int bulls = 0, cows = 0;
    int secretDigits[4], guessDigits[4];

    for (int i = 3; i >= 0; --i) {
        secretDigits[i] = secret % 10;
        guessDigits[i] = guess % 10;
        secret /= 10;
        guess /= 10;
    }

    for (int i = 0; i < 4; ++i) {
        if (guessDigits[i] == secretDigits[i]) {
            bulls++;
        }
        else {
            for (int j = 0; j < 4; ++j) {
                if (guessDigits[i] == secretDigits[j]) {
                    cows++;
                }
            }
        }
    }

    cout << "Bulls: " << bulls << ", Cows: " << cows << endl;
    attempts++;

    if (bulls == 4) {
        cout << "You've guessed the number in " << attempts << " attempts!\n";
    }
    else {
        playGame(secret, attempts);
    }
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int** intMatrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        intMatrix[i] = new int[n];
    }

    initializeMatrix(n, intMatrix);
    cout << "Integer Matrix:\n";
    printMatrix(n, intMatrix);

    int intMin, intMax;
    findMinMaxDiagonal(n, intMatrix, intMin, intMax);
    cout << "Min on diagonal: " << intMin << "\nMax on diagonal: " << intMax << endl;

    sortRows(n, intMatrix);
    cout << "Sorted Integer Matrix:\n";
    printMatrix(n, intMatrix);

   
    for (int i = 0; i < n; ++i) {
        delete[] intMatrix[i];
    }
    delete[] intMatrix;

    // task 2
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    

    // task 3
    srand(time(0));
    int secret = rand() % 9000 + 1000; 
    int attempts = 0;

    cout << "Welcome to Bulls and Cows Game!\n";
    playGame(secret, attempts);

}
