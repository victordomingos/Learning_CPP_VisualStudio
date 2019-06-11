#pragma once
#include <math.h>

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



    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ btn_painel;






    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ delegadoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ estatísticasToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ajudaToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ acercaToolStripMenuItem;




    private: System::Windows::Forms::ToolStripMenuItem^ identificarOMaisVelhoToolStripMenuItem;
    private: System::Windows::Forms::TextBox^ txt_freguesia;
    private: System::Windows::Forms::Button^ btn_masculino;

    private: System::Windows::Forms::GroupBox^ groupBox2;





    private: System::Windows::Forms::ToolStripMenuItem^ visualizaçãoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarOcultarSeletorDeLinhasToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarOcultarColunaDelegadoToolStripMenuItem;





    private: System::Windows::Forms::Button^ btn_feminino;
    private: System::Windows::Forms::ToolStripMenuItem^ novoDelegadoSortearToolStripMenuItem;





    private: System::Windows::Forms::ToolStripMenuItem^ médiaDeIdadesToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^ ferramentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inicializarTurmaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adicionarColunasDeDisciplinasToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Localidade;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AnoNasc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Género;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Delegado;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarOcultarPainelLateralToolStripMenuItem;





































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
            this->AnoNasc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Género = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Delegado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->btn_painel = (gcnew System::Windows::Forms::Button());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->delegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->novoDelegadoSortearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->estatísticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->identificarOMaisVelhoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->médiaDeIdadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->visualizaçãoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarColunaDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarPainelLateralToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ferramentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->inicializarTurmaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->adicionarColunasDeDisciplinasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->acercaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->txt_freguesia = (gcnew System::Windows::Forms::TextBox());
            this->btn_masculino = (gcnew System::Windows::Forms::Button());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->btn_feminino = (gcnew System::Windows::Forms::Button());
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
            this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->Nome, this->Localidade,
                    this->AnoNasc, this->Género, this->Delegado
            });
            this->dataGridView1->Location = System::Drawing::Point(0, 127);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->Size = System::Drawing::Size(752, 593);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::DataGridView1_CellContentClick);
            // 
            // Nome
            // 
            this->Nome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Nome->FillWeight = 170;
            this->Nome->HeaderText = L"Nome";
            this->Nome->MinimumWidth = 200;
            this->Nome->Name = L"Nome";
            // 
            // Localidade
            // 
            this->Localidade->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Localidade->FillWeight = 90;
            this->Localidade->HeaderText = L"Localidade";
            this->Localidade->MinimumWidth = 75;
            this->Localidade->Name = L"Localidade";
            // 
            // AnoNasc
            // 
            this->AnoNasc->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->AnoNasc->FillWeight = 20;
            this->AnoNasc->HeaderText = L"Ano Nasc.";
            this->AnoNasc->MinimumWidth = 80;
            this->AnoNasc->Name = L"AnoNasc";
            // 
            // Género
            // 
            this->Género->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Género->FillWeight = 20;
            this->Género->HeaderText = L"Género";
            this->Género->MinimumWidth = 40;
            this->Género->Name = L"Género";
            // 
            // Delegado
            // 
            this->Delegado->FillWeight = 80;
            this->Delegado->HeaderText = L"Delegado";
            this->Delegado->MinimumWidth = 40;
            this->Delegado->Name = L"Delegado";
            this->Delegado->Visible = false;
            // 
            // listBox1
            // 
            this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(758, 127);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(248, 589);
            this->listBox1->TabIndex = 1;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->button6);
            this->groupBox1->Controls->Add(this->button5);
            this->groupBox1->Controls->Add(this->button4);
            this->groupBox1->Controls->Add(this->button3);
            this->groupBox1->Location = System::Drawing::Point(12, 38);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(265, 83);
            this->groupBox1->TabIndex = 2;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Ferramentas";
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
            // btn_painel
            // 
            this->btn_painel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_painel->Location = System::Drawing::Point(897, 38);
            this->btn_painel->Name = L"btn_painel";
            this->btn_painel->Size = System::Drawing::Size(99, 23);
            this->btn_painel->TabIndex = 1;
            this->btn_painel->Text = L"Mostrar Painel";
            this->btn_painel->UseVisualStyleBackColor = true;
            this->btn_painel->Click += gcnew System::EventHandler(this, &Form1::Btn_painel_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                this->delegadoToolStripMenuItem,
                    this->estatísticasToolStripMenuItem, this->visualizaçãoToolStripMenuItem, this->ferramentasToolStripMenuItem, this->ajudaToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1008, 24);
            this->menuStrip1->TabIndex = 3;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // delegadoToolStripMenuItem
            // 
            this->delegadoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->novoDelegadoSortearToolStripMenuItem });
            this->delegadoToolStripMenuItem->Name = L"delegadoToolStripMenuItem";
            this->delegadoToolStripMenuItem->Size = System::Drawing::Size(69, 20);
            this->delegadoToolStripMenuItem->Text = L"Delegado";
            // 
            // novoDelegadoSortearToolStripMenuItem
            // 
            this->novoDelegadoSortearToolStripMenuItem->Name = L"novoDelegadoSortearToolStripMenuItem";
            this->novoDelegadoSortearToolStripMenuItem->Size = System::Drawing::Size(204, 22);
            this->novoDelegadoSortearToolStripMenuItem->Text = L"Novo Delegado (Sortear)";
            this->novoDelegadoSortearToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::NovoDelegadoSortearToolStripMenuItem_Click);
            // 
            // estatísticasToolStripMenuItem
            // 
            this->estatísticasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->identificarOMaisVelhoToolStripMenuItem,
                    this->médiaDeIdadesToolStripMenuItem
            });
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
            // médiaDeIdadesToolStripMenuItem
            // 
            this->médiaDeIdadesToolStripMenuItem->Name = L"médiaDeIdadesToolStripMenuItem";
            this->médiaDeIdadesToolStripMenuItem->Size = System::Drawing::Size(197, 22);
            this->médiaDeIdadesToolStripMenuItem->Text = L"Média de idades";
            this->médiaDeIdadesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MédiaDeIdadesToolStripMenuItem_Click);
            // 
            // visualizaçãoToolStripMenuItem
            // 
            this->visualizaçãoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->mostrarToolStripMenuItem,
                    this->mostrarOcultarSeletorDeLinhasToolStripMenuItem, this->mostrarOcultarColunaDelegadoToolStripMenuItem, this->mostrarOcultarPainelLateralToolStripMenuItem
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
            // mostrarOcultarColunaDelegadoToolStripMenuItem
            // 
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Name = L"mostrarOcultarColunaDelegadoToolStripMenuItem";
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Size = System::Drawing::Size(312, 22);
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Text = L"Mostrar/Ocultar Coluna \"Delegado\"";
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarOcultarColunaDelegadoToolStripMenuItem_Click);
            // 
            // mostrarOcultarPainelLateralToolStripMenuItem
            // 
            this->mostrarOcultarPainelLateralToolStripMenuItem->Name = L"mostrarOcultarPainelLateralToolStripMenuItem";
            this->mostrarOcultarPainelLateralToolStripMenuItem->Size = System::Drawing::Size(312, 22);
            this->mostrarOcultarPainelLateralToolStripMenuItem->Text = L"Mostrar/Ocultar Painel Lateral";
            this->mostrarOcultarPainelLateralToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarOcultarPainelLateralToolStripMenuItem_Click);
            // 
            // ferramentasToolStripMenuItem
            // 
            this->ferramentasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->inicializarTurmaToolStripMenuItem,
                    this->adicionarColunasDeDisciplinasToolStripMenuItem
            });
            this->ferramentasToolStripMenuItem->Name = L"ferramentasToolStripMenuItem";
            this->ferramentasToolStripMenuItem->Size = System::Drawing::Size(84, 20);
            this->ferramentasToolStripMenuItem->Text = L"Ferramentas";
            // 
            // inicializarTurmaToolStripMenuItem
            // 
            this->inicializarTurmaToolStripMenuItem->Name = L"inicializarTurmaToolStripMenuItem";
            this->inicializarTurmaToolStripMenuItem->Size = System::Drawing::Size(246, 22);
            this->inicializarTurmaToolStripMenuItem->Text = L"Inicializar Turma";
            this->inicializarTurmaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::InicializarTurmaToolStripMenuItem_Click);
            // 
            // adicionarColunasDeDisciplinasToolStripMenuItem
            // 
            this->adicionarColunasDeDisciplinasToolStripMenuItem->Name = L"adicionarColunasDeDisciplinasToolStripMenuItem";
            this->adicionarColunasDeDisciplinasToolStripMenuItem->Size = System::Drawing::Size(246, 22);
            this->adicionarColunasDeDisciplinasToolStripMenuItem->Text = L"Adicionar Colunas de Disciplinas";
            this->adicionarColunasDeDisciplinasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AdicionarColunasDeDisciplinasToolStripMenuItem_Click);
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
            this->txt_freguesia->Size = System::Drawing::Size(202, 20);
            this->txt_freguesia->TabIndex = 4;
            this->txt_freguesia->Leave += gcnew System::EventHandler(this, &Form1::Btn_freguesia_Click);
            // 
            // btn_masculino
            // 
            this->btn_masculino->Location = System::Drawing::Point(53, 50);
            this->btn_masculino->Name = L"btn_masculino";
            this->btn_masculino->Size = System::Drawing::Size(75, 23);
            this->btn_masculino->TabIndex = 5;
            this->btn_masculino->Text = L"Masculino";
            this->btn_masculino->UseVisualStyleBackColor = true;
            this->btn_masculino->Click += gcnew System::EventHandler(this, &Form1::Btn_freguesia_Click);
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->btn_feminino);
            this->groupBox2->Controls->Add(this->txt_freguesia);
            this->groupBox2->Controls->Add(this->btn_masculino);
            this->groupBox2->Location = System::Drawing::Point(295, 38);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(216, 83);
            this->groupBox2->TabIndex = 6;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Pesquisar por localidade/género";
            // 
            // btn_feminino
            // 
            this->btn_feminino->Location = System::Drawing::Point(135, 50);
            this->btn_feminino->Name = L"btn_feminino";
            this->btn_feminino->Size = System::Drawing::Size(75, 23);
            this->btn_feminino->TabIndex = 6;
            this->btn_feminino->Text = L"Feminino";
            this->btn_feminino->UseVisualStyleBackColor = true;
            this->btn_feminino->Click += gcnew System::EventHandler(this, &Form1::Btn_feminino_Click);
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
            this->Controls->Add(this->btn_painel);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"Form1";
            this->Text = L"Projecto Alpha";
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

        private: void on_form_load()
        {
            init_grid();
            alternar_painel_lateral();
            gerar_colunas();
            
        }
    private: void init_grid()
    {
		dataGridView1->Rows->Clear();
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
        String^ nome = dataGridView1->Rows[0]->Cells["Nome"]->Value->ToString();
        String^ resultado = nome;
        
        int ano_mais_velho = Convert::ToInt16(dataGridView1->Rows[0]->Cells["AnoNasc"]->Value);
        int ano_linha = ano_mais_velho;
        int n_mais_velhos = 0;
        
        int n_linhas = dataGridView1->Rows->Count;
        // Encontrar o ano mais antigo
        for (size_t i = 1; i < n_linhas; i++)
        {
            ano_linha = Convert::ToInt16(dataGridView1->Rows[i]->Cells["AnoNasc"]->Value);

            if (ano_mais_velho > ano_linha)
                ano_mais_velho = ano_linha;
        }

        mostrar_painel_lateral();
        dataGridView1->ClearSelection();
        listBox1->Items->Clear();
        listBox1->Items->Add("Elemento(s) mais velho(s):");
        listBox1->Items->Add("");
        // Recolher todos os elementos com o ano igual ao mais antigo
        for (size_t i = 1; i < n_linhas; i++)
        {
            ano_linha = Convert::ToInt16(dataGridView1->Rows[i]->Cells["AnoNasc"]->Value);

            if (ano_mais_velho == ano_linha)
            {
                nome = dataGridView1->Rows[i]->Cells["Nome"]->Value->ToString();
                resultado = nome + ", " + ano_mais_velho;               
                listBox1->Items->Add(resultado);
                dataGridView1->Rows[i]->Selected = true;
                n_mais_velhos++;
            }
        }
        listBox1->Items->Add("");

        listBox1->Items->Add("Encontrado(s) " + Convert::ToString(n_mais_velhos) + " elemento(s).");


    }


    private: void procurar_por_localidade(String^ genero)
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
        mostrar_painel_lateral();

        for (size_t i = 0; i < dataGridView1->Rows->Count; i++)
        {
            nome_linha = dataGridView1->Rows[i]->Cells["Nome"]->Value->ToString();
            localidade_linha = dataGridView1->Rows[i]->Cells["Localidade"]->Value->ToString();
            genero_linha = dataGridView1->Rows[i]->Cells["Género"]->Value->ToString()->ToUpper();

            if (genero == genero_linha && localidade_linha->ToUpper() == localidade->ToUpper())
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

             
    private: void alternar_painel_lateral()
    {
        int w = listBox1->Width + 8;

        if (listBox1->Visible)
        {
            listBox1->Visible = false;
            dataGridView1->Width += w;
            btn_painel->Text = "Mostrar Painel";
        }
        else
        {
            dataGridView1->Width = dataGridView1->Width - w;
            listBox1->Visible = true;
            btn_painel->Text = "Ocultar Painel";
        }
    }


    private: void mostrar_painel_lateral()
    {
        if (listBox1->Visible == false)
            alternar_painel_lateral();
    }

    
    private: void sortear_delegado()
    {
        Random^ r = gcnew Random(); // inicializar gerador de numeros aleatórios
        int n;
        
        // Como vamos usar o número de linhas no sorteio, retiramos a linha de introdução de registos
        bool linha_intro = dataGridView1->AllowUserToAddRows;
        dataGridView1->AllowUserToAddRows = false;

        n = r->Next(0, dataGridView1->Rows->Count); // gerar número aleatório
        
        // Limpar células da coluna delegado e assinalar o novo delegado.
        for (size_t i = 0; i < dataGridView1->Rows->Count; i++)
        {
            if (i==n)
                dataGridView1->Rows[i]->Cells["Delegado"]->Value = "X";
            else
                dataGridView1->Rows[i]->Cells["Delegado"]->Value = "";

        }

        // Repor o estado original da linha de introdução de registos.
        dataGridView1->AllowUserToAddRows = linha_intro;
        dataGridView1->Columns["Delegado"]->Visible = true;
    }


// Gerar uma nota aleatória com ponderação (menos probabilidade de ocorrência nos extremos)
private: int gerar_nota_especial()
{
    int nota;
    int extra;

    Random^ r = gcnew Random(); // inicializar gerador de numeros aleatórios
    nota = r->Next(8, 16); // gerar número aleatório para nota mediana


    extra = r->Next(0, 6);
    switch (extra)
    {
    case 0:  // Nota muito baixa
        extra = r->Next(0, nota);
        nota = nota - extra;
        break;
    case 1:  // Nota muito alta
        extra = r->Next(nota, 21);
        nota = nota + extra;
        break;
    default:
        break;
    }
    return nota;
}

private: void calcular_media()
{
    int idades[100];
    int n, idade_linha, ano_linha;
    int idade_max, idade_min;
    float soma = 0; 
    float idade_media = 0;
    float idade_desv_padrao = 0;
    
    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    n = dataGridView1->Rows->Count;

    for (size_t i = 0; i < n; i++)
    {
        ano_linha = Convert::ToInt16(dataGridView1->Rows[i]->Cells["AnoNasc"]->Value);
        idade_linha = System::DateTime::Now.Year - ano_linha;
        idades[i] = idade_linha;
    }

    // Calcular idade média, min e max
    idade_max = idade_min = idades[0];
    for (size_t i = 0; i < n; i++)
    {
        if (idade_max < idades[i])  idade_max = idades[i];
        if (idade_min > idades[i])  idade_min = idades[i];
        
        soma += idades[i];
    }
    idade_media = soma / n;

    // Calcular desvio-padrão das idades
    soma = 0;
    for (size_t i = 0; i < n; i++)
        soma += pow((idades[i]-idade_media), 2);
    
    idade_desv_padrao = sqrt(soma / n);
    
    // Mostrar resultados
    listBox1->Items->Clear();
    mostrar_painel_lateral();
    listBox1->Items->Add("Idade do mais velho: " + Convert::ToString(idade_max) + " anos");
    listBox1->Items->Add("Idade do mais novo: " + Convert::ToString(idade_min) + " anos");
    listBox1->Items->Add("");
    listBox1->Items->Add("Média de idades: " + Convert::ToString(idade_media) + " anos");
    listBox1->Items->Add("Desv. Padrão: " + Convert::ToString(idade_desv_padrao));

    dataGridView1->AllowUserToAddRows = linha_intro;
}


private: void gerar_colunas()
{
	int cur_n;
	int target_n;

    array<String^>^ disciplinas = gcnew array<String^>(10) {
        "POR", "ING", "FIL", "MAT", "FÍS", "QUÍ", "GEO", "HIS", "EF", "MOR"
    };

    cur_n = dataGridView1->ColumnCount;
	target_n = cur_n + disciplinas->Length;

	dataGridView1->ColumnCount = target_n;

	for (size_t i = cur_n ; i < target_n; i++)
	{
		dataGridView1->Columns[i]->HeaderText = disciplinas[i - cur_n];
		dataGridView1->Columns[i]->Name = "d" + (i - cur_n);
		dataGridView1->Columns[i]->Width = 35;
	}	
}


private: System::Void Btn_init_grid_Click(System::Object^ sender, System::EventArgs^ e) { init_grid(); }
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) { on_form_load(); }
private: System::Void ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { identificar_mais_velho();  }
private: System::Void IdentificarOMaisVelhoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {identificar_mais_velho();}
private: System::Void Btn_freguesia_Click(System::Object^ sender, System::EventArgs^ e) { procurar_por_localidade("M"); }
private: System::Void Btn_feminino_Click(System::Object^ sender, System::EventArgs^ e) { procurar_por_localidade("F"); }
private: System::Void MostrarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { alternar_linha_introducao(); }
private: System::Void MostrarOcultarSeletorDeLinhasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { alternar_row_headers(); }
private: System::Void MostrarOcultarColunaDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {alternar_col_delegado();}
private: System::Void NovoDelegadoSortearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { sortear_delegado();}
private: System::Void MédiaDeIdadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {calcular_media();}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}
private: System::Void InicializarTurmaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { init_grid();}
private: System::Void AdicionarColunasDeDisciplinasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { gerar_colunas(); }
private: System::Void MostrarOcultarPainelLateralToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {alternar_painel_lateral();}
private: System::Void Btn_painel_Click(System::Object^ sender, System::EventArgs^ e) { alternar_painel_lateral();}
};
}
