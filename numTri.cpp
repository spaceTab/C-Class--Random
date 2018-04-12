#include <iostream>


using namespace std;

int main(){

    int k;
    cin >> k;
    cout << endl;

    //ascending half the pyramid
    int i = 0, j = 0;
    for (i = 1; i <= k; ++i){
        for (j = 1; j <= i; ++j){
            cout << j << " ";
        }
        cout << endl;
    }
    //descending half of the pyramid
    for (i = k; i >= 1; --i){
        for (j =1; j <= i - 1; ++j){
            cout << j << " ";
        }
        cout << endl;
    }



    return 0;
}
