#include <iostream>
#include <string>
using namespace std;
void classes();
class class_object_1{
	public:
		string name;
		int age;
		void getter_1(){
			cout<<"Name is "<<name<<endl<<endl;;
			cout<<"Age is "<<age;
		}
};
class class_object_2{
	private:
		string name;
		int age;
	public:
		void setter_2(){
			cout<<"Enter a Name : ";
			cin>>name;
			cout<<"Enter a Age : ";
			cin>>age;
		}	
		void getter_2(){
			cout<<"Name is "<<name<<endl<<endl;
			cout<<"Age is "<<age;
		}
};
class class_object_3{
	protected:
		string name;
		int age;
		string id;
	public:
		void setter_3(){
			cout<<"Enter a Name : ";
			cin>>name;
			cout<<"Enter a Age : ";
			cin>>age;
			cout<<"Enter a ID : ";
			cin>>id;
		}
		void getter_3(){
			cout<<"Name is "<<name<<endl<<endl;
			cout<<"ID is "<<id<<endl<<endl;
			cout<<"Age is "<<age;
		}
};
class class_object_4{
	public:
		int age;
		string name;
		void setter_4();
		void getter_4();
};
void class_object_4::setter_4(){
	cout<<"Enter a Name : ";
	cin>>name;
	cout<<"Enter a Age : ";
	cin>>age;
}
void class_object_4::getter_4(){
	cout<<"Name is "<<name<<endl<<endl;
	cout<<"Age is "<<age;
}

class class_object_5{
	public:
		string name;
		int age;
		void getter_5(){
			cout<<"Name is "<<name<<endl<<endl;;
			cout<<"Age is "<<age;
		}
};		

void classes(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tClass_object_1 (Public with Accessing Data Members)\n\n";
	class_object_1  cb1;
	cb1.age=20;
	cb1.name="M.A.R";
	cb1.getter_1();
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tClass_object_2 (Public and Private with Accessing Data Members)\n\n";
	class_object_2  cb2;
	cb2.setter_2();
	cout<<endl;
	cb2.getter_2();
	///////////////////////////////  END	/////////////////////////////////////////
	
	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tClass_object_3 (Public and Protected with Accessing Data Members)\n\n";
	class_object_3  cb3;
	cb3.setter_3();
	cout<<endl;
	cb3.getter_3();
	///////////////////////////////  END	/////////////////////////////////////////
	
	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tClass_object_4 (Public and Member Functions in Classes)\n\n";
	class_object_4  cb4;
	cb4.setter_4();
	cout<<endl;
	cb4.getter_4();
	///////////////////////////////  END	/////////////////////////////////////////
	
	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tClass_object_5 (Public and Classes with in Dynamic Memory)\n\n";
	class_object_5  *cb5 = new class_object_5;
	cb5->age=21;
	cb5->name="Muhammad Allah Rakha";
	cout<<endl;
	cb5->getter_5();
	delete cb5;
	///////////////////////////////  END	/////////////////////////////////////////

}
