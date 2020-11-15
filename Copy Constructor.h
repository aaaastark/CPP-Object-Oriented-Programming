#include <iostream>
#include <string>
using namespace std;
void copyconstructors();
class Class_cc_1{
	private:
		int age;
		string name;
	public:
		Class_cc_1(int a,string b){
			age=a;   name=b;
		}
		Class_cc_1(Class_cc_1 &cc1){
			age=cc1.age;
			name=cc1.name;
		}
		void getter(){
			cout<<"Name is "<<name<<endl<<endl;
			cout<<"Age is "<<age<<endl;
		}
};

void copyconstructors(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\tCopy Constructor of Class\n\n";
	Class_cc_1 c1(20,"M.A.R");
	Class_cc_1 c2(c1);
	cout<<"\t\tClass_cc_1 c1 is main constructor.\n\n";
	c1.getter();
	
	cout<<endl<<endl;
	cout<<"\t\tClass_cc_1 c2 is copy constructor.\n\n";
	c2.getter();
	///////////////////////////////  START	/////////////////////////////////////////

}
