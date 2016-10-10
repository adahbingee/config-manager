#ifndef SRC_CONFIG_CONFIGMANAGER_H_
#define SRC_CONFIG_CONFIGMANAGER_H_

#include <string>

using namespace std;

class ConfigManager {
public:
	static void read(const string &fileName);
	static void write(const string &fileName);
	static void print();
};

#endif /* SRC_CONFIG_CONFIGMANAGER_H_ */
