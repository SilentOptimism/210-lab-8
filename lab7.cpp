#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// function prototypes
string* reverseArray(string array[], int size);
void printArray(string* array, int size);

int main(int argc, char const *argv[])
{
    const int SIZE = 5;
    string names[SIZE] = {"Janet", "Jeffe", "Jin", "Joe", "Junio"};
    string* reversed = reverseArray(names, SIZE);

    cout << "Original array: ";
    printArray(names, SIZE);
    cout << "Reversed: ";
    printArray(reversed, SIZE);

    return 0;
}

/*
 reverseArray: reverses an array

 Arguments: string pointer pointing to an array, an int containing the size of the array 

 Returns: string* that points to the reversed array
*/
string* reverseArray(string* array, int SIZE){
    string* reversed = new string[SIZE]; // Creates a string array on the heap

    // Reverses the array
    for (int i = 0; i < SIZE; i++){
        reversed[i] = array[SIZE-i-1];
    }

    return reversed;
}

/*
 printArray: prints an array

 Arguments: string pointer pointing to an array, an int containing the size of the array 

 Returns: string* that points to a reversed array thats stored on the heap
*/
void printArray(string* array, int SIZE){

    // Prints out the array
    for (int i = 0; i < SIZE; i++){
        cout << *(array + i) << " ";
    }

    cout << endl;
}


