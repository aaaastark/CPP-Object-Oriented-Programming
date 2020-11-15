#include <iostream>
using namespace std;
void polymorphisms();
class Class_pol_1{
	private:
		int age;
		string name;
	public:
		void setter(){
			age=20;
			name="M.A.R";
		}
		void getter(){
			cout<<"Name is "<<name<<endl;
			cout<<"Age is "<<age<<endl;
		}
		
};
class Class_pol_2 : public Class_pol_1{
	private:
		int age1;
		string name1;
	public:
		void setter(){
			age1=22;
			name1="Not M.A.R";
		}
		void getter(){
			cout<<"Name is "<<name1<<endl;
			cout<<"Age is "<<age1<<endl;
		}
};
class Class_pol_3{
	protected:
		int age;
		string name;
	public:
		void setter(){
			age=21;
			name="Muhammad Allah Rakha";
		}
		void getter(){
			cout<<"Name is "<<name<<endl;
			cout<<"Age is "<<age<<endl;
		}
		
};
class Class_pol_4 : public Class_pol_3{
	public:
		void setter(){
			age=22;
			name="Yes M.A.R";
		}
		void getter(){
			cout<<"Name is "<<name<<endl;
			cout<<"Age is "<<age<<endl;
		}
};

class Class_pol_5{
	protected:
		int age;
		string name;
	public:
		virtual void setter(){
			age=21;
			name="Muhammad Allah Rakha";
		}
		virtual void getter(){
			cout<<"Name is "<<name<<endl;
			cout<<"Age is "<<age<<endl;
		}
		
};
class Class_pol_6 : public Class_pol_5{
	public:
		void setter(){
			age=22;
			name="Yes M.A.R";
		}
		void getter(){
			cout<<"Name is "<<name<<endl;
			cout<<"Age is "<<age<<endl;
		}
};


void polymorphisms(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t    Function Overloading in Ploymorphism\n\n";
	cout<<"\t\tClass_pol_1 access the setter() and getter()"<<endl<<endl;
	Class_pol_1 cp_1;
	cp_1.setter();
	cout<<endl;
	cp_1.getter();
	cout<<"\n\n\t\tClass_pol_2 access the setter() and getter()"<<endl<<endl;
	Class_pol_2 cp_2;
	cp_2.getter();
	cout<<endl;
	cp_2.setter();
	///////////////////////////////  END	/////////////////////////////////////////
	
	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\tFunction Overloading and Overwriting in Ploymorphism\n\n";
	cout<<"\t\tClass_pol_3 access the setter() and getter()"<<endl<<endl;
	Class_pol_3 cp_3;
	cp_3.setter();
	cout<<endl;
	cp_3.getter();
	cout<<"\n\n\t\tClass_pol_4 access the setter() and getter()"<<endl<<endl;
	Class_pol_4 cp_4;
	cp_4.getter();
	cout<<endl;
	cp_4.setter();
	///////////////////////////////  END	/////////////////////////////////////////
	
	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"Function Overloading and Overwriting is solve at Runtime the using of (VIRTUAL) keyword in Ploymorphism\n\n";
	cout<<"\tClass_pol_5 and Class_pol_6 is the access the setter() and getter()"<<endl<<endl;
	
	cout<<"\t\tClass_pol_5 is the access the setter() and getter()\n\n";
	Class_pol_5 CP_5;
	CP_5.setter();
	CP_5.getter();
	
	cout<<"\t\tClass_pol_6 is the access the setter() and getter()\n\n";
	Class_pol_5 *cp_5;
	Class_pol_6 cp_6;
	cp_5=&cp_6;
	cp_5->setter();
	cp_5->getter();
	///////////////////////////////  END	/////////////////////////////////////////
}

















