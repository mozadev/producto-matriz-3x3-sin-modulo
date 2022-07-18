#include <iostream>

using namespace std;
int main() {

    int a[3][3], b[3][3], matrizResul[3][3];
    
    cout<<"primera matriz"<<endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "ingresa valor [" << i << "][" << j << "]: " ;
            cin >> a[i][j];
        }
    }
    cout<<endl;

    cout<<"segunda matriz"<<endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "ingresa valor [" << i << "][" << j << "]: " ;
            cin >> b[i][j];
        }
    }
    cout<<endl;
    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
           matrizResul[x][y]= (a[x][0] * b[0][y]) + (a[x][1] * b[1][y]) + (a[x][2] * b[2][y]);
        }
    }

    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
            cout<< matrizResul[x][y]<< "\t";
        }
        cout<<endl;
    }
    
    return 0;
}
