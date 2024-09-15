#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	//srand(time(NULL));

	//const int NUM_COUNT = 10;
	//int randomnumbers[NUM_COUNT];

	//for (int i = 0; i < NUM_COUNT; ++i)
	//{
	//	randomnumbers[i] = rand() % 100;
	//}
	//cout << "Numbers ";
	//for (int i = 0; i < NUM_COUNT; ++i) {
	//	cout << randomnumbers[i] << " ";
	//}
	//cout << endl;
	//int minValue = randomnumbers[0];
	//for (int i = 1; i < NUM_COUNT; ++i) {
	//	if (randomnumbers[i] < minValue) {
	//		minValue = randomnumbers[i];
	//	}
	//}
	//cout << "Min numb: " <<  minValue << endl;

	//int maxValue = randomnumbers[0];
	//for (int i = 1; i < NUM_COUNT; ++i) {
	//	if (randomnumbers[i] > maxValue) {
	//		maxValue = randomnumbers[i];
	//	}
	//}
	//cout << "Max numb: " << maxValue << endl;

    //int january, february, march, april, may, june, july, august, september, october, november, december;

    //cout << "Enter salary in January: ";
    //cin >> january;
    //cout << "Enter salary in February: ";
    //cin >> february;
    //cout << "Enter salary in March: ";
    //cin >> march;
    //cout << "Enter salary in April: ";
    //cin >> april;
    //cout << "Enter salary in May: ";
    //cin >> may;
    //cout << "Enter salary in June: ";
    //cin >> june;
    //cout << "Enter salary in July: ";
    //cin >> july;
    //cout << "Enter salary in August: ";
    //cin >> august;
    //cout << "Enter salary in September: ";
    //cin >> september;
    //cout << "Enter salary in October: ";
    //cin >> october;
    //cout << "Enter salary in November: ";
    //cin >> november;
    //cout << "Enter salary in December: ";
    //cin >> december;
    //int salary[]{ january, february, march, april, may, june, july, august, september, october, november, december };

    //int a, b;
    //cout << "Enter start of diapazone (1-12): ";
    //cin >> a;
    //cout << "Enter finish of diapazone (1-12): ";
    //cin >> b;

  
    //if (a < 1 || a > 12 || b < 1 || b > 12 || a > b) {
    //    cout << "Invalid range!" << endl;
    //}
    //a -= 1;
    //b -= 1;
    //int minSalary = salary[a];
    //int maxSalary = salary[a];
    //for (int i = a; i <= b; ++i) {
    //    if (salary[i] < minSalary) {
    //        minSalary = salary[i];
    //    }
    //}
    //for (int i = a; i <= b; ++i) {
    //    if (salary[i] > maxSalary) {
    //        maxSalary = salary[i];
    //    }
    //}
    //cout << "Min salary in diapazone from " << a + 1 << " to " << b + 1 << " is " << minSalary << endl;
    //cout << "Max salary in diapazone from " << a + 1 << " to " << b + 1 << " is " << maxSalary << endl;


    //int N;
    //cout << "Введіть кількість елементів масиву: ";
    //cin >> N;

    //double array[100];
    //cout << "Введіть елементи масиву:";
    //for (int i = 0; i < N; ++i) {
    //    cin >> array[i];
    //}
    //double sumNegative = 0;
    //for (int i = 0; i < N; ++i) {
    //    if (array[i] < 0) {
    //        sumNegative += array[i];
    //    }
    //}
    //int minIndex = 0, maxIndex = 0;
    //for (int i = 1; i < N; ++i) {
    //    if (array[i] < array[minIndex]) minIndex = i;
    //    if (array[i] > array[maxIndex]) maxIndex = i;
    //}

    //double productBetweenMinMax = 1;
    //if (minIndex > maxIndex) {
    //    swap(minIndex, maxIndex);
    //}
    //for (int i = minIndex + 1; i < maxIndex; ++i) {
    //    productBetweenMinMax *= array[i];
    //}
    //double productEvenIndex = 1;
    //for (int i = 0; i < N; i += 2) {
    //    productEvenIndex *= array[i];
    //}
    //int firstNegativeIndex = -1, lastNegativeIndex = -1;
    //for (int i = 0; i < N; ++i) {
    //    if (array[i] < 0) {
    //        if (firstNegativeIndex == -1) {
    //            firstNegativeIndex = i;
    //        }
    //        lastNegativeIndex = i;
    //    }
    //}

    //double sumBetweenNegatives = 0;
    //if (firstNegativeIndex != -1 && lastNegativeIndex != -1 && firstNegativeIndex < lastNegativeIndex) {
    //    for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; ++i) {
    //        sumBetweenNegatives += array[i];
    //    }
    //}
    //cout << "Сума від'ємних елементів: " << sumNegative << endl;
    //cout << "Добуток елементів між мінімальним і максимальним елементами: " << productBetweenMinMax << endl;
    //cout << "Добуток елементів з парними номерами: " << productEvenIndex << endl;
    //if (firstNegativeIndex != -1 && lastNegativeIndex != -1) {
    //    cout << "Сума елементів між першим і останнім від'ємними елементами: " << sumBetweenNegatives << endl;
    //}
    //else {
    //    cout << "Немає від'ємних елементів або вони занадто близько один до одного для обчислення суми.\n";
    //}

}