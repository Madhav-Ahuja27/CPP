#include <iostream>
using namespace std;
int main(){
//	istream& getline(istream& is, string& str, char delim);
	cout << "Enter your name: "; 
	string y,m;
    cin.getline (y, m); 
}
/*is: is an object of the istream class that tells the stream’s function the input that needs to be read.
str: is the string object that stores the input after the stream’s reading process is finished.
delim: defines the delimitation character, which commands the function to stop processing the input. The reading process will stop once the written code reads this command.*/
