#ifndef SRC_CONFIG_CONFIGMANAGER_H_
#define SRC_CONFIG_CONFIGMANAGER_H_

class ConfigManager {
public:
	static void read(const char *fileName = "config.txt");
	static void write(const char *fileName = "config.txt");
	static void print();
};

#endif /* SRC_CONFIG_CONFIGMANAGER_H_ */
