#pragma once
#include "Tabela.h"

using namespace System;
using namespace System::Windows::Forms;

ref class GeradorAvaliacoes
{
    Random^ rnd = gcnew Random(); // inicializar gerador de numeros aleatórios

    // Gerar uma nota aleatória com ponderação (menos probabilidade de ocorrência nos extremos)
private: int gerar_nota_especial()
{
    int nota, pimPamPum;

    pimPamPum = rnd->Next(1, 180);
    for (int k = 0; k < 99; k++) { pimPamPum = rnd->Next(1, 100); }

    if (pimPamPum == 1)                          nota = rnd->Next(1, 8);   // Negativa baixa
    else if (pimPamPum >= 5 && pimPamPum < 10)  nota = rnd->Next(8, 10);  // Negativa alta
    else if (pimPamPum >= 20 && pimPamPum < 50)  nota = rnd->Next(15, 18); // Nota alta
    else if (pimPamPum >= 50 && pimPamPum < 70)  nota = rnd->Next(18, 20); // Nota muito alta
    else if (pimPamPum >= 95)                    nota = 20;                // Nota máxima
    else nota = rnd->Next(10, 15); // gerar número aleatório para nota mediana

    return nota;
}


public: void gerar_notas(DataGridView^ dataGridView1)
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

    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = col_start; j < col_end; j++) //-2: ultimas 2 colunas são média e estado
            dataGridView1->Rows[i]->Cells[j]->Value = gerar_nota_especial();
    }
    dataGridView1->AllowUserToAddRows = linha_intro;
}


};

