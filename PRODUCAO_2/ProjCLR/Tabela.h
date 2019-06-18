#pragma once
#include "Janela.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class Tabela
{


public: void atualizar_tabela(DataGridView^ dataGridView1, ToolStripStatusLabel^ lbl_status)
{
    calcula_medias(dataGridView1);
    calcula_negas(dataGridView1);
    atualizar_cores(dataGridView1);
    atualizar_estado(dataGridView1, lbl_status);
}


public: void atualizar_estado(DataGridView^ dataGridView1, ToolStripStatusLabel^ lbl_status)
{
    String^ estado;

    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    int n_formandos = dataGridView1->Rows->Count;
    dataGridView1->AllowUserToAddRows = linha_intro;

    estado = Convert::ToString(n_formandos) + " formandos.";
    lbl_status->Text = estado;
}

public: void gerar_colunas(DataGridView^ dataGridView1)
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


public: void calcula_medias(DataGridView^ dataGridView1)
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


public: void calcula_negas(DataGridView^ dataGridView1)
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



public: void atualizar_cores(DataGridView^ dataGridView1)
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



public: void alternar_linha_introducao(DataGridView^ dataGridView1)
{
    if (dataGridView1->AllowUserToAddRows)
        dataGridView1->AllowUserToAddRows = false;
    else
        dataGridView1->AllowUserToAddRows = true;
}

public: void alternar_row_headers(DataGridView^ dataGridView1)
{
    if (dataGridView1->RowHeadersVisible)
        dataGridView1->RowHeadersVisible = false;
    else
        dataGridView1->RowHeadersVisible = true;
}


public: void alternar_col_delegado(DataGridView^ dataGridView1)
{
    if (dataGridView1->Columns["Delegado"]->Visible)
        dataGridView1->Columns["Delegado"]->Visible = false;
    else
        dataGridView1->Columns["Delegado"]->Visible = true;
}



};

