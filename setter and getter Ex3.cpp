#include<iostream>
#include<conio.h>
using namespace std;
class Employee{
	private:
		string name,tel;
		int id;
		char gender;
		double salary;
		char company[20];
	public:
		void setName(string name){
			this->name = name;
		}
		void setTel(string tel){
			this->tel = tel;
		}
		void setGender(char gender){
			this->gender = gender;
		}
		void setId(int id){
			this->id = id;
		}
		void setSalary(double salary){
			this->salary = salary;
		}
		void setCompany(const char* company){
			strcpy(this->company, company);
		}
		string getName() const{
			return name;
		}
		string getTel() const{
			return tel;
		}
		int getId() const{
			return id;
		}
		double getSalary() const{
			return salary;
		}
		char* getCompany(){
			return company;
		}
		char getGender() const{
			return gender;
		}
};
Employee emp;
int main(){
	emp.setName("Ly tida");
	emp.setId(1001);
	emp.setTel("01234567");
	emp.setGender('F');
	emp.setSalary(1002);
	emp.setCompany("KFC");
	
	cout<<"\t Emplayee's name      : "<<emp.getName()<<endl;
	cout<<"\t Emplayee's ID        : "<<emp.getId()<<endl;
	cout<<"\t Emplayee's Gender    : "<<emp.getGender()<<endl;
	cout<<"\t Emplayee's Telegram  : "<<emp.getTel()<<endl;
	cout<<"\t Emplayee's Salary    : "<<emp.getSalary()<<endl;
	cout<<"\t Emplayee's Company   : "<<emp.getCompany()<<endl;
	
	
	
	
	
	getch();
	return 0;
}