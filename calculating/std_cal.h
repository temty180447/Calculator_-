#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

//func ตรวจว่าเป็นตัวเลขหรือ .

bool isOpran(char ch) {
    return isdigit(ch) || ch == '.';
}
double evaluateOpran(const string& opranStr) {
    return stod(opranStr);
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double evaluateEqu(const string& equ) {
    stack<double> oprans;
    stack<char> optors;

    string opranStr; // ใช้เก็บเลข
    for (char ch : equ) {
        if (ch == ' ') continue; // ข้ามช่องว่าง
        else if (isOpran(ch)) {
            opranStr += ch; // เก็บเลข
        } 
        else if (ch == '(') {
            optors.push(ch);

        }
        else if (ch == ')') {
            oprans.push(evaluateOpran(opranStr)); //เพิ่มเลขลงแต็ก

            opranStr = ""; // รีเซ็ตค่า
            while (!optors.empty() && optors.top() != '(') {
                double b = oprans.top(); oprans.pop();
                double a = oprans.top(); oprans.pop();
                char op = optors.top(); optors.pop();
                    if (op == '+') oprans.push(a + b);
                    else if (op == '-') oprans.push(a - b);
                    else if (op == '*') oprans.push(a * b);
                    else if (op == '/') oprans.push(a / b);
                    else if (op == '^') oprans.push(power(a, b));
            }

            if (!optors.empty()) optors.pop(); // ลบวงเล็บเปิดทิ้ง
            } 
        else {
                    if (!opranStr.empty()) {
                      oprans.push(evaluateOpran(opranStr)); // เพิ่มเลขในแต็ก
                    opranStr = ""; // ล้างค่า

            }
            while (!optors.empty() && precedence(ch) <= precedence(optors.top())) {
                double b = oprans.top(); oprans.pop();
                double a = oprans.top(); oprans.pop();
                char op = optors.top(); optors.pop();
                if (op == '+') oprans.push(a + b);
                else if (op == '-') oprans.push(a - b);
                else if (op == '*') oprans.push(a * b);
                else if (op == '/') oprans.push(a / b);
                else if (op == '^') oprans.push(power(a, b));
            }
            optors.push(ch);
        }
    }
    
    if (!opranStr.empty()) {
        oprans.push(evaluateOpran(opranStr)); // เพิ่มเลขในแต็ก
    }

    while (!optors.empty()) {
        double b = oprans.top(); oprans.pop();
        double a = oprans.top(); oprans.pop();
        char op = optors.top(); optors.pop();
        if (op == '+') oprans.push(a + b);
        else if (op == '-') oprans.push(a - b);
        else if (op == '*') oprans.push(a * b);
        else if (op == '/') oprans.push(a / b);
        else if (op == '^') oprans.push(power(a, b));
    }

    return oprans.top();
}

int main() {
    string equ;

    cout << "Enter: ";

    getline(cin, equ);

    cout << "Result: " << evaluateEqu(equ);
  
    return 0;
}
