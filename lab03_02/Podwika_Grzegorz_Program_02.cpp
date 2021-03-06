// Podwika_Grzegorz_Program_02.cpp - wtorek 11:00

#include "pch.h"
#include "libCollections.h"
#include "libTables.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 0, k = 0;
	loadCorrectParameters(n, k);

	char name[50];
	loadCorrectFileName(name);

	fstream recordFile = createRecordFIle(name);

	saveSubsetsInLexicoGraphicOrderToFile(recordFile, n, k);

	recordFile.close();
	return 0;
}