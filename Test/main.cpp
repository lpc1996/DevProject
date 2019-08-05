#include "base.h"
#include "Book.h"
#include "SysTime.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//Book book;
	SysTime time;
//	cout << "当前时间为：" << time.getYear() << "年" << time.getMonth()  <<"月" <<time.getDay() <<"日" << "	" << time.getHour() 
	//<<":" <<time.getMinute() << ":" <<time.getSecond() << "本周的第" << time.getWeek() << "天" <<endl;
	time.printTime();
	system("pause");
	return 0;
}

