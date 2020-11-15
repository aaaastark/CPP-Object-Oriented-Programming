#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "Classes and Objects.h"
#include "Constructor and Destructor.h"
#include "Copy Constructor.h"
#include "Composition.h"
#include "Inheritance.h"
#include "Polymorphism.h"
#include "Abstract Class.h"
#include "Friend Class and Function.h"
using namespace std;
void initialize();

int main(){
	
	initialize();
	
	int number;
	cout<<"Enter a Number for access : ";
	cin>>number;
	switch(number){
		case 1:
			cout<<endl<<endl;
			classes();                        
			exit(2);
			break;
		case 2:
			cout<<endl<<endl;
			cons_and_des_1(); 
			cons_and_des_2();
			cons_and_des_3();                       
			exit(2);
			break;
		case 3:
			cout<<endl<<endl;
			copyconstructors();                        
			exit(2);
			break;
		case 4:
			cout<<endl<<endl;
			compositions();                        
			exit(2);
			break;	
		case 5:
			cout<<endl<<endl;
			inheritances();                        
			exit(2);
			break;	
		case 6:
			cout<<endl<<endl;
			polymorphisms();                        
			exit(2);
			break;
		case 7:
			cout<<endl<<endl;
			abstracts();                        
			exit(2);
			break;	
		case 8:
			cout<<endl<<endl;
			friend_class_function();                        
			exit(2);
			break;				
		default:
			cout<<"Worng Number.";
			exit(1);
	}	
}

void initialize(){
	cout<<"-----------------------------------------------------------------\n";
	cout<<"1:			Classes and Objects	  		|"<<endl;
	cout<<"2:			Constructor and Destructor		|"<<endl;
	cout<<"3:			Copy Constructor		  	|"<<endl;
	cout<<"4:			Composition		  		|"<<endl;
	cout<<"5:			Inheritance		  		|"<<endl;
	cout<<"6:			Polymorphism	   	  		|"<<endl;
	cout<<"7:			Pure Virtual Function and Abstract Class|"<<endl;
	cout<<"8:			Friend Class and Function 		|"<<endl;
	cout<<"-----------------------------------------------------------------";
	cout<<endl<<endl;
}
