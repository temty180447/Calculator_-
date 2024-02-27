#include <iostream>
#include <string>

using namespace std;

int main()
{

    string eq;
    string s_num[100];
    char symbol[100];

    cin >> eq;

    int cnt_sym = 0, cnt_num = 0; //ใช้นับตัวสัญลักษณ์และชุดตัวเลข
    for(unsigned int i = 0; i < eq.length(); i++){
        if(eq[i] == '+' || eq[i] == '-' || eq[i] == '*' || eq[i] == '/'){
            symbol[cnt_sym] = eq[i];
            cnt_sym++;
        }
        else{
            s_num[cnt_num] += eq[i];
            if (i == eq.length() - 1 || eq[i+1] == '+' || eq[i+1] == '-' || eq[i+1] == '*' || eq[i+1] == '/') cnt_num++;
        }
    }
    
    double cng[1000]; //สร้างมาเก็บค่าตัวเลขที่มีค่าเปลี่ยนแปลงไป
    for(int i = 0; i < cnt_num; i++){
        cng[i] = stod(s_num[i]);
    }
    
    for(int i = 0; i < cnt_sym;){
        if(symbol[i] == '*' || symbol[i] == '/'){
            if(symbol[i] == '*'){
                cng[i] = cng[i] * cng[i+1];
            }
            else if(symbol[i] == '/'){
                if(cng[i+1] != 0){
                    cng[i] = cng[i] / cng[i+1];
                }
                else{
                    cout << "Error!!" << endl;
                    break;
                }
            }
            for(int j = i; j < cnt_sym-1; j++){
                symbol[j] = symbol[j+1]; //setลำดับsymbolใหม่
            }
            for(int j = i+1; j < cnt_num-1; j++){
                cng[j] = cng[j+1]; //setลำดับตัวเลขใหม่
            }
            cnt_sym--;
            cnt_num--;
        }
        else{
            i++;
        }
    }
    
    double ans = cng[0];
    for(int i = 0; i < cnt_sym; i++){
        if(symbol[i] == '+'){
            ans += cng[i+1];
        }
        else if(symbol[i] == '-'){
            ans -= cng[i+1];
        }
    }
    
    cout << ans;
    
    return 0;
}