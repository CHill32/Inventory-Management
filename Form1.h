#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(614, 231);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(402, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(209, 224);
			this->panel3->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(124, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Exit Program";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(4, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 73);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(121, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Create List";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 68);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Report";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(392, 225);
			this->panel2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Report Header:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 174);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Click += gcnew System::EventHandler(this, &Form1::textBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(137, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(241, 75);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Please Enter The Heading\r\nOf The Report And \r\nPress The \"Report\" Button";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(639, 256);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Office* currentPointer;
		ifstream dataFile;
		int newProdNum = 0;
		char newProdDesc[33] = "\0";
		int newManuNum = 0;
		double newProdPrice = 0.00;
		double newMarkUp = 0.00;
		int newProdQuant = 0;
		char* reportName;

		dataFile.open((char*)(void*)Marshal::StringToHGlobalAnsi
		(String::Concat(Directory::GetCurrentDirectory(),
			"\\OfficeFileForInput.txt")));

		if (!dataFile) {
			Application::Exit();
			return;
		}

		dataFile >> newProdNum;
		dataFile >> newManuNum;
		dataFile >> newProdPrice;
		dataFile >> newMarkUp;
		dataFile.ignore();
		dataFile.get(newProdDesc, 32);
		
		dataFile >> newProdQuant;

		while (dataFile) {

			currentPointer = new Office;

			currentPointer->insertItem(newProdNum, newProdDesc, newManuNum,
				newProdPrice, newMarkUp, newProdQuant, currentPointer);
			
			dataFile >> newProdNum;
			dataFile >> newManuNum;
			dataFile >> newProdPrice;
			dataFile >> newMarkUp;
			dataFile.ignore();
			dataFile.get(newProdDesc, 32);
			
			dataFile >> newProdQuant;
		}

		reportName = (char*)(void*)Marshal::StringToHGlobalAnsi
			(textBox1->Text);

		firstPointer->listRecords(reportName);

		textBox1->Clear();
		textBox1->Text = "Output File Created";

		delete currentPointer;
		firstPointer = NULL;
		dataFile.close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();

}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Clear();

}
};
}
