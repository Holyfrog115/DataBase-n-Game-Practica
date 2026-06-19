#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class MineField
{
private:
	int rows;
	int cols;
	int mines;
	int cellsLeft;
	Button^ restartButton;
	array<int, 2>^ fieldLogic; // -1 - мина, 0 - пустая клетка, >0 - количество мин вокруг
	array<Button^, 2>^ fieldButtons; // Кнопки на форме
	bool isGameOver;

public:
	MineField(int rows, int cols, int mines, Button^ restartButton) {
		this->rows = rows;
		this->cols = cols;
		this->mines = mines;
		this->cellsLeft = (rows * cols) - mines;
		this->isGameOver = false;
		this->restartButton = restartButton;
	}

	System::Void InitializeField(System::Windows::Forms::Form^ form) {
		this->restartButton->ImageIndex = 0;
		fieldLogic = gcnew array<int, 2>(rows, cols);
		fieldButtons = gcnew array<Button^, 2>(rows, cols);
		int cellSize = 50;
		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < cols; c++) {
				fieldLogic[r, c] = 0; // Изначально поле чистое

				Button^ btn = gcnew Button();
				btn->Width = cellSize;
				btn->Height = cellSize;
				btn->BackColor = System::Drawing::Color::White;
				btn->Left = 45 + (c * cellSize);
				btn->Top = 125 + (r * cellSize);
				btn->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
				btn->Tag = System::Drawing::Point(r, c);

				btn->MouseUp += gcnew MouseEventHandler(this, &MineField::OnCellMouseUp);

				form->Controls->Add(btn);
				fieldButtons[r, c] = btn;
			}
		}
	}


	System::Void CleanUpField(Form^ form) {
		// Удаляем кнопки с формы и уничтожаем их объекты
		if (fieldButtons != nullptr) {
			for (int r = 0; r < rows; r++) {
				for (int c = 0; c < cols; c++) {
					Button^ btn = fieldButtons[r, c];
					if (btn != nullptr) {
						form->Controls->Remove(btn);
						delete btn;
					}
				}
			}
		}
	}


	System::Void GenerateMines() {
		System::Random^ rand = gcnew System::Random();
		int plantedMines = 0;

		// 1. Расставляем мины
		while (plantedMines < mines) {
			int r = rand->Next(rows);
			int c = rand->Next(cols);

			if (fieldLogic[r, c] != -1) {
				fieldLogic[r, c] = -1;
				plantedMines++;
			}
		}

		// 2. Считаем цифры вокруг мин
		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < cols; c++) {
				if (fieldLogic[r, c] == -1) continue;

				int minesAround = 0;

				// Проверяем соседние клетки в квадрате 3х3 вокруг текущей клетки
				for (int dr = -1; dr <= 1; dr++) {
					for (int dc = -1; dc <= 1; dc++) {
						int nr = r + dr;
						int nc = c + dc;
						if (nr >= 0 && nr < rows && nc >= 0 && nc < cols) {
							if (fieldLogic[nr, nc] == -1) {
								minesAround++;
							}
						}
					}
				}
				fieldLogic[r, c] = minesAround; // Записываем число от 0 до 8
			}
		}
	}

	System::Void OnCellMouseUp(Object^ sender, MouseEventArgs^ e) {
		if (isGameOver) return;

		Button^ clickedButton = safe_cast<Button^>(sender);
		Point coords = (Point) clickedButton->Tag;
		int r = coords.X;
		int c = coords.Y;

		// Правая кнопка - поставить/снять флажок
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			if (clickedButton->Text == "") {
				clickedButton->Text = "🚩";
				clickedButton->ForeColor = System::Drawing::Color::Red;
			}
			else if (clickedButton->Text == "🚩") {
				clickedButton->Text = "";
			}
		}
		// Левая кнопка - открыть клетку
		else if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			if (clickedButton->Text == "🚩") return;

			OpenCell(r, c);
		}
	}


	System::Void OpenCell(int r, int c) {
		// Проверяем границы и состояние клетки
		if (r < 0 || r >= rows || c < 0 || c >= cols) return;
		if (fieldButtons[r, c]->Enabled == false) return;

		// Выключаем кнопку при нажатии
		fieldButtons[r, c]->Enabled = false;
		fieldButtons[r, c]->BackColor = System::Drawing::Color::LightGray;

		// Попадание на мину
		if (fieldLogic[r, c] == -1) {
			fieldButtons[r, c]->Text = "💣";
			fieldButtons[r, c]->BackColor = System::Drawing::Color::Red;
			GameOver(false);
			return;
		}

		cellsLeft--;
		// Условие победы
		if (cellsLeft == 0) {
			GameOver(true);
			return;
		}

		// Если там цифра > 0 - показываем ее
		if (fieldLogic[r, c] > 0) {
			fieldButtons[r, c]->Text = fieldLogic[r, c].ToString();
			if (fieldLogic[r, c] == 1) fieldButtons[r, c]->ForeColor = System::Drawing::Color::Blue;
			if (fieldLogic[r, c] == 2) fieldButtons[r, c]->ForeColor = System::Drawing::Color::Green;
			return;
		}

		// Рекурсивное открытие соседних клеток, если в текущей клетке 0
		for (int dr = -1; dr <= 1; dr++) {
			for (int dc = -1; dc <= 1; dc++) {
				OpenCell(r + dr, c + dc);
			}
		}
	}

	System::Void GameOver(bool success) {
		isGameOver = true;
		if (success) {
			MessageBox::Show("Вы победили!");
			this->restartButton->ImageIndex = 2;
		}
		else {
			MessageBox::Show("Взрыв! Игра окончена.");
			// Показываем все мины на поле
			for (int r = 0; r < rows; r++) {
				for (int c = 0; c < cols; c++) {
					if (fieldLogic[r, c] == -1) {
						fieldButtons[r, c]->Text = "💣";
					}
				}
			}
			this->restartButton->ImageIndex = 1;
		}
	}
};

