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
	private: System::Windows::Forms::Button^ btnLogV;
	private: System::Windows::Forms::Button^ btnLn;




	private: System::Windows::Forms::Button^ btnPi;





	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;






	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnE;
	private: System::Windows::Forms::Button^ btnEV;
	private: System::Windows::Forms::Button^ btnLimitV;
	private: System::Windows::Forms::Button^ btnFac;





	private: System::Windows::Forms::Button^ btnX;



	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;




	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btnDiffV;


	private: System::Windows::Forms::Button^ btnDiff;

	private: System::Windows::Forms::Button^ btnLimitVplus;

	private: System::Windows::Forms::Button^ btnFraction;

	private: System::Windows::Forms::Button^ btnY;





	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;





	private: System::Windows::Forms::Button^ btnMultiplied;
	private: System::Windows::Forms::Button^ btnIntegration;
	private: System::Windows::Forms::Button^ btnIntegrationV;
	private: System::Windows::Forms::Button^ btnLimitVminus;





	private: System::Windows::Forms::Button^ btnPow;


	private: System::Windows::Forms::Button^ btnI;


	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btndot;
	private: System::Windows::Forms::Button^ btnPlus;

	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnSeta;
private: System::Windows::Forms::Button^ btnSquareV;

private: System::Windows::Forms::Button^ btnSquare;









private: System::Windows::Forms::Button^ btnPowV;



	private: System::Windows::Forms::Button^ btnZ;
private: System::Windows::Forms::Button^ btnInfinity;




	private: System::Windows::Forms::Button^ btnEquals;
private: System::Windows::Forms::Button^ btnLeft;


private: System::Windows::Forms::Button^ btnRight;
private: System::Windows::Forms::Button^ btnCalculus;
private: System::Windows::Forms::Button^ btnMatrix;







	private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ btn1;
private: System::Windows::Forms::Button^ btnClear;
private: System::Windows::Forms::Button^ btnTrigon;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnLogV = (gcnew System::Windows::Forms::Button());
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->btnPi = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnEV = (gcnew System::Windows::Forms::Button());
			this->btnLimitV = (gcnew System::Windows::Forms::Button());
			this->btnFac = (gcnew System::Windows::Forms::Button());
			this->btnX = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnDiffV = (gcnew System::Windows::Forms::Button());
			this->btnDiff = (gcnew System::Windows::Forms::Button());
			this->btnLimitVplus = (gcnew System::Windows::Forms::Button());
			this->btnFraction = (gcnew System::Windows::Forms::Button());
			this->btnY = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplied = (gcnew System::Windows::Forms::Button());
			this->btnIntegration = (gcnew System::Windows::Forms::Button());
			this->btnIntegrationV = (gcnew System::Windows::Forms::Button());
			this->btnLimitVminus = (gcnew System::Windows::Forms::Button());
			this->btnPow = (gcnew System::Windows::Forms::Button());
			this->btnI = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btndot = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnSeta = (gcnew System::Windows::Forms::Button());
			this->btnSquareV = (gcnew System::Windows::Forms::Button());
			this->btnSquare = (gcnew System::Windows::Forms::Button());
			this->btnPowV = (gcnew System::Windows::Forms::Button());
			this->btnZ = (gcnew System::Windows::Forms::Button());
			this->btnInfinity = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->btnCalculus = (gcnew System::Windows::Forms::Button());
			this->btnMatrix = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnTrigon = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnLog
			// 
			this->btnLog->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLog->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLog.BackgroundImage")));
			this->btnLog->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog->Location = System::Drawing::Point(78, 154);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(60, 50);
			this->btnLog->TabIndex = 1;
			this->btnLog->UseVisualStyleBackColor = true;
			// 
			// btnLogV
			// 
			this->btnLogV->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLogV->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogV.BackgroundImage")));
			this->btnLogV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnLogV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogV->Location = System::Drawing::Point(144, 154);
			this->btnLogV->Name = L"btnLogV";
			this->btnLogV->Size = System::Drawing::Size(60, 50);
			this->btnLogV->TabIndex = 2;
			this->btnLogV->UseVisualStyleBackColor = true;
			// 
			// btnLn
			// 
			this->btnLn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLn->Location = System::Drawing::Point(210, 154);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(60, 50);
			this->btnLn->TabIndex = 5;
			this->btnLn->Text = L"ln";
			this->btnLn->UseVisualStyleBackColor = true;
			// 
			// btnPi
			// 
			this->btnPi->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnPi->Font = (gcnew System::Drawing::Font(L"Centaur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPi->Location = System::Drawing::Point(276, 154);
			this->btnPi->Name = L"btnPi";
			this->btnPi->Size = System::Drawing::Size(60, 50);
			this->btnPi->TabIndex = 3;
			this->btnPi->Text = L"π";
			this->btnPi->UseVisualStyleBackColor = true;
			// 
			// btn7
			// 
			this->btn7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(342, 154);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(60, 50);
			this->btn7->TabIndex = 8;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(408, 154);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(60, 50);
			this->btn8->TabIndex = 7;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(474, 154);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(60, 50);
			this->btn9->TabIndex = 6;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnDelete->Location = System::Drawing::Point(540, 154);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(60, 50);
			this->btnDelete->TabIndex = 9;
			this->btnDelete->Text = L"";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// btnE
			// 
			this->btnE->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnE.BackgroundImage")));
			this->btnE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnE->Location = System::Drawing::Point(12, 210);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(60, 50);
			this->btnE->TabIndex = 19;
			this->btnE->UseVisualStyleBackColor = true;
			// 
			// btnEV
			// 
			this->btnEV->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnEV->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEV.BackgroundImage")));
			this->btnEV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnEV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEV->Location = System::Drawing::Point(78, 210);
			this->btnEV->Name = L"btnEV";
			this->btnEV->Size = System::Drawing::Size(60, 50);
			this->btnEV->TabIndex = 18;
			this->btnEV->UseVisualStyleBackColor = true;
			// 
			// btnLimitV
			// 
			this->btnLimitV->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLimitV->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLimitV.BackgroundImage")));
			this->btnLimitV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnLimitV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimitV->Location = System::Drawing::Point(144, 210);
			this->btnLimitV->Name = L"btnLimitV";
			this->btnLimitV->Size = System::Drawing::Size(60, 50);
			this->btnLimitV->TabIndex = 17;
			this->btnLimitV->UseVisualStyleBackColor = true;
			// 
			// btnFac
			// 
			this->btnFac->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnFac->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFac.BackgroundImage")));
			this->btnFac->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnFac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFac->Location = System::Drawing::Point(210, 210);
			this->btnFac->Name = L"btnFac";
			this->btnFac->Size = System::Drawing::Size(60, 50);
			this->btnFac->TabIndex = 16;
			this->btnFac->UseVisualStyleBackColor = true;
			// 
			// btnX
			// 
			this->btnX->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnX->Location = System::Drawing::Point(276, 210);
			this->btnX->Name = L"btnX";
			this->btnX->Size = System::Drawing::Size(60, 50);
			this->btnX->TabIndex = 14;
			this->btnX->Text = L"x";
			this->btnX->UseVisualStyleBackColor = true;
			// 
			// btn4
			// 
			this->btn4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(342, 210);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(60, 50);
			this->btn4->TabIndex = 13;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(408, 210);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(60, 50);
			this->btn5->TabIndex = 12;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(474, 210);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(60, 50);
			this->btn6->TabIndex = 11;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(540, 210);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(60, 50);
			this->btnDivide->TabIndex = 10;
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = true;
			// 
			// btnDiffV
			// 
			this->btnDiffV->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDiffV->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDiffV.BackgroundImage")));
			this->btnDiffV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDiffV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiffV->Location = System::Drawing::Point(12, 266);
			this->btnDiffV->Name = L"btnDiffV";
			this->btnDiffV->Size = System::Drawing::Size(60, 50);
			this->btnDiffV->TabIndex = 39;
			this->btnDiffV->UseVisualStyleBackColor = true;
			// 
			// btnDiff
			// 
			this->btnDiff->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDiff->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDiff.BackgroundImage")));
			this->btnDiff->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDiff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiff->Location = System::Drawing::Point(78, 266);
			this->btnDiff->Name = L"btnDiff";
			this->btnDiff->Size = System::Drawing::Size(60, 50);
			this->btnDiff->TabIndex = 38;
			this->btnDiff->UseVisualStyleBackColor = true;
			// 
			// btnLimitVplus
			// 
			this->btnLimitVplus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLimitVplus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLimitVplus.BackgroundImage")));
			this->btnLimitVplus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnLimitVplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimitVplus->Location = System::Drawing::Point(144, 266);
			this->btnLimitVplus->Name = L"btnLimitVplus";
			this->btnLimitVplus->Size = System::Drawing::Size(60, 50);
			this->btnLimitVplus->TabIndex = 37;
			this->btnLimitVplus->UseVisualStyleBackColor = true;
			// 
			// btnFraction
			// 
			this->btnFraction->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnFraction->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFraction.BackgroundImage")));
			this->btnFraction->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnFraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFraction->Location = System::Drawing::Point(210, 266);
			this->btnFraction->Name = L"btnFraction";
			this->btnFraction->Size = System::Drawing::Size(60, 50);
			this->btnFraction->TabIndex = 36;
			this->btnFraction->UseVisualStyleBackColor = true;
			this->btnFraction->Click += gcnew System::EventHandler(this, &MyForm::btnFraction_Click);
			// 
			// btnY
			// 
			this->btnY->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnY->Location = System::Drawing::Point(276, 266);
			this->btnY->Name = L"btnY";
			this->btnY->Size = System::Drawing::Size(60, 50);
			this->btnY->TabIndex = 34;
			this->btnY->Text = L"y";
			this->btnY->UseVisualStyleBackColor = true;
			// 
			// btn2
			// 
			this->btn2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(408, 266);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(60, 50);
			this->btn2->TabIndex = 32;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(474, 266);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(60, 50);
			this->btn3->TabIndex = 31;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btnMultiplied
			// 
			this->btnMultiplied->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnMultiplied->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiplied->Location = System::Drawing::Point(540, 266);
			this->btnMultiplied->Name = L"btnMultiplied";
			this->btnMultiplied->Size = System::Drawing::Size(60, 50);
			this->btnMultiplied->TabIndex = 30;
			this->btnMultiplied->Text = L"×";
			this->btnMultiplied->UseVisualStyleBackColor = true;
			// 
			// btnIntegration
			// 
			this->btnIntegration->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnIntegration->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnIntegration.BackgroundImage")));
			this->btnIntegration->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnIntegration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIntegration->Location = System::Drawing::Point(12, 322);
			this->btnIntegration->Name = L"btnIntegration";
			this->btnIntegration->Size = System::Drawing::Size(60, 50);
			this->btnIntegration->TabIndex = 29;
			this->btnIntegration->UseVisualStyleBackColor = true;
			// 
			// btnIntegrationV
			// 
			this->btnIntegrationV->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnIntegrationV->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnIntegrationV.BackgroundImage")));
			this->btnIntegrationV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnIntegrationV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnIntegrationV->Location = System::Drawing::Point(78, 322);
			this->btnIntegrationV->Name = L"btnIntegrationV";
			this->btnIntegrationV->Size = System::Drawing::Size(60, 50);
			this->btnIntegrationV->TabIndex = 28;
			this->btnIntegrationV->UseVisualStyleBackColor = true;
			// 
			// btnLimitVminus
			// 
			this->btnLimitVminus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLimitVminus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLimitVminus.BackgroundImage")));
			this->btnLimitVminus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnLimitVminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimitVminus->Location = System::Drawing::Point(144, 322);
			this->btnLimitVminus->Name = L"btnLimitVminus";
			this->btnLimitVminus->Size = System::Drawing::Size(60, 50);
			this->btnLimitVminus->TabIndex = 27;
			this->btnLimitVminus->UseVisualStyleBackColor = true;
			// 
			// btnPow
			// 
			this->btnPow->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnPow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPow.BackgroundImage")));
			this->btnPow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnPow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPow->Location = System::Drawing::Point(210, 322);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Size = System::Drawing::Size(60, 50);
			this->btnPow->TabIndex = 26;
			this->btnPow->UseVisualStyleBackColor = true;
			// 
			// btnI
			// 
			this->btnI->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnI->Location = System::Drawing::Point(276, 322);
			this->btnI->Name = L"btnI";
			this->btnI->Size = System::Drawing::Size(60, 50);
			this->btnI->TabIndex = 24;
			this->btnI->Text = L"i";
			this->btnI->UseVisualStyleBackColor = true;
			// 
			// btn0
			// 
			this->btn0->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(342, 322);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(60, 50);
			this->btn0->TabIndex = 23;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btndot
			// 
			this->btndot->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btndot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndot->Location = System::Drawing::Point(408, 322);
			this->btndot->Name = L"btndot";
			this->btndot->Size = System::Drawing::Size(60, 50);
			this->btndot->TabIndex = 22;
			this->btndot->Text = L".";
			this->btndot->UseVisualStyleBackColor = true;
			this->btndot->Click += gcnew System::EventHandler(this, &MyForm::btndot_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(474, 322);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(60, 50);
			this->btnPlus->TabIndex = 21;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(540, 322);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(60, 50);
			this->btnMinus->TabIndex = 20;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
			// 
			// btnSeta
			// 
			this->btnSeta->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSeta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeta->Location = System::Drawing::Point(12, 378);
			this->btnSeta->Name = L"btnSeta";
			this->btnSeta->Size = System::Drawing::Size(60, 50);
			this->btnSeta->TabIndex = 49;
			this->btnSeta->Text = L"θ";
			this->btnSeta->UseVisualStyleBackColor = true;
			// 
			// btnSquareV
			// 
			this->btnSquareV->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSquareV->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSquareV.BackgroundImage")));
			this->btnSquareV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnSquareV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSquareV->Location = System::Drawing::Point(78, 378);
			this->btnSquareV->Name = L"btnSquareV";
			this->btnSquareV->Size = System::Drawing::Size(60, 50);
			this->btnSquareV->TabIndex = 48;
			this->btnSquareV->UseVisualStyleBackColor = true;
			// 
			// btnSquare
			// 
			this->btnSquare->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSquare->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSquare.BackgroundImage")));
			this->btnSquare->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnSquare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSquare->Location = System::Drawing::Point(144, 378);
			this->btnSquare->Name = L"btnSquare";
			this->btnSquare->Size = System::Drawing::Size(60, 50);
			this->btnSquare->TabIndex = 47;
			this->btnSquare->UseVisualStyleBackColor = true;
			// 
			// btnPowV
			// 
			this->btnPowV->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnPowV->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPowV.BackgroundImage")));
			this->btnPowV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnPowV->Font = (gcnew System::Drawing::Font(L"Angsana New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPowV->Location = System::Drawing::Point(210, 378);
			this->btnPowV->Name = L"btnPowV";
			this->btnPowV->Size = System::Drawing::Size(60, 50);
			this->btnPowV->TabIndex = 46;
			this->btnPowV->UseVisualStyleBackColor = true;
			// 
			// btnZ
			// 
			this->btnZ->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZ->Location = System::Drawing::Point(276, 378);
			this->btnZ->Name = L"btnZ";
			this->btnZ->Size = System::Drawing::Size(60, 50);
			this->btnZ->TabIndex = 44;
			this->btnZ->Text = L"z";
			this->btnZ->UseVisualStyleBackColor = true;
			// 
			// btnInfinity
			// 
			this->btnInfinity->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnInfinity->Font = (gcnew System::Drawing::Font(L"Centaur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInfinity->Location = System::Drawing::Point(342, 378);
			this->btnInfinity->Name = L"btnInfinity";
			this->btnInfinity->Size = System::Drawing::Size(60, 50);
			this->btnInfinity->TabIndex = 43;
			this->btnInfinity->Text = L"∞";
			this->btnInfinity->UseVisualStyleBackColor = true;
			// 
			// btnEquals
			// 
			this->btnEquals->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(408, 378);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(60, 50);
			this->btnEquals->TabIndex = 42;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// btnLeft
			// 
			this->btnLeft->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLeft->Location = System::Drawing::Point(474, 378);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(60, 50);
			this->btnLeft->TabIndex = 41;
			this->btnLeft->Text = L"(";
			this->btnLeft->UseVisualStyleBackColor = true;
			// 
			// btnRight
			// 
			this->btnRight->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRight->Location = System::Drawing::Point(540, 378);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(60, 50);
			this->btnRight->TabIndex = 40;
			this->btnRight->Text = L")";
			this->btnRight->UseVisualStyleBackColor = true;
			// 
			// btnCalculus
			// 
			this->btnCalculus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCalculus->Font = (gcnew System::Drawing::Font(L"Angsana New", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalculus->Location = System::Drawing::Point(12, 98);
			this->btnCalculus->Name = L"btnCalculus";
			this->btnCalculus->Size = System::Drawing::Size(192, 50);
			this->btnCalculus->TabIndex = 50;
			this->btnCalculus->Text = L"แคลคูลัส";
			this->btnCalculus->UseVisualStyleBackColor = true;
			// 
			// btnMatrix
			// 
			this->btnMatrix->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnMatrix->Font = (gcnew System::Drawing::Font(L"Angsana New", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMatrix->Location = System::Drawing::Point(210, 98);
			this->btnMatrix->Name = L"btnMatrix";
			this->btnMatrix->Size = System::Drawing::Size(192, 50);
			this->btnMatrix->TabIndex = 51;
			this->btnMatrix->Text = L"เมทริกซ์";
			this->btnMatrix->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(588, 80);
			this->textBox1->TabIndex = 55;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btn1
			// 
			this->btn1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(342, 266);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(60, 50);
			this->btn1->TabIndex = 57;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btnClear
			// 
			this->btnClear->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(12, 154);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(60, 50);
			this->btnClear->TabIndex = 58;
			this->btnClear->Text = L"AC";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnTrigon
			// 
			this->btnTrigon->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnTrigon->Font = (gcnew System::Drawing::Font(L"Angsana New", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTrigon->Location = System::Drawing::Point(408, 98);
			this->btnTrigon->Name = L"btnTrigon";
			this->btnTrigon->Size = System::Drawing::Size(192, 50);
			this->btnTrigon->TabIndex = 60;
			this->btnTrigon->Text = L"ตรีโกณมิติ";
			this->btnTrigon->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(609, 437);
			this->Controls->Add(this->btnTrigon);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnMatrix);
			this->Controls->Add(this->btnCalculus);
			this->Controls->Add(this->btnSeta);
			this->Controls->Add(this->btnSquareV);
			this->Controls->Add(this->btnSquare);
			this->Controls->Add(this->btnPowV);
			this->Controls->Add(this->btnZ);
			this->Controls->Add(this->btnInfinity);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnDiffV);
			this->Controls->Add(this->btnDiff);
			this->Controls->Add(this->btnLimitVplus);
			this->Controls->Add(this->btnFraction);
			this->Controls->Add(this->btnY);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnMultiplied);
			this->Controls->Add(this->btnIntegration);
			this->Controls->Add(this->btnIntegrationV);
			this->Controls->Add(this->btnLimitVminus);
			this->Controls->Add(this->btnPow);
			this->Controls->Add(this->btnI);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btndot);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnE);
			this->Controls->Add(this->btnEV);
			this->Controls->Add(this->btnLimitV);
			this->Controls->Add(this->btnFac);
			this->Controls->Add(this->btnX);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnLn);
			this->Controls->Add(this->btnPi);
			this->Controls->Add(this->btnLogV);
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

	// เมื่อผู้ใช้คลิกปุ่ม Equals
	// ให้นำค่าที่ผู้ใช้กรอกเข้ามาคำนวณ
	// โดยเริ่มต้นจาก "sin(" ที่อยู่ใน textBox1 และสิ้นสุดด้วย ")"
	String^ expression = textBox1->Text + ")";

	// คำนวณผลลัพธ์ของค่า sin(expression)
	double sinValue = System::Convert::ToDouble(textBox1->Text);
	sinValue = Math::Sin(sinValue);

	// แสดงผลลัพธ์ใน textBox1
	textBox1->Text = System::Convert::ToString(sinValue);

	// ปิดใช้งานปุ่ม Equals อีกครั้ง
	btnEquals->Enabled = false;
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

private: System::Void btnFraction_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btnSin_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "sin(";

	// เปิดใช้งานปุ่ม Equals
	btnEquals->Enabled = true;
}	
};
}
