#include "SysTime.h"

SysTime::SysTime(){ 
	this->InitTime();
}

void SysTime::InitTime(){
	string weeks[] = {"日","一","二","三","四","五","六"}; 
	//获取系统时间  
	time_t now_time=time(NULL);  
	//获取本地时间  
	tm*  t_tm = localtime(&now_time);  
	//转换为年月日星期时分秒结果  
	this->year=t_tm->tm_year + 1900;
	this->month=t_tm->tm_mon + 1;
	this->day=t_tm->tm_mday ;
	this->hour=t_tm->tm_hour;
	this->minute=t_tm->tm_min;
	this->second=t_tm->tm_sec;
	this->week=weeks[t_tm->tm_wday];
}

int SysTime::getYear(){
	return this->year;
}
int SysTime::getMonth(){
	return this->month;
}
int SysTime::getDay(){
	return this->day;
}
int SysTime::getHour(){
	return this->hour;
}
int SysTime::getMinute(){
	return this->minute;
}
int SysTime::getSecond(){
	return this->second;
}
string SysTime::getWeek(){
	return this->week;
}
string SysTime::toString(){//将获取到的时间转换成字符串 
	char str[100];
	sprintf(str,"%d年%d月%d日 %d:%02d:%02d;星期",this->year,this->month,this->day,this->hour,this->minute,this->second);
	string timeStr=string(str);
	timeStr.append(this->week);
	return timeStr;
}
void SysTime::printTime(){
	cout << "当前系统时间为：" <<this->toString() << endl;
}
