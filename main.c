#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9

int board[SIZE][SIZE];
int originalBoard[SIZE][SIZE];


bool is_valid(int row, int col, int num);
// Bir sayinin belirli bir konumda gecerli olup olmadigini kontrol eden fonksiyon
bool is_valid(int row, int col, int num) {
    // Ayni satirda veya sutunda ayni sayiyi kontrol et
    for (int i = 0; i < SIZE; i++) {
        if (board[row][i] == num || board[i][col] == num) {
            return false;
        }
    }

    // Ayni bolgede (3x3) ayni sayiyi kontrol et
    int row_start = (row / 3) * 3;
    int col_start = (col / 3) * 3;
    for (int i = row_start; i < row_start + 3; i++) {
        for (int j = col_start; j < col_start + 3; j++) {
            if (board[i][j] == num) {
                return false;
            }
        }
    }

    return true;
}

// Sudoku tahtasini belirli bir zorluk seviyesine gore olusturan fonksiyon
void generate_board(int difficulty) {
    memset(board, 0, sizeof(board));

    int count = 0;
    int num_count = 0;
    int target_count = 0;
    switch (difficulty) {
        case 1:  // Kolay
            target_count = 40;
            break;
        case 2:  // Orta
            target_count = 34;
            break;
        case 3:  // Zor
            target_count = 28;
            break;
        default:
            target_count = 40;
            break;
    }

    // Belirlenen hedef sayiya ulasana kadar rastgele sayilar ekleyerek tahtayi olusturmak icin dongu
    while (count < target_count) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;
        int num = rand() % 9 + 1;

        if (is_valid(row, col, num)) {
            board[row][col] = num;
            originalBoard[row][col] = num;
            count++;
        }
    }
}

// Oyunu kaydetmek icin tahtayi dosyaya yazan fonksiyon
void save_game() {
    FILE* file = fopen("saved_game.txt", "w");
    if (file == NULL) {
        printf("Oyun kaydedilemedi.\n");
        return;
    }

    // Tahtadaki tüm sayilari dosyaya yaz
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            fprintf(file, "%d ", board[i][j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Oyun kaydedildi.\n");
}

// Kaydedilmis bir oyunu yukleyen fonksiyon
void load_game() {
    FILE* file = fopen("saved_game.txt", "r");
    if (file == NULL) {
        printf("Kaydedilmis oyun bulunamadi.\n");
        return;
    }
    printf("Kaydedilen oyun yuklendi.\n");

    // Dosyadan tahtadaki sayilari oku ve tahtayi guncelle
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            fscanf(file, "%d", &board[i][j]);
            originalBoard[i][j] = board[i][j];
        }
    }

    fclose(file);

}

// Sudoku tahtasini ekrana yazdiran fonksiyon
void print_board() {
    printf("-----------------------\n");
    for (int i = 0; i < SIZE; i++) {
        printf("| ");
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                printf(". ");
            } else {
                printf("%d ", board[i][j]);
            }
            if ((j + 1) % 3 == 0) {
                printf("| ");
            }
        }
        printf("\n");
        if ((i + 1) % 3 == 0) {
            printf("-----------------------\n");
        }
    }
}

// Sudoku tahtasinin dolu olup olmadigini kontrol eden fonksiyon
bool is_board_full() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    srand(time(NULL));
    int choice;
    bool oyunDevam = false;

    while (1) {
        printf("1. Yeni oyun baslat\n");
        printf("2. Kaydedilmis oyunu yukle\n");
        printf("3. Oyunu kaydet\n");
        printf("4. Cikis\n");
        printf("Seciminizi yapin = ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Zorluk seviyesini secin:\n");
                printf("1. Kolay\n");
                printf("2. Orta\n");
                printf("3. Zor\n");
                printf("Seciminizi yapin = ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                    case 2:
                    case 3:
                        generate_board(choice);
                        break;
                    default:
                        printf("Gecersiz secim!\n");
                        continue;
                }

                printf("Oyun baslatildi.\n");
                print_board();
                oyunDevam = true;
                break;

            case 2:
                load_game();

                print_board();
                oyunDevam = true;
                break;

            case 3:
                save_game();
                break;

            case 4:
                printf("Oyun sonlandirildi.\n");
                return 0;

            default:
                printf("Gecersiz secim!\n");
                continue;
        }

        while (oyunDevam) {
            int row, col, num;

            printf("Satir secin (1-9 araliginda) veya 0 girerek oyunu kaydedin = ");
            scanf("%d", &row);

            if (row == 0) {
                save_game();
                oyunDevam = false;
                break;
            }

            printf("Sutunn secin (1-9 araliginda) = ");
            scanf("%d", &col);

            printf("Yerlestirmek istediðiniz sayiyi secin (1-9 araliginda) veya 0 girerek sayiyi silin = ");
            scanf("%d", &num);

            row--;
            col--;

            if (num == 0) {
                if (originalBoard[row][col] != 0) {
                    printf("Bu sayiyi silemezsiniz!\n");
                    continue;
                }
                board[row][col] = 0;
            } else {
                if (!is_valid(row, col, num)) {
                    printf("Gecersiz hamle!\n");
                    continue;
                }
                if (originalBoard[row][col] != 0) {
                    printf("Bu hucreye sayi yerlestiremezsiniz!\n");
                    continue;
                }
                board[row][col] = num;
            }

            print_board();

            if (is_board_full()) {
                printf("Tebrikler, oyunu tamamladiniz!\n");
                oyunDevam = false;
            }
        }
    }

    return 0;
}
