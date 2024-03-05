private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ expression = textBox1->Text->Trim(); // ดึงข้อมูลที่ผู้ใช้ป้อนใน textBox1

// ตรวจสอบว่ามีการป้อนข้อมูลหรือไม่
if (expression->Length == 0) {
	// ถ้าไม่มีข้อมูลให้ไม่ดำเนินการใด ๆ และออกจากฟังก์ชัน
	return;
}

int openParenthesisCount = 0;
int closeParenthesisCount = 0;
for each (Char c in expression) {
	if (c == '(') {
		openParenthesisCount++;
	}
	else if (c == ')') {
		closeParenthesisCount++;
	}
}
if (openParenthesisCount != closeParenthesisCount) {
	textBox1->Text = "Error: Parentheses mismatch";
	return;
}

	// ตรวจสอบว่าผู้ใช้ป้อนค่า sin(, cos( หรือ tan( หรือไม่
	if (expression->StartsWith("sin(")) {
		// หากเป็น sin( ให้ดำเนินการคำนวณค่า sin
		CalculateTrigonometricFunction(expression, "sin");
	}
	else if (expression->StartsWith("cos(")) {
		// หากเป็น cos( ให้ดำเนินการคำนวณค่า cos
		CalculateTrigonometricFunction(expression, "cos");
	}
	else if (expression->StartsWith("tan(")) {
		// หากเป็น tan( ให้ดำเนินการคำนวณค่า tan
		CalculateTrigonometricFunction(expression, "tan");
	}
	else if (expression->StartsWith("cosec(")) {
		CalculateTrigonometricFunction(expression, "cosec");
	}
	else if (expression->StartsWith("sec(")) {
		CalculateTrigonometricFunction(expression, "sec");
	}
	else if (expression->StartsWith("cot(")) {
		CalculateTrigonometricFunction(expression, "cot");
	}
	else if (expression->StartsWith("sinh(")) {
		CalculateTrigonometricFunction(expression, "sinh");
	}
	else if (expression->StartsWith("cosh(")) {
		CalculateTrigonometricFunction(expression, "cosh");
	}
	else if (expression->StartsWith("tanh(")) {
		CalculateTrigonometricFunction(expression, "tanh");
	}
	else if (expression->StartsWith("log(")) {
		CalculateTrigonometricFunction(expression, "log");
	}
	else if (expression->StartsWith("ln(")) {
		CalculateTrigonometricFunction(expression, "ln");
	}
	else if (expression == "e") {
	// แสดงค่าของ "e" ใน textBox1
	textBox1->Text = Math::E.ToString();
	}

}

void CalculateTrigonometricFunction(String^ expression, String^ function) {
	// ตัดคำหน้าออกเพื่อให้ได้ค่าที่ต้องการคำนวณ
	String^ valueString = expression->Substring(function->Length + 1, expression->Length - function->Length - 2);
	double value = System::Convert::ToDouble(valueString);

	// ดำเนินการคำนวณค่าตามฟังก์ชันที่ระบุ (sin, cos, หรือ tan)
	double result;
	if (function == "sin") {
		result = Math::Sin(value);
	}
	else if (function == "cos") {
		result = Math::Cos(value);
	}
	else if (function == "tan") {
		result = Math::Tan(value);
	}else if (function == "cosec") {
		result = 1.0 / Math::Sin(value);
	}
	else if (function == "sec") {
		result = 1.0 / Math::Cos(value);
	}
	else if (function == "cot") {
		result = 1.0 / Math::Tan(value);
	}
	else if (function == "sinh") {
		result = Math::Sinh(value);
	}
	else if (function == "cosh") {
		result = Math::Cosh(value);
	}
	else if (function == "tanh") {
		result = Math::Tanh(value);
	}
	else if (function == "log") {
		result = Math::Log10(value);
	}
	else if (function == "ln") {
		result = log(value);
	}

	// แสดงผลลัพธ์ใน textBox1
	textBox1->Text = System::Convert::ToString(result);
}

private: System::Void btnSin_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "sin(";
}
private: System::Void btnCos_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "cos(";
}
private: System::Void btnTan_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "tan(";
}
private: System::Void btnCosec_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "cosec(";
}
private: System::Void btnSec_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "sec(";
}
private: System::Void btnCot_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "cot(";
}
private: System::Void btnArcsin_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "sinh(";
}
private: System::Void btnArccos_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "cosh(";
}
private: System::Void btnArctan_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "tanh(";
}
private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "log(";
}
private: System::Void btnLn_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "ln(";
}
private: System::Void btnE_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += "e";
}
private: System::Void btnPi_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0")
		textBox1->Clear();
	textBox1->Text += Math::PI.ToString();
}
