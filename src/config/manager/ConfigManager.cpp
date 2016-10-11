#include <iostream>
#include <fstream>

#include "../config.h"
#include "ConfigManager.h"
#include "ConfigManagerRead.inc"
#include "ConfigManagerPrint.inc"
#include "ConfigManagerWrite.inc"

using namespace std;

void ConfigManager::read(const char *fileName) {
	fstream file(fileName, ios::in);

	if ( !file.is_open() ) {
		printf("can't open %s\n", fileName);
	}

	while( getline(file, line) ){
		CFG_READ(CFG_0);
		CFG_READ(CFG_1);
		CFG_READ(CFG_2);
		CFG_READ(CFG_3);
		CFG_READ(CFG_4);
		CFG_READ(CFG_5);
		CFG_READ(CFG_6);
		CFG_READ(CFG_7);
		CFG_READ(CFG_8);
	}
	file.close();
}

void ConfigManager::write(const char *fileName) {
	writeFile = fopen(fileName, "w");
	CFG_WRITE(CFG_0);
	CFG_WRITE(CFG_1);
	CFG_WRITE(CFG_2);
	CFG_WRITE(CFG_3);
	CFG_WRITE(CFG_4);
	CFG_WRITE(CFG_5);
	CFG_WRITE(CFG_6);
	CFG_WRITE(CFG_7);
	CFG_WRITE(CFG_8);
	fclose( writeFile );
}

void ConfigManager::print() {
	CFG_PRINT(CFG_0);
	CFG_PRINT(CFG_1);
	CFG_PRINT(CFG_2);
	CFG_PRINT(CFG_3);
	CFG_PRINT(CFG_4);
	CFG_PRINT(CFG_5);
	CFG_PRINT(CFG_6);
	CFG_PRINT(CFG_7);
	CFG_PRINT(CFG_8);
}
