/**

*

* Solution to course project # 9

* Introduction to programming course

* Faculty of Mathematics and Informatics of Sofia University

* Winter semester 2021/2022

*

* @author Damir Rami

* @idnumber 855318

* @compiler GCC

*

* <file with helper functions>

*

*/


#include <iomanip>
#include<iostream>
#include<windows.h>
#include<thread>

using namespace std;

int hours, minutes, seconds;
int zeroColor, oneColor, twoColor, threeColor, fourColor, fiveColor, sixColor, sevenColor, eightColor, nineColor;

char zero[11][10] = {{'0','0','0','0','0','0','0','0','0','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0','0','0','0','0','0','0','0','0','0'}};

char one[11][1] = {{'1'},
                    {'1'},
                    {'1'},
                    {'1'},
                    {'1'},
                    {'1'},
                    {'1'},
                    {'1'},
                    {'1'},
                    {'1'},
                    {'1'}};

char two[11][10] = {{'2','2','2','2','2','2','2','2','2','2'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','2'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','2'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','2'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','2'},
                    {'2','2','2','2','2','2','2','2','2','2'},
                    {'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'2','2','2','2','2','2','2','2','2','2'}};

char three[11][10] = {{'3','3','3','3','3','3','3','3','3','3'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                    {'3','3','3','3','3','3','3','3','3','3'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
                    {'3','3','3','3','3','3','3','3','3','3'}};

char four[11][10] = {{'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                    {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                    {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                    {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                    {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                    {'4','4','4','4','4','4','4','4','4','4'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','4'}};

char five[11][10] = {{'5','5','5','5','5','5','5','5','5','5'},
                    {'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'5','5','5','5','5','5','5','5','5','5'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
                    {'5','5','5','5','5','5','5','5','5','5'}};

char six[11][10] = {{'6','6','6','6','6','6','6','6','6','6'},
                    {'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'6','6','6','6','6','6','6','6','6','6'},
                    {'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
                    {'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
                    {'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
                    {'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
                    {'6','6','6','6','6','6','6','6','6','6'}};

char seven[11][10] = {{'7','7','7','7','7','7','7','7','7','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','7'}};

char eight[11][10] = {{'8','8','8','8','8','8','8','8','8','8'},
                    {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                    {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                    {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                    {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                    {'8','8','8','8','8','8','8','8','8','8'},
                    {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                    {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                    {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                    {'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
                    {'8','8','8','8','8','8','8','8','8','8'}};

char nine[11][10] = {{'9','9','9','9','9','9','9','9','9','9'},
                    {'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                    {'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                    {'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                    {'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                    {'9','9','9','9','9','9','9','9','9','9'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
                    {'9','9','9','9','9','9','9','9','9','9'}};

void setColor(int randomNumber){
    if(minutes < 15 && hours == 0) {
        return;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), randomNumber);
}

void dispalyClock(){
    system("cls");

    int hoursFirst, hoursSecond, minutesFirst, minutesSecond, secondsFirst, secondsSecond;

    hoursFirst = hours / 10;
    hoursSecond = hours % 10;
    minutesFirst = minutes / 10;
    minutesSecond = minutes % 10;
    secondsFirst = seconds / 10;
    secondsSecond = seconds % 10;

    if(minutes < 15 && hours == 0) {
        system("Color 6");
    }
    if(seconds < 60 && hours == 0 && minutes == 0) {
        system("Color 4");
    }
    if(seconds < 10 && hours == 0 && minutes == 0) {

    }

    srand(time(NULL));

    cout << endl << endl << endl << endl << endl << endl << endl;

    for(int i = 0; i < 11; i++) {

        if(hours > 0) {
            cout << setw(20);

            if(hoursFirst == 0) {
                for(int j = 0; j < 10; j++) {
                    setColor(zeroColor);
                    cout << zero[i][j];
                }
            } else if(hoursFirst == 1) {
                for(int j = 0; j < 1; j++) {
                    setColor(oneColor);
                    cout << one[i][j];
                }
            } else if(hoursFirst == 2) {
                for(int j = 0; j < 10; j++) {
                    setColor(twoColor);
                    cout << two[i][j];
                }
            } else if(hoursFirst == 3) {
                for(int j = 0; j < 10; j++) {
                    setColor(threeColor);
                    cout << three[i][j];
                }
            } else if(hoursFirst == 4) {
                for(int j = 0; j < 10; j++) {
                    setColor(fourColor);
                    cout << four[i][j];
                }
            } else if(hoursFirst == 5) {
                for(int j = 0; j < 10; j++) {
                    setColor(fiveColor);
                    cout << five[i][j];
                }
            } else if(hoursFirst == 6) {
                for(int j = 0; j < 10; j++) {
                    setColor(sixColor);
                    cout << six[i][j];
                }
            } else if(hoursFirst == 7) {
                for(int j = 0; j < 10; j++) {
                    setColor(sevenColor);
                    cout << seven[i][j];
                }
            } else if(hoursFirst == 8) {
                for(int j = 0; j < 10; j++) {
                    setColor(eightColor);
                    cout << eight[i][j];
                }
            } else if(hoursFirst == 9) {
                for(int j = 0; j < 10; j++) {
                    setColor(nineColor);
                    cout << nine[i][j];
                }
            }

            cout << "   ";

            if(hoursSecond == 0) {
                for(int j = 0; j < 10; j++) {
                    setColor(zeroColor);
                    cout << zero[i][j];
                }
            } else if(hoursSecond == 1) {
                for(int j = 0; j < 1; j++) {
                    setColor(oneColor);
                    cout << one[i][j];
                }
            } else if(hoursSecond == 2) {
                for(int j = 0; j < 10; j++) {
                    setColor(twoColor);
                    cout << two[i][j];
                }
            } else if(hoursSecond == 3) {
                for(int j = 0; j < 10; j++) {
                    setColor(threeColor);
                    cout << three[i][j];
                }
            } else if(hoursSecond == 4) {
                for(int j = 0; j < 10; j++) {
                    setColor(fourColor);
                    cout << four[i][j];
                }
            } else if(hoursSecond == 5) {
                for(int j = 0; j < 10; j++) {
                    setColor(fiveColor);
                    cout << five[i][j];
                }
            } else if(hoursSecond == 6) {
                for(int j = 0; j < 10; j++) {
                    setColor(sixColor);
                    cout << six[i][j];
                }
            } else if(hoursSecond == 7) {
                for(int j = 0; j < 10; j++) {
                    setColor(sevenColor);
                    cout << seven[i][j];
                }
            } else if(hoursSecond == 8) {
                for(int j = 0; j < 10; j++) {
                    setColor(eightColor);
                    cout << eight[i][j];
                }
            } else if(hoursSecond == 9) {
                for(int j = 0; j < 10; j++) {
                    setColor(nineColor);
                    cout << nine[i][j];
                }
            }

            if(i == 3 || i == 6) {
                cout << "   #   ";
            } else {
                cout << "       ";
            }
        }

        if(minutes > 0) {
            if(hours == 0) {
                cout << setw(35);
            }

            if(minutesFirst == 0) {
                for(int j = 0; j < 10; j++) {
                    setColor(zeroColor);
                    cout << zero[i][j];
                }
            } else if(minutesFirst == 1) {
                for(int j = 0; j < 1; j++) {
                    setColor(oneColor);
                    cout << one[i][j];
                }
            } else if(minutesFirst == 2) {
                for(int j = 0; j < 10; j++) {
                    setColor(twoColor);
                    cout << two[i][j];
                }
            } else if(minutesFirst == 3) {
                for(int j = 0; j < 10; j++) {
                    setColor(threeColor);
                    cout << three[i][j];
                }
            } else if(minutesFirst == 4) {
                for(int j = 0; j < 10; j++) {
                    setColor(fourColor);
                    cout << four[i][j];
                }
            } else if(minutesFirst == 5) {
                for(int j = 0; j < 10; j++) {
                    setColor(fiveColor);
                    cout << five[i][j];
                }
            } else if(minutesFirst == 6) {
                for(int j = 0; j < 10; j++) {
                    setColor(sixColor);
                    cout << six[i][j];
                }
            } else if(minutesFirst == 7) {
                for(int j = 0; j < 10; j++) {
                    setColor(sevenColor);
                    cout << seven[i][j];
                }
            } else if(minutesFirst == 8) {
                for(int j = 0; j < 10; j++) {
                    setColor(eightColor);
                    cout << eight[i][j];
                }
            } else if(minutesFirst == 9) {
                for(int j = 0; j < 10; j++) {
                    setColor(nineColor);
                    cout << nine[i][j];
                }
            }

            cout << "       ";

            if(minutesSecond == 0) {
                for(int j = 0; j < 10; j++) {
                    setColor(zeroColor);
                    cout << zero[i][j];
                }
            } else if(minutesSecond == 1) {
                for(int j = 0; j < 1; j++) {
                    setColor(oneColor);
                    cout << one[i][j];
                }
            } else if(minutesSecond == 2) {
                for(int j = 0; j < 10; j++) {
                    setColor(twoColor);
                    cout << two[i][j];
                }
            } else if(minutesSecond == 3) {
                for(int j = 0; j < 10; j++) {
                    setColor(threeColor);
                    cout << three[i][j];
                }
            } else if(minutesSecond == 4) {
                for(int j = 0; j < 10; j++) {
                    setColor(fourColor);
                    cout << four[i][j];
                }
            } else if(minutesSecond == 5) {
                for(int j = 0; j < 10; j++) {
                    setColor(fiveColor);
                    cout << five[i][j];
                }
            } else if(minutesSecond == 6) {
                for(int j = 0; j < 10; j++) {
                    setColor(sixColor);
                    cout << six[i][j];
                }
            } else if(hoursSecond == 7) {
                for(int j = 0; j < 10; j++) {
                    setColor(sevenColor);
                    cout << seven[i][j];
                }
            } else if(minutesSecond == 8) {
                for(int j = 0; j < 10; j++) {
                    setColor(eightColor);
                    cout << eight[i][j];
                }
            } else if(minutesSecond == 9) {
                for(int j = 0; j < 10; j++) {
                    setColor(nineColor);
                    cout << nine[i][j];
                }
            }

            if(i == 3 || i == 6) {
                cout << "   #   ";
            } else {
                cout << "       ";
            }
        }

        if(hours == 0 && minutes == 0) {
            cout << setw(50);
        }

        if(secondsFirst == 0) {
            for(int j = 0; j < 10; j++) {
                setColor(zeroColor);
                cout << zero[i][j];
            }
        } else if(secondsFirst == 1) {
            for(int j = 0; j < 1; j++) {
                setColor(oneColor);
                cout << one[i][j];
            }
        } else if(secondsFirst == 2) {
            for(int j = 0; j < 10; j++) {
                setColor(twoColor);
                cout << two[i][j];
            }
        } else if(secondsFirst == 3) {
            for(int j = 0; j < 10; j++) {
                setColor(threeColor);
                cout << three[i][j];
            }
        } else if(secondsFirst == 4) {
            for(int j = 0; j < 10; j++) {
                setColor(fourColor);
                cout << four[i][j];
            }
        } else if(secondsFirst == 5) {
            for(int j = 0; j < 10; j++) {
                setColor(fiveColor);
                cout << five[i][j];
            }
        } else if(secondsFirst == 6) {
            for(int j = 0; j < 10; j++) {
                setColor(sixColor);
                cout << six[i][j];
            }
        } else if(secondsFirst == 7) {
            for(int j = 0; j < 10; j++) {
                setColor(sevenColor);
                cout << seven[i][j];
            }
        } else if(secondsFirst == 8) {
            for(int j = 0; j < 10; j++) {
                setColor(eightColor);
                cout << eight[i][j];
            }
        } else if(secondsFirst == 9) {
            for(int j = 0; j < 10; j++) {
                setColor(nineColor);
                cout << nine[i][j];
            }
        }

        cout << "       ";

        if(secondsSecond == 0) {
            for(int j = 0; j < 10; j++) {
                setColor(zeroColor);
                cout << zero[i][j];
            }
        } else if(secondsSecond == 1) {
            for(int j = 0; j < 1; j++) {
                setColor(oneColor);
                cout << one[i][j];
            }
        } else if(secondsSecond == 2) {
            for(int j = 0; j < 10; j++) {
                setColor(twoColor);
                cout << two[i][j];
            }
        } else if(secondsSecond == 3) {
            for(int j = 0; j < 10; j++) {
                setColor(threeColor);
                cout << three[i][j];
            }
        } else if(secondsSecond == 4) {
            for(int j = 0; j < 10; j++) {
                setColor(fourColor);
                cout << four[i][j];
            }
        } else if(secondsSecond == 5) {
            for(int j = 0; j < 10; j++) {
                setColor(fiveColor);
                cout << five[i][j];
            }
        } else if(secondsSecond == 6) {
            for(int j = 0; j < 10; j++) {
                setColor(sixColor);
                cout << six[i][j];
            }
        } else if(secondsSecond == 7) {
            for(int j = 0; j < 10; j++) {
                setColor(sevenColor);
                cout << seven[i][j];
            }
        } else if(secondsSecond == 8) {
            for(int j = 0; j < 10; j++) {
                setColor(eightColor);
                cout << eight[i][j];
            }
        } else if(secondsSecond == 9) {
            for(int j = 0; j < 10; j++) {
                setColor(nineColor);
                cout << nine[i][j];
            }
        }

        cout << endl;
    }
}

void timer() {

    hours = seconds / 3600;
    seconds -= hours * 3600;
    minutes = seconds / 60;
    seconds -= minutes * 60;

    zeroColor = rand() % 15 + 1;
    oneColor = rand() % 15 + 1;
    twoColor = rand() % 15 + 1;
    threeColor = rand() % 15 + 1;
    fourColor = rand() % 15 + 1;
    fiveColor = rand() % 15 + 1;
    sixColor = rand() % 15 + 1;
    sevenColor = rand() % 15 + 1;
    eightColor = rand() % 15 + 1;
    nineColor = rand() % 15 + 1;

    while(seconds >= 0 || minutes > 0 || hours > 0){
        dispalyClock();

        Sleep(1000);

        if(seconds == 0 && (minutes > 0 || hours > 0)) {
            seconds = 60;

            if(minutes == 0 && hours > 0) {
                minutes = 60;
                hours--;
            }
            minutes--;
        }

        seconds--;
    }

    cout << '\a';
}
unsigned long n = 1;

int main() {

    cin >> seconds;

    timer();

    return 0;
}
