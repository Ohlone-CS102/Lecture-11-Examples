#include <iostream>
using namespace std;

int main() {

    const int MAX_LENGTH = 280;
    char userMessage[MAX_LENGTH];
    int menuChoice;

    cout << "Please enter the message, one character at a time." << endl;

    //enter message one letter at a time

    int userMessageLength;
    for (int count = 0; count < MAX_LENGTH; count++) {
        char nextLetter;
        cout << "Enter the next letter: ";
        cin >> nextLetter;

        if (nextLetter == '0') {
            userMessageLength = count;
            break;
        }
        userMessage[count] = nextLetter;
    }

    cout << "\n You entered: ";
    for (int count = 0; count < userMessageLength; count++) {
        cout << userMessage[count] << " ";
    }

    return 0;

}