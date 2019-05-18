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
    private: System::Windows::Forms::Button^ button_pt;
    private: System::Windows::Forms::Button^ button_fr;
    private: System::Windows::Forms::Button^ button_de;
    private: System::Windows::Forms::Button^ button_en;
    private: System::Windows::Forms::Button^ button_clear;
    protected:

    protected:




    private: System::Windows::Forms::TextBox^ textBox1;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
            this->button_pt = (gcnew System::Windows::Forms::Button());
            this->button_fr = (gcnew System::Windows::Forms::Button());
            this->button_de = (gcnew System::Windows::Forms::Button());
            this->button_en = (gcnew System::Windows::Forms::Button());
            this->button_clear = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // button_pt
            // 
            this->button_pt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->button_pt->Location = System::Drawing::Point(12, 127);
            this->button_pt->Name = L"button_pt";
            this->button_pt->Size = System::Drawing::Size(75, 23);
            this->button_pt->TabIndex = 0;
            this->button_pt->Text = L"Português";
            this->button_pt->UseVisualStyleBackColor = true;
            this->button_pt->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
            // 
            // button_fr
            // 
            this->button_fr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->button_fr->Location = System::Drawing::Point(93, 127);
            this->button_fr->Name = L"button_fr";
            this->button_fr->Size = System::Drawing::Size(75, 23);
            this->button_fr->TabIndex = 1;
            this->button_fr->Text = L"Français";
            this->button_fr->UseVisualStyleBackColor = true;
            this->button_fr->Click += gcnew System::EventHandler(this, &Form1::Button2_Click);
            // 
            // button_de
            // 
            this->button_de->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->button_de->Location = System::Drawing::Point(174, 127);
            this->button_de->Name = L"button_de";
            this->button_de->Size = System::Drawing::Size(75, 23);
            this->button_de->TabIndex = 2;
            this->button_de->Text = L"Deutsch";
            this->button_de->UseVisualStyleBackColor = true;
            this->button_de->Click += gcnew System::EventHandler(this, &Form1::Button3_Click);
            // 
            // button_en
            // 
            this->button_en->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->button_en->Location = System::Drawing::Point(255, 127);
            this->button_en->Name = L"button_en";
            this->button_en->Size = System::Drawing::Size(75, 23);
            this->button_en->TabIndex = 3;
            this->button_en->Text = L"English";
            this->button_en->UseVisualStyleBackColor = true;
            this->button_en->Click += gcnew System::EventHandler(this, &Form1::Button4_Click);
            // 
            // button_clear
            // 
            this->button_clear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->button_clear->Location = System::Drawing::Point(366, 127);
            this->button_clear->Name = L"button_clear";
            this->button_clear->Size = System::Drawing::Size(62, 23);
            this->button_clear->TabIndex = 4;
            this->button_clear->Text = L"Limpar";
            this->button_clear->UseVisualStyleBackColor = true;
            this->button_clear->Click += gcnew System::EventHandler(this, &Form1::Button5_Click);
            // 
            // textBox1
            // 
            this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(12, 12);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(416, 109);
            this->textBox1->TabIndex = 5;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox1_TextChanged);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(440, 161);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button_clear);
            this->Controls->Add(this->button_en);
            this->Controls->Add(this->button_de);
            this->Controls->Add(this->button_fr);
            this->Controls->Add(this->button_pt);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximumSize = System::Drawing::Size(600, 800);
            this->MinimumSize = System::Drawing::Size(450, 200);
            this->Name = L"Form1";
            this->Text = L"Think about it.";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1->Text = "“Não se preocupe com as suas dificuldades em Matemática, posso assegurar-lhe que as minhas são ainda maiores”. (Albert Einstein)";
    }
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
    textBox1->Text = "“Do not worry about your difficulties in Mathematics.I can assure you mine are still greater”. (Albert Einstein).";
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
    textBox1->Text = "“Ne vous inquiétez pas à propos de vos difficultés en mathématiques. Je peux vous assurer que les miennes sont encore plus grandes”. (Albert Einstein)";
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
    textBox1->Text = "„Mach’ dir keine Sorgen wegen deiner Schwierigkeiten mit der Mathematik. Ich kann dir versichern, dass meine noch größer sind“. (Albert Einstein)";
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
    textBox1->Text = "";
}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}


