
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0));

    int minimum, maximum;// деклариране на долна и горна граница за число

    cout << "Guess My Number Game\n\n";
    cout << "Enter minimum number: ";
    cin >> minimum;// вход на минимално число
    cout << "\nEnter maximum number: ";
    cin >> maximum;// вход за максимално число
    cout << endl;

    int num = rand() % (maximum - minimum) + minimum;// избиране на число между минимум и максимум
    int guess = 0, guess_count = 0;// деклариране броя познавания и въведеното число
    while (guess != num) {// продължаване на въвеждането до познаване на числото
        guess_count++;// увеличаване на броя на познаванията

        cout << "Enter a guess between " << minimum << " and  "<< maximum << ": ";
        cin >> guess;
        if (guess == 0) {
            cout << "\nGame ended\n";
            break;// ако се въведе 0 играта приключва
        }
        if (guess > num) {
            cout << "Too high!\n\n";// проверяване дали предположеното е по-голямо от числото
        }
        else if (guess < num) {
                cout << "Too low!\n\n";// проверяваме дали предположеното е по-малко от числото
        }
        else {
            cout << "\nCorrect! You got it" << guess_count << " guesses";
            // ако предишните две не са изпълнени предположеното е равно на числото
        }
    }


    return 0;
}
