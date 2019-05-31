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
    // Declare a new garbage-collected array that will be accessible to all methods.
    public: static array<String^>^ arr_nomes = gcnew array<String^>(20);

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
    private: System::Windows::Forms::Button^ btn_search;

    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Label^ label2;

    private: System::Windows::Forms::TextBox^ txt_name;
    private: System::Windows::Forms::GroupBox^ grp_replace;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ btn_replace;
    private: System::Windows::Forms::TextBox^ txt_replace;


    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ txt_find;

    private: System::Windows::Forms::Label^ lbl_name_position;
    private: System::Windows::Forms::Button^ btn_locate;
    private: System::Windows::Forms::Button^ btn_update;
    private: System::Windows::Forms::ListBox^ lbx_listbox;
    private: System::Windows::Forms::CheckBox^ chk_auto_update;




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
            this->btn_search = (gcnew System::Windows::Forms::Button());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->lbl_name_position = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txt_name = (gcnew System::Windows::Forms::TextBox());
            this->grp_replace = (gcnew System::Windows::Forms::GroupBox());
            this->btn_locate = (gcnew System::Windows::Forms::Button());
            this->btn_replace = (gcnew System::Windows::Forms::Button());
            this->txt_replace = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->txt_find = (gcnew System::Windows::Forms::TextBox());
            this->btn_update = (gcnew System::Windows::Forms::Button());
            this->lbx_listbox = (gcnew System::Windows::Forms::ListBox());
            this->chk_auto_update = (gcnew System::Windows::Forms::CheckBox());
            this->groupBox1->SuspendLayout();
            this->grp_replace->SuspendLayout();
            this->SuspendLayout();
            // 
            // btn_init
            // 
            this->btn_init->Location = System::Drawing::Point(8, 86);
            this->btn_init->Name = L"btn_init";
            this->btn_init->Size = System::Drawing::Size(99, 23);
            this->btn_init->TabIndex = 0;
            this->btn_init->Text = L"Initialize array";
            this->btn_init->UseVisualStyleBackColor = true;
            this->btn_init->Click += gcnew System::EventHandler(this, &Janela::Button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(6, 18);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(209, 29);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Array Operations";
            // 
            // btn_clear
            // 
            this->btn_clear->Location = System::Drawing::Point(109, 86);
            this->btn_clear->Name = L"btn_clear";
            this->btn_clear->Size = System::Drawing::Size(99, 23);
            this->btn_clear->TabIndex = 2;
            this->btn_clear->Text = L"Clear array";
            this->btn_clear->UseVisualStyleBackColor = true;
            this->btn_clear->Click += gcnew System::EventHandler(this, &Janela::Btn_clear_Click);
            // 
            // btn_search
            // 
            this->btn_search->Location = System::Drawing::Point(132, 16);
            this->btn_search->Name = L"btn_search";
            this->btn_search->Size = System::Drawing::Size(62, 23);
            this->btn_search->TabIndex = 3;
            this->btn_search->Text = L"Search";
            this->btn_search->UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->lbl_name_position);
            this->groupBox1->Controls->Add(this->label5);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->txt_name);
            this->groupBox1->Controls->Add(this->btn_search);
            this->groupBox1->Location = System::Drawing::Point(8, 210);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(200, 70);
            this->groupBox1->TabIndex = 4;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Find position of name";
            // 
            // lbl_name_position
            // 
            this->lbl_name_position->AutoSize = true;
            this->lbl_name_position->Location = System::Drawing::Point(53, 47);
            this->lbl_name_position->Name = L"lbl_name_position";
            this->lbl_name_position->Size = System::Drawing::Size(24, 13);
            this->lbl_name_position->TabIndex = 8;
            this->lbl_name_position->Text = L"n/a";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(4, 21);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(38, 13);
            this->label5->TabIndex = 7;
            this->label5->Text = L"Name:";
            this->label5->Click += gcnew System::EventHandler(this, &Janela::Label5_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(3, 47);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(47, 13);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Position:";
            this->label2->Click += gcnew System::EventHandler(this, &Janela::Label2_Click);
            // 
            // txt_name
            // 
            this->txt_name->Location = System::Drawing::Point(56, 18);
            this->txt_name->Name = L"txt_name";
            this->txt_name->Size = System::Drawing::Size(72, 20);
            this->txt_name->TabIndex = 4;
            this->txt_name->TextChanged += gcnew System::EventHandler(this, &Janela::Txt_name_TextChanged);
            // 
            // grp_replace
            // 
            this->grp_replace->Controls->Add(this->btn_locate);
            this->grp_replace->Controls->Add(this->btn_replace);
            this->grp_replace->Controls->Add(this->txt_replace);
            this->grp_replace->Controls->Add(this->label4);
            this->grp_replace->Controls->Add(this->label3);
            this->grp_replace->Controls->Add(this->txt_find);
            this->grp_replace->Location = System::Drawing::Point(8, 302);
            this->grp_replace->Name = L"grp_replace";
            this->grp_replace->Size = System::Drawing::Size(200, 74);
            this->grp_replace->TabIndex = 5;
            this->grp_replace->TabStop = false;
            this->grp_replace->Text = L"Find/Replace";
            // 
            // btn_locate
            // 
            this->btn_locate->Location = System::Drawing::Point(134, 17);
            this->btn_locate->Name = L"btn_locate";
            this->btn_locate->Size = System::Drawing::Size(62, 23);
            this->btn_locate->TabIndex = 5;
            this->btn_locate->Text = L"Locate";
            this->btn_locate->UseVisualStyleBackColor = true;
            // 
            // btn_replace
            // 
            this->btn_replace->Location = System::Drawing::Point(134, 44);
            this->btn_replace->Name = L"btn_replace";
            this->btn_replace->Size = System::Drawing::Size(62, 23);
            this->btn_replace->TabIndex = 4;
            this->btn_replace->Text = L"Replace";
            this->btn_replace->UseVisualStyleBackColor = true;
            // 
            // txt_replace
            // 
            this->txt_replace->Location = System::Drawing::Point(56, 46);
            this->txt_replace->Name = L"txt_replace";
            this->txt_replace->Size = System::Drawing::Size(72, 20);
            this->txt_replace->TabIndex = 3;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(6, 49);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(50, 13);
            this->label4->TabIndex = 2;
            this->label4->Text = L"Replace:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(6, 22);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(30, 13);
            this->label3->TabIndex = 1;
            this->label3->Text = L"Find:";
            // 
            // txt_find
            // 
            this->txt_find->Location = System::Drawing::Point(56, 19);
            this->txt_find->Name = L"txt_find";
            this->txt_find->Size = System::Drawing::Size(72, 20);
            this->txt_find->TabIndex = 0;
            // 
            // btn_update
            // 
            this->btn_update->Location = System::Drawing::Point(8, 115);
            this->btn_update->Name = L"btn_update";
            this->btn_update->Size = System::Drawing::Size(99, 23);
            this->btn_update->TabIndex = 6;
            this->btn_update->Text = L"Update from array";
            this->btn_update->UseVisualStyleBackColor = true;
            this->btn_update->Click += gcnew System::EventHandler(this, &Janela::Btn_update_Click);
            // 
            // lbx_listbox
            // 
            this->lbx_listbox->FormattingEnabled = true;
            this->lbx_listbox->Location = System::Drawing::Point(224, 86);
            this->lbx_listbox->Name = L"lbx_listbox";
            this->lbx_listbox->Size = System::Drawing::Size(220, 290);
            this->lbx_listbox->TabIndex = 7;
            // 
            // chk_auto_update
            // 
            this->chk_auto_update->AutoSize = true;
            this->chk_auto_update->Location = System::Drawing::Point(113, 119);
            this->chk_auto_update->Name = L"chk_auto_update";
            this->chk_auto_update->Size = System::Drawing::Size(84, 17);
            this->chk_auto_update->TabIndex = 8;
            this->chk_auto_update->Text = L"Auto-update";
            this->chk_auto_update->UseVisualStyleBackColor = true;
            this->chk_auto_update->CheckedChanged += gcnew System::EventHandler(this, &Janela::CheckBox1_CheckedChanged);
            // 
            // Janela
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(451, 382);
            this->Controls->Add(this->chk_auto_update);
            this->Controls->Add(this->lbx_listbox);
            this->Controls->Add(this->btn_update);
            this->Controls->Add(this->grp_replace);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->btn_clear);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btn_init);
            this->Name = L"Janela";
            this->Text = L"Janela";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->grp_replace->ResumeLayout(false);
            this->grp_replace->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

private: void init_array()
{
    arr_nomes[0] = "Aarão Costa Gomes";
    arr_nomes[1] = "Ana Rita Cunha";
    arr_nomes[2] = "Bela Costa Silva";
    arr_nomes[3] = "Carlos Alberto Costa";
    arr_nomes[4] = "Carlos Serafim Ferreira";
    arr_nomes[5] = "Daniel Bastos Gomes";
    arr_nomes[6] = "Diogo Silva Ferraz";
    arr_nomes[7] = "Elvira Gomes Pendes";
    arr_nomes[8] = "Fernanda Maria Silva";
    arr_nomes[9] = "Fernando Gomes Barros";
    arr_nomes[10] = "Gilherme Alexandre Barros";
    arr_nomes[11] = "Hilda Fonseca Silva";
    arr_nomes[12] = "José Manuel Carvalho";
    arr_nomes[13] = "José Alberto Gomes";
    arr_nomes[14] = "Maria Silvéria Bastos";
    arr_nomes[15] = "Anabela Bastos Torres";
    arr_nomes[16] = "Teodoro Armando Matos";
}

private: void update_from_array()
{
    lbx_listbox->Items->Clear();
    for (size_t i = 0; arr_nomes[i]!=nullptr; i++) 
        lbx_listbox->Items->Add(arr_nomes[i]);
}

private: void clear_array()
{
    for (size_t i = 0; arr_nomes[i]!=nullptr; i++)
    {
        arr_nomes[i] = nullptr;
    }
}

private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) { init_array(); }

private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void Txt_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}


private: System::Void Btn_update_Click(System::Object^ sender, System::EventArgs^ e) { update_from_array(); }
private: System::Void Btn_clear_Click(System::Object^ sender, System::EventArgs^ e) { clear_array(); }
};
}
