#include "config/manager/ConfigManager.h"

#include <regex>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	ConfigManager::read("config.txt");
	ConfigManager::print();
	//ConfigManager::write("config_out.txt");
	return 0;
}
