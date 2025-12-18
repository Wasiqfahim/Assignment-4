


#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

void displaySeats(int seats[ROWS][COLS]) {
    cout << "\nBus Seat Layout (0 = Empty, 1 = Reserved)\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

void reserveSeat(int seats[ROWS][COLS]) {
    int r, c;
    cout << "Enter row number (1-10): ";
    cin >> r;
    cout << "Enter seat number (1-10): ";
    cin >> c;

    if (seats[r-1][c-1] == 0) {
        seats[r-1][c-1] = 1;
        cout << "Seat reserved successfully.\n";
    } else {
        cout << "Seat already reserved.\n";
    }
}

void cancelSeat(int seats[ROWS][COLS]) {
    int r, c;
    cout << "Enter row number (1-10): ";
    cin >> r;
    cout << "Enter seat number (1-10): ";
    cin >> c;

    if (seats[r-1][c-1] == 1) {
        seats[r-1][c-1] = 0;
        cout << "Reservation cancelled.\n";
    } else {
        cout << "Seat is already empty.\n";
    }
}

void countRows(int seats[ROWS][COLS]) {
    int full = 0, partial = 0, empty = 0;

    for (int i = 0; i < ROWS; i++) {
        int count = 0;
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j] == 1)
                count++;
        }

        if (count == 10)
            full++;
        else if (count == 0)
            empty++;
        else
            partial++;
    }

    cout << "\nFully occupied rows: " << full << endl;
    cout << "Partially occupied rows: " << partial << endl;
    cout << "Empty rows: " << empty << endl;
}

int main() {
    int seats[ROWS][COLS] = {0};
    int choice;

    do {
        cout << "\n--- Bus Seat Reservation Menu ---\n";
        cout << "1. Display Seats\n";
        cout << "2. Reserve a Seat\n";
        cout << "3. Cancel a Seat\n";
        cout << "4. Count Row Status\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
            displaySeats(seats);
        else if (choice == 2)
            reserveSeat(seats);
        else if (choice == 3)
            cancelSeat(seats);
        else if (choice == 4)
            countRows(seats);
        else if (choice == 5)
            cout << "Program ended.\n";
        else
            cout << "Invalid choice.\n";

    } while (choice != 5);

    return 0;
}
