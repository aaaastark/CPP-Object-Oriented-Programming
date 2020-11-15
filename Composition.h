#include <iostream>
#include <string>
using namespace std;
void compositions();
class Compositions_1{
	private:
		int age;
		string name;
	public:
		Compositions_1(int a,string b){
			age=a; name=b;
		}
		void getter_1(){
			cout<<"My name is "<<name<<endl<<endl;
			cout<<"My age is "<<age;
		}
};
class Compositions_2{
	private:
		Compositions_1 com;
	public:
		Compositions_2(Compositions_1 object):com(object){
		};
		void getter_show_1(){
			com.getter_1();
		}
};
void compositions(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"Composition (Parameterized Constructors and Getter Functions)\n\n";
	int num; string names;
	cout<<"Enter a Name : ";
	cin>>names;
	cout<<"Enter a Age : ";
	cin>>num;

	Compositions_1 comp_1(num,names);
	Compositions_2 comp_2(comp_1);   // Address Reference pass.
	cout<<endl;
	comp_2.getter_show_1();
	///////////////////////////////  END	/////////////////////////////////////////	

}
