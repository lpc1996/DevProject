#ifndef FILEOPTION_H
#define FILEOPTION_H

#include "base.h"
#include <fstream>

class FileOption
{
	public:
		const string BOOK="/book.xls";
//		FileOption();
//		void openApp();
//		void openAte();
		void openIn();
//		void openOut();
//		void openTrunc();
//		void openInOut();
	protected:
		string fileName;
		fstream file;
		ofstream ofFile;
		ifstream ifFile;
		
};

#endif
