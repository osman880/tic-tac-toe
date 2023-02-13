#include <iostream>

char tab[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
bool flag = true;



void menu()
{
    std::cout << "+---+---+---+"<< std::endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << "| " << tab[i][j] << " "; 
        }
        std::cout << '|' << "\n";
        std::cout << "+---+---+---+\n";
    }
    std::cout << "\n";
}

void move(int player, int input)
{
    char m = (player == 0) ? 'X' : '0';
    if(1 == input)
    {
        if(('X' != tab[0][0]) && ('0' != tab[0][0]))
        {
            tab[0][0] = m;
        }
    }
    else if(2 == input)
    {
        if(('X' != tab[0][1]) && ('0' != tab[0][1]))
        {
            tab[0][1] = m;
        }
    }
    else if(3 == input)
    {
        if(('X' != tab[0][2]) && ('0' != tab[0][2]))
        {
            tab[0][2] = m;
        }
    }
    else if(4 == input)
    {
        if(('X' != tab[1][0]) && ('0' != tab[1][0]))
        {
            tab[1][0] = m;
        }
    }
    else if(5 == input)
    {
        if(('X' != tab[1][1]) && ('0' != tab[1][1]))
        {
            tab[1][1] = m;
        }
    }
    else if(6 == input)
    {
        if(('X' != tab[1][2]) && ('0' != tab[1][2]))
        {
            tab[1][2] = m;
        }
    }
    else if(7 == input)
    {
        if(('X' != tab[2][0]) && ('0' != tab[2][0]))
        {
            tab[2][0] = m;
        }
    }
    else if(8 == input)
    {
        if(('X' != tab[2][1]) && ('0' != tab[2][1]))
        {
            tab[2][1] = m;
        }
    }
    else if(9 == input)
    {
        if(('X' != tab[2][2]) && ('0' != tab[2][2]))
        {
            tab[2][2] = m;
        }
    }
    else
    {
        std::cout << "Invalid input\n";
        flag = false;
    }
}

void check()
{
    for(int i = 0; i < 3; i++)
    {
        if((tab[i][0] == tab[i][1]) && (tab[i][0] == tab[i][2]))
        {
            int player = ('X' == tab[i][0]) ? 1 :2;
            std::cout << "Player "<< player << " won. Congrat!!\n";
            flag = false;
            return;
        }
        else if((tab[0][i] == tab[1][i]) && (tab[0][i] == tab[2][i]))
        {
            int player = ('X' == tab[i][0]) ? 1 :2;
            std::cout << "Player "<< player << " won. Congrat!!\n";
            flag = false;
            return;
        }
    }
    if((tab[0][0] == tab[1][1]) && (tab[0][0] == tab[2][2]))
    {
        int player = ('X' == tab[0][0]) ? 1 :2;
        std::cout << "Player "<< player << " won. Congrat!!\n";
        flag = false;
        return;
    }
}

int main()
{
    std::cout << "Welcome to Tic-Tac-Toe Game\n";
    std::cout << "Player 1 play with 'X' and Player 2 play with '0'\n";

    int counter = 0, input = 0, player = 0;
    while(flag)
    {
        menu();
        player = ((counter % 2) == 0) ? 0 : 1;
        std::cout << "Enter location Player " << player+1 << ": "; 
        std::cin >> input;
        move(player, input);
        menu();
        check();
        counter++; 
    }

    
    return 0;
}