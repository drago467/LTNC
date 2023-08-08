#include <iostream>
using namespace std;
char arr[100];
char characters[] = {'a', 'b', 'c', 'd'};
void Try(int i) {
    for (int j=0; j<4; j++) {
        arr[i] = characters[j];
        if (i==2) {
            for (int k=0; k<3; k++) {
                cout << arr[k];
            }
            cout << endl;
        }
        else {
            Try(i+1);
        }
    }
}
int main() {
    Try(0);
}

