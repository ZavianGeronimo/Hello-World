
//Lab3 Zavian Geronimo
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
//Calculation
class Stats {
public:
    int n1, n2, n3, n4;
    double getMean() {
        double mean = (n1 + n2 + n3 + n4) / 4.0;
        return mean; 
    }

double getStdDev() {
    double mean = getMean();
    double sum = pow(n1 - mean, 2) + pow(n2 - mean, 2) + pow(n3 - mean, 2) + pow(n4 - mean, 2);
    double stddev = sqrt(sum / 4.0);
    return stddev; 

}
};
//Main code
int main() {
    Stats s;
    int choice;
    cout << "Choose input method:" << endl;
    cout << "1 - File input" << endl;
    cout << "2 - User input" << endl;
    cin >> choice;
//User picks 1 
    if (choice == 1) {
        ifstream inFile;
        inFile.open("inMeanStd.dat");
        
        inFile >> s.n1 >> s.n2 >> s.n3 >> s.n4;
        inFile.close();

        cout << "Numbers read from file: "
             << s.n1 << " " << s.n2 << " " << s.n3 << " " << s.n4 << endl;
             cout << "Mean: " << s.getMean() << endl;
             cout << "Standard Deviation: " << s.getStdDev() << endl;
             
             ofstream outFile;
        outFile.open("outMeanStd.dat");
        outFile << "Mean: " << s.getMean() << endl;
        outFile << "Standard Deviation: " << s.getStdDev() << endl;
        outFile.close();
    }
    // User picks 2
    else if (choice == 2) {
        cout << "Enter 4 intergers:";
        cin >> s.n1 >> s.n2 >> s.n3 >> s.n4;

        cout << "Mean: " << s.getMean() << endl;
        cout << "Standard Deviatation: " << s.getStdDev() <<endl;
    
    }
             


    

    return 0;
}
