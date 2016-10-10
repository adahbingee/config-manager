#ifndef SRC_CONFIG_CONFIGMANAGER_H_
#define SRC_CONFIG_CONFIGMANAGER_H_

class ConfigManager {
public:
	static void read(const char *fileName);
	static void write(const char *fileName);
	static void print();
};

#endif /* SRC_CONFIG_CONFIGMANAGER_H_ */
