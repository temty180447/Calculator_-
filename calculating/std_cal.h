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
long double evaluateOpran(const string& opranStr) {
    return stold(opranStr);
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

long double power(long double base, long double exponent) {
    return pow(base, exponent);
}

long double evaluateEqu(const string& equ) {
    stack<long double> oprans;
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
                long double b = oprans.top(); oprans.pop();
                long double a = oprans.top(); oprans.pop();
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
                long double b = oprans.top(); oprans.pop();
                long double a = oprans.top(); oprans.pop();
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
        long double b = oprans.top(); oprans.pop();
        long double a = oprans.top(); oprans.pop();
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
