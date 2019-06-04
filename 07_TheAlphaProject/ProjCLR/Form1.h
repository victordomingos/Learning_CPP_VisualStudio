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
    private: System::Windows::Forms::ListBox^ listBox1;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;





    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ delegadoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ estatísticasToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ajudaToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ acercaToolStripMenuItem;




    private: System::Windows::Forms::ToolStripMenuItem^ identificarOMaisVelhoToolStripMenuItem;
    private: System::Windows::Forms::TextBox^ txt_freguesia;
    private: System::Windows::Forms::Button^ btn_freguesia;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Localidade;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ano;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Género;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Delegado;
    private: System::Windows::Forms::ToolStripMenuItem^ visualizaçãoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarOcultarSeletorDeLinhasToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarOcultarColunaDelegadoToolStripMenuItem;

















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
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Localidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Ano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Género = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Delegado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->delegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->estatísticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->identificarOMaisVelhoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->visualizaçãoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->acercaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->txt_freguesia = (gcnew System::Windows::Forms::TextBox());
            this->btn_freguesia = (gcnew System::Windows::Forms::Button());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->mostrarOcultarColunaDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->groupBox1->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->Nome, this->Localidade,
                    this->Ano, this->Género, this->Delegado
            });
            this->dataGridView1->Location = System::Drawing::Point(0, 157);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->Size = System::Drawing::Size(751, 563);
            this->dataGridView1->TabIndex = 0;
            // 
            // Nome
            // 
            this->Nome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Nome->FillWeight = 200;
            this->Nome->HeaderText = L"Nome";
            this->Nome->MinimumWidth = 250;
            this->Nome->Name = L"Nome";
            // 
            // Localidade
            // 
            this->Localidade->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Localidade->HeaderText = L"Localidade";
            this->Localidade->MinimumWidth = 80;
            this->Localidade->Name = L"Localidade";
            // 
            // Ano
            // 
            this->Ano->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Ano->FillWeight = 57.94401F;
            this->Ano->HeaderText = L"Ano";
            this->Ano->MinimumWidth = 80;
            this->Ano->Name = L"Ano";
            // 
            // Género
            // 
            this->Género->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Género->FillWeight = 50;
            this->Género->HeaderText = L"Género";
            this->Género->MinimumWidth = 25;
            this->Género->Name = L"Género";
            // 
            // Delegado
            // 
            this->Delegado->HeaderText = L"Delegado";
            this->Delegado->Name = L"Delegado";
            // 
            // listBox1
            // 
            this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(758, 157);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(248, 563);
            this->listBox1->TabIndex = 1;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->button9);
            this->groupBox1->Controls->Add(this->button8);
            this->groupBox1->Controls->Add(this->button7);
            this->groupBox1->Controls->Add(this->button6);
            this->groupBox1->Controls->Add(this->button5);
            this->groupBox1->Controls->Add(this->button4);
            this->groupBox1->Controls->Add(this->button3);
            this->groupBox1->Controls->Add(this->button2);
            this->groupBox1->Location = System::Drawing::Point(12, 38);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(265, 113);
            this->groupBox1->TabIndex = 2;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Ferramentas";
            // 
            // button9
            // 
            this->button9->Location = System::Drawing::Point(181, 79);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(75, 23);
            this->button9->TabIndex = 8;
            this->button9->Text = L"button9";
            this->button9->UseVisualStyleBackColor = true;
            // 
            // button8
            // 
            this->button8->Location = System::Drawing::Point(99, 79);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(75, 23);
            this->button8->TabIndex = 7;
            this->button8->Text = L"button8";
            this->button8->UseVisualStyleBackColor = true;
            // 
            // button7
            // 
            this->button7->Location = System::Drawing::Point(17, 79);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(75, 23);
            this->button7->TabIndex = 6;
            this->button7->Text = L"button7";
            this->button7->UseVisualStyleBackColor = true;
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(181, 50);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(75, 23);
            this->button6->TabIndex = 5;
            this->button6->Text = L"button6";
            this->button6->UseVisualStyleBackColor = true;
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(181, 20);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(75, 23);
            this->button5->TabIndex = 4;
            this->button5->Text = L"button5";
            this->button5->UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(99, 50);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(75, 23);
            this->button4->TabIndex = 3;
            this->button4->Text = L"button4";
            this->button4->UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(99, 20);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(75, 23);
            this->button3->TabIndex = 2;
            this->button3->Text = L"button3";
            this->button3->UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(17, 50);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 23);
            this->button2->TabIndex = 1;
            this->button2->Text = L"button2";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->delegadoToolStripMenuItem,
                    this->estatísticasToolStripMenuItem, this->visualizaçãoToolStripMenuItem, this->ajudaToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1008, 24);
            this->menuStrip1->TabIndex = 3;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // delegadoToolStripMenuItem
            // 
            this->delegadoToolStripMenuItem->Name = L"delegadoToolStripMenuItem";
            this->delegadoToolStripMenuItem->Size = System::Drawing::Size(69, 20);
            this->delegadoToolStripMenuItem->Text = L"Delegado";
            // 
            // estatísticasToolStripMenuItem
            // 
            this->estatísticasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->identificarOMaisVelhoToolStripMenuItem });
            this->estatísticasToolStripMenuItem->Name = L"estatísticasToolStripMenuItem";
            this->estatísticasToolStripMenuItem->Size = System::Drawing::Size(76, 20);
            this->estatísticasToolStripMenuItem->Text = L"Estatísticas";
            // 
            // identificarOMaisVelhoToolStripMenuItem
            // 
            this->identificarOMaisVelhoToolStripMenuItem->Name = L"identificarOMaisVelhoToolStripMenuItem";
            this->identificarOMaisVelhoToolStripMenuItem->Size = System::Drawing::Size(197, 22);
            this->identificarOMaisVelhoToolStripMenuItem->Text = L"Identificar o mais velho";
            this->identificarOMaisVelhoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::IdentificarOMaisVelhoToolStripMenuItem_Click);
            // 
            // visualizaçãoToolStripMenuItem
            // 
            this->visualizaçãoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->mostrarToolStripMenuItem,
                    this->mostrarOcultarSeletorDeLinhasToolStripMenuItem, this->mostrarOcultarColunaDelegadoToolStripMenuItem
            });
            this->visualizaçãoToolStripMenuItem->Name = L"visualizaçãoToolStripMenuItem";
            this->visualizaçãoToolStripMenuItem->Size = System::Drawing::Size(35, 20);
            this->visualizaçãoToolStripMenuItem->Text = L"Ver";
            // 
            // mostrarToolStripMenuItem
            // 
            this->mostrarToolStripMenuItem->Name = L"mostrarToolStripMenuItem";
            this->mostrarToolStripMenuItem->Size = System::Drawing::Size(312, 22);
            this->mostrarToolStripMenuItem->Text = L"Mostrar/Ocultar Linha de Introdução";
            this->mostrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarToolStripMenuItem_Click);
            // 
            // mostrarOcultarSeletorDeLinhasToolStripMenuItem
            // 
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem->Name = L"mostrarOcultarSeletorDeLinhasToolStripMenuItem";
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem->Size = System::Drawing::Size(312, 22);
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem->Text = L"Mostrar/Ocultar Coluna de Seleção de Linhas";
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarOcultarSeletorDeLinhasToolStripMenuItem_Click);
            // 
            // ajudaToolStripMenuItem
            // 
            this->ajudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->acercaToolStripMenuItem });
            this->ajudaToolStripMenuItem->Name = L"ajudaToolStripMenuItem";
            this->ajudaToolStripMenuItem->Size = System::Drawing::Size(50, 20);
            this->ajudaToolStripMenuItem->Text = L"Ajuda";
            // 
            // acercaToolStripMenuItem
            // 
            this->acercaToolStripMenuItem->Name = L"acercaToolStripMenuItem";
            this->acercaToolStripMenuItem->Size = System::Drawing::Size(119, 22);
            this->acercaToolStripMenuItem->Text = L"Acerca...";
            // 
            // txt_freguesia
            // 
            this->txt_freguesia->Location = System::Drawing::Point(8, 23);
            this->txt_freguesia->Name = L"txt_freguesia";
            this->txt_freguesia->Size = System::Drawing::Size(159, 20);
            this->txt_freguesia->TabIndex = 4;
            this->txt_freguesia->Leave += gcnew System::EventHandler(this, &Form1::Btn_freguesia_Click);
            // 
            // btn_freguesia
            // 
            this->btn_freguesia->Location = System::Drawing::Point(8, 50);
            this->btn_freguesia->Name = L"btn_freguesia";
            this->btn_freguesia->Size = System::Drawing::Size(75, 23);
            this->btn_freguesia->TabIndex = 5;
            this->btn_freguesia->Text = L"Masculino";
            this->btn_freguesia->UseVisualStyleBackColor = true;
            this->btn_freguesia->Click += gcnew System::EventHandler(this, &Form1::Btn_freguesia_Click);
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->txt_freguesia);
            this->groupBox2->Controls->Add(this->btn_freguesia);
            this->groupBox2->Location = System::Drawing::Point(294, 38);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(180, 86);
            this->groupBox2->TabIndex = 6;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Pesquisar por localidade/género";
            // 
            // mostrarOcultarColunaDelegadoToolStripMenuItem
            // 
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Name = L"mostrarOcultarColunaDelegadoToolStripMenuItem";
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Size = System::Drawing::Size(312, 22);
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Text = L"Mostrar/Ocultar Coluna \"Delegado\"";
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarOcultarColunaDelegadoToolStripMenuItem_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1008, 721);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->groupBox1->ResumeLayout(false);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: void init_grid()
    {
        dataGridView1->Rows->Add("Ana Rita Cunha", "Maximinos", 1998, "F");
        dataGridView1->Rows->Add("Bela Costa Silva", "Lomar", 2002, "F");
        dataGridView1->Rows->Add("Carlos Alberto Costa", "Sequeira", 1999, "M");
        dataGridView1->Rows->Add("Carlos Daniel Ferreira", "Sequeira", 2001, "M");
        dataGridView1->Rows->Add("Daniel Bastos Gomes", "Lovios", 1998, "M");
        dataGridView1->Rows->Add("Daniel Silva Ferraz", "S. Vítor", 1999, "M");
        dataGridView1->Rows->Add("Elvira Gomes Pendes", "Maximinos", 2001, "F");
        dataGridView1->Rows->Add("Fernanda Maria Silva", "S. Vítor", 2002, "F");
        dataGridView1->Rows->Add("Fernando Gomes Barros", "Maximinos", 1999, "M");
        dataGridView1->Rows->Add("Gilherme Alexandre Barros", "Lamaçães", 2001, "M");
        dataGridView1->Rows->Add("Hilda Fonseca Silva", "S. Geraldo", 1999, "F");
        dataGridView1->Rows->Add("José Manuel Carvalho", "Gualtar", 1997, "M");
        dataGridView1->Rows->Add("José Alberto Gomes", "Maximinos", 2001, "M");
        dataGridView1->Rows->Add("Maria Silvéria Bastos", "Maximinos", 1997, "F");
        dataGridView1->Rows->Add("Anabela Bastos Torres", "S. Vítor", 1996, "F");
        dataGridView1->Rows->Add("Rui Vasco Santos", "Maximinos", 2002, "M");
        dataGridView1->Rows->Add("Otávio Ferreira", "Maximinos", 1999, "M");
        dataGridView1->Rows->Add("Silvério Silva Teixeira", "Lamaçães", 2001, "M");
        dataGridView1->Rows->Add("Teodoro Armando Matos", "Maximinos", 2002, "M");
        dataGridView1->Rows->Add("Zacarias Alexandre Sampaio", "Ferreiros", 1998, "M");
    }
    
    private: void identificar_mais_velho()
    {
        String^ nome_mais_velho = dataGridView1->Rows[0]->Cells[0]->Value->ToString();
        String^ resultado = nome_mais_velho;
        int ano_mais_velho = Convert::ToInt16(dataGridView1->Rows[0]->Cells[2]->Value);
        int ano_linha = ano_mais_velho;
        int p = 1;
        

        for (size_t i = 1; i < dataGridView1->Rows->Count; i++)
        {
            ano_linha = Convert::ToInt16(dataGridView1->Rows[i]->Cells[2]->Value);

            if (ano_mais_velho < ano_linha)
            {
                nome_mais_velho = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
                ano_mais_velho = Convert::ToInt16(ano_linha);

                resultado = nome_mais_velho + ", " + dataGridView1->Rows[i]->Cells[2]->Value;
                p = i;
            }
            
        }
        dataGridView1->ClearSelection();
        dataGridView1->Rows[p]->Selected = true;
        listBox1->Items->Clear();
        listBox1->Items->Add(resultado);
    }


    private: void procurar_por_localidade()
    {
        String^ localidade = txt_freguesia->Text;
        String^ genero_linha = "M";
        String^ nome_linha;
        String^ localidade_linha;

        array<String^>^ resultados = gcnew array<String^>(100) {""};
        int linhas = -1;
        bool linha_intro = dataGridView1->AllowUserToAddRows;
        dataGridView1->AllowUserToAddRows = false;

        dataGridView1->ClearSelection();
        listBox1->Items->Clear();

        for (size_t i = 0; i < dataGridView1->Rows->Count; i++)
        {
            nome_linha = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
            localidade_linha = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
            genero_linha = dataGridView1->Rows[i]->Cells[3]->Value->ToString()->ToUpper();

            if ("M" == genero_linha && localidade_linha->ToUpper() == localidade->ToUpper())
            {
                linhas++;
                resultados[linhas] = nome_linha + ", " + localidade_linha;
                dataGridView1->Rows[i]->Selected = true;
                //MessageBox::Show(Convert::ToString(resultados[i]));

            }
            
        }
        

        if (localidade == "")
        {
            listBox1->Items->Add(" - Não foi indicada uma localidade.");
        }
        else
        {
            listBox1->Items->Add("Elementos do género masculino");
            listBox1->Items->Add("em " + localidade + ":");
            listBox1->Items->Add(" ");

            if (linhas == -1)
            {
                listBox1->Items->Add(" - Não foram encontrados elementos.");
            }
            else
            {
                for (size_t i = 0; i <= linhas; i++)
                {

                    listBox1->Items->Add(resultados[i]);
                }
                listBox1->Items->Add(" ");
                listBox1->Items->Add("Total: " + (linhas+1));
            }
        }
        dataGridView1->AllowUserToAddRows = linha_intro;

    }

    private: void alternar_linha_introducao()
    {
        if (dataGridView1->AllowUserToAddRows)
            dataGridView1->AllowUserToAddRows = false;
        else
            dataGridView1->AllowUserToAddRows = true;
    }

    private: void alternar_row_headers()
    {
        if (dataGridView1->RowHeadersVisible)
            dataGridView1->RowHeadersVisible = false;
        else
            dataGridView1->RowHeadersVisible = true;
    }


    private: void alternar_col_delegado()
    {
        if (dataGridView1->Columns["Delegado"]->Visible)
            dataGridView1->Columns["Delegado"]->Visible = false;
        else
            dataGridView1->Columns["Delegado"]->Visible = true;
    }


    private: System::Void Btn_init_grid_Click(System::Object^ sender, System::EventArgs^ e) { init_grid(); }
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) { init_grid(); }
private: System::Void ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { identificar_mais_velho();  }
private: System::Void IdentificarOMaisVelhoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {identificar_mais_velho();
}
private: System::Void Btn_freguesia_Click(System::Object^ sender, System::EventArgs^ e) { procurar_por_localidade(); }

private: System::Void MostrarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { alternar_linha_introducao(); }
private: System::Void MostrarOcultarSeletorDeLinhasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { alternar_row_headers(); }
private: System::Void MostrarOcultarColunaDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {alternar_col_delegado();}
};
}
