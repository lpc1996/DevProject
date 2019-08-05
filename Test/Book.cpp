#include "Book.h"

void Book::setId(string id){
	this->id = id;
}

string Book::getId(){
	return this->id;
}
void Book::setName(string name){
	this->name=name;
}
string Book::getName(){
	return this->name;
}
void Book::setType(string type){
	this->type=type;
}
string Book::getType(){
	return this->type;
}
void Book::setOperatorId(string operatorId){
	this->operatorId=operatorId;
}
string Book::getOperatorId(){
	return this->operatorId;
}
void Book::setInTime(string inTime){
	this->inTime = inTime;
}
string Book::getInTime(){
	return this->inTime;
}
