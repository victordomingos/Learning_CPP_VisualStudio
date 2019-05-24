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
            this->btn_inicializar->Location = System::Drawing::Point(233, 140);
            this->btn_inicializar->Name = L"btn_inicializar";
            this->btn_inicializar->Size = System::Drawing::Size(75, 23);
            this->btn_inicializar->TabIndex = 5;
            this->btn_inicializar->Text = L"Inicializar";
            this->btn_inicializar->UseVisualStyleBackColor = true;
            this->btn_inicializar->Click += gcnew System::EventHandler(this, &Form1::Btn_inicializar_Click);
            // 
            // btn_limpar_lista
            // 
            this->btn_limpar_lista->Location = System::Drawing::Point(233, 169);
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
            // 
            // btn_contar
            // 
            this->btn_contar->Location = System::Drawing::Point(233, 198);
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
            this->btn_del_5_primeiros->Location = System::Drawing::Point(362, 140);
            this->btn_del_5_primeiros->Name = L"btn_del_5_primeiros";
            this->btn_del_5_primeiros->Size = System::Drawing::Size(188, 23);
            this->btn_del_5_primeiros->TabIndex = 10;
            this->btn_del_5_primeiros->Text = L"Eliminar 5 primeiros";
            this->btn_del_5_primeiros->UseVisualStyleBackColor = true;
            this->btn_del_5_primeiros->Click += gcnew System::EventHandler(this, &Form1::Btn_del_5_primeiros_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(562, 522);
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
            this->Text = L"Form1";
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
    }
private: System::Void Btn_limpar_Click(System::Object^ sender, System::EventArgs^ e) {
    textBox1->Clear();
}
private: System::Void Btn_adicionar_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textBox1->Text != "")
        listBox1->Items->Add(textBox1->Text);
}
private: System::Void Btn_limpar_lista_Click(System::Object^ sender, System::EventArgs^ e) {
    listBox1->Items->Clear();
}
private: System::Void Btn_remover_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textBox1->Text != "")
        listBox1->Items->Remove(textBox1->Text);
}
private: System::Void Btn_contar_Click(System::Object^ sender, System::EventArgs^ e) {
    lbl_num_equipas->Text = Convert::ToString(listBox1->Items->Count);
}
private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btn_del_5_primeiros_Click(System::Object^ sender, System::EventArgs^ e) {
    for (size_t i = 0; i < 5; i++)
    {
        if(listBox1->Items->Count >= i+1)
            listBox1->Items->RemoveAt(i);
    }
}
};
}
