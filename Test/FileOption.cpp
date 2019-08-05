#include "FileOption.h"

//FileOption::FileOption(){
////	this->fileName =path;
//}

//void FileOption::openApp(){
//	try{
//		this->file.open(this->fileName,ios::app);
//	}catch(std::exception& e){
//		cout<< "文件打开出错了" <<endl;
//		return ;
//	}
//}
//void FileOption::openAte(){
//	try{
//		this->file.open(this->fileName,ios:ate);
//	}catch(std::exception& e){
//		cout<< "文件打开出错了" <<endl;
//		return ;
//	}
//}
void FileOption::openIn(){
	try{
		this->ifFile.open("/book.xls");
	}catch(std::exception& e){
		cout<< "文件打开出错了" <<endl;
		return ;
	}
}
//void FileOption::openOut(){
//	try{
//		this->ofFile.open(this->file);
//	}catch(std::exception& e){
//		cout<< "文件打开出错了" <<endl;
//		return ;
//	}
//}
//void FileOption::openTrunc(){
//	try{
//		this->file.open(this->fileName,ios::trunc);
//	}catch(std::exception& e){
//		cout<< "文件打开出错了" <<endl;
//		return ;
//	}
//}
//void FileOption::openInOut(){
//	try{
//		this->file.open(this->fileName,ios::Init|ios::out);
//	}catch(std::exception& e){
//		cout<< "文件打开出错了" <<endl;
//		return ;
//	}
//}
