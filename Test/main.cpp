#include "base.h"
#include "Book.h"
#include "SysTime.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//Book book;
	SysTime time;
//	cout << "��ǰʱ��Ϊ��" << time.getYear() << "��" << time.getMonth()  <<"��" <<time.getDay() <<"��" << "	" << time.getHour() 
	//<<":" <<time.getMinute() << ":" <<time.getSecond() << "���ܵĵ�" << time.getWeek() << "��" <<endl;
	time.printTime();
	system("pause");
	return 0;
}

