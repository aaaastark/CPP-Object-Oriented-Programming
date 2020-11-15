#include <iostream>
#include <string>
using namespace std;
void friend_class_function();
class Class_Fu_1{
	private:
		int age;
		string name;
	public:
		friend void setter(Class_Fu_1&);
		friend void getter(Class_Fu_1&);
};
void setter(Class_Fu_1 &cf1){
	cf1.age=10;
	cf1.name="M.A.R";
}
void getter(Class_Fu_1 &cf2){
	cout<<"My name is "<<cf2.name<<endl<<endl;
	cout<<"My age is "<<cf2.age;
}

class Class_Fr_1{
	private:
		int age;
		string name;
	public:
		friend class Class_Fr_2;
};
class Class_Fr_2{
	public:
		void setter(Class_Fr_1 &cf1){
			cout<<"Enter a name : ";
			cin>>cf1.name;
			cout<<"Enter a age : ";
			cin>>cf1.age;
		}
		void getter(Class_Fr_1 &cf2){
			cout<<"Name is "<<cf2.name<<endl<<endl;
			cout<<"Age is "<<cf2.age;
		}
};

void friend_class_function(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t  Friend Function of Class\n";
	Class_Fu_1  cfu_1;
	setter(cfu_1);
	getter(cfu_1);
	///////////////////////////////  START	/////////////////////////////////////////
	
	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tFriend Class\n";
	Class_Fr_1 cfr_1;
	Class_Fr_2 cfr_2;
	cfr_2.setter(cfr_1);
	cout<<endl;
	cfr_2.getter(cfr_1);
	///////////////////////////////  START	/////////////////////////////////////////

}
