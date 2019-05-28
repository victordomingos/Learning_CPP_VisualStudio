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
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::TextBox^ txt_search;
    protected:




    private: System::Windows::Forms::Label^ lbl_pesquisar;



    private: System::Windows::Forms::Button^ btn_inicializar;
    private: System::Windows::Forms::Button^ btn_limpar;
    private: System::Windows::Forms::GroupBox^ grpbx_novo;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ btn_del_selected;
    private: System::Windows::Forms::Button^ btn_insert;
    private: System::Windows::Forms::Button^ btn_messagebox;
    private: System::Windows::Forms::Button^ btn_del_incomplete;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cidade;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ AnoNasc;







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
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Cidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->AnoNasc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->txt_search = (gcnew System::Windows::Forms::TextBox());
            this->lbl_pesquisar = (gcnew System::Windows::Forms::Label());
            this->btn_inicializar = (gcnew System::Windows::Forms::Button());
            this->btn_limpar = (gcnew System::Windows::Forms::Button());
            this->grpbx_novo = (gcnew System::Windows::Forms::GroupBox());
            this->btn_insert = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->btn_del_selected = (gcnew System::Windows::Forms::Button());
            this->btn_messagebox = (gcnew System::Windows::Forms::Button());
            this->btn_del_incomplete = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->grpbx_novo->SuspendLayout();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->Nome, this->Cidade,
                    this->AnoNasc
            });
            this->dataGridView1->Location = System::Drawing::Point(0, 198);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->ShowEditingIcon = false;
            this->dataGridView1->Size = System::Drawing::Size(784, 363);
            this->dataGridView1->TabIndex = 0;
            // 
            // Nome
            // 
            this->Nome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Nome->FillWeight = 170;
            this->Nome->HeaderText = L"Nome";
            this->Nome->Name = L"Nome";
            // 
            // Cidade
            // 
            this->Cidade->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Cidade->HeaderText = L"Cidade";
            this->Cidade->Name = L"Cidade";
            // 
            // AnoNasc
            // 
            this->AnoNasc->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->AnoNasc->HeaderText = L"Ano Nasc.";
            this->AnoNasc->Name = L"AnoNasc";
            this->AnoNasc->Width = 82;
            // 
            // txt_search
            // 
            this->txt_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->txt_search->Location = System::Drawing::Point(642, 13);
            this->txt_search->Name = L"txt_search";
            this->txt_search->Size = System::Drawing::Size(130, 20);
            this->txt_search->TabIndex = 1;
            this->txt_search->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_search_TextChanged);
            // 
            // lbl_pesquisar
            // 
            this->lbl_pesquisar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->lbl_pesquisar->AutoSize = true;
            this->lbl_pesquisar->Location = System::Drawing::Point(684, 35);
            this->lbl_pesquisar->Name = L"lbl_pesquisar";
            this->lbl_pesquisar->Size = System::Drawing::Size(53, 13);
            this->lbl_pesquisar->TabIndex = 2;
            this->lbl_pesquisar->Text = L"Pesquisar";
            // 
            // btn_inicializar
            // 
            this->btn_inicializar->Location = System::Drawing::Point(12, 12);
            this->btn_inicializar->Name = L"btn_inicializar";
            this->btn_inicializar->Size = System::Drawing::Size(75, 23);
            this->btn_inicializar->TabIndex = 3;
            this->btn_inicializar->Text = L"Inicializar";
            this->btn_inicializar->UseVisualStyleBackColor = true;
            this->btn_inicializar->Click += gcnew System::EventHandler(this, &Form1::Btn_inicializar_Click);
            // 
            // btn_limpar
            // 
            this->btn_limpar->Location = System::Drawing::Point(93, 12);
            this->btn_limpar->Name = L"btn_limpar";
            this->btn_limpar->Size = System::Drawing::Size(75, 23);
            this->btn_limpar->TabIndex = 4;
            this->btn_limpar->Text = L"Limpar";
            this->btn_limpar->UseVisualStyleBackColor = true;
            this->btn_limpar->Click += gcnew System::EventHandler(this, &Form1::Btn_limpar_Click);
            // 
            // grpbx_novo
            // 
            this->grpbx_novo->Controls->Add(this->btn_insert);
            this->grpbx_novo->Controls->Add(this->label3);
            this->grpbx_novo->Controls->Add(this->label2);
            this->grpbx_novo->Controls->Add(this->label1);
            this->grpbx_novo->Controls->Add(this->textBox4);
            this->grpbx_novo->Controls->Add(this->textBox3);
            this->grpbx_novo->Controls->Add(this->textBox2);
            this->grpbx_novo->Location = System::Drawing::Point(13, 66);
            this->grpbx_novo->Name = L"grpbx_novo";
            this->grpbx_novo->Size = System::Drawing::Size(349, 126);
            this->grpbx_novo->TabIndex = 5;
            this->grpbx_novo->TabStop = false;
            this->grpbx_novo->Text = L"Novo registo";
            // 
            // btn_insert
            // 
            this->btn_insert->Location = System::Drawing::Point(263, 85);
            this->btn_insert->Name = L"btn_insert";
            this->btn_insert->Size = System::Drawing::Size(75, 23);
            this->btn_insert->TabIndex = 6;
            this->btn_insert->Text = L"Inserir";
            this->btn_insert->UseVisualStyleBackColor = true;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(6, 90);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(98, 13);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Ano de nascimento";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(64, 64);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(40, 13);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Cidade";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(69, 38);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(35, 13);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Nome";
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(110, 87);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(87, 20);
            this->textBox4->TabIndex = 2;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(110, 61);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(228, 20);
            this->textBox3->TabIndex = 1;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(110, 35);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(228, 20);
            this->textBox2->TabIndex = 0;
            // 
            // btn_del_selected
            // 
            this->btn_del_selected->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_del_selected->Location = System::Drawing::Point(329, 13);
            this->btn_del_selected->Name = L"btn_del_selected";
            this->btn_del_selected->Size = System::Drawing::Size(125, 23);
            this->btn_del_selected->TabIndex = 6;
            this->btn_del_selected->Text = L"Eliminar Selecionado";
            this->btn_del_selected->UseVisualStyleBackColor = true;
            // 
            // btn_messagebox
            // 
            this->btn_messagebox->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_messagebox->Location = System::Drawing::Point(231, 13);
            this->btn_messagebox->Name = L"btn_messagebox";
            this->btn_messagebox->Size = System::Drawing::Size(92, 23);
            this->btn_messagebox->TabIndex = 7;
            this->btn_messagebox->Text = L"MessageBox";
            this->btn_messagebox->UseVisualStyleBackColor = true;
            this->btn_messagebox->Click += gcnew System::EventHandler(this, &Form1::Btn_messagebox_Click);
            // 
            // btn_del_incomplete
            // 
            this->btn_del_incomplete->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_del_incomplete->Location = System::Drawing::Point(460, 13);
            this->btn_del_incomplete->Name = L"btn_del_incomplete";
            this->btn_del_incomplete->Size = System::Drawing::Size(125, 23);
            this->btn_del_incomplete->TabIndex = 8;
            this->btn_del_incomplete->Text = L"Eliminar incompletos";
            this->btn_del_incomplete->UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(784, 561);
            this->Controls->Add(this->btn_del_incomplete);
            this->Controls->Add(this->btn_messagebox);
            this->Controls->Add(this->btn_del_selected);
            this->Controls->Add(this->grpbx_novo);
            this->Controls->Add(this->btn_limpar);
            this->Controls->Add(this->btn_inicializar);
            this->Controls->Add(this->lbl_pesquisar);
            this->Controls->Add(this->txt_search);
            this->Controls->Add(this->dataGridView1);
            this->MinimumSize = System::Drawing::Size(800, 600);
            this->Name = L"Form1";
            this->Text = L"Form1";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->grpbx_novo->ResumeLayout(false);
            this->grpbx_novo->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Txt_search_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        int p;
        //TODO

    }
private: System::Void Btn_inicializar_Click(System::Object^ sender, System::EventArgs^ e) {
    dataGridView1->Rows->Add("Miguel Borges", "Viana do Castelo", "1983");
    dataGridView1->Rows->Add("Daniela Caras-Lindas", "Braga", "1977");
    dataGridView1->Rows->Add("Maria Francisca Carmelo dos Santos Figueira Mendes de Arruda e Costa", "Viana do Castelo", "1983");
}
private: System::Void Btn_limpar_Click(System::Object^ sender, System::EventArgs^ e) {
    dataGridView1->Rows->Clear();
}
private: System::Void Btn_messagebox_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ dados;

    for (int i = 0; i < dataGridView1->RowCount-1; i++)
    {
        dados += Convert::ToString(i);
        dados += ". ";
        dados += dataGridView1->Rows[i]->Cells[0]->Value;
        dados += "\n";
    }
    MessageBox::Show(dados, "Todos os Nomes");
}
};
}
