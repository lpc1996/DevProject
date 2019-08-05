#ifndef BOOK_H
#define BOOK_H

#include "base.h"

class Book
{
	public:
		void setId(string id);
		string getId();
		void setName(string name);
		string getName();
		void setType(string type);
		string getType();
		void setOperatorId(string operatorId);
		string getOperatorId();
		void setInTime(string inTime);
		string getInTime();
	protected:
		string id;
		string name;
		string type;
		string operatorId;
		string inTime;
};

#endif
