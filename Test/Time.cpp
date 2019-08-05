#include "Time.h"

Time::Time(){ 
	this->InitTime();
}

void Time::InitTime(){
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

int Time::getYear(){
	return this->year;
}
int Time::getMonth(){
	return this->month;
}
int Time::getDay(){
	return this->day;
}
int Time::getHour(){
	return this->hour;
}
int Time::getMinute(){
	return this->minute;
}
int Time::getSecond(){
	return this->second;
}
string Time::getWeek(){
	return this->week;
}
string Time::toString(){//����ȡ����ʱ��ת�����ַ��� 
	char str[100];
	sprintf(str,"%d��%d��%d�� %d:%02d:%02d;����",this->year,this->month,this->day,this->hour,this->minute,this->second);
	string timeStr=string(str);
	timeStr.append(this->week);
	return timeStr;
}
void Time::printTime(){
	cout << "��ǰϵͳʱ��Ϊ��" <<this->toString() << endl;
}
