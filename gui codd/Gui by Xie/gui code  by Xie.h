#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;

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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 2);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(653, 80);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"แคลคูลัส";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 144);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"AC";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 50);
			this->button3->TabIndex = 1;
			this->button3->Text = L"button1";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 256);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 50);
			this->button4->TabIndex = 1;
			this->button4->Text = L"button1";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 312);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 50);
			this->button5->TabIndex = 1;
			this->button5->Text = L"button1";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(12, 368);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 50);
			this->button6->TabIndex = 1;
			this->button6->Text = L"button1";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(78, 144);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 50);
			this->button7->TabIndex = 1;
			this->button7->Text = L"button1";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(78, 200);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 50);
			this->button8->TabIndex = 1;
			this->button8->Text = L"button1";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(78, 256);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 50);
			this->button9->TabIndex = 1;
			this->button9->Text = L"button1";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(78, 312);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 50);
			this->button10->TabIndex = 1;
			this->button10->Text = L"button1";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(78, 368);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 50);
			this->button11->TabIndex = 1;
			this->button11->Text = L"button1";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(144, 144);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 50);
			this->button12->TabIndex = 1;
			this->button12->Text = L"button1";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(144, 200);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 50);
			this->button13->TabIndex = 1;
			this->button13->Text = L"button1";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(144, 256);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 50);
			this->button14->TabIndex = 1;
			this->button14->Text = L"button1";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(144, 312);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 50);
			this->button15->TabIndex = 1;
			this->button15->Text = L"button1";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(144, 368);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 50);
			this->button16->TabIndex = 1;
			this->button16->Text = L"button1";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(210, 144);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(60, 50);
			this->button17->TabIndex = 1;
			this->button17->Text = L"button1";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(210, 200);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(60, 50);
			this->button18->TabIndex = 1;
			this->button18->Text = L"button1";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(210, 256);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 50);
			this->button19->TabIndex = 1;
			this->button19->Text = L"button1";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(210, 312);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(60, 50);
			this->button20->TabIndex = 1;
			this->button20->Text = L"button1";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(210, 368);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(60, 50);
			this->button21->TabIndex = 1;
			this->button21->Text = L"button1";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(276, 144);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(60, 50);
			this->button22->TabIndex = 1;
			this->button22->Text = L"(";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(276, 200);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(60, 50);
			this->button23->TabIndex = 1;
			this->button23->Text = L"button1";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(276, 256);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(60, 50);
			this->button24->TabIndex = 1;
			this->button24->Text = L"button1";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(276, 312);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(60, 50);
			this->button25->TabIndex = 1;
			this->button25->Text = L"button1";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(276, 368);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(60, 50);
			this->button26->TabIndex = 1;
			this->button26->Text = L"button1";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(342, 144);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(60, 50);
			this->button27->TabIndex = 1;
			this->button27->Text = L")";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(342, 200);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(60, 50);
			this->button28->TabIndex = 1;
			this->button28->Text = L"button1";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(342, 256);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(60, 50);
			this->button29->TabIndex = 1;
			this->button29->Text = L"button1";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(342, 312);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(60, 50);
			this->button30->TabIndex = 1;
			this->button30->Text = L"button1";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(342, 368);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(60, 50);
			this->button31->TabIndex = 1;
			this->button31->Text = L"button1";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(408, 144);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(60, 50);
			this->button32->TabIndex = 1;
			this->button32->Text = L"7";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(408, 200);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(60, 50);
			this->button33->TabIndex = 1;
			this->button33->Text = L"4";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(408, 256);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(60, 50);
			this->button34->TabIndex = 1;
			this->button34->Text = L"1";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(408, 312);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(60, 50);
			this->button35->TabIndex = 1;
			this->button35->Text = L"0";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(408, 368);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(60, 50);
			this->button36->TabIndex = 1;
			this->button36->Text = L",";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(474, 144);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(60, 50);
			this->button37->TabIndex = 1;
			this->button37->Text = L"8";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(474, 200);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(60, 50);
			this->button38->TabIndex = 1;
			this->button38->Text = L"5";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(474, 256);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(60, 50);
			this->button39->TabIndex = 1;
			this->button39->Text = L"2";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(474, 312);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(60, 50);
			this->button40->TabIndex = 1;
			this->button40->Text = L".";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(474, 368);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(60, 50);
			this->button41->TabIndex = 1;
			this->button41->Text = L"=";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(540, 144);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(60, 50);
			this->button42->TabIndex = 1;
			this->button42->Text = L"9";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(540, 200);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(60, 50);
			this->button43->TabIndex = 1;
			this->button43->Text = L"6";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->Location = System::Drawing::Point(540, 256);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(60, 50);
			this->button44->TabIndex = 1;
			this->button44->Text = L"3";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->Location = System::Drawing::Point(540, 312);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(60, 50);
			this->button45->TabIndex = 1;
			this->button45->Text = L"+";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->Location = System::Drawing::Point(540, 368);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(60, 50);
			this->button46->TabIndex = 1;
			this->button46->Text = L"button1";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button47->Location = System::Drawing::Point(606, 144);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(60, 50);
			this->button47->TabIndex = 1;
			this->button47->Text = L"";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->Location = System::Drawing::Point(606, 200);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(60, 50);
			this->button48->TabIndex = 1;
			this->button48->Text = L"÷";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->Location = System::Drawing::Point(606, 256);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(60, 50);
			this->button49->TabIndex = 1;
			this->button49->Text = L"×";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->Location = System::Drawing::Point(606, 312);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(60, 50);
			this->button50->TabIndex = 1;
			this->button50->Text = L"-";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->Location = System::Drawing::Point(606, 368);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(60, 50);
			this->button51->TabIndex = 1;
			this->button51->Text = L"button1";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button52->Location = System::Drawing::Point(144, 88);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(126, 50);
			this->button52->TabIndex = 1;
			this->button52->Text = L"เมทริกซ์";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button53->Location = System::Drawing::Point(276, 88);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(126, 50);
			this->button53->TabIndex = 1;
			this->button53->Text = L"เศษส่วนย่อย";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->Location = System::Drawing::Point(408, 88);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(126, 50);
			this->button54->TabIndex = 1;
			this->button54->Text = L"จำนวนเชิงซ้อน";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// button55
			// 
			this->button55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->Location = System::Drawing::Point(539, 88);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(126, 50);
			this->button55->TabIndex = 1;
			this->button55->Text = L"ตรีโกณ";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 438);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtDisplay);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	//พิมเลขตามตัวอักษร
	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	//เปลี่ยนเลขธรรมดาเป็นทศนิยม
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);

	txtDisplay->Text = "";
	operators = NumbersOp->Text;
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	//จุดทศนิยม
	if (!txtDisplay->Text->Contains ("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	//ฟังชั่นคำนวณ
	secondDigit = Double::Parse(txtDisplay->Text);

	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}

	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}

	else if (operators == "÷")
	{
		result = firstDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}

	else if (operators == "×")
	{
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	txtDisplay->Text = "0";
}
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
	}else if (txtDisplay->Text->Length > 0)//ลบตัวขวาสุด
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}
};
}
