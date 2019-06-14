#pragma once
#include <math.h>

namespace ProjCLR {

	using namespace System;
    using namespace System::IO;
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
        Random^ rnd = gcnew Random(); // inicializar gerador de numeros aleatórios

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





    private: System::Windows::Forms::ToolStripMenuItem^ mostrarOcultarPainelLateralToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ gerarNotasToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ notasToolStripMenuItem;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Localidade;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ AnoNasc;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Género;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Delegado;
    private: System::Windows::Forms::StatusStrip^ statusStrip1;
    private: System::Windows::Forms::ToolStripStatusLabel^ lbl_status;
    private: System::Windows::Forms::ToolStripMenuItem^ guardarDelegadoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ toolStripComboBox1;























































































































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
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
            this->guardarDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->estatísticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->identificarOMaisVelhoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->médiaDeIdadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->notasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->visualizaçãoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarColunaDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarPainelLateralToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ferramentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->inicializarTurmaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->adicionarColunasDeDisciplinasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->gerarNotasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->acercaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->txt_freguesia = (gcnew System::Windows::Forms::TextBox());
            this->btn_masculino = (gcnew System::Windows::Forms::Button());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->btn_feminino = (gcnew System::Windows::Forms::Button());
            this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
            this->lbl_status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->groupBox1->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->statusStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
            dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->Nome, this->Localidade,
                    this->AnoNasc, this->Género, this->Delegado
            });
            this->dataGridView1->Location = System::Drawing::Point(0, 127);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->Size = System::Drawing::Size(752, 525);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::DataGridView1_CellContentClick);
            // 
            // Nome
            // 
            this->Nome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Nome->FillWeight = 170;
            this->Nome->HeaderText = L"Nome";
            this->Nome->MinimumWidth = 150;
            this->Nome->Name = L"Nome";
            // 
            // Localidade
            // 
            this->Localidade->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Localidade->FillWeight = 80;
            this->Localidade->HeaderText = L"Localidade";
            this->Localidade->MinimumWidth = 75;
            this->Localidade->Name = L"Localidade";
            // 
            // AnoNasc
            // 
            this->AnoNasc->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->AnoNasc->FillWeight = 10;
            this->AnoNasc->HeaderText = L"Ano Nasc.";
            this->AnoNasc->MinimumWidth = 78;
            this->AnoNasc->Name = L"AnoNasc";
            this->AnoNasc->Width = 82;
            // 
            // Género
            // 
            this->Género->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->Género->FillWeight = 80;
            this->Género->HeaderText = L"Género";
            this->Género->MinimumWidth = 45;
            this->Género->Name = L"Género";
            this->Género->Width = 67;
            // 
            // Delegado
            // 
            this->Delegado->FillWeight = 80;
            this->Delegado->HeaderText = L"Delegado";
            this->Delegado->MinimumWidth = 55;
            this->Delegado->Name = L"Delegado";
            this->Delegado->Visible = false;
            this->Delegado->Width = 55;
            // 
            // listBox1
            // 
            this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(758, 127);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(248, 511);
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
            this->groupBox1->Size = System::Drawing::Size(177, 83);
            this->groupBox1->TabIndex = 2;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Ferramentas";
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(88, 53);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(75, 23);
            this->button6->TabIndex = 5;
            this->button6->Text = L"GerarNotas";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &Form1::Button6_Click);
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(88, 23);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(75, 23);
            this->button5->TabIndex = 4;
            this->button5->Text = L"button5";
            this->button5->UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(6, 53);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(75, 23);
            this->button4->TabIndex = 3;
            this->button4->Text = L"button4";
            this->button4->UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(6, 23);
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
            this->delegadoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->novoDelegadoSortearToolStripMenuItem,
                    this->guardarDelegadoToolStripMenuItem, this->toolStripComboBox1
            });
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
            // guardarDelegadoToolStripMenuItem
            // 
            this->guardarDelegadoToolStripMenuItem->Name = L"guardarDelegadoToolStripMenuItem";
            this->guardarDelegadoToolStripMenuItem->Size = System::Drawing::Size(204, 22);
            this->guardarDelegadoToolStripMenuItem->Text = L"Guardar Delegado";
            this->guardarDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::GuardarDelegadoToolStripMenuItem_Click);
            // 
            // toolStripComboBox1
            // 
            this->toolStripComboBox1->Name = L"toolStripComboBox1";
            this->toolStripComboBox1->Size = System::Drawing::Size(204, 22);
            this->toolStripComboBox1->Text = L"Recuperar Delegado";
            this->toolStripComboBox1->Click += gcnew System::EventHandler(this, &Form1::ToolStripComboBox1_Click);
            // 
            // estatísticasToolStripMenuItem
            // 
            this->estatísticasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->identificarOMaisVelhoToolStripMenuItem,
                    this->médiaDeIdadesToolStripMenuItem, this->notasToolStripMenuItem
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
            // notasToolStripMenuItem
            // 
            this->notasToolStripMenuItem->Name = L"notasToolStripMenuItem";
            this->notasToolStripMenuItem->Size = System::Drawing::Size(197, 22);
            this->notasToolStripMenuItem->Text = L"Notas";
            this->notasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::NotasToolStripMenuItem_Click);
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
            this->ferramentasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->inicializarTurmaToolStripMenuItem,
                    this->adicionarColunasDeDisciplinasToolStripMenuItem, this->gerarNotasToolStripMenuItem
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
            // gerarNotasToolStripMenuItem
            // 
            this->gerarNotasToolStripMenuItem->Name = L"gerarNotasToolStripMenuItem";
            this->gerarNotasToolStripMenuItem->Size = System::Drawing::Size(246, 22);
            this->gerarNotasToolStripMenuItem->Text = L"Gerar Notas";
            this->gerarNotasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::GerarNotasToolStripMenuItem_Click);
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
            this->groupBox2->Location = System::Drawing::Point(195, 38);
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
            // statusStrip1
            // 
            this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->lbl_status });
            this->statusStrip1->Location = System::Drawing::Point(0, 639);
            this->statusStrip1->Name = L"statusStrip1";
            this->statusStrip1->Size = System::Drawing::Size(1008, 22);
            this->statusStrip1->TabIndex = 7;
            this->statusStrip1->Text = L"statusStrip1";
            // 
            // lbl_status
            // 
            this->lbl_status->Name = L"lbl_status";
            this->lbl_status->Size = System::Drawing::Size(0, 17);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1008, 661);
            this->Controls->Add(this->statusStrip1);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->btn_painel);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->MinimumSize = System::Drawing::Size(1000, 640);
            this->Name = L"Form1";
            this->Text = L"Projeto Alpha";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->groupBox1->ResumeLayout(false);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->statusStrip1->ResumeLayout(false);
            this->statusStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        private: void on_form_load()
        {
            init_grid();
            alternar_painel_lateral();
            gerar_colunas();
            
			
			for (size_t i = 2; i < dataGridView1->Columns->Count; i++)
				dataGridView1->Columns[i]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			
			atualizar_tabela();
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
                for (int i = 0; i <= linhas; i++)
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
    int nota, pimPamPum;
 
    pimPamPum = rnd->Next(1, 180);
    switch (pimPamPum)
    {
    case 1:  // Negativa muito baixa
        nota = rnd->Next(1, 8);
        break;
    case 2: case 3: case 4: case 5: case 6: // Negativa alta
        nota = rnd->Next(8, 10);
        break;
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: // Nota alta
        nota = rnd->Next(15, 18);
        break;
    case 20: case 21: case 22: // Nota muito alta
        nota = rnd->Next(18, 20);
        break;
    case 100: // Nota máxima
        nota = 20;
        break;
    default:
        nota = rnd->Next(10, 16); // gerar número aleatório para nota mediana
        break;
    }
    return nota;
}

private: void gerar_notas()
{
    int n_notas = 10;
    int cols_extra_direita = 3;
    int n_linhas;
    int col_start;
    int col_end;

    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    n_linhas = dataGridView1->Rows->Count;

    col_start = dataGridView1->Columns->Count - n_notas - cols_extra_direita;
    col_end = dataGridView1->Columns->Count - cols_extra_direita;

    for (int i = 0;  i < n_linhas;  i++)
    {
        for (int j = col_start; j < col_end; j++) //-2: ultimas 2 colunas são média e estado
            dataGridView1->Rows[i]->Cells[j]->Value = gerar_nota_especial();
    }
    atualizar_tabela();
    dataGridView1->AllowUserToAddRows = linha_intro;
}

private: void calcular_media_idades()
{
    int idades[100];
    int n, idade_linha, ano_linha;
    int idade_max, idade_min;
    double soma = 0; 
    double idade_media = 0;
    double idade_desv_padrao = 0;
    
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


private: void stats_notas()
{
    Double notas[30][20] = { -1 };
    int n_linhas, n_cols, n_disciplinas;

    Double nota_max, nota_min;
    Double soma = 0.0;
    Double nota_media = 0.0;
    Double nota_desv_padrao = 0.0;

    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    n_linhas = dataGridView1->Rows->Count;
    n_cols = dataGridView1->ColumnCount-3;
    n_disciplinas = dataGridView1->ColumnCount - 8;


    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 5; j < n_cols; j++)
        {
            if (dataGridView1->Rows[i]->Cells[j]->Value == "")
                notas[i][j] = 0.0;
            else
                notas[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
        }
    }

    // Calcular nota média, min e max
    nota_max = nota_min = notas[0][5];
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 5; j < n_cols; j++)
        {
            if (nota_max < notas[i][j])  nota_max = notas[i][j];
            if (nota_min > notas[i][j])  nota_min = notas[i][j];

            soma += notas[i][j];
        }
    }
    nota_media = soma / (n_linhas * n_disciplinas);

    // Calcular desvio-padrão das notas
    soma = 0;
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 5; j < n_cols; j++)
            soma += pow((notas[i][j] - nota_media), 2);
    }
    nota_desv_padrao = sqrt(soma / (n_linhas * n_disciplinas));

    // Mostrar resultados
    listBox1->Items->Clear();
    mostrar_painel_lateral();
    listBox1->Items->Add("Nota máxima: " + Convert::ToString(nota_max));
    listBox1->Items->Add("Nota mínima: " + Convert::ToString(nota_min));
    listBox1->Items->Add("");
    listBox1->Items->Add("Média global de notas: " + Convert::ToString(nota_media));
    listBox1->Items->Add("Desv. Padrão: " + Convert::ToString(nota_desv_padrao));

    dataGridView1->AllowUserToAddRows = linha_intro;
}

private: void gerar_colunas()
{
	int cur_n;
	int target_n;
    int i;

    array<String^>^ novas_colunas = gcnew array<String^>(13) {
        "POR", "ING", "FIL", "MAT", "FÍS", "QUÍ", "GEO", "HIS", "EF", "MOR", "Média", "Negativas", "Estado"
    };

    cur_n = dataGridView1->ColumnCount;
	target_n = cur_n + novas_colunas->Length;

	dataGridView1->ColumnCount = target_n;

    for (i = cur_n; i < target_n; i++)
    {
        dataGridView1->Columns[i]->HeaderText = novas_colunas[i - cur_n];

        if (novas_colunas[i - cur_n] == "Média")
        {
            dataGridView1->Columns[i]->Name = "media";
            dataGridView1->Columns[i]->Width = 50;
            dataGridView1->Columns[i]->DefaultCellStyle->ForeColor = Color::Blue;
        }
        else if (novas_colunas[i - cur_n] == "Negativas")
        {
            dataGridView1->Columns[i]->Name = "negativas";
            dataGridView1->Columns[i]->Width = 60;
            dataGridView1->Columns[i]->DefaultCellStyle->ForeColor = Color::Blue;
        }
        else if (novas_colunas[i - cur_n] == "Estado")
        {
            dataGridView1->Columns[i]->Name = "estado";
            dataGridView1->Columns[i]->Width = 100;
            dataGridView1->Columns[i]->MinimumWidth = 100;
        }
        else
        {
            dataGridView1->Columns[i]->Name = "d" + (i - cur_n);
            dataGridView1->Columns[i]->Width = 38;
        }
    }
}


private: void calcula_medias()
{
    int start_col = 5;
    int end_col = 14;
    int n_disciplinas = end_col + 1 - start_col;
    int col_media = 15;

    Double soma;
    Double media;
        
    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    
    for (size_t i = 0; i < dataGridView1->Rows->Count; i++)
    {
        soma = 0;
        for (int j = start_col; j <= end_col; j++)
            soma += Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
        
        media = soma / n_disciplinas;
        dataGridView1->Rows[i]->Cells[col_media]->Value = media.ToString("f2");
    }
       
    dataGridView1->AllowUserToAddRows = linha_intro;
}


private: void calcula_negas()
{
    int start_col = 5;
    int end_col = 14;
    int n_disciplinas = end_col - start_col;
    int col_negas = 16;
    int col_estado = 17;
  
    int negas_0_7;
    int negas_8_9;
    int nota;
    String^ estado;

    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;

    for (size_t i = 0; i < dataGridView1->Rows->Count; i++)
    {
        negas_0_7 = 0;
        negas_8_9 = 0;
        for (int j = start_col; j <= end_col; j++)
        {
            nota = Convert::ToInt16(dataGridView1->Rows[i]->Cells[j]->Value);
            if (nota < 8)
                negas_0_7++;
            else if (nota < 10)
                negas_8_9++;
        }
        if (negas_0_7 > 0)
            estado = "REPROVADO";
        else if ((negas_0_7 + negas_8_9) > 2)
            estado = "REPROVADO";
        else
            estado = "APROVADO";

        dataGridView1->Rows[i]->Cells[col_negas]->Value = (negas_0_7 + negas_8_9).ToString();
        dataGridView1->Rows[i]->Cells[col_estado]->Value = estado;
    }

    dataGridView1->AllowUserToAddRows = linha_intro;
}



private: void atualizar_cores()
{
   	int start_col = 5;
	int end_col = 14;
	int n_disciplinas = end_col + 1 - start_col;
    
	int nota;

	bool linha_intro = dataGridView1->AllowUserToAddRows;
	dataGridView1->AllowUserToAddRows = false;
    int n_formandos = dataGridView1->Rows->Count;

    for (size_t i = 0; i < n_formandos; i++)
	{
		for (int j = start_col; j <= end_col; j++)
		{
			// Colorir notas negativas : vermelho até 7, amarelo 8 ou 9
   
			nota = Convert::ToInt16(dataGridView1->Rows[i]->Cells[j]->Value);
            if (nota < 8)
                dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::LightCyan;
			else if (nota < 10)
                dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Yellow;
            else
                dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::White;

		}

        for (int i = 0; i < n_formandos; i++)
        {
            if (dataGridView1->Rows[i]->Cells["Estado"]->Value == "REPROVADO")
                dataGridView1->Rows[i]->Cells["Estado"]->Style->BackColor = Color::Salmon;
            else
                dataGridView1->Rows[i]->Cells["Estado"]->Style->BackColor = Color::White;
        }
	}

	dataGridView1->AllowUserToAddRows = linha_intro;
}


private: void atualizar_estado()
{
    String^ estado;
    
    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    int n_formandos = dataGridView1->Rows->Count;
    dataGridView1->AllowUserToAddRows = linha_intro;

    estado = Convert::ToString(n_formandos) + " formandos.";
    lbl_status->Text = estado;
}




         // Guardar o nome do delegado num ficheiro de texto
private: void guardar_delegado()
{
    String^ filename = "_Projeto_Alpha__delegado.txt";
    StreamWriter^ fp = gcnew StreamWriter(filename);
    String^ delegado = "";
    int n_formandos;

    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    n_formandos = dataGridView1->Rows->Count;
    dataGridView1->AllowUserToAddRows = linha_intro;

    for (int i = 0; i < n_formandos && delegado==""; i++)
    {
        if (dataGridView1->Rows[i]->Cells["Delegado"]->Value == "X")
            delegado = dataGridView1->Rows[i]->Cells["Nome"]->Value->ToString();
    }

    fp->WriteLine(delegado);
    fp->Close();
}


         // Recuperar o nome do delegado a partir de um ficheiro de texto
private: void recuperar_delegado()
{

    String^ filename = "_Projeto_Alpha__delegado.txt";
    StreamReader^ fp;
    String^ delegado;
    int n_formandos;

    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    n_formandos = dataGridView1->Rows->Count;
    dataGridView1->AllowUserToAddRows = linha_intro;

    try
    {
        fp = gcnew StreamReader(filename);
    }
    catch (FileNotFoundException^)
    {
        MessageBox::Show("Não há nenhum delegado guardado.");
        return;
    }
    delegado = fp->ReadLine();
    

    if (delegado == "" || delegado == nullptr)
        MessageBox::Show("Não há nenhum delegado guardado.");

    for (int i = 0; i < n_formandos; i++)
    {
        if (dataGridView1->Rows[i]->Cells["Nome"]->Value->ToString() == delegado)
            dataGridView1->Rows[i]->Cells["Delegado"]->Value = "X";
        else
            dataGridView1->Rows[i]->Cells["Delegado"]->Value = "";
    }

    fp->Close();
    dataGridView1->Columns["Delegado"]->Visible = true;
}

private: void status_formando()
{
    String^ status_text;
    String^ media;
    String^ estado;
    String^ nome;
    DataGridViewSelectedRowCollection^ selected = dataGridView1->SelectedRows;
    int n_selected = selected->Count;

    if (n_selected == 1)
    {
        nome = Convert::ToString(selected[0]->Cells["Nome"]->Value);
        media = Convert::ToString(selected[0]->Cells["media"]->Value);
        estado = Convert::ToString(selected[0]->Cells["estado"]->Value);
        status_text = nome + " - " + estado + " (Média: " + media + ")";
        lbl_status->Text = status_text;
    }
    else
    {
        status_text = Convert::ToString(n_selected) + " formandos selecionados.";
        lbl_status->Text = status_text;
    }
}


private: void atualizar_tabela()
{
    calcula_medias();
    calcula_negas();
    atualizar_cores();
    atualizar_estado();
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
private: System::Void MédiaDeIdadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {calcular_media_idades();}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) { status_formando(); }
private: System::Void InicializarTurmaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { init_grid();}
private: System::Void AdicionarColunasDeDisciplinasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { gerar_colunas(); }
private: System::Void MostrarOcultarPainelLateralToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {alternar_painel_lateral();}
private: System::Void Btn_painel_Click(System::Object^ sender, System::EventArgs^ e) { alternar_painel_lateral();}
private: System::Void GerarNotasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { gerar_notas();}
private: System::Void NotasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { stats_notas(); }
private: System::Void ToolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) { recuperar_delegado(); }
private: System::Void GuardarDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { guardar_delegado();}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) { gerar_notas();}
};
}
