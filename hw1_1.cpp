#include <iostream>


using namespace std;
int main() {

    int inputAmount = 0;

    //Get User input for size of numbers
    cin >> inputAmount;
    int input [inputAmount];

    //Loop through array to build array
    for(int i = 0; i < inputAmount; i++){
        cin >> input[i];
    }

    //Check to find most common number
    for(int i = 0; i < inputAmount; i++) {
        cout << input[i];
    }

    cout << "Number: " << endl;
    cout << "Frequency: " << endl;
    return 0;

}
