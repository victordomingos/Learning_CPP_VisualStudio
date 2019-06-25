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
    private: System::Windows::Forms::TextBox^ txt_input;
    private: System::Windows::Forms::Button^ btn_convert;
    protected:

    private: System::Windows::Forms::TextBox^ txt_bin_to_hex;
    private: System::Windows::Forms::TextBox^ txt_hex_to_dec;
    private: System::Windows::Forms::TextBox^ txt_bin_to_oct;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ txt_hex_to_oct;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ txt_dec_to_bin;

    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::GroupBox^ groupBox3;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ txt_dec_to_hex;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ txt_bin_to_dec;
    private: System::Windows::Forms::Label^ lbl1;


    private: System::Windows::Forms::TextBox^ txt_dec_to_oct;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ txt_hex_to_bin;


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
            this->txt_input = (gcnew System::Windows::Forms::TextBox());
            this->btn_convert = (gcnew System::Windows::Forms::Button());
            this->txt_bin_to_hex = (gcnew System::Windows::Forms::TextBox());
            this->txt_hex_to_dec = (gcnew System::Windows::Forms::TextBox());
            this->txt_bin_to_oct = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->txt_hex_to_oct = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->txt_dec_to_bin = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->txt_bin_to_dec = (gcnew System::Windows::Forms::TextBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->txt_hex_to_bin = (gcnew System::Windows::Forms::TextBox());
            this->lbl1 = (gcnew System::Windows::Forms::Label());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->txt_dec_to_oct = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->txt_dec_to_hex = (gcnew System::Windows::Forms::TextBox());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->groupBox3->SuspendLayout();
            this->SuspendLayout();
            // 
            // txt_input
            // 
            this->txt_input->Location = System::Drawing::Point(22, 29);
            this->txt_input->Name = L"txt_input";
            this->txt_input->Size = System::Drawing::Size(174, 20);
            this->txt_input->TabIndex = 0;
            // 
            // btn_convert
            // 
            this->btn_convert->Location = System::Drawing::Point(211, 26);
            this->btn_convert->Name = L"btn_convert";
            this->btn_convert->Size = System::Drawing::Size(75, 23);
            this->btn_convert->TabIndex = 1;
            this->btn_convert->Text = L"Converter";
            this->btn_convert->UseVisualStyleBackColor = true;
            this->btn_convert->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
            // 
            // txt_bin_to_hex
            // 
            this->txt_bin_to_hex->Location = System::Drawing::Point(7, 145);
            this->txt_bin_to_hex->Name = L"txt_bin_to_hex";
            this->txt_bin_to_hex->Size = System::Drawing::Size(169, 20);
            this->txt_bin_to_hex->TabIndex = 2;
            // 
            // txt_hex_to_dec
            // 
            this->txt_hex_to_dec->Location = System::Drawing::Point(9, 42);
            this->txt_hex_to_dec->Name = L"txt_hex_to_dec";
            this->txt_hex_to_dec->Size = System::Drawing::Size(169, 20);
            this->txt_hex_to_dec->TabIndex = 3;
            // 
            // txt_bin_to_oct
            // 
            this->txt_bin_to_oct->Location = System::Drawing::Point(7, 93);
            this->txt_bin_to_oct->Name = L"txt_bin_to_oct";
            this->txt_bin_to_oct->Size = System::Drawing::Size(169, 20);
            this->txt_bin_to_oct->TabIndex = 4;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(4, 129);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(68, 13);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Hexadecimal";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(6, 26);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(45, 13);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Decimal";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(7, 77);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(32, 13);
            this->label3->TabIndex = 7;
            this->label3->Text = L"Octal";
            // 
            // txt_hex_to_oct
            // 
            this->txt_hex_to_oct->Location = System::Drawing::Point(9, 94);
            this->txt_hex_to_oct->Name = L"txt_hex_to_oct";
            this->txt_hex_to_oct->Size = System::Drawing::Size(171, 20);
            this->txt_hex_to_oct->TabIndex = 8;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(6, 77);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(32, 13);
            this->label4->TabIndex = 9;
            this->label4->Text = L"Octal";
            // 
            // txt_dec_to_bin
            // 
            this->txt_dec_to_bin->Location = System::Drawing::Point(8, 42);
            this->txt_dec_to_bin->Name = L"txt_dec_to_bin";
            this->txt_dec_to_bin->Size = System::Drawing::Size(170, 20);
            this->txt_dec_to_bin->TabIndex = 10;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(6, 26);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(39, 13);
            this->label5->TabIndex = 11;
            this->label5->Text = L"Binário";
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->label7);
            this->groupBox1->Controls->Add(this->txt_bin_to_dec);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->txt_bin_to_hex);
            this->groupBox1->Controls->Add(this->txt_bin_to_oct);
            this->groupBox1->Controls->Add(this->label3);
            this->groupBox1->Location = System::Drawing::Point(12, 86);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(184, 180);
            this->groupBox1->TabIndex = 12;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"De binário para:";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(4, 26);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(45, 13);
            this->label7->TabIndex = 16;
            this->label7->Text = L"Decimal";
            // 
            // txt_bin_to_dec
            // 
            this->txt_bin_to_dec->Location = System::Drawing::Point(7, 42);
            this->txt_bin_to_dec->Name = L"txt_bin_to_dec";
            this->txt_bin_to_dec->Size = System::Drawing::Size(169, 20);
            this->txt_bin_to_dec->TabIndex = 15;
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->txt_hex_to_bin);
            this->groupBox2->Controls->Add(this->lbl1);
            this->groupBox2->Controls->Add(this->label2);
            this->groupBox2->Controls->Add(this->txt_hex_to_dec);
            this->groupBox2->Controls->Add(this->txt_hex_to_oct);
            this->groupBox2->Controls->Add(this->label4);
            this->groupBox2->Location = System::Drawing::Point(202, 86);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(184, 180);
            this->groupBox2->TabIndex = 13;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"De hexadeximal para:";
            // 
            // txt_hex_to_bin
            // 
            this->txt_hex_to_bin->Location = System::Drawing::Point(9, 145);
            this->txt_hex_to_bin->Name = L"txt_hex_to_bin";
            this->txt_hex_to_bin->Size = System::Drawing::Size(171, 20);
            this->txt_hex_to_bin->TabIndex = 16;
            // 
            // lbl1
            // 
            this->lbl1->AutoSize = true;
            this->lbl1->Location = System::Drawing::Point(6, 129);
            this->lbl1->Name = L"lbl1";
            this->lbl1->Size = System::Drawing::Size(39, 13);
            this->lbl1->TabIndex = 15;
            this->lbl1->Text = L"Binário";
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->txt_dec_to_oct);
            this->groupBox3->Controls->Add(this->label8);
            this->groupBox3->Controls->Add(this->label6);
            this->groupBox3->Controls->Add(this->txt_dec_to_hex);
            this->groupBox3->Controls->Add(this->label5);
            this->groupBox3->Controls->Add(this->txt_dec_to_bin);
            this->groupBox3->Location = System::Drawing::Point(392, 86);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(184, 180);
            this->groupBox3->TabIndex = 14;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"De decimal para:";
            // 
            // txt_dec_to_oct
            // 
            this->txt_dec_to_oct->Location = System::Drawing::Point(9, 94);
            this->txt_dec_to_oct->Name = L"txt_dec_to_oct";
            this->txt_dec_to_oct->Size = System::Drawing::Size(169, 20);
            this->txt_dec_to_oct->TabIndex = 15;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(6, 77);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(32, 13);
            this->label8->TabIndex = 14;
            this->label8->Text = L"Octal";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(6, 129);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(68, 13);
            this->label6->TabIndex = 13;
            this->label6->Text = L"Hexadecimal";
            // 
            // txt_dec_to_hex
            // 
            this->txt_dec_to_hex->Location = System::Drawing::Point(9, 145);
            this->txt_dec_to_hex->Name = L"txt_dec_to_hex";
            this->txt_dec_to_hex->Size = System::Drawing::Size(169, 20);
            this->txt_dec_to_hex->TabIndex = 12;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(588, 274);
            this->Controls->Add(this->groupBox3);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->btn_convert);
            this->Controls->Add(this->txt_input);
            this->Name = L"Form1";
            this->Text = L"Conversor de base";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->groupBox3->ResumeLayout(false);
            this->groupBox3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

private: void converter()
{
    Int64 bin_to_int;
    Int64 hex_to_int;
    Int64 dec_to_int;


    try
    {
        bin_to_int = Convert::ToInt64(txt_input->Text, 2);          // Converte de string binária para inteiro
        txt_bin_to_hex->Text = Convert::ToString(bin_to_int, 16);   // Converte de inteiro para hexadecimal
        txt_bin_to_oct->Text = Convert::ToString(bin_to_int, 8);    // Converte de inteiro para octal
        txt_bin_to_dec->Text = Convert::ToString(bin_to_int, 10);
    }
    catch (...)
    {
        txt_bin_to_hex->Text = "N/A";
        txt_bin_to_oct->Text = "N/A";
        txt_bin_to_dec->Text = "N/A";
    }


    try
    {
        hex_to_int = Convert::ToInt64(txt_input->Text, 16);          // Converte de string hex para inteiro
        txt_hex_to_dec->Text = Convert::ToString(hex_to_int, 10);   // Converte de inteiro para decimal
        txt_hex_to_oct->Text = Convert::ToString(hex_to_int, 8);    // Converte de inteiro para octal
        txt_hex_to_bin->Text = Convert::ToString(hex_to_int, 2);
    }
    catch (...)
    {
        txt_hex_to_dec->Text = "N/A";
        txt_hex_to_oct->Text = "N/A";
        txt_hex_to_bin->Text = "N/A";
    }


    try
    {
        dec_to_int = Convert::ToInt64(txt_input->Text, 10);          // Converte de string hex para inteiro
        txt_dec_to_bin->Text = Convert::ToString(dec_to_int, 2);   // Converte de inteiro para decimal
        txt_dec_to_hex->Text = Convert::ToString(dec_to_int, 16)->ToUpper();
        txt_dec_to_oct->Text = Convert::ToString(dec_to_int, 8);
        ///txt_hex_to_oct->Text = Convert::ToString(hex_to_int, 8);    // Converte de inteiro para octal

    }
    catch (...)
    {
        txt_dec_to_bin->Text = "N/A";
        txt_dec_to_oct->Text = "N/A";
        txt_dec_to_hex->Text = "N/A";
    }




}

    private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) { converter(); }
};
}
