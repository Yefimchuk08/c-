#include <iostream>
using namespace std;
//
// TASK 1
// 
//class Vehicle {
//	string brand;
//	string model;
//public:
//	Vehicle()
//	{
//		brand = "No brand";
//		model = "No model";
//	}
//	Vehicle(string b, string m) : brand{ b }, model{ m } {}
//
//	void PrintInfo()const
//	{
//		cout << "Brand: " << brand << endl;
//		cout << "Model: " << model << endl;
//	}
//	~Vehicle()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//class Car :public Vehicle
//{
//	string color;
//	int V;
//public:
//	Car(): Vehicle()
//	{
//		color = "no color";
//		V = 0;
//	}
//	Car(string c, int v, string b, string m) :Vehicle(b, m), color{ c }, V{ v } {}
//	void PrintInfo()
//	{
//		Vehicle::PrintInfo();
//		cout << "Color: " << color << endl;
//		cout << "V: " << V << endl;
//	}
//	void Drive()const
//	{
//		cout << "Car is driving" << endl;
//	}
//	~Car()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//class Moto:public Vehicle
//{
//	string color;
//	int year;
//	int V;
//public:
//	Moto():Vehicle()
//	{
//		color = "No color";
//		year = 0;
//		V = 0;
//	}
//	Moto(string c, int y, int v, string b, string m) :Vehicle(b, m), color{ c }, year{ y }, V{ v } {}
//	void PrintInfo()
//	{
//		Vehicle::PrintInfo();
//		cout << "Color: " << color << endl;
//		cout << "Year: " << year << endl;
//		cout << "V: " << V << endl;
//	}
//	void Driving()const
//	{
//		cout << "Moto is driving" << endl;
//	}
//	~Moto()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//

//TASK 2

class Shape {
	int a;
	int b;
public:
	Shape()
	{
		a = 0;
		b = 0;
	}
	Shape(int a, int b) : a{ a }, b{ b } {}

	int Area()const
	{
		return a * b;
	}
	void PrintInfo()const
	{
		cout << "A: " << a << endl;
		cout << "B: " << b << endl;
	}
	~Shape()
	{
		cout << "Destruct info" << endl;
	}
};

class Circle:public Shape
{
	int r;
public:
	Circle():Shape()
	{
		r = 0;
	}
	Circle(int r) :Shape(), r{ r } {}
	float Area()const
	{
		const float P = 3.14;
		return P * pow(r, 2);
	}
	void PrintInfo()const
	{
		Shape::PrintInfo();
		cout << "Radius: " << r << endl;
	}
	~Circle()
	{
		cout << "Destruct info" << endl;
	}
};
class Rectangle: public Shape {
public:
	Rectangle() :Shape() {}
	Rectangle(int a, int b) :Shape(a, b) {}

	void Area()const
	{
		cout << "Area: " << Shape::Area() << endl;
	}
	~Rectangle()
	{
		cout << "Destruct info" << endl;
	}
};


//TASK 3
//class Employee
//{
//	string name;
//	string id;
//public:
//	Employee()
//	{
//		name = "No name";
//		id = "No id";
//	}
//	Employee(string n, string i) :name{ n }, id{ i } {}
//	
//	int Salary(int salary)
//	{
//		return salary;
//	}
//	void PrintInfo()const
//	{
//		cout << "Name: " << name << endl;
//		cout << "ID: " << id << endl;
//	}
//	~Employee()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//
//class HourlyEmployee:public Employee {
//	int salary;
//public:
//	HourlyEmployee():Employee()
//	{
//		salary = 0;
//	}
//	HourlyEmployee(int s, string n, string i) :Employee(n, i), salary{ s } {}
//
//	void Work()const
//	{
//		cout << "Working" << endl;
//	}
//	int Salary()
//	{
//		return salary*1,3;
//	}
//	void PrintInfo()const
//	{
//		Employee::PrintInfo();
//		cout << "Salery: " << salary << endl;
//	}
//	~HourlyEmployee()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//class SalariedEmployee :public Employee {
//	int salary;
//public:
//	SalariedEmployee():Employee()
//	{
//		salary = 0;
//	}
//	SalariedEmployee(string n, string i, int s) :Employee(n, i), salary{ s } {}
//	void Work()const
//	{
//		cout << "Working" << endl;
//	}
//	int Salary()
//	{
//		return salary*1,5;
//	}
//	void PrintInfo()const
//	{
//		Employee::PrintInfo();
//		cout << "Salary: " << salary << endl;
//	}
//	~SalariedEmployee()
//	{
//		cout << "Destruct info" << endl;
//	}
//};


//TASK 4
//class Animal
//{
//	string classOfAnimal;
//	string breedOfAnimal;
//	string name;
//public:
//	Animal()
//	{
//		classOfAnimal = "No class";
//		breedOfAnimal = "No breed";
//		name = "No name";
//	}
//	Animal(string c, string b, string n) :classOfAnimal{ c }, breedOfAnimal{ b }, name{ n } {}
//	string Sound(string sound)const
//	{
//		return sound;
//	}
//	void PrintInfo()const
//	{
//		cout << "Class Of animal: " << classOfAnimal << endl;
//		cout << "Breed of animal: " << breedOfAnimal << endl;
//		cout << "Name: " << name << endl;
//	}
//	~Animal()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//
//class Dog:public Animal {
//	string sound;
//	string color;
//public:
//	Dog():Animal()
//	{
//		sound = "No sound";
//		color = "No color";
//	}
//	Dog(string c, string b, string n, string s, string cl) :Animal(c, b, n), sound{ s }, color{ cl } {}
//
//	void Sound()const
//	{
//		cout << "Sound: ";
//		cout << sound << "!!!!!" << endl;
//	}
//	void GoForAWalk()const
//	{
//		cout << "Animal go for a walk" << endl;
//	}
//	void PrintInfo()const
//	{
//		Animal::PrintInfo();
//		cout << "Color: " << color << endl;
//	}
//	~Dog()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//
//class Cat :public Animal {
//	string sound;
//	string color;
//public:
//	Cat() :Animal()
//	{
//		sound = "No sound";
//		color = "No color";
//	}
//	Cat(string c, string b, string n, string s, string cl) :Animal(c, b, n), sound{ s }, color{ cl } {}
//
//	void Sound()const
//	{
//		cout << "Sound: ";
//		cout << sound << "!!!!!" << endl;
//	}
//	void GoForAWalk()const
//	{
//		cout << "Animal go for a walk" << endl;
//	}
//	void PrintInfo()const
//	{
//		Animal::PrintInfo();
//		cout << "Color: " << color << endl;
//	}
//	~Cat()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//
//class Cow :public Animal {
//	string sound;
//	string color;
//public:
//	Cow() :Animal()
//	{
//		sound = "No sound";
//		color = "No color";
//	}
//	Cow(string c, string b, string n, string s, string cl) :Animal(c, b, n), sound{ s }, color{ cl } {}
//
//	void Sound()const
//	{
//		cout << "Sound: ";
//		cout << sound << "!!!!!" << endl;
//	}
//	void GoForAWalk()const
//	{
//		cout << "Animal go for a walk" << endl;
//	}
//	void PrintInfo()const
//	{
//		Animal::PrintInfo();
//		cout << "Color: " << color << endl;
//	}
//	~Cow()
//	{
//		cout << "Destruct info" << endl;
//	}
//};

//TASK 5
//class Person
//{
//	string name;
//	int age;
//
//public:
//	Person()
//	{
//		name = "No name";
//		age = 0;
//	}
//	Person(string n, int a) :name{ n }, age{ a } {}
//
//	void PrintInfo()const
//	{
//		cout << "Name: " << name << endl;
//		cout << "Age: " << age << endl;
//	}
//	~Person()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//
//class Teacher: public Person
//{
//	string surname;
//	string teachersProject;
//	string NumberOfClassTeacher;
//public:
//	Teacher():Person()
//	{
//		surname = "No surname";
//		teachersProject = "No teacher project";
//		NumberOfClassTeacher = "Teacher not class teacher";
//	}
//	Teacher(string n, int a, string s, string t, string cL) :Person(n, a), surname{ s }, teachersProject{ t }, NumberOfClassTeacher{ cL } {}
//	void Teaching()const
//	{
//		cout << "Teacher is teaching" << endl;
//	}
//	void PrintInfo()const
//	{
//		Person::PrintInfo();
//		cout << "Surname: " << surname << endl;
//		cout << "Teacher project: " << teachersProject << endl;
//		cout << "Class teacher: " << NumberOfClassTeacher << endl;
//	}
//	~Teacher()
//	{
//		cout << "Destruct info" << endl;
//	}
//};
//
//class Student:public Person {
//	string group;
//	string phoneNumber;
//public:
//	Student():Person()
//	{
//		group = "No group";
//		phoneNumber = "No phone number";
//	}
//	Student(string n, int a, string g, string pN) :Person(n, a), group{ g }, phoneNumber{ pN } {}
//
//	void PrintInfo()const
//	{
//		Person::PrintInfo();
//		cout << "Group: " << group << endl;
//		cout << "Phone number: " << phoneNumber << endl;
//	}
//	void Learning()const
//	{
//		cout << "Student is learning" << endl;
//	}
//
//	~Student()
//	{
//		cout << "Destruct info" << endl;
//	}
//};

int main() {

	//TASK 1
	
	//Car cr1("black", 240, "BMW", "M5F90 Competition");
	//cr1.Drive();
	//cr1.PrintInfo();

	//Moto mt1("black", 240, 2024, "Ural", "Competition");
	//mt1.Driving();
	//cout << endl;
	//mt1.PrintInfo();

	// TASK 2

	Circle ce(10);
	ce.PrintInfo();
	cout << endl;
	cout << ce.Area() << endl;

	//Rectangle re(10, 15);
	//re.PrintInfo();
	//cout << endl;
	//re.Area();

	//TASK 3

	//HourlyEmployee he(2500, "Dima", "105fcv");
	//he.Work();
	//cout << endl;
	//he.Salary();
	//cout << endl;
	//he.PrintInfo();
	//
	//SalariedEmployee se("Dima", "105fcv", 2500);
	//se.Work(); 
	//cout << endl;
	//se.Salary();
	//cout << endl;
	//se.PrintInfo();

	//TASK 4
	//Dog dg("Dog", "York", "Atom", "Gaf-Gaf-Gaf", "Black-white");
	//dg.GoForAWalk();
	//cout << endl;
	//dg.Sound();
	//cout << endl;
	//dg.PrintInfo();

	//Cat ct("Cat", "Siamski", "May", "Mew-Mew-Mew", "Orange");
	//ct.GoForAWalk();
	//cout << endl;
	//ct.Sound();
	//cout << endl;
	//ct.PrintInfo();

	//Cow cw("Cow", "Not know", "Cow", "Mu-Mu-Mu", "black");
	//cw.GoForAWalk();
	//cout << endl;
	//cw.Sound();
	//cout << endl;
	//cw.PrintInfo();

	//TASK 5

	//Teacher tr("Dima", 19, "Yefim", "PE", "11B");
	//tr.Teaching();
	//cout << endl;
	//tr.PrintInfo();

	//Student st("Dima", 16, "PD422", "521452145");
	//st.Learning();
	//cout << endl;
	//st.PrintInfo();
}