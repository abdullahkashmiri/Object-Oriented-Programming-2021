//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	virtual char* speak()
//	{
//		return "Speak() Called";
//	}
//};
//
//class Dog: public Animal
//{
//public:
//	char* speak()
//	{
//		return "Woof!!";
//	}
//};
//
//int main()
//{
//	Animal objAnimal;
//	Dog objDog;
//	Animal *ptrAnimal = &objAnimal;
//	Dog *ptrDog = &objDog;
//	cout << objAnimal.speak() << endl;
//	cout << objDog.speak() << endl;
//	cout << ptrAnimal->speak() << endl;
//	cout << ptrDog->speak() << endl;
//	cout << ptrDog->Animal::speak();
//	cout << endl << endl;
//	system("pause");
//	return 0;
//
//}