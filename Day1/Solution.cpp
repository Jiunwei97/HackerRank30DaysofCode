#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int test;
    double test2;
    string test3;
    // Read and save an integer, double, and String to your variables.
    cin>>test;
    cin>>test2;
    cin.get();
    getline(cin,test3);

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+test<<endl;
    // print the sum of the double variables on a new line.
    cout<<std::fixed<<std::setprecision(1)<<d+test2<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s<<test3;
    return 0;