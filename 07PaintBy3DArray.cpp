//Starter code for paint by 3D array
//This code already runs.  Your task is to add the new functions specified.
//You should not need to modify the other functions provided.


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//declare global constants for image size
const int ROWS = 5;
const int COLS = 5;
const int RGB = 3; // each RGB pixel contains 3 values: red, green, blue

//Function declarations
void pixelByPixel(int arrayToModify[][COLS][RGB]);
//Precondition: global constants COLS and RGB are initialized to a value
//arrayToModify is a 3D int array containing ROWS rows, COLS columns, and RGB pixels
//Postcondition: prompts user to fill in values for each element in arrayToModify
//arrayToModify is updated automatically in main since arrays are passed by reference


void writeImageToFile(int arrayToOutput[][COLS][RGB], string outputfilename);
//Precondition: global constants COLS and RGB are initialized to a value
//arrayToOutput is a 3D int array containing ROWS rows, COLS columns, and RGB pixels
//arrayToOutput has all values initialized to pixels between 0 and 255
//Postcondition: outputs arrayToOutput as a properly formatted ppm image
//with the filename specified by the user

void paintRedImage(int arrayToOutput[][COLS][RGB]);
//Precondition: global constants COLS and RGB are initialized to a value
//arrayToOutput is a 3D int array containing ROWS rows, COLS columns, and RGB pixels
//Postcondition: sets each pixel of the image to red with RGB value (255, 0, 0)

//  add paintBlueImage, paintYellowImage, paintCheckerboardImage
// declarations with preconditions and postconditions


int main() {

    //bool variable to keep painting
    bool keepPainting = true;

    //char variable to hold user's menu choice
    char menuChoice;

    //variable to hold output file
    string outputFileName;

    //declare array to hold pixels of image
    int imageArray[ROWS][COLS][RGB];
    //this array will have ROWS rows, COLS columns,
    //and 3 slots for red, green and blue values


    while (keepPainting) {
        cout << "Welcome to \"Paint by 3D Array\"!" << endl;

        cout << "What would you like to do?  Enter the number corresponding to your choice: "
             << endl
             << "1. Paint my own image pixel by pixel." << endl
             << "2. Paint a red image." << endl

             //For assignment 7, you need to add code and functions to do these features:
             << "3. Paint a blue image." << endl
             //note: blue reqires R = 0, G = 0, B = 255
             << "4. Paint a yellow image." << endl
             //note: yellow requires R = 255, G = 255, B = 0
             << "5. Paint a black and white checkerboard image." << endl
             //note: black requires RGB = (0, 0, 0) and white requires (255, 255, 255)

             << "6. Output my image to the file of my choice." << endl
             << "7. Exit the program." << endl;

//For up to 3pts extra credit, you can add up to 3 unique menu options.


        cin >> menuChoice;

        switch (menuChoice) {
            case '1': {
                pixelByPixel(imageArray);  //call pixelByPixel function for imageArray
                break;
            }
            case '2': {
            //call paint red image function
                paintRedImage(imageArray);
                break;
            }
            case '3': {
                cout << "Add your code here!" << endl;
                //call paint blue image function
                //You need to declare and define this function, then call it here
                break;
            }
            case '4':
            {
                cout << "Add your code here!" << endl;
                //call paint yellow image function
                //You need to declare and define this function, then call it here
                break;
            }
            case '5':
            {
                cout << "Add your code here!" << endl;
                //call checkerboard function
                //You need to declare and define this function, then call it here
                break;
            }

            case '6':
            {
                cout << endl << "Enter the filename where you want to write your image. "
                     << endl << "Be sure to use .ppm as the file extension." << endl;
                //save filename
                cin >> outputFileName;
                //call output file writing function
                writeImageToFile(imageArray, outputFileName);
                break;

            }
            case '7':
            {
                keepPainting = false;
                cout << "Thanks for painting with arrays.  Have a nice day." << endl;
                break;
            }
            default:
                cout << "That is not a valid choice.";
        }
    }

    return 0;
}


void pixelByPixel(int arrayToModify[][COLS][RGB])
{
    cout << "Let's start painting."
         << "For each pixel in your image, specify the RGB values." << endl
         << "Pixels must be whole numbers between 0 and 255." << endl;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << endl << "Enter the R G B values for the pixel at row " << i << " and column " << j << endl;
            for (int k = 0; k < RGB; k++) {

                if (k == 0) {
                    //first, enter the data for pixel's R value (red)
                    cout << "Enter the R value:";

                    //save user input to "R" value of the desired pixel
                    cin >> arrayToModify[i][j][k];
                }

                if (k == 1) {
                    //next, enter the data for pixel's G value (green)
                    cout << "Enter the G value:";

                    //save user input to "G" value of the desired pixel
                    cin >> arrayToModify[i][j][k];
                }

                if (k == 2)
                {
                    //next, enter the data for pixel's B value (green)
                    cout << "Enter the B value:";

                    //save user input to "G" value of the desired pixel
                    cin >> arrayToModify[i][j][k];
                }

            }
        }
    }

    cout << "Painting complete.  Returning to main." << endl << endl;
}


void paintRedImage(int arrayToOutput[][COLS][RGB])
{
    cout << endl << "Setting all pixels to red... " << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            //set RGB pixel at row i and column j to red (255, 0, 0)

            arrayToOutput[i][j][0] = 255;  //"R" is 255 for max red
            arrayToOutput[i][j][1] = 0;    //"G" is 0 for no green
            arrayToOutput[i][j][2] = 0;    //"B" is 0 for no blue
        }
    }

    cout << "Red image has been painted.  Returning to main." << endl;
}

void writeImageToFile(int arrayToOutput[][COLS][RGB], string outputfilename)
{
    ofstream outFile;
    outFile.open(outputfilename);

    //output ppm header to file
    outFile << "P3" << endl;
    outFile << ROWS << " " << COLS << endl;
    outFile << "255" << endl;

    //use loop to output pixels as R G B values.  3 values per pixel.

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < RGB; k++) {
                //output each R, G, B value for each pixel
                //to the file, with each value separated by a space
                outFile << arrayToOutput[i][j][k] << "\t";
            }
        }
        outFile << endl;  //add newline between rows
    }

//close the file when finished writing.

    outFile.close();

    cout << "Your \"painting\" has been written to: " << outputfilename << "." << endl;
}