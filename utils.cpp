#include <iostream>
#include <string>
using namespace std;

/**
 * logs an input string, followed by a space, followed by the
 * words "on" or "off" depending on the passed boolean.
 * loggle is short for "log toggle"
 */
void loggle(std::string message, bool toggle) {
	cout << message << ' ';
	cout << (toggle ? "on" : "off");
	cout << '\n';
}
