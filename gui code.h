#pragma once

namespace CalculatorNew {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::Button^ btnLog;

	private: System::Windows::Forms::Button^ btnLn;

	private: System::Windows::Forms::Button^ btnE;
	private: System::Windows::Forms::Button^ btnLeft;
	private: System::Windows::Forms::Button^ btnRight;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;






	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ btnRoot;

	private: System::Windows::Forms::Button^ btnPi;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;




	private: System::Windows::Forms::Button^ btnDivide;

	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ btnPercent;
	private: System::Windows::Forms::Button^ btnSeta;


	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;





	private: System::Windows::Forms::Button^ btnMultiplied;


	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ btnX;
	private: System::Windows::Forms::Button^ btnI;


	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btndot;
	private: System::Windows::Forms::Button^ btnPlus;

	private: System::Windows::Forms::Button^ btnMinus;






	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ btnInfinity;

	private: System::Windows::Forms::Button^ btnY;
	private: System::Windows::Forms::Button^ btnZ;
	private: System::Windows::Forms::Button^ btnComma;



	private: System::Windows::Forms::Button^ btnEquals;

	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ btn1;
private: System::Windows::Forms::Button^ btnClear;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btnRoot = (gcnew System::Windows::Forms::Button());
			this->btnPi = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->btnPercent = (gcnew System::Windows::Forms::Button());
			this->btnSeta = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplied = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->btnX = (gcnew System::Windows::Forms::Button());
			this->btnI = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btndot = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->btnInfinity = (gcnew System::Windows::Forms::Button());
			this->btnY = (gcnew System::Windows::Forms::Button());
			this->btnZ = (gcnew System::Windows::Forms::Button());
			this->btnComma = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnLog
			// 
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog->Location = System::Drawing::Point(78, 154);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(60, 50);
			this->btnLog->TabIndex = 1;
			this->btnLog->Text = L"log";
			this->btnLog->UseVisualStyleBackColor = true;
			// 
			// btnLn
			// 
			this->btnLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLn->Location = System::Drawing::Point(144, 154);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(60, 50);
			this->btnLn->TabIndex = 2;
			this->btnLn->Text = L"ln";
			this->btnLn->UseVisualStyleBackColor = true;
			// 
			// btnE
			// 
			this->btnE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnE->Location = System::Drawing::Point(210, 154);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(60, 50);
			this->btnE->TabIndex = 5;
			this->btnE->Text = L"e";
			this->btnE->UseVisualStyleBackColor = true;
			// 
			// btnLeft
			// 
			this->btnLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLeft->Location = System::Drawing::Point(276, 154);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(60, 50);
			this->btnLeft->TabIndex = 4;
			this->btnLeft->Text = L"(";
			this->btnLeft->UseVisualStyleBackColor = true;
			// 
			// btnRight
			// 
			this->btnRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRight->Location = System::Drawing::Point(342, 154);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(60, 50);
			this->btnRight->TabIndex = 3;
			this->btnRight->Text = L")";
			this->btnRight->UseVisualStyleBackColor = true;
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(408, 154);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(60, 50);
			this->btn7->TabIndex = 8;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(474, 154);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(60, 50);
			this->btn8->TabIndex = 7;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(540, 154);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(60, 50);
			this->btn9->TabIndex = 6;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnDelete->Location = System::Drawing::Point(606, 154);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(60, 50);
			this->btnDelete->TabIndex = 9;
			this->btnDelete->Text = L"";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(12, 210);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 50);
			this->button11->TabIndex = 19;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(78, 210);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 50);
			this->button12->TabIndex = 18;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(144, 210);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 50);
			this->button13->TabIndex = 17;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(210, 210);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 50);
			this->button14->TabIndex = 16;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// btnRoot
			// 
			this->btnRoot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRoot->Location = System::Drawing::Point(276, 210);
			this->btnRoot->Name = L"btnRoot";
			this->btnRoot->Size = System::Drawing::Size(60, 50);
			this->btnRoot->TabIndex = 15;
			this->btnRoot->Text = L"√";
			this->btnRoot->UseVisualStyleBackColor = true;
			// 
			// btnPi
			// 
			this->btnPi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPi->Location = System::Drawing::Point(342, 210);
			this->btnPi->Name = L"btnPi";
			this->btnPi->Size = System::Drawing::Size(60, 50);
			this->btnPi->TabIndex = 14;
			this->btnPi->Text = L"π";
			this->btnPi->UseVisualStyleBackColor = true;
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(408, 210);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(60, 50);
			this->btn4->TabIndex = 13;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(474, 210);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(60, 50);
			this->btn5->TabIndex = 12;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(540, 210);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(60, 50);
			this->btn6->TabIndex = 11;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(606, 210);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(60, 50);
			this->btnDivide->TabIndex = 10;
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(12, 266);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(60, 50);
			this->button21->TabIndex = 39;
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(78, 266);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(60, 50);
			this->button22->TabIndex = 38;
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(144, 266);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(60, 50);
			this->button23->TabIndex = 37;
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(210, 266);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(60, 50);
			this->button24->TabIndex = 36;
			this->button24->UseVisualStyleBackColor = true;
			// 
			// btnPercent
			// 
			this->btnPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPercent->Location = System::Drawing::Point(276, 266);
			this->btnPercent->Name = L"btnPercent";
			this->btnPercent->Size = System::Drawing::Size(60, 50);
			this->btnPercent->TabIndex = 35;
			this->btnPercent->Text = L"%";
			this->btnPercent->UseVisualStyleBackColor = true;
			// 
			// btnSeta
			// 
			this->btnSeta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeta->Location = System::Drawing::Point(342, 266);
			this->btnSeta->Name = L"btnSeta";
			this->btnSeta->Size = System::Drawing::Size(60, 50);
			this->btnSeta->TabIndex = 34;
			this->btnSeta->Text = L"θ";
			this->btnSeta->UseVisualStyleBackColor = true;
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(474, 266);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(60, 50);
			this->btn2->TabIndex = 32;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(540, 266);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(60, 50);
			this->btn3->TabIndex = 31;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btnMultiplied
			// 
			this->btnMultiplied->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiplied->Location = System::Drawing::Point(606, 266);
			this->btnMultiplied->Name = L"btnMultiplied";
			this->btnMultiplied->Size = System::Drawing::Size(60, 50);
			this->btnMultiplied->TabIndex = 30;
			this->btnMultiplied->Text = L"×";
			this->btnMultiplied->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(12, 322);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(60, 50);
			this->button31->TabIndex = 29;
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(78, 322);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(60, 50);
			this->button32->TabIndex = 28;
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(144, 322);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(60, 50);
			this->button33->TabIndex = 27;
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(210, 322);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(60, 50);
			this->button34->TabIndex = 26;
			this->button34->UseVisualStyleBackColor = true;
			// 
			// btnX
			// 
			this->btnX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnX->Location = System::Drawing::Point(276, 322);
			this->btnX->Name = L"btnX";
			this->btnX->Size = System::Drawing::Size(60, 50);
			this->btnX->TabIndex = 25;
			this->btnX->Text = L"x";
			this->btnX->UseVisualStyleBackColor = true;
			// 
			// btnI
			// 
			this->btnI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnI->Location = System::Drawing::Point(342, 322);
			this->btnI->Name = L"btnI";
			this->btnI->Size = System::Drawing::Size(60, 50);
			this->btnI->TabIndex = 24;
			this->btnI->Text = L"i";
			this->btnI->UseVisualStyleBackColor = true;
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(408, 322);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(60, 50);
			this->btn0->TabIndex = 23;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btndot
			// 
			this->btndot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndot->Location = System::Drawing::Point(474, 322);
			this->btndot->Name = L"btndot";
			this->btndot->Size = System::Drawing::Size(60, 50);
			this->btndot->TabIndex = 22;
			this->btndot->Text = L".";
			this->btndot->UseVisualStyleBackColor = true;
			this->btndot->Click += gcnew System::EventHandler(this, &MyForm::btndot_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(540, 322);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(60, 50);
			this->btnPlus->TabIndex = 21;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(606, 322);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(60, 50);
			this->btnMinus->TabIndex = 20;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(12, 378);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(60, 50);
			this->button41->TabIndex = 49;
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(78, 378);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(60, 50);
			this->button42->TabIndex = 48;
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(144, 378);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(60, 50);
			this->button43->TabIndex = 47;
			this->button43->UseVisualStyleBackColor = true;
			// 
			// btnInfinity
			// 
			this->btnInfinity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInfinity->Location = System::Drawing::Point(210, 378);
			this->btnInfinity->Name = L"btnInfinity";
			this->btnInfinity->Size = System::Drawing::Size(60, 50);
			this->btnInfinity->TabIndex = 46;
			this->btnInfinity->Text = L"∞";
			this->btnInfinity->UseVisualStyleBackColor = true;
			// 
			// btnY
			// 
			this->btnY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnY->Location = System::Drawing::Point(276, 378);
			this->btnY->Name = L"btnY";
			this->btnY->Size = System::Drawing::Size(60, 50);
			this->btnY->TabIndex = 45;
			this->btnY->Text = L"y";
			this->btnY->UseVisualStyleBackColor = true;
			// 
			// btnZ
			// 
			this->btnZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZ->Location = System::Drawing::Point(342, 378);
			this->btnZ->Name = L"btnZ";
			this->btnZ->Size = System::Drawing::Size(60, 50);
			this->btnZ->TabIndex = 44;
			this->btnZ->Text = L"z";
			this->btnZ->UseVisualStyleBackColor = true;
			// 
			// btnComma
			// 
			this->btnComma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComma->Location = System::Drawing::Point(408, 378);
			this->btnComma->Name = L"btnComma";
			this->btnComma->Size = System::Drawing::Size(60, 50);
			this->btnComma->TabIndex = 43;
			this->btnComma->Text = L",";
			this->btnComma->UseVisualStyleBackColor = true;
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(474, 378);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(60, 50);
			this->btnEquals->TabIndex = 42;
			this->btnEquals->Text = L"Ans";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->Location = System::Drawing::Point(540, 378);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(60, 50);
			this->button49->TabIndex = 41;
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->Location = System::Drawing::Point(606, 378);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(60, 50);
			this->button50->TabIndex = 40;
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"Angsana New", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->Location = System::Drawing::Point(12, 98);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(126, 50);
			this->button51->TabIndex = 50;
			this->button51->Text = L"แคลคูลัส";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Font = (gcnew System::Drawing::Font(L"Angsana New", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button52->Location = System::Drawing::Point(144, 98);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(126, 50);
			this->button52->TabIndex = 51;
			this->button52->Text = L"เมทริกซ์";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"Angsana New", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button53->Location = System::Drawing::Point(276, 98);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(126, 50);
			this->button53->TabIndex = 52;
			this->button53->Text = L"จำนวนเชิงซ้อน";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Font = (gcnew System::Drawing::Font(L"Angsana New", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->Location = System::Drawing::Point(408, 98);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(126, 50);
			this->button54->TabIndex = 53;
			this->button54->Text = L"เศษส่วนย่อย";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// button55
			// 
			this->button55->Font = (gcnew System::Drawing::Font(L"Angsana New", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->Location = System::Drawing::Point(540, 98);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(126, 50);
			this->button55->TabIndex = 54;
			this->button55->Text = L"ตรีโกณมิติ";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(654, 80);
			this->textBox1->TabIndex = 55;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(408, 266);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(60, 50);
			this->btn1->TabIndex = 57;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(12, 154);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(60, 50);
			this->btnClear->TabIndex = 58;
			this->btnClear->Text = L"AC";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 438);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->btnInfinity);
			this->Controls->Add(this->btnY);
			this->Controls->Add(this->btnZ);
			this->Controls->Add(this->btnComma);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->btnPercent);
			this->Controls->Add(this->btnSeta);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnMultiplied);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->btnX);
			this->Controls->Add(this->btnI);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btndot);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->btnRoot);
			this->Controls->Add(this->btnPi);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnE);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnLn);
			this->Controls->Add(this->btnLog);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double first, second = first = 0;
		char Operator;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0") 
		textBox1->Clear();
		textBox1->Text += "1";
	
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0") 
		textBox1->Clear();
		textBox1->Text += "2";
	
}

private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0") 
		textBox1->Clear();
		textBox1->Text += "3";
	
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0") 
		textBox1->Clear();
		textBox1->Text += "4";
	
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0") 
		textBox1->Clear();
		textBox1->Text += "5";
	
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0") 
		textBox1->Clear();
		textBox1->Text += "6";
	
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0") 
		textBox1->Clear();
		textBox1->Text += "7";
	
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0") 
		textBox1->Clear();
		textBox1->Text += "8";
	
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "0") 
		textBox1->Clear();
		textBox1->Text += "9";
	
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || (textBox1->Text != "0" && textBox1->Text != "-"))
		textBox1->Text += "0";
}
private: System::Void btndot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
		textBox1->Text += ".";
}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "-")
		textBox1->Clear();
	else if (textBox1->Text != "") {
		first = double::Parse(textBox1->Text);
		Operator = '+';
		textBox1->Clear();
	}
}
private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox1->Text != "-")
		textBox1->Text += "-";

	else if (textBox1->Text != "" && textBox1->Text != "-") {
		first = double::Parse(textBox1->Text);
		Operator = '-';
		textBox1->Clear();
	}
}
private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox1->Text != "-")
		second = double::Parse(textBox1->Text);

	if (Operator == '+')
		textBox1->Text = System::Convert::ToString(first + second);
	else if (Operator == '-')
		textBox1->Text = System::Convert::ToString(first - second);
}

private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	first = second = 0;
	Operator = ' ';
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->SelectionLength > 0)
	{
		// ถ้ามีข้อความถูกเลือก, ให้ลบข้อความนั้นออก
		int startIndex = textBox1->SelectionStart;
		int length = textBox1->SelectionLength;
		textBox1->Text = textBox1->Text->Remove(startIndex, length);
	}
	else if (textBox1->SelectionStart > 0)
	{
		// ถ้าไม่มีข้อความถูกเลือก และมีตำแหน่ง cursor ที่มากกว่า 0
		// ให้ลบอักขระที่ตำแหน่งก่อนหน้า cursor
		int cursorPos = textBox1->SelectionStart;
		textBox1->Text = textBox1->Text->Remove(cursorPos - 1, 1);
		textBox1->SelectionStart = cursorPos - 1; // เลื่อน cursor ไปที่ตำแหน่งก่อนหน้า
	}
	else if (textBox1->Text->Length > 0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
}
};
}
