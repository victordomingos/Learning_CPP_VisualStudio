#pragma once

namespace My06listboxarrayexercise {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Janela
	/// </summary>
	public ref class Janela : public System::Windows::Forms::Form
	{
	public:
		Janela(void)
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
		~Janela()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^ btn_init;
    protected:

    protected:
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ btn_clear;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ txt_name;
    private: System::Windows::Forms::GroupBox^ grp_replace;

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
            this->btn_init = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->btn_clear = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->txt_name = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->grp_replace = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox1->SuspendLayout();
            this->SuspendLayout();
            // 
            // btn_init
            // 
            this->btn_init->Location = System::Drawing::Point(12, 88);
            this->btn_init->Name = L"btn_init";
            this->btn_init->Size = System::Drawing::Size(209, 23);
            this->btn_init->TabIndex = 0;
            this->btn_init->Text = L"Initialize array (+20 names)";
            this->btn_init->UseVisualStyleBackColor = true;
            this->btn_init->Click += gcnew System::EventHandler(this, &Janela::Button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(12, 29);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(209, 29);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Array Operations";
            // 
            // btn_clear
            // 
            this->btn_clear->Location = System::Drawing::Point(13, 118);
            this->btn_clear->Name = L"btn_clear";
            this->btn_clear->Size = System::Drawing::Size(208, 23);
            this->btn_clear->TabIndex = 2;
            this->btn_clear->Text = L"Clear array";
            this->btn_clear->UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(135, 20);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(62, 23);
            this->button1->TabIndex = 3;
            this->button1->Text = L"Search";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->textBox1);
            this->groupBox1->Controls->Add(this->txt_name);
            this->groupBox1->Controls->Add(this->button1);
            this->groupBox1->Location = System::Drawing::Point(17, 210);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(204, 109);
            this->groupBox1->TabIndex = 4;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Find position of name";
            // 
            // txt_name
            // 
            this->txt_name->Location = System::Drawing::Point(6, 22);
            this->txt_name->Name = L"txt_name";
            this->txt_name->Size = System::Drawing::Size(123, 20);
            this->txt_name->TabIndex = 4;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(93, 76);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(47, 20);
            this->textBox1->TabIndex = 5;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(40, 79);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(47, 13);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Position:";
            this->label2->Click += gcnew System::EventHandler(this, &Janela::Label2_Click);
            // 
            // grp_replace
            // 
            this->grp_replace->Location = System::Drawing::Point(23, 359);
            this->grp_replace->Name = L"grp_replace";
            this->grp_replace->Size = System::Drawing::Size(200, 100);
            this->grp_replace->TabIndex = 5;
            this->grp_replace->TabStop = false;
            this->grp_replace->Text = L"groupBox2";
            // 
            // Janela
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(581, 505);
            this->Controls->Add(this->grp_replace);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->btn_clear);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btn_init);
            this->Name = L"Janela";
            this->Text = L"Janela";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
