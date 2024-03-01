#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// ฟังก์ชันตรวจสอบว่าเป็นตัวอักษรตัวเลขหรือไม่
bool isOpran(char ch) {
    return isdigit(ch) || ch == '.';
}

// ฟังก์ชันคำนวณค่าของนิพจน์ที่เป็น opran
double evaluateOpran(const string& opranStr) {
    return stod(opranStr);
}

// ฟังก์ชันตรวจสอบความสำคัญของตัวดำเนินการ
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// ฟังก์ชันคำนวณผลลัพธ์ของนิพจน์
double evaluateEqu(const string& equ) {
    stack<double> oprans;
    stack<char> optors;

    string opranStr; // ใช้เก็บเลขหรือทศนิยม
    for (char ch : equ) {
        if (ch == ' ') continue; // ข้ามช่องว่าง
        else if (isOpran(ch)) {
            opranStr += ch; // เก็บเลขหรือทศนิยม
        } else if (ch == '(') {
            optors.push(ch);
        } else if (ch == ')') {
            oprans.push(evaluateOpran(opranStr)); // เพิ่มเลขหรือทศนิยมลงใน stack
            opranStr = ""; // รีเซ็ตค่าเพื่อรับตัวแปรใหม่
            while (!optors.empty() && optors.top() != '(') {
                double b = oprans.top(); oprans.pop();
                double a = oprans.top(); oprans.pop();
                char op = optors.top(); optors.pop();
                if (op == '+') oprans.push(a + b);
                else if (op == '-') oprans.push(a - b);
                else if (op == '*') oprans.push(a * b);
                else if (op == '/') oprans.push(a / b);
            }
            if (!optors.empty()) optors.pop(); // ลบวงเล็บซ้ายทิ้ง
        } else { // เป็นตัวดำเนินการ
            if (!opranStr.empty()) {
                oprans.push(evaluateOpran(opranStr)); // เพิ่มเลขหรือทศนิยมลงใน stack
                opranStr = ""; // รีเซ็ตค่าเพื่อรับตัวแปรใหม่
            }
            while (!optors.empty() && precedence(ch) <= precedence(optors.top())) {
                double b = oprans.top(); oprans.pop();
                double a = oprans.top(); oprans.pop();
                char op = optors.top(); optors.pop();
                if (op == '+') oprans.push(a + b);
                else if (op == '-') oprans.push(a - b);
                else if (op == '*') oprans.push(a * b);
                else if (op == '/') oprans.push(a / b);
            }
            optors.push(ch);
        }
    }

    if (!opranStr.empty()) {
        oprans.push(evaluateOpran(opranStr)); // เพิ่มเลขหรือทศนิยมลงใน stack
    }

    while (!optors.empty()) {
        double b = oprans.top(); oprans.pop();
        double a = oprans.top(); oprans.pop();
        char op = optors.top(); optors.pop();
        if (op == '+') oprans.push(a + b);
        else if (op == '-') oprans.push(a - b);
        else if (op == '*') oprans.push(a * b);
        else if (op == '/') oprans.push(a / b);
    }

    return oprans.top();
}

int main() {
    string equ;
    cout << "Enter an expression: ";
    getline(cin, equ);

    double result = evaluateEqu(equ);
    cout << "Result: " << result << endl;

    return 0;
}
