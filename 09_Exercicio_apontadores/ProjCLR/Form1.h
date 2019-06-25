#pragma once

namespace ProjCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^ btn_executar;
    protected:
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;

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
            this->btn_executar = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // btn_executar
            // 
            this->btn_executar->Location = System::Drawing::Point(84, 31);
            this->btn_executar->Name = L"btn_executar";
            this->btn_executar->Size = System::Drawing::Size(65, 23);
            this->btn_executar->TabIndex = 0;
            this->btn_executar->Text = L"Executar";
            this->btn_executar->UseVisualStyleBackColor = true;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(12, 33);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(66, 20);
            this->textBox1->TabIndex = 1;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(13, 100);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(136, 20);
            this->textBox2->TabIndex = 2;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(12, 151);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(137, 20);
            this->textBox3->TabIndex = 3;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 84);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(79, 13);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Endereço (hex)";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(11, 135);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(80, 13);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Endereço (dec)";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(165, 182);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->btn_executar);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	};
}
