#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
    int test,num;
    cin >> test;
    while(test--) {
        vector <int> temp;
        vector <int> ok;
        vector <int> three;
        vector <int> six;
        cin >> num;//有幾個數字
        int num1;
        for (int i = 0 ; i < num ; ++i) {
            cin >> num1;
            temp.push_back(num1);
        }
        int count_three=0,count_six=0;
        for (int x = 0; x < temp.size() ; ++x) {
            if (temp[x]==9)
                ok.push_back(temp[x]);
            if (temp[x]==3)
                count_three+=1;
                three.push_back(x);//紀錄三的位置
            if (temp[x]==6)
                count_six+=1;
                six.push_back(x);//紀錄六的位置
        }
        if (count_six==count_three) { //如果三跟六個數相同，全部印出
            for (auto i : temp)
                ok.push_back(i);
            sort(ok.begin(), ok.end(), greater<int>());
            for (auto i : ok)
                cout << i ;
            cout << "\n";
        }
        if (count_three%3==0) {
            for (int i = 0 ; i<three.size() ; i++)
                ok.push_back(temp[three[i]]);
            sort(ok.begin(), ok.end(), greater<int>());
            for (auto i : ok)
                cout << i;
            cout << "\n";
        }
        if (count_six%3==0) {
            for (int i ; i<six.size() ; i++)
                ok.push_back(temp[six[i]]);
            sort(ok.begin(), ok.end(), greater<int>());
            for (auto i : ok)
                cout << i;
            cout << "\n";
        }
        else
            while(six.size() and three.size()){
                ok.push_back(temp[
            }

    }
}