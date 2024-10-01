#include <iostream>

using namespace std;

void generateArray(char *Array, int N)
{
    ////////////////////
    return;
}


int arrayChange(char *Array, int N, bool isLettersChange = true)
{
    char changeChar;
    int counter = 0;

    if(isLettersChange){
        cout << "\nInput first char:";
    }
    else{
        cout << "\nInput second char:";
    }

    cin >> changeChar;

    // /////////////////////////
    
    return counter;
}

void printArray(char *Array, int N)
{
    cout << "\n";
    for (int i = 0; i < N; i++)
    {
        cout << Array[i] << " ";
    }
    return;
}

int main()
{
    char firstChar, secondChar;
    int N, counterLetters, counterNumbers, counterSpecial;

    cout << "\nInput N:";
    cin >> N;

    char *Array = new char[N]; 

    generateArray(Array, N);
    printArray(Array, N);

    counterLetters = arrayChange(Array, N, true);
    counterNumbers = arrayChange(Array, N, false);
    counterSpecial = N - (counterLetters + counterNumbers);

    printArray(Array, N);

    cout << "\nThe number of repetitions first character: " << counterLetters;
    cout << "\nThe number of repetitions second character: " << counterNumbers;
    cout << "\nThe number of not replaced characters: " << counterSpecial;
    

    return 0;
}
