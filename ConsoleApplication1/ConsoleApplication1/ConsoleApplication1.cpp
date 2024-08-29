#include <iostream>
#include <vector>
#include <unistd.h> // Für die Sleep-Funktion (nur auf Unix-Systemen)

using namespace std;

// Definitionen der Dimensionen des Spielfelds
const int WIDTH = 20;
const int HEIGHT = 20;

// Funktion, die den aktuellen Zustand des Spielfelds ausgibt
void printGrid(const vector<vector<int>>& grid) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            cout << (grid[i][j] ? "O" : ".") << " ";
        }
        cout << endl;
    }
}

// Funktion, die die Anzahl der lebenden Nachbarn einer Zelle berechnet
int countLivingNeighbors(const vector<vector<int>>& grid, int x, int y) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue; // Die Zelle selbst wird nicht gezählt
            int newX = x + i;
            int newY = y + j;
            if (newX >= 0 && newX < HEIGHT && newY >= 0 && newY < WIDTH) {
                count += grid[newX][newY];
            }
        }
    }
    return count;
}

// Funktion, die das Spielfeld für die nächste Generation aktualisiert
void updateGrid(vector<vector<int>>& grid) {
    vector<vector<int>> newGrid = grid;

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            int livingNeighbors = countLivingNeighbors(grid, i, j);
            if (grid[i][j] == 1) {
                // Regel 1 und 3: Zelle stirbt durch Unterbevölkerung oder Überbevölkerung
                if (livingNeighbors < 2 || livingNeighbors > 3) {
                    newGrid[i][j] = 0;
                }
            }
            else {
                // Regel 4: Zelle wird durch Reproduktion lebendig
                if (livingNeighbors == 3) {
                    newGrid[i][j] = 1;
                }
            }
        }
    }
    grid = newGrid;
}

int main() {
    // Initiales Spielfeld
    vector<vector<int>> grid(HEIGHT, vector<int>(WIDTH, 0));

    // Ein einfaches Glider-Muster initialisieren
    grid[1][2] = 1;
    grid[2][3] = 1;
    grid[3][1] = 1;
    grid[3][2] = 1;
    grid[3][3] = 1;

    while (true) {
        printGrid(grid);
        updateGrid(grid);
        usleep(200000); // Pause zwischen den Generationen (200 ms)
        cout << "\033[H\033[J"; // Bildschirm löschen
    }

    return 0;
}
