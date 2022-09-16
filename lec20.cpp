////Composition Implementation issues
////(constructor call sequence, initializer list, etc)
//
//#include<iostream>
//using namespace std;
//
//class A
//{
//	int x;
//public:
//	A()
//	{
//		x = 0;
//		cout << "default A constructor" << endl;
//	}
//	A(int val)
//	{
//		x = val;
//		cout << "overloaded A constructor" << endl;
//
//	}
//	void Disp()
//	{
//		cout << "X= " << x << endl;
//	}
//	~A()
//	{
//		cout << "Destructor Of A is Called " << endl;
//	}
//};
//
//class B
//{
//	int y;
//	A z;
//public:
//
//	B():z()
//	{
//		y =0;
//		z = 0;
//		cout << "default B constructor" << endl;
//	}
//	B(int val) :z(5)
//	{
//		y = val;
//		cout << "overloaded B constructor" << endl;
//
//	}
//	void Disp()
//	{
//		cout << "Y= " << y << endl;
//		z.Disp(); 
//	}
//	~B()
//	{
//		cout << "Destructor Of  B is Called " << endl;
//	}
//
//
//};
//int main()
//{
//	B b(15); 
//	cout << "Code end in main" << endl;
//	return 0;
//}