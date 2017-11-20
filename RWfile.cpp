/* 
 *  example of using iostream and fstream libraries for c++ file io
 *  
 *  Al Curry     February, 2017
 * 
 * For this example, input file is assumed to be in the same directory from which the compiled
 * program is run.  The output file will be placed here as well.   
 * 
 * A slicker option would allow the filename and io directories to be specified as program arguments, 
 * passed them in on invocation, or prompted for.  But again, this program could be replaced by your
 * OS copy command, it is merely an extecise.
 *  
 */

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {

	string line;
	ofstream outputFile;
	ifstream inputFile;

	inputFile.open("ac.txt");
	outputFile.open("Curry.txt");  // options can be added to open rather than overwrite 
                                       // existing file, also for binary rather than text mode

	if (inputFile.is_open()) {
		while (getline(inputFile, line)) {

			//cout << "number of characters in line below: " << line.length() << "\n";
			//cout << line << "\n";
                    
                        // send the line read in to the outputFile stream, followed by a newline character 
			outputFile << line << "\n";

		}
	} else {
		cout << "file not opened\n";
	}

	outputFile.close();
	inputFile.close();

	return 0;
}