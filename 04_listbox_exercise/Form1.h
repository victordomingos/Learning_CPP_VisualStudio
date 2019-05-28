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
    private: System::Windows::Forms::ListBox^ listBox1;
    protected:
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ btn_adicionar;
    private: System::Windows::Forms::Button^ btn_remover;
    private: System::Windows::Forms::Button^ btn_limpar;
    private: System::Windows::Forms::Button^ btn_inicializar;
    private: System::Windows::Forms::Button^ btn_limpar_lista;
    private: System::Windows::Forms::Label^ lbl_num_equipas;
    private: System::Windows::Forms::Button^ btn_contar;
    private: System::Windows::Forms::Label^ lbl_txt_n_equips;
    private: System::Windows::Forms::Button^ btn_del_5_primeiros;
    private: System::Windows::Forms::Button^ btn_del_5_ultimos;
    private: System::Windows::Forms::GroupBox^ grpbx_replace;
    private: System::Windows::Forms::TextBox^ txt_replace;

    private: System::Windows::Forms::Label^ lbl_replace;
    private: System::Windows::Forms::Label^ lbl_search_first;
    private: System::Windows::Forms::TextBox^ txt_search_first;

    private: System::Windows::Forms::Button^ btn_replace;
    private: System::Windows::Forms::Button^ btn_search_first;

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
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->btn_adicionar = (gcnew System::Windows::Forms::Button());
            this->btn_remover = (gcnew System::Windows::Forms::Button());
            this->btn_limpar = (gcnew System::Windows::Forms::Button());
            this->btn_inicializar = (gcnew System::Windows::Forms::Button());
            this->btn_limpar_lista = (gcnew System::Windows::Forms::Button());
            this->lbl_num_equipas = (gcnew System::Windows::Forms::Label());
            this->btn_contar = (gcnew System::Windows::Forms::Button());
            this->lbl_txt_n_equips = (gcnew System::Windows::Forms::Label());
            this->btn_del_5_primeiros = (gcnew System::Windows::Forms::Button());
            this->btn_del_5_ultimos = (gcnew System::Windows::Forms::Button());
            this->grpbx_replace = (gcnew System::Windows::Forms::GroupBox());
            this->btn_replace = (gcnew System::Windows::Forms::Button());
            this->btn_search_first = (gcnew System::Windows::Forms::Button());
            this->txt_replace = (gcnew System::Windows::Forms::TextBox());
            this->lbl_replace = (gcnew System::Windows::Forms::Label());
            this->lbl_search_first = (gcnew System::Windows::Forms::Label());
            this->txt_search_first = (gcnew System::Windows::Forms::TextBox());
            this->grpbx_replace->SuspendLayout();
            this->SuspendLayout();
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(12, 12);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(203, 485);
            this->listBox1->TabIndex = 0;
            this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::ListBox1_SelectedIndexChanged);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(233, 12);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(317, 20);
            this->textBox1->TabIndex = 1;
            // 
            // btn_adicionar
            // 
            this->btn_adicionar->Location = System::Drawing::Point(233, 39);
            this->btn_adicionar->Name = L"btn_adicionar";
            this->btn_adicionar->Size = System::Drawing::Size(75, 23);
            this->btn_adicionar->TabIndex = 2;
            this->btn_adicionar->Text = L"Adicionar";
            this->btn_adicionar->UseVisualStyleBackColor = true;
            this->btn_adicionar->Click += gcnew System::EventHandler(this, &Form1::Btn_adicionar_Click);
            // 
            // btn_remover
            // 
            this->btn_remover->Location = System::Drawing::Point(314, 39);
            this->btn_remover->Name = L"btn_remover";
            this->btn_remover->Size = System::Drawing::Size(75, 23);
            this->btn_remover->TabIndex = 3;
            this->btn_remover->Text = L"Remover";
            this->btn_remover->UseVisualStyleBackColor = true;
            this->btn_remover->Click += gcnew System::EventHandler(this, &Form1::Btn_remover_Click);
            // 
            // btn_limpar
            // 
            this->btn_limpar->Location = System::Drawing::Point(475, 38);
            this->btn_limpar->Name = L"btn_limpar";
            this->btn_limpar->Size = System::Drawing::Size(75, 23);
            this->btn_limpar->TabIndex = 4;
            this->btn_limpar->Text = L"Limpar";
            this->btn_limpar->UseVisualStyleBackColor = true;
            this->btn_limpar->Click += gcnew System::EventHandler(this, &Form1::Btn_limpar_Click);
            // 
            // btn_inicializar
            // 
            this->btn_inicializar->Location = System::Drawing::Point(233, 444);
            this->btn_inicializar->Name = L"btn_inicializar";
            this->btn_inicializar->Size = System::Drawing::Size(75, 23);
            this->btn_inicializar->TabIndex = 5;
            this->btn_inicializar->Text = L"Inicializar";
            this->btn_inicializar->UseVisualStyleBackColor = true;
            this->btn_inicializar->Click += gcnew System::EventHandler(this, &Form1::Btn_inicializar_Click);
            // 
            // btn_limpar_lista
            // 
            this->btn_limpar_lista->Location = System::Drawing::Point(233, 473);
            this->btn_limpar_lista->Name = L"btn_limpar_lista";
            this->btn_limpar_lista->Size = System::Drawing::Size(75, 23);
            this->btn_limpar_lista->TabIndex = 6;
            this->btn_limpar_lista->Text = L"Limpar lista";
            this->btn_limpar_lista->UseVisualStyleBackColor = true;
            this->btn_limpar_lista->Click += gcnew System::EventHandler(this, &Form1::Btn_limpar_lista_Click);
            // 
            // lbl_num_equipas
            // 
            this->lbl_num_equipas->AutoSize = true;
            this->lbl_num_equipas->Location = System::Drawing::Point(97, 500);
            this->lbl_num_equipas->Name = L"lbl_num_equipas";
            this->lbl_num_equipas->Size = System::Drawing::Size(13, 13);
            this->lbl_num_equipas->TabIndex = 7;
            this->lbl_num_equipas->Text = L"0";
            this->lbl_num_equipas->Click += gcnew System::EventHandler(this, &Form1::Lbl_num_equipas_Click);
            // 
            // btn_contar
            // 
            this->btn_contar->Location = System::Drawing::Point(233, 415);
            this->btn_contar->Name = L"btn_contar";
            this->btn_contar->Size = System::Drawing::Size(75, 23);
            this->btn_contar->TabIndex = 8;
            this->btn_contar->Text = L"Contar";
            this->btn_contar->UseVisualStyleBackColor = true;
            this->btn_contar->Click += gcnew System::EventHandler(this, &Form1::Btn_contar_Click);
            // 
            // lbl_txt_n_equips
            // 
            this->lbl_txt_n_equips->AutoSize = true;
            this->lbl_txt_n_equips->Location = System::Drawing::Point(11, 500);
            this->lbl_txt_n_equips->Name = L"lbl_txt_n_equips";
            this->lbl_txt_n_equips->Size = System::Drawing::Size(80, 13);
            this->lbl_txt_n_equips->TabIndex = 9;
            this->lbl_txt_n_equips->Text = L"Nº de equipas: ";
            // 
            // btn_del_5_primeiros
            // 
            this->btn_del_5_primeiros->Location = System::Drawing::Point(362, 444);
            this->btn_del_5_primeiros->Name = L"btn_del_5_primeiros";
            this->btn_del_5_primeiros->Size = System::Drawing::Size(188, 23);
            this->btn_del_5_primeiros->TabIndex = 10;
            this->btn_del_5_primeiros->Text = L"Eliminar 5 primeiros";
            this->btn_del_5_primeiros->UseVisualStyleBackColor = true;
            this->btn_del_5_primeiros->Click += gcnew System::EventHandler(this, &Form1::Btn_del_5_primeiros_Click);
            // 
            // btn_del_5_ultimos
            // 
            this->btn_del_5_ultimos->Location = System::Drawing::Point(362, 472);
            this->btn_del_5_ultimos->Name = L"btn_del_5_ultimos";
            this->btn_del_5_ultimos->Size = System::Drawing::Size(188, 23);
            this->btn_del_5_ultimos->TabIndex = 11;
            this->btn_del_5_ultimos->Text = L"Eliminar 5 últimos";
            this->btn_del_5_ultimos->UseVisualStyleBackColor = true;
            this->btn_del_5_ultimos->Click += gcnew System::EventHandler(this, &Form1::Btn_del_5_ultimos_Click);
            // 
            // grpbx_replace
            // 
            this->grpbx_replace->Controls->Add(this->btn_replace);
            this->grpbx_replace->Controls->Add(this->btn_search_first);
            this->grpbx_replace->Controls->Add(this->txt_replace);
            this->grpbx_replace->Controls->Add(this->lbl_replace);
            this->grpbx_replace->Controls->Add(this->lbl_search_first);
            this->grpbx_replace->Controls->Add(this->txt_search_first);
            this->grpbx_replace->Location = System::Drawing::Point(233, 153);
            this->grpbx_replace->Name = L"grpbx_replace";
            this->grpbx_replace->Size = System::Drawing::Size(317, 97);
            this->grpbx_replace->TabIndex = 12;
            this->grpbx_replace->TabStop = false;
            this->grpbx_replace->Text = L"Procurar e substituir";
            // 
            // btn_replace
            // 
            this->btn_replace->Location = System::Drawing::Point(213, 59);
            this->btn_replace->Name = L"btn_replace";
            this->btn_replace->Size = System::Drawing::Size(98, 23);
            this->btn_replace->TabIndex = 5;
            this->btn_replace->Text = L"Substituir";
            this->btn_replace->UseVisualStyleBackColor = true;
            this->btn_replace->Click += gcnew System::EventHandler(this, &Form1::Btn_replace_Click);
            // 
            // btn_search_first
            // 
            this->btn_search_first->Location = System::Drawing::Point(213, 30);
            this->btn_search_first->Name = L"btn_search_first";
            this->btn_search_first->Size = System::Drawing::Size(98, 23);
            this->btn_search_first->TabIndex = 4;
            this->btn_search_first->Text = L"Localizar primeiro";
            this->btn_search_first->UseVisualStyleBackColor = true;
            this->btn_search_first->Click += gcnew System::EventHandler(this, &Form1::Btn_search_first_Click);
            // 
            // txt_replace
            // 
            this->txt_replace->Location = System::Drawing::Point(81, 61);
            this->txt_replace->Name = L"txt_replace";
            this->txt_replace->Size = System::Drawing::Size(126, 20);
            this->txt_replace->TabIndex = 3;
            this->txt_replace->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox3_TextChanged);
            // 
            // lbl_replace
            // 
            this->lbl_replace->AutoSize = true;
            this->lbl_replace->Location = System::Drawing::Point(4, 66);
            this->lbl_replace->Name = L"lbl_replace";
            this->lbl_replace->Size = System::Drawing::Size(71, 13);
            this->lbl_replace->TabIndex = 2;
            this->lbl_replace->Text = L"Substituir por:";
            this->lbl_replace->Click += gcnew System::EventHandler(this, &Form1::Lbl_replace_Click);
            // 
            // lbl_search_first
            // 
            this->lbl_search_first->AutoSize = true;
            this->lbl_search_first->Location = System::Drawing::Point(23, 35);
            this->lbl_search_first->Name = L"lbl_search_first";
            this->lbl_search_first->Size = System::Drawing::Size(52, 13);
            this->lbl_search_first->TabIndex = 1;
            this->lbl_search_first->Text = L"Localizar:";
            this->lbl_search_first->Click += gcnew System::EventHandler(this, &Form1::Lbl_search_first_Click);
            // 
            // txt_search_first
            // 
            this->txt_search_first->Location = System::Drawing::Point(81, 32);
            this->txt_search_first->Name = L"txt_search_first";
            this->txt_search_first->Size = System::Drawing::Size(126, 20);
            this->txt_search_first->TabIndex = 0;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(562, 522);
            this->Controls->Add(this->grpbx_replace);
            this->Controls->Add(this->btn_del_5_ultimos);
            this->Controls->Add(this->btn_del_5_primeiros);
            this->Controls->Add(this->lbl_txt_n_equips);
            this->Controls->Add(this->btn_contar);
            this->Controls->Add(this->lbl_num_equipas);
            this->Controls->Add(this->btn_limpar_lista);
            this->Controls->Add(this->btn_inicializar);
            this->Controls->Add(this->btn_limpar);
            this->Controls->Add(this->btn_remover);
            this->Controls->Add(this->btn_adicionar);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->listBox1);
            this->Name = L"Form1";
            this->Text = L"Liga de clubes";
            this->grpbx_replace->ResumeLayout(false);
            this->grpbx_replace->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Btn_inicializar_Click(System::Object^ sender, System::EventArgs^ e) {
        listBox1->Items->Add("Porto");
        listBox1->Items->Add("Estoril");
        listBox1->Items->Add("Braga");
        listBox1->Items->Add("Sporting");
        listBox1->Items->Add("Benfica");
        listBox1->Items->Add("Santa Clara");
        listBox1->Items->Add("Feirense");
        listBox1->Items->Add("Boavista");
        listBox1->Items->Add("Paços de Ferreira");
        listBox1->Items->Add("Moreirense");
        listBox1->Items->Add("Belenenses");
        listBox1->Items->Add("Tondela");
        listBox1->Items->Add("Académica");
        listBox1->Items->Add("Varzim");
        listBox1->Items->Add("Vizela");
        listBox1->Items->Add("Farense");
        listBox1->Items->Add("Freamunde");
        listBox1->Items->Add("Aves");
        listBox1->Items->Add("Olhanense");
        listBox1->Items->Add("União da Madeira");
        listBox1->Items->Add("Vianense");
        listBox1->Items->Add("Académico de Viseu");
        listBox1->Items->Add("Fafe");
        listBox1->Items->Add("Covilhã");
        listBox1->Items->Add("Portimonense");
        listBox1->Items->Add("Salgueiros");
        listBox1->Items->Add("Oriental");
        listBox1->Items->Add("Atlético");
        listBox1->Items->Add("Barreirense");
        lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
    }
private: System::Void Btn_limpar_Click(System::Object^ sender, System::EventArgs^ e) {
    textBox1->Clear();
}
private: System::Void Btn_adicionar_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textBox1->Text != "")
    {
        if (listBox1->Items->Contains(textBox1->Text))
            MessageBox::Show("O clube indicado já se encontra na base de dados.", "Aviso");
        else
        {
            listBox1->Items->Add(textBox1->Text);
            lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
        }
    }
        
}
private: System::Void Btn_limpar_lista_Click(System::Object^ sender, System::EventArgs^ e) {
    listBox1->Items->Clear();
    lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
}
private: System::Void Btn_remover_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textBox1->Text != "")
    {
        if (listBox1->Items->Contains(textBox1->Text))
        {
            listBox1->Items->Remove(textBox1->Text);
            lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
        }
        else
            MessageBox::Show("O clube indicado não se encontra na base de dados.", "Aviso");
    }
}
private: System::Void Btn_contar_Click(System::Object^ sender, System::EventArgs^ e) {
    lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
}
private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Btn_del_5_primeiros_Click(System::Object^ sender, System::EventArgs^ e) {
    if (listBox1->Items->Count <= 5)
    {
        listBox1->Items->Clear();
        lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
    }
    else
    {
        for (size_t i = 0; i < 5; i++)
        {
            if (listBox1->Items->Count >= i + 1)
            {
                listBox1->Items->RemoveAt(i);
                lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
            }
        }
    }


}
private: System::Void Btn_del_5_ultimos_Click(System::Object^ sender, System::EventArgs^ e) {
    int lb_items = listBox1->Items->Count;

    if (lb_items <= 5)
    {
        listBox1->Items->Clear();
        lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
    }
    else
    {
        for (size_t i = lb_items - 1; i > lb_items - 6; i--)
        {
            if (i > 0)
            {
                listBox1->Items->RemoveAt(i);
                lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
            }
        }
    }
}
private: System::Void Lbl_search_first_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Lbl_replace_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btn_replace_Click(System::Object^ sender, System::EventArgs^ e) {
    int p;

    if (listBox1->Items->Contains(txt_search_first->Text))
    {
        p = listBox1->Items->IndexOf(txt_search_first->Text);
        listBox1->SelectedIndex = p;
        listBox1->Items[p] = txt_replace->Text;
    }
    else
    {
        MessageBox::Show("Não foi encontrado o clube indicado.");
    }
}
private: System::Void Btn_search_first_Click(System::Object^ sender, System::EventArgs^ e) {
    int p;

    if (listBox1->Items->Contains(txt_search_first->Text))
    {
        p = listBox1->Items->IndexOf(txt_search_first->Text);
        listBox1->SelectedIndex = p;
    }
    else
    {
        MessageBox::Show("Não foi encontrado o clube indicado.");
    }
}
private: System::Void Lbl_num_equipas_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
