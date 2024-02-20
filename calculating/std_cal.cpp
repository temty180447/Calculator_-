#include <iostream>
#include <string>

using namespace std;

int main()
{

    string eq;
    double num[1000];
    string s_num[1000];
    char sym[1000];

    cin >> eq;

    int j = 0, k = 0;
    for(int i = 0; i <  sizeof(eq); i++){
        if(eq[i] == '+'){
            sym[j] = '+';
            j++;
            k++;
        }
        else if(eq[i] == '-'){
            sym[j] = '-';
            j++;
            k++;
        }
        else if(eq[i] == '*'){
            sym[j] = '*';
            j++;
            k++;
        }
        else if(eq[i] == '/'){
            sym[j] = '/';
            j++;
            k++;
        }
        else{
            s_num[k] += eq[i];
        }
    }

    int s = 0,ans = 0;
    for(int i = 0; i < k-1; i++){
        if(sym[s] == '+'){
            ans += stod(s_num[i]) + stod(s_num[i+1]);
        }
        else if(sym[s] == '-'){
            ans += stod(s_num[i]) - stod(s_num[i+1]);
        }
        else if(sym[s] == '*'){
            ans += stod(s_num[i]) * stod(s_num[i+1]);
        }
        else if(sym[s] == '/'){
            ans += stod(s_num[i]) / stod(s_num[i+1]);
        }
    }
    cout << ans;
    return 0;
}
