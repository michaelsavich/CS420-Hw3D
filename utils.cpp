#include <iostream>
#include <string>
using namespace std;

/**
 * toggles a bool passed in by reference;
 */
void toggle(bool &b) {
	b = !b;
}
/**
 * logs the string name of a boolean,
 * followed by a " toggled ", followed by the
 * words "on" or "off" depending on the passed boolean.
 * loggle is short for "log toggle"
 */
void loggle(std::string name, bool b) {
	cout << name << " toggled " << (b ? "on" : "off") << endl;
}

/**
 * calls toggle and then loggle
 */
void tloggle(std::string name, bool &b) {
	toggle(b);
	loggle(name,b);
}
