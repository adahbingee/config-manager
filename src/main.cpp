#include "config/manager/ConfigManager.h"

int main(int argc, char *argv[]) {
	const char *inFileName  = argv[1];
	const char *outFileName = argv[2];
	ConfigManager::read(inFileName);
	ConfigManager::print();
	ConfigManager::write(outFileName);
	return 0;
}
