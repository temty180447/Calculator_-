private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisplay->SelectionLength > 0)
	{
		// ถ้ามีข้อความถูกเลือก, ให้ลบข้อความนั้นออก
		int startIndex = txtDisplay->SelectionStart;
		int length = txtDisplay->SelectionLength;
		txtDisplay->Text = txtDisplay->Text->Remove(startIndex, length);
	}
	else if (txtDisplay->SelectionStart > 0)
	{
		// ถ้าไม่มีข้อความถูกเลือก และมีตำแหน่ง cursor ที่มากกว่า 0
		// ให้ลบอักขระที่ตำแหน่งก่อนหน้า cursor
		int cursorPos = txtDisplay->SelectionStart;
		txtDisplay->Text = txtDisplay->Text->Remove(cursorPos - 1, 1);
		txtDisplay->SelectionStart = cursorPos - 1; // เลื่อน cursor ไปที่ตำแหน่งก่อนหน้า
	}else if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}