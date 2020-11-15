#include <iostream>
#include <string>
using namespace std;
void cons_and_des_1();
void cons_and_des_2();
void cons_and_des_3();
class Cons_des_1{
	private:
		int age;
		string name;
	public:
		Cons_des_1(){
			age=20;
			name="Muhammad Allah Rakha";
		}
		~Cons_des_1(){
			cout<<"My name is "<<name<<endl;
			cout<<"My age is "<<age;
		}
};
class Cons_des_2{
	private:
		int age;
		string name;
	public:
		Cons_des_2(int a,string b){
			age=a;
			name=b;
		}
		void getter_2(){
			cout<<"My name is "<<name<<endl;
			cout<<"My age is "<<age;
		}
};

class Cons_des_3{
	private:
		int *age;
		string *name;
	public:
		Cons_des_3(){
			age=new int;
			name=new string;
		}
		void setter_3(){
			cout<<"Enter a name : ";
			cin>>*name;
			cout<<"Enter a age : ";
			cin>>*age;
		}
		void getter_3(){
			cout<<"My name is "<<*name<<endl<<endl;
			cout<<"My age is "<<*age;
		}
		~Cons_des_3(){
			delete age;
			delete name;
		}
};
void cons_and_des_1(){
	///////////////////////////////  START	/////////////////////////////////////////	
	cout<<"\tClass_des_1 (Public and Private with Default constructor)\n\n";
	Cons_des_1    cd_1;     // This mathod show Constructor and Destructor access way.
	//  This is  cd_1.~cons_des_1();  show error.
	//  Because Destructor automatically call.
	
	///////////////////////////////  END	/////////////////////////////////////////  
}
void cons_and_des_2(){
	
	cout<<endl<<endl;	
	///////////////////////////////  START	/////////////////////////////////////////	
	cout<<"\tClass_des_2 (Public and Private with Parameterized Constructors)\n\n";
	Cons_des_2    cd_2(22,"M.A.R");     // This mathod show Constructor and Destructor access way.
	cd_2.getter_2();
	///////////////////////////////  END	/////////////////////////////////////////  	
}
void cons_and_des_3(){
	
	cout<<endl<<endl;	
	///////////////////////////////  START	/////////////////////////////////////////	
	cout<<"\tClass_des_3 (Public and Private with Default constructor of Dynamic Memory)\n\n";
	Cons_des_3    cd_3;     // This mathod show Constructor and Destructor access way.
	cd_3.setter_3();
	cout<<endl;
	cd_3.getter_3();
	///////////////////////////////  END	/////////////////////////////////////////  	
}
