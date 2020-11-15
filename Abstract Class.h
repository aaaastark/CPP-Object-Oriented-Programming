#include <iostream>
using namespace std;
void abstracts();
class Class_ab_1{
	public:
		virtual void print_1()=0;  // This =0 mean a pure virtual function is Abstruct Function.
};
class Class_ab_2: public Class_ab_1{
	public:
		void print_1(){
			cout<<"Class_ab_2: public Class_ab_1\n";
		}
};
class Class_ab_3{
	public:
		int age; string name;  // This INT & STRING mean a not-pure virtual variables is Abstruct class.
		virtual void print_3()=0; // This =0 mean a pure virtual function is Abstruct Function.
		virtual void get_3()=0;  // This =0 mean a pure virtual function is Abstruct Function.
};
class Class_ab_4 : public Class_ab_3{
	public:
		void get_3(){
			cout<<"Enter your name : ";
			cin>>name;
			cout<<"Enter your age : ";
			cin>>age;
		}
		void print_3(){
			cout<<"Name is "<<name<<endl<<endl;
			cout<<"Age is "<<age;
		}
};
class Class_ab_5 : public Class_ab_3{
	public:
		void get_3(){
			cout<<"Enter your name : ";
			cin>>name;
			cout<<"Enter your age : ";
			cin>>age;
		}
		void print_3(){
			cout<<"Name is "<<name<<endl<<endl;
			cout<<"Age is "<<age;
		}
};
void abstracts(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\tClass_ab_1 is abstract class and Class_ab_2 is non-abstract class.\n\n";
	Class_ab_1 *ca_1;
	Class_ab_2 ca_2;
	ca_1=&ca_2;
	ca_1->print_1();
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\tClass_ab_3 is abstract class and Class_ab_4,Class_ab_5 is non-abstract classes.\n\n";
	Class_ab_3 *ca_3;
	Class_ab_4 ca_4;
	Class_ab_5 ca_5;
	
	ca_3=&ca_4;
	ca_3->get_3();
	cout<<endl;
	ca_3->print_3();
	
	cout<<endl<<endl;;
	
	ca_3=&ca_5;
	ca_3->get_3();
	cout<<endl;
	ca_3->print_3();
	///////////////////////////////  END	/////////////////////////////////////////
		
}
