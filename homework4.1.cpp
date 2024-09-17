#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
     //char ch;
    //cout << "[1] - Horizontal; \n[2] - Vertical;\nWhat is your choice: ";
    //int choice, secondchoice;
    //cin >> choice;

    //switch (choice)
    //{
    //case 1:
    //    cout << "[1] - Fast; \n[2] - Medium; \n[3] - Slow; \nWhat is your choice: ";
    //    cin >> secondchoice;
    //    cout << "Enter symbol: ";
    //    cin >> ch;

    //    switch (secondchoice)
    //    {
    //    case 1:
    //        for (int i = 0; i < 20; i++) {
    //            cout << ch;
    //        }
    //        cout << endl;
    //        break;
    //    case 2:
    //        for (int i = 0; i < 20; i++) {
    //            cout << ch;
    //            Sleep(150); // Затримка 150 мс
    //        }
    //        cout << endl;
    //        break;
    //    case 3:
    //        for (int i = 0; i < 20; i++) {
    //            cout << ch;
    //            Sleep(300); // Затримка 300 мс
    //        }
    //        cout << endl;
    //        break;
    //    default:
    //        cout << "Invalid choice!" << endl;
    //        break;
    //    }
    //    break;

    //case 2:
    //    cout << "[1] - Fast; \n[2] - Medium; \n[3] - Slow; \nWhat is your choice: ";
    //    cin >> secondchoice;
    //    cout << "Enter symbol: ";
    //    cin >> ch;

    //    switch (secondchoice)
    //    {
    //    case 1:
    //        for (int i = 0; i < 20; i++) {
    //            cout << ch << endl;
    //        }
    //        break;
    //    case 2:
    //        for (int i = 0; i < 20; i++) {
    //            cout << ch << endl;
    //            Sleep(150); // Затримка 150 мс
    //        }
    //        break;
    //    case 3:
    //        for (int i = 0; i < 20; i++) {
    //            cout << ch << endl;
    //            Sleep(300); // Затримка 300 мс
    //        }
    //        break;
    //    default:
    //        cout << "Invalid choice!" << endl;
    //        break;
    //    }
    //    break;

    //default:
    //    cout << "Invalid main choice!" << endl;
    //    break;
    //}

    //cout << "---------------------Cubes-----------------------" << endl;
    //srand(time(0));

    //int userScore = 0;
    //int computerScore = 0;
    //int round = 1;

    //cout << "Welcome to the Dice Game!\n";
    //cout << "You and the computer will each roll two dice for 3 rounds.\n";
    //cout << "The player with the highest total score wins!\n\n";

    //// Гра на 3 раунди
    //while (round <= 3) {
    //    cout << "--------- Round " << round << " ---------\n";

    //    cout << "Your turn! Press Enter to roll the dice...";
    //    cin.ignore(); 
    //    int userDice1 = rand() % 6 + 1; 
    //    int userDice2 = rand() % 6 + 1; 
    //    int userRoll = userDice1 + userDice2; 
    //    cout << "You rolled a total of: " << userRoll << " (" << userDice1 << " + " << userDice2 << ")!\n";
    //    userScore += userRoll;

  
    //    cout << "Computer's turn! Press Enter to continue...";
    //    cin.ignore();
    //    int computerDice1 = rand() % 6 + 1;
    //    int computerDice2 = rand() % 6 + 1;
    //    int computerRoll = computerDice1 + computerDice2;
    //    cout << "Computer rolled a total of: " << computerRoll << " (" << computerDice1 << " + " << computerDice2 << ")!\n";
    //    computerScore += computerRoll;

    //    cout << "\nCurrent Scores:\n";
    //    cout << "Your score: " << userScore << "\n";
    //    cout << "Computer's score: " << computerScore << "\n";
    //    cout << "-----------------------------\n\n";

    //    round++;
    //}
    //cout << "Final Scores:\n";
    //cout << "Your total score: " << userScore << "\n";
    //cout << "Computer's total score: " << computerScore << "\n";

    //if (userScore > computerScore) {
    //    cout << "\nCongratulations! You won the game!\n";
    //}
    //else if (userScore < computerScore) {
    //    cout << "\nSorry! The computer won the game.\n";
    //}
    //else {
    //    cout << "\nIt's a tie! Both players have the same score.\n";
    //}
	
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
    //cout << "Ââåä³òü ê³ëüê³ñòü åëåìåíò³â ìàñèâó: ";
    //cin >> N;

    //double array[100];
    //cout << "Ââåä³òü åëåìåíòè ìàñèâó:";
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
    //cout << "Ñóìà â³ä'ºìíèõ åëåìåíò³â: " << sumNegative << endl;
    //cout << "Äîáóòîê åëåìåíò³â ì³æ ì³í³ìàëüíèì ³ ìàêñèìàëüíèì åëåìåíòàìè: " << productBetweenMinMax << endl;
    //cout << "Äîáóòîê åëåìåíò³â ç ïàðíèìè íîìåðàìè: " << productEvenIndex << endl;
    //if (firstNegativeIndex != -1 && lastNegativeIndex != -1) {
    //    cout << "Ñóìà åëåìåíò³â ì³æ ïåðøèì ³ îñòàíí³ì â³ä'ºìíèìè åëåìåíòàìè: " << sumBetweenNegatives << endl;
    //}
    //else {
    //    cout << "Íåìàº â³ä'ºìíèõ åëåìåíò³â àáî âîíè çàíàäòî áëèçüêî îäèí äî îäíîãî äëÿ îá÷èñëåííÿ ñóìè.\n";
    //}

}
