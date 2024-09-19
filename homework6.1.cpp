#include <iostream>
using namespace std;


//int range(int a, int b)
//{
//	return pow(a, b);
//}



//void Sum(int start, int finish)
//{
//	int sum = 0;
//	for (int i = start; i <= finish; i++)
//	{
//		sum += i;
//	}
//	cout << sum << endl;
//}

//void Doskonal(int a)
//{
//    int sum = 0;
//    for (int i = 1; i < a; i++) 
//    {
//        if (a % i == 0)
//        {
//            sum += i;
//        }
//    }
//    if (sum == a)
//    {
//        cout << "Yes" << endl;
//    }
//    else {
//
//
//        cout << "No" << endl;
//    }
//}


//string cards(int a)
//{
//	return "Your choise: ";
//}

//void goodNum(int a)
//{
//	 int one, two, three, four, five, six;
//	six = a % 10;
//	five = a % 100 / 10;
//	four = a % 1000 / 100;
//	three = a % 10000 / 1000;
//	two = a % 100000 / 10000;
//	one = a % 1000000 / 100000;
//	if (one + two + three == four + five + six)
//	{
//		cout << "Yes" << endl;
//	}
//	else {
//		cout << "No" << endl;
//	}
//}

//void search(int array[], int a, int size)
//{
//	int index = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] == a)
//		{
//			index = i+1;
//			cout << "Your number in array in index: " << index << endl;
//		}
//		else {
//			continue;
//		}
//	}
//	if (index == 0)
//	{
//		cout << "Array don`t have this value" << endl;
//	}
//
//}

//int binarySearch(int arr[], int size, int target) {
//	int left = 0;
//	int right = size - 1;
//
//	while (left <= right) {
//		int mid = left + (right - left) / 2; 
//
//		if (arr[mid] == target)
//			return mid;
//
//		if (arr[mid] > target)
//			right = mid - 1;
//
//		else
//			left = mid + 1;
//	}
//
//	return -1;
//}

int binaryToDecimal(string binary) {
	int decimal = 0;  // Змінна для зберігання результату
	int power = 0;    // Степінь двійки, яку ми використовуємо

	// Проходимо по двійковому числу з права наліво
	for (int i = binary.length() - 1; i >= 0; i--) {
		if (binary[i] == '1') {
			// Якщо цифра '1', додаємо відповідне значення до десяткового числа
			decimal += pow(2, power);
		}
		power++;  // Збільшуємо степінь двійки
	}

	return decimal;
}




int main()
{
	//void 1
	//cout << range(2, 3) << endl;

	//void 2
	//Sum(5, 18);

	//void 3
	//Doskonal(1);

	//void 4
	//int choise, a;
	//cout << "Enter nominal: ";
	//cin >> a;
	//cout << "[1] - Pika; \n[2] - Buba; \n[3] - Khresta; \n[4] - Cherva; \nWhar your choise: ";
	//cin >> choise;
	//switch (choise)
	//{
	//case 1: 
	//	cout << cards(a) << a << " Pika " << endl;
	//case 2: 
	//	cout << cards(a) << a << " Buba " << endl;
	//case 3:
	//	cout << cards(a) << a << " Khresta " << endl;
	//case 4:
	//	cout << cards(a) << a << " Cherva " << endl;
	//default:
	//	cout << "We haven`t any masts!!!!" << endl;
	//	break;
	//}

	//void 5
	//goodNum(111111);

	//void 6
	//const int size = 100;
	//int arr[size]{ 1,2,3,4,5,6,7,8,9,10,11 };
	//int a;
	//cout << "Enter num: ";
	//cin >> a;
	//search(arr, a, size);
	
	//void 7
	//int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//int target = 10;

	//int result = binarySearch(arr, size, target);

	//if (result != -1)
	//	cout << "Елемент знайдено на індексі: " << result << endl;
	//else
	//	cout << "Елемент не знайдено." << endl;

	//void 8
	//string binary;

	//cout << "Введіть двійкове число: ";
	//cin >> binary;

	//int decimal = binaryToDecimal(binary);
	//cout << "Десяткове значення: " << decimal << endl;

}