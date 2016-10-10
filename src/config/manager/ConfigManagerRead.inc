#include <string>
#include <regex>
#include <sstream>

using namespace std;

string line;         // line buffer
#define CFG_READ(x) cfgRead(line, #x, x)

static void parse(const string &line, string &name, string &value) {
	regex pattern("\\s?(\\w+)\\s+(.*)");
	smatch match; // match result
	if ( regex_match(line, match, pattern) ) {
		name  = match[1];
		value = match[2];
	}
}

static void parseArray(const string &in, vector<string> &element) {
	smatch match;
	regex pattern("([0-9-.]+)");   // matches words beginning by "sub"
	string str = in;
	element.clear();

	while ( regex_search (str, match, pattern) ) {
		//cout << match[1] << endl;
		element.push_back( match[1].str() );
		str = match.suffix().str();
	}
}

template <size_t size>
bool cfgRead(const string &line, string varName, int (&var)[size]) {
	string lineVarName;  // variable name buffer
	string lineVarValue; // variable value buffer
	parse(line, lineVarName, lineVarValue);

	vector<string> arr;
	parseArray(lineVarValue, arr);

	if ( lineVarName == varName ) {
		for (size_t i = 0; i < size; ++i) {
			var[i] = stoi(arr[i]);
		}
		return true;
	} else {
		return false;
	}
}

template <size_t size>
bool cfgRead(const string &line, string varName, float (&var)[size]) {
	string lineVarName;  // variable name buffer
	string lineVarValue; // variable value buffer
	parse(line, lineVarName, lineVarValue);

	vector<string> arr;
	parseArray(lineVarValue, arr);

	if ( lineVarName == varName ) {
		for (size_t i = 0; i < size; ++i) {
			var[i] = stof(arr[i]);
		}
		return true;
	} else {
		return false;
	}
}

template <size_t size>
bool cfgRead(const string &line, string varName, double (&var)[size]) {
	string lineVarName;  // variable name buffer
	string lineVarValue; // variable value buffer
	parse(line, lineVarName, lineVarValue);

	vector<string> arr;
	parseArray(lineVarValue, arr);

	if ( lineVarName == varName ) {
		for (size_t i = 0; i < size; ++i) {
			var[i] = stod(arr[i]);
		}
		return true;
	} else {
		return false;
	}
}

bool cfgRead(const string &line, string varName, int &var) {
	string lineVarName;  // variable name buffer
	string lineVarValue; // variable value buffer
	parse(line, lineVarName, lineVarValue);
	if ( lineVarName == varName ) {
		var = stoi( lineVarValue );
		return true;
	} else {
		return false;
	}
}

bool cfgRead(const string &line, string varName, float &var) {
	string lineVarName;  // variable name buffer
	string lineVarValue; // variable value buffer
	parse(line, lineVarName, lineVarValue);
	if ( lineVarName == varName ) {
		var = stof( lineVarValue );
		return true;
	} else {
		return false;
	}
}

bool cfgRead(const string &line, string varName, double &var) {
	string lineVarName;  // variable name buffer
	string lineVarValue; // variable value buffer
	parse(line, lineVarName, lineVarValue);
	if ( lineVarName == varName ) {
		var = stod( lineVarValue );
		return true;
	} else {
		return false;
	}
}
