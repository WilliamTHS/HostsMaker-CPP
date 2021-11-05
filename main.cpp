#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string ipgtps;
	cout << "[?] IP Address : ";

	getline(cin, ipgtps);
	ofstream file("HOSTS");
	file << ipgtps + " growtopia1.com\n" + ipgtps + " growtopia2.com";
	file.close();
	cout << "[?] Hosts succesfully created\n";
}
