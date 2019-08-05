#ifndef TOOL_H
#define TOOL_H

#include "base.h"
#include <time.h>

class SysTime
{
	public:
		SysTime();
		int getYear();
		int getMonth();
		int getDay();
		int getHour();
		int getMinute();
		int getSecond();
		string getWeek();
		string toString();
		void printTime();
		void InitTime();
	protected:
		int year;
		int month;
		int day;
		int hour;
		int minute;
		int second;
		string week;
};

#endif
