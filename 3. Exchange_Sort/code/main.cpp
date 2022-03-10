#include <iostream>
using namespace std;

//.global
int s;
int o[0];

    //.input.//
    void input() {
        cout
        << "\nSize data :  ";
        cin >> s;
        for (int x = 0; x < s; x++) {
            system("cls");
            cout
                    << "( Input Data | Index " << x + 1 << " )\n"
                    << ". . .\n"
                    << "> ";
            cin >> o[x];
        }
    }

    //.result.//
    //..
    void before() {
        cout << "User input : ";
        for (int x = 0; x < s; x++) {
            cout << " " << o[x] << " ";
        }cout << "\n";
    }
    //..
    void after() {
        cout << "Sorting    : ";
        for (int x = 0; x < s; x++) {
            cout << " " << o[x] << " ";
        }cout << "\n";
    }

    //.tukar.//
    void tukar (int a, int b) {
        int t;
        t = o[b];
        o[b] = o[a];
        o[a] = t;
    }

    //.bubble_sort.//
    void bubble() {
        for (int x = 1; x < s; x++) {
            for (int y = s - 1; y >= x; y--) {
                if (o[y] < o[y - 1])
                    tukar(y, y - 1);
            }
        }
    }


    //.exchange_sort.//
    void exchange() {
        for (int x = 0; x < s - 1; x++) {
            for (int y = (x + 1); y < s; y++) {
                if (o[x] > o[y])
                    tukar(x, y);
            }
        }
    }

    //.insertion_sort.//
    void insertion() {
        int temp, x, y;
        for (x = 1; x < s; x++) {
            temp = o[x];
            y = x - 1;
            while (o[y] > temp && y >= 0) {
                o[y + 1] = o[y];
                y--;}
            o[y + 1] = temp;
        }
    }

    //.selection_sort.//
    void selection() {
        int pos, x, y;
        for (x = 0; x < s - 1; x++) {
            pos = x;
            for (y = x + 1; y < s; y++) {
                if (o[y] < o[pos])
                    pos = y;
            }
            if (pos != x) tukar(pos, x);
        }
    }




//...//
int main() {
    //...
    char pil;
    //...
do{
    system("cls");
    cout
    << "=== || SORTING PROGRAM || ===\n";
    input();
    //...
    menu :
    system("cls");
    cout
            << ">> [ MAIN MENU ] <<\n"
            << "- - -\n"
            << "[1] Bubble Sort\n"
            << "[2] Exchange Sort\n"
            << "[3] Insertion Sort\n"
            << "[4] Selection Sort\n"
            << "- - -\n"
            << "[R] Reset\n"
            << "[E] Exit\n"
            << "\n> ";
    cin >> pil;
    system("cls");
    //...
    switch (pil) {
        case '1':
            cout
            << "( Bubble Sort | Ascending )\n"
            << ". . .\n";
            before();
            bubble();
            after();
            system("pause");
            goto menu;
        case '2':
            cout
            << "( Exchange Sort | Ascending )\n"
            << ". . .\n";
            before();
            exchange();
            after();
            system("pause");
            goto menu;
        case '3':
            cout
            << "( Insertion Sort | Ascending )\n"
            << ". . .\n";
            before();
            insertion();
            after();
            system("pause");
            goto menu;
        case '4':
            cout
            << "( Selection Sort | Ascending )\n"
            << ". . .\n";
            before();
            selection();
            after();
            system("pause");
            goto menu;
        case 'R' : case 'r':
            system("cls");
            cout << "<o> reset all data\n";
            system("pause");
            break;
        case 'E' : case 'e':
            system("cls");
            cout << "Terima Kasih!\n";
            system("pause");
            exit(0);
        default:
            system("cls");
            cout << "<!> unknown command. ";
            system("pause");

    }}while(pil != 0);
}