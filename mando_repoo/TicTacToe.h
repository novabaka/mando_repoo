#include <iostream>
#include <string>
#include <ctime>//�ð��� �������� �������
#include <cstdlib>

using namespace std;

class TicTacToe {
public:
    void map(int* arr);
    int check_win(int game_arr[3][3]);
    void game_start();
};