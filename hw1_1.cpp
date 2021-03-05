#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    int inputAmount = 0;

    //Get User input for size of numbers and define
    //additional variables for processing.
    cin >> inputAmount;
    int input [inputAmount];
    int mostFrequentNumber = input[0];
    int tempMostFrequentNumber = 0;
    int numFrequency= 1;
    int tempNumFrequency = 0;

    //Loop through array to build array
    for(int i = 0; i < inputAmount; i++){
        cin >> input[i];
    }

    //Sort Array
    sort(input, input + inputAmount);

    //Check to find most common number
    for(int i = 0; i < inputAmount; i++) {
        cout << input[i] << " ";

        if(input[i] == input[i - 1]) {
            tempNumFrequency++;
        }
        else {
            if(tempNumFrequency > numFrequency) {
                numFrequency = tempNumFrequency;
                mostFrequentNumber = input[i - 1];
            }
            tempNumFrequency = 1;
        }

        if(tempNumFrequency > numFrequency) {
            numFrequency = tempNumFrequency;
            mostFrequentNumber = input[i - 1];
        }

    }
    cout << " " << endl;
    cout << "Number: " << mostFrequentNumber << endl;
    cout << "Frequency: " << numFrequency << endl;
    return 0;

}
