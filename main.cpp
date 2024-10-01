#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void generateArray(char *Array, int N)
{
    
    char avaibleArray[] = 
    {'A', 'B', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
    'M', 'N', 'O', 'Q', 'R', 'T', 'U', 'V', 'W', 'Y', 'Z', 
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
    '$', '+', '-', '_', '~'}; // N = 37
    int avaibleArrayN = 37;

    for(int i = 0; i < N; i++)
    {
        Array[i] = avaibleArray[rand() % avaibleArrayN];
    }

    return;
}

int arrayChange(char *Array, int N, bool isLettersChange = true)
{
    char changeChar;
    int counter = 0;

    if(isLettersChange){
        cout << "\nInput first char: ";
    }
    else{
        cout << "\nInput second char: ";
    }

    cin >> changeChar;

    for(int i = 0; i < N; i++)
    {
        if (isLettersChange && (Array[i] >= 65 && Array[i] <= 90))
        {
            Array[i] = changeChar;
            counter++;
        }
        else if (!isLettersChange && (Array[i] >= 48 && Array[i] <= 57))
        {
            Array[i] = changeChar;
            counter++;
        }
    }

    return counter;
}

void printArray(char *Array, int N)
{
    cout << "The array: ";
    for (int i = 0; i < N; i++)
    {
        cout << Array[i] << " ";
    }
    return;
}

int main()
{
    srand(time(NULL));
    
    char firstChar, secondChar;
    int N, counterLetters, counterNumbers, counterSpecial;

    cout << "Input N: ";
    cin >> N;

    char *Array = new char[N]; 
    char *IndexArray = new char[N]; 

    generateArray(Array, N);
    printArray(Array, N);

    counterLetters = arrayChange(Array, N, true);
    printArray(Array, N);

    counterNumbers = arrayChange(Array, N, false);
    counterSpecial = N - (counterLetters + counterNumbers);

    printArray(Array, N);

    cout << "\nThe number of repetitions first character: " << counterLetters;
    cout << "\nThe number of repetitions second character: " << counterNumbers;
    cout << "\nThe number of not replaced characters: " << counterSpecial;
    

    return 0;
}
