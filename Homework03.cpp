#include<iostream>
#include<conio.h>
#include"antheaderPlusPlus.h"
using namespace std;
class Student{
	private:
		//Data member
		int id,age;
		string name;
		char gender;
		float score;
	public:
		//Default constructor
		Student(){
			
		}
		//parameterize constructor
		Student(int id,int age,string name,char gender,float score){
			this->id = id;	
			this->age = age;
			this->name = name;
			this->gender = gender;
			this->score = score;
		}
		//copy constructor
		Student(const Student &stu){
			this->age = stu.age;
			this->id = stu.id;
			this->name = stu.name;
			this->gender = stu.gender;
			this->score = stu.score;
		}
		//Destructor
		~Student(){
			
		}
		//Normal method
		void Display(){
			foreColor(3);cout<<"\t\t\t\tStudent Id     : "<<id<<endl;
			foreColor(5);cout<<"\t\t\t\tStudent Name   : "<<name<<endl;
			foreColor(6);cout<<"\t\t\t\tStudent Age    : "<<age<<endl;
			foreColor(7);cout<<"\t\t\t\tStudent Gender : "<<gender<<endl;
			foreColor(8);cout<<"\t\t\t\tStudent Score  : "<<score<<endl;
		}
		//Static method
		static void Header(int n){
			foreColor(11);cout<<"\n\t\t\t\t======Information Student"<<n<<"======="<<endl;
			foreColor(11);cout<<"\t\t\t\t-----------------------------------"<<endl;
		}
		static void Footer(){
			foreColor(5);cout<<"\t\t\t\t=============\3\3\3\3\3\3\3=============="<<endl;
		}
};
int main(){

	
	Student::Header(1);
	Student stu(1001,19,"Ly Dani",'F',50.5);
	stu.Display();
	stu.Footer();
	
	Student::Header(2);
	Student stu1(stu);
	stu1.Display();
	stu1.Footer();
	
	Student::Header(3);
	Student stu2(stu1);
	stu2.Display();
	stu2.Footer();
	
	
	
	

	
	getch();
	return 0;
	
}