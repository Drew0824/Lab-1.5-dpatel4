
#include <iostream>

using namespace std;

int main() {
  
  int miles;
	float kilometers;
	
	cout << "Today is a great day for Lab\n";
	cout << "Type in a distance traveled of your choice in kilometers and press Enter\n";
	cin  >> miles;
	
	kilometers = miles * .621;
	cout << kilometers << " is distance traveld in miles\n";
  
}