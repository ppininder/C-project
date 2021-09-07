#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num;
    vector<int> ar;
    while(cin >> num){
        while(num--){
            int current,num1,high;
            float yoyo;
            char f;
            while(cin >> num1) {
                ar.push_back(num1);
                while (cin >> num1) {
                    cin.get(f);
                    ar.push_back(num1);
                    if (f == '\n' || f == '\r')
                        break;
                }
                high = ar[4];
                current = (ar[0] * ar[1]) - (ar[2] * ar[3]);
                yoyo = ar[5] / current;
                if ( yoyo > high) {
                    printf("f%\n", (ar[5]/(ar[0]*ar[1]-(ar[2]*ar[3]))));
                }
                else
                    printf("%.2f\n", (ar[5])/(ar[0]*ar[1]));
            }
            ar.clear();
        }
    }
    return 0;
}