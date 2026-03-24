#include<iostream>
#include"antheaderPlusPlus.h"
#include<conio.h>
using namespace std;
class Product{
	private:
		int barcode,qty;
		string name;
		double price,total_price;
		char expired[20];
	public:
		//setter
		void setBarcode(int barcode){
			this->barcode = barcode;
		}
		void setQty(int qty){
			this->qty = qty;
		}
		void setName(string name){
			this->name = name;
		}
		void setPrice(double price){
			this->price = price;
		}
		void setExpired(const char* expired){
			strcpy(this->expired, expired);
		}
//		void settotal(double total_price){
//			this->total_price = total_price;
//		}
		//getter
		int getBarcode() const{
			return barcode;
		}
		int getQty() const{
			return qty;
		}
		string getName()const{
			return name;
		}
		double getPrice() const{
			return price;
		}
		const char* getExpired() const{
			return expired;
		}
		double gettotal_price() const{
			return price*qty;
		}
		

};
Product pro;
void Flower1();
void Flower2();
int main(){
	
	pro.setBarcode(1001);
	pro.setQty(3);
	pro.setName("Milk");
	pro.setPrice(1200);
	pro.setExpired("2028");
	
	drawBoxDoubleLineWithBG(33,2,50,1,10);
	gotoxy(36,3);foreColor(4);cout<<"==========This is an Invoice==========";
	drawBoxDoubleLineWithBG(33,5,50,15,11);
	Flower1();
	Flower2();
	gotoxy(36,7);foreColor(1);cout<<"Product Barcode is	: "<<pro.getBarcode();
	gotoxy(36,9);foreColor(2);cout<<"Product Qty is	: "<<pro.getQty();
	gotoxy(36,11);foreColor(7);cout<<"Product Name is	: "<<pro.getName();
	gotoxy(36,13);foreColor(8);cout<<"Product Price is	: "<<pro.getPrice()<<"$";
	gotoxy(36,15);foreColor(6);cout<<"Product Expired is	: "<<pro.getExpired();
	gotoxy(36,17);foreColor(11);cout<<"Total Payment	: "<<pro.gettotal_price()<<"$";
	gotoxy(42,19);foreColor(10);cout<<"****Thanks for buying****";

	
	
	getch();
	return 0;
}
void Flower1(){
	
gotoxy(7,10);foreColor(12);cout<<R"(      .--.)";delay(60);
gotoxy(7,11);foreColor(12);cout<<R"(    .'_\/_'.)";delay(60);
gotoxy(7,12);foreColor(12);cout<<R"(    '. /\ .')";delay(60);
gotoxy(7,13);foreColor(10);cout<<R"(      "||")";delay(60);
gotoxy(7,14);foreColor(10);cout<<R"(       || /\)";delay(60);
gotoxy(7,15);foreColor(10);cout<<R"(    /\ ||//\))";delay(60);
gotoxy(7,16);foreColor(10);cout<<R"(   (/\\||/)";delay(60);
gotoxy(7,17);foreColor(10);cout<<R"(______\||/_______)";delay(60);
}
void Flower2(){
	
gotoxy(90,10);foreColor(12);cout<<R"(      .--.)";delay(60);
gotoxy(90,11);foreColor(12);cout<<R"(    .'_\/_'.)";delay(60);
gotoxy(90,12);foreColor(12);cout<<R"(    '. /\ .')";delay(60);
gotoxy(90,13);foreColor(10);cout<<R"(      "||")";delay(60);
gotoxy(90,14);foreColor(10);cout<<R"(       || /\)";delay(60);
gotoxy(90,15);foreColor(10);cout<<R"(    /\ ||//\))";delay(60);
gotoxy(90,16);foreColor(10);cout<<R"(   (/\\||/)";delay(60);
gotoxy(90,17);foreColor(10);cout<<R"(______\||/_______)";delay(60);
}