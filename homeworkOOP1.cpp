//#include <iostream>
//using namespace std;
//
//class Drobe {
//	int chs1;
//	int chs2;
//	int znm1;
//	int znm2;
//public:
//	void FillDrobe()
//	{
//		cout << "Enter first chuselnik: ";
//		cin >> chs1;
//		cout << "Enter first znamennik: ";
//		cin >> znm1;
//		cout << "Enter second chuselnik: ";
//		cin >> chs2;
//		cout << "Enter second znamennik: ";
//		cin >> znm2;
//	}
//	void ShowDrobes()
//	{
//		cout << "First drobe: " << chs1 << "/" << znm1 << endl;
//		cout << "Second drobe: " << chs2 << "/" << znm2 << endl;
//	}
//
//	int GCD(int a, int b) {
//		while (b != 0) {
//			int temp = b;
//			b = a % b;
//			a = temp;
//		}
//		return a;
//	}
//
//	int LCM(int a, int b) {
//		return (a * b) / GCD(a, b);
//	}
//
//	void Sum()
//	{
//		if (znm1 == 0 || znm2 == 0)
//		{
//			cout << "Invalid syntaxys" << endl;
//			return;
//		}
//		if (znm1 == znm2)
//		{
//			cout << "Sum: " << chs1 + chs2 << "/" << znm1 << endl;
//		}
//		else {
//			int lcm = LCM(znm1, znm2); 
//			int new_chs1 = chs1 * (lcm / znm1); 
//			int new_chs2 = chs2 * (lcm / znm2);
//			cout << "Sum: " << new_chs1 + new_chs2 << "/" << lcm << endl;
//		}
//	}
//
//	void Subtract()
//	{
//		if (znm1 == 0 || znm2 == 0)
//		{
//			cout << "Invalid syntaxys" << endl;
//			return;
//		}
//		if (znm1 == znm2)
//		{
//			cout << "Difference: " << chs1 - chs2 << "/" << znm1 << endl;
//		}
//		else {
//			int lcm = LCM(znm1, znm2);
//			int new_chs1 = chs1 * (lcm / znm1);
//			int new_chs2 = chs2 * (lcm / znm2);
//			cout << "Difference: " << new_chs1 - new_chs2 << "/" << lcm << endl;
//		}
//	}
//	void Multiply()
//	{
//		if (znm1 == 0 || znm2 == 0)
//		{
//			cout << "Invalid syntaxys" << endl;
//			return;
//		}
//		else {
//			cout << "Multiply: " << chs1 * chs2 << "/" << znm1 * znm2 << endl;
//		}
//	}
//	void Division()
//	{
//		if (znm1 == 0 || znm2 == 0)
//		{
//			cout << "Invalid syntaxys" << endl;
//			return;
//		}
//		else {
//			int temp;
//			temp = znm2;
//			znm2 = chs2;
//			chs2 = temp;
//			cout << "Division: " << chs1 * chs2 << "/" << znm1 * znm2 << endl;
//
//		}
//	}
//};
//
//int main()
//{
//	Drobe dr;
//	int choise;
//	dr.FillDrobe();
//	cout << "[1] - Sum;\n[2] - Substract;\n[3] - Multiply;\n[4] - Division;" << endl;
//	cout << "What your choise: ";
//	cin >> choise;
//	switch (choise)
//	{
//	case 1:
//		dr.ShowDrobes();
//		dr.Sum();
//		break;
//	case 2:
//		dr.ShowDrobes();
//		dr.Subtract();
//		break;
//	case 3:
//		dr.ShowDrobes();
//		dr.Multiply();
//		break;
//	case 4:
//		dr.ShowDrobes();
//		dr.Division();
//		break;
//	default:
//		cout << "We haven`t any numbers" << endl;
//		break;
//	}
//
//	dr.ShowDrobes();
//	dr.Sum();
//	dr.Subtract();
//}