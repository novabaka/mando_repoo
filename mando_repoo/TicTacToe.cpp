#include "TicTacToe.h"

void TicTacToe::map(int* arr) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (*(arr + i * 3 + j) == 0)
                cout << "  |";
            else if (*(arr + i * 3 + j) == 1)
                cout << " x|";
            else if (*(arr + i * 3 + j) == 2)
                cout << " o|";
        }
        cout << endl;
    }

}

int TicTacToe::check_win(int game_arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (game_arr[i][0] == game_arr[i][1] && game_arr[i][1] == game_arr[i][2]) {
            return game_arr[i][0];
        }
    }

    for (int i = 0; i < 3; i++) {
        if (game_arr[0][i] == game_arr[1][i] && game_arr[1][i] == game_arr[2][i]) {
            return game_arr[0][i];
        }
    }

    if (game_arr[0][0] == game_arr[1][1] && game_arr[1][1] == game_arr[2][2]) {
        return game_arr[0][0];
    }
    if (game_arr[0][2] == game_arr[1][1] && game_arr[1][1] == game_arr[2][0]) {
        return game_arr[0][2];
    }

    return 0;
}



void TicTacToe::game_start() {
    int game_arr[3][3] = { 0 };
    int arr_n;
    bool attack = true; // 0�� o�� ����

    for (;;) {

        map((int*)game_arr);
        if (check_win(game_arr)) {
            cout << "������ ����Ǿ����ϴ�. �¸���: " << ((check_win(game_arr)) == 1 ? "x" : "o") << endl;
            break;
        }
        cout << "��ǥ�� �Է��ϼ��� �� 12" << endl;
        arr_n = 0;
        cin >> arr_n;

        if (attack == true) {
            if (game_arr[arr_n / 10 - 1][arr_n % 10 - 1] == 0)
                game_arr[arr_n / 10 - 1][arr_n % 10 - 1] = 2;
            else {
                attack = !attack;
                cout << "�ٸ޴ٸ� �ٸ޿� �ȵ� �ȵſ� �װ��� �̹� ���־�� " << endl;
            }
        }
        else if (attack == false) {
            if (game_arr[arr_n / 10 - 1][arr_n % 10 - 1] == 0)
                game_arr[arr_n / 10 - 1][arr_n % 10 - 1] = 1;
            else {
                cout << "�ٸ޴ٸ� �ٸ޿� �ȵ� �ȵſ� �װ��� �̹� ���־�� " << endl;
                attack = !attack;
            }
        }
        attack = !attack;

    }

}