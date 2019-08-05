#include "SysTime.h"

SysTime::SysTime(){ 
	this->InitTime();
}

void SysTime::InitTime(){
	string weeks[] = {"��","һ","��","��","��","��","��"}; 
	//��ȡϵͳʱ��  
	time_t now_time=time(NULL);  
	//��ȡ����ʱ��  
	tm*  t_tm = localtime(&now_time);  
	//ת��Ϊ����������ʱ������  
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
string SysTime::toString(){//����ȡ����ʱ��ת�����ַ��� 
	char str[100];
	sprintf(str,"%d��%d��%d�� %d:%02d:%02d;����",this->year,this->month,this->day,this->hour,this->minute,this->second);
	string timeStr=string(str);
	timeStr.append(this->week);
	return timeStr;
}
void SysTime::printTime(){
	cout << "��ǰϵͳʱ��Ϊ��" <<this->toString() << endl;
}
