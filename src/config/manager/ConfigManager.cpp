#include <iostream>
#include <fstream>

#include "../config.h"
#include "ConfigManager.h"
#include "ConfigManagerRead.inc"
#include "ConfigManagerPrint.inc"
#include "ConfigManagerWrite.inc"
#include "ConfigManagerMacro.inc"

using namespace std;

void ConfigManager::read(const char *fileName) {
	fstream file(fileName, ios::in);

	if ( !file.is_open() ) {
		printf("can't open %s\n", fileName);
	}

	while( getline(file, line) ){
		CFG_READ_MACRO
	}
	file.close();
}

void ConfigManager::write(const char *fileName) {
	writeFile = fopen(fileName, "w");
	CFG_WRITE_MACRO
	fclose( writeFile );
}

void ConfigManager::print() {
	CFG_PRINT_MACRO
}
