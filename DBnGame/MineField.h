#pragma once
ref class MineField
{
private:
	int rows;
	int cols;
	int mines;
	array<int, 2>^ fieldLogic; // -1 - мина, 0 - пустая клетка, >0 - количество мин вокруг
	array<System::Windows::Forms::Button^, 2>^ fieldButtons; // Кнопки на форме
	bool isGameOver;

public:
	MineField(int rows, int cols, int mines) {
		this->rows = rows;
		this->cols = cols;
		this->mines = mines;
		this->isGameOver = false;
	}

	System::Void InitializeField(System::Windows::Forms::Form^ form) {
		fieldLogic = gcnew array<int, 2>(rows, cols);
		fieldButtons = gcnew array<System::Windows::Forms::Button^, 2>(rows, cols);
		int cellSize = 50;
		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < cols; c++) {
				fieldLogic[r, c] = 0; // Изначально поле чистое

				System::Windows::Forms::Button^ btn = gcnew System::Windows::Forms::Button();
				btn->Width = cellSize;
				btn->Height = cellSize;
				btn->Left = 45 + (c * cellSize);
				btn->Top = 125 + (r * cellSize);
				btn->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
				btn->Tag = System::Drawing::Point(r, c);

				//btn->MouseUp += gcnew MouseEventHandler(this, &MyForm::OnCellMouseUp);

				form->Controls->Add(btn);
				fieldButtons[r, c] = btn;
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

			if (fieldLogic[r, c] != -1) { // Если тут еще нет мины
				fieldLogic[r, c] = -1;
				plantedMines++;
			}
		}

		// 2. Считаем цифры вокруг мин
		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < cols; c++) {
				if (fieldLogic[r, c] == -1) continue; // Мины не трогаем

				int minesAround = 0;
				// Проверяем соседей в квадрате 3х3 вокруг текущей клетки
				for (int dr = -1; dr <= 1; dr++) {
					for (int dc = -1; dc <= 1; dc++) {
						int nr = r + dr;
						int nc = c + dc;
						// Проверяем, что сосед не вышел за границы поля
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
};

