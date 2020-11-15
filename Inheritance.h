#include <iostream>
using namespace std;
void inheritances();
class Class_inhe_1{
	protected:
		string name;
		int age;
};
class Class_inhe_2 : public Class_inhe_1{
	public:
		void setter_1(){
			cout<<"Enter a name : ";
			cin>>name;
			cout<<"Enter a age : ";
			cin>>age;
		}
		void getter_1(){
			cout<<"Name is "<<name<<endl<<endl;
			cout<<"Age is "<<age;
		}                    
};
class Class_inhe_3 : public Class_inhe_2{
	private:
		string id;
		string eduction;
	public:
		void setter_3(){
			Class_inhe_2::setter_1();
			cout<<"Enter a ID : ";
			cin>>id;
			cout<<"Enter a Eduction : ";
			cin>>eduction;
		}
		void getter_3(){
			Class_inhe_2::getter_1();
			cout<<endl<<endl;
			cout<<"ID is "<<id<<endl<<endl;
			cout<<"Eduction is "<<eduction;
		} 
};
class Class_inhe_4{
	public:
		string id; 
		void setter_4(){
			cout<<"Enter a ID : ";
			cin>>id;
		}
		void getter_4(){
			cout<<"ID is "<<id;
		}
};
class Class_inhe_5 : public Class_inhe_4 , public Class_inhe_1{
	public:
		void setter_5(){
			cout<<"Enter a Name : ";
			cin>>name;
			cout<<"Enter a Age : ";
			cin>>age;
			Class_inhe_4::setter_4();
		}
		void getter_5(){
			cout<<"Name is "<<name<<endl<<endl;
			cout<<"Age is "<<age<<endl<<endl;
			Class_inhe_4::getter_4();
		}
};
class Class_inhe_6{
	public:
		Class_inhe_6(){
			cout<<"Hybrid inheritanc an eambiguity \n";
		}
};
class Class_inhe_7 : public Class_inhe_6{
	public:
		Class_inhe_7():Class_inhe_6(){
			cout<<"Class_inhe_7():Class_inhe_6()\n";
		}
};
class Class_inhe_8 : public Class_inhe_6{
	public:
		Class_inhe_8():Class_inhe_6(){
			cout<<"Class_inhe_8():Class_inhe_6()\n";
		}
};
class Class_inhe_9 : public Class_inhe_8 , public Class_inhe_7{
	public:
		Class_inhe_9():Class_inhe_8(),Class_inhe_7(){
			cout<<"Class_inhe_9 : public Class_inhe_8 , public Class_inhe_7\n";
		}
};


class Class_inhe_10{
	public:
		Class_inhe_10(){
			cout<<"Hybrid inheritanc an eambiguity is solve\n";
		}
};
class Class_inhe_11 : virtual public Class_inhe_10{
	public:
		Class_inhe_11():Class_inhe_10(){
			cout<<"Class_inhe_11():Class_inhe_10()\n";
		}
};
class Class_inhe_12 : virtual public Class_inhe_10{
	public:
		Class_inhe_12():Class_inhe_10(){
			cout<<"Class_inhe_12():Class_inhe_10()\n";
		}
};
class Class_inhe_13 : public Class_inhe_12 , public Class_inhe_11{
	public:
		Class_inhe_13():Class_inhe_12(),Class_inhe_11(){
			cout<<"Class_inhe_13 : public Class_inhe_12 , public Class_inhe_11\n";
		}
};


void inheritances(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tSingle Inheritance Class_inhe_2 (Derived Class) is Inheritanat \n\twith Class_inhe_1 (Base Class) of Protected.\n\n";
	Class_inhe_2 ci_2;
	ci_2.setter_1();
	cout<<endl;
	ci_2.getter_1();
	///////////////////////////////  END	/////////////////////////////////////////
	
	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tMultilevel Inheritance Class_inhe_3 (Derived Class) is Inheritanat with \n\tClass_inhe_2 (Base Class) that Inheritanat Class_inhe_1 (Base Class) of Protected.\n\n";
	Class_inhe_3 ci_3;
	ci_3.setter_3();
	cout<<endl;
	ci_3.getter_3();
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tMultiple Inheritance Class_inhe_5 (Derived Class) is Inheritanat with \n\tClass_inhe_4 as (Base Class) and Inheritanat Class_inhe_1 as (Base Class) of Protected.\n\n";
	Class_inhe_5 ci_5;
	ci_5.setter_5();
	cout<<endl;
	ci_5.getter_5();
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tHybrid inheritanc an eambiguity (Diamond Probleam) to Class_inhe_9 (Derived Class) is Inheritanat with \n\tClass_inhe_8 as (Base Class) and Inheritanat Class_inhe_7 as (Base Class) of Protected.\n\n";
	Class_inhe_9 ci_9;
	
	///////////////////////////////  END	/////////////////////////////////////////

	
	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\tHybrid inheritanc an eambiguity (Diamond Probleam is Solve) to Class_inhe_13 (Derived Class) is Inheritanat with \n\tClass_inhe_12 as (Base Class) and Inheritanat Class_inhe_11 as (Base Class) of Protected.\n\n";
	Class_inhe_13 ci_13;
	///////////////////////////////  END	/////////////////////////////////////////
	
}

