#include <iostream>
#include <fstream>

#include "../config.h"
#include "ConfigManager.h"
#include "ConfigManagerRead.inc"
#include "ConfigManagerPrint.inc"

using namespace std;

void ConfigManager::read(const string& fileName) {
	fstream file(fileName, ios::in);

	while( getline(file, line) ){
		CFG_READ(CFG_0);
		CFG_READ(CFG_1);
		CFG_READ(CFG_2);
		CFG_READ(CFG_3);
		CFG_READ(CFG_4);
		CFG_READ(CFG_5);
	}
	file.close();
}

void ConfigManager::write(const string& fileName) {
}

void ConfigManager::print() {
	CFG_PRINT(CFG_0);
	CFG_PRINT(CFG_1);
	CFG_PRINT(CFG_2);
	CFG_PRINT(CFG_3);
	CFG_PRINT(CFG_4);
	CFG_PRINT(CFG_5);
}
