#include <stdio.h>
#include "config/manager/ConfigManager.h"

int main(int argc, char *argv[]) {
	if (argc < 3) {
		printf("exe [input config] [output config]\n");
		return 0;
	}
	const char *inFileName  = argv[1];
	const char *outFileName = argv[2];
	ConfigManager::read(inFileName);
	ConfigManager::print();
	ConfigManager::write(outFileName);
	return 0;
}
