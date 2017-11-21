/**
 * fifteen.c
 *
 * Implements Game of Fifteen (generalized to d x d).
 *
 * Usage: fifteen d
 *
 * whereby the board's dimensions are to be d x d,
 * where d must be in [DIM_MIN,DIM_MAX]
 *
 * Note that usleep is obsolete, but it offers more granularity than
 * sleep and is simpler to use than nanosleep; `man usleep` for more.
 */

#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// constants
#define DIM_MIN 3
#define DIM_MAX 9

// board
int board[DIM_MAX][DIM_MAX];

// dimensions
int d;

// prototypes
void clear(void);
void greet(void);
void init(int x);
void draw(int x);
bool move(int tile, int x);
bool won(int x);

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // open log
    FILE *file = fopen("log.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // greet user with instructions
    greet();

    int board[d][d];

    // initialize the board
    init(d);

    // accept moves until game is won
    while (true)
    {
        // clear the screen
        clear();

        // draw the current state of the board
        draw(d);

        // log the current state of the board (for testing)
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // check for win
        if (won(d))
        {
            printf("ftw!\n");
            break;
        }

        // prompt for move
        printf("Tile to move: ");
        int tile = get_int();

        // quit if user inputs 0 (for testing)
        if (tile == 0)
        {
            break;
        }

        // log move (for testing)
        fprintf(file, "%i\n", tile);
        fflush(file);

        // move if possible, else report illegality
        if (!move(tile, d))
        {
            printf("\nIllegal move.\n");
            usleep(500000);
        }

        // sleep thread for animation's sake
        usleep(500000);
    }

    // close log
    fclose(file);

    // success
    return 0;
}

/**
 * Clears screen using ANSI escape sequences.
 */
void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

/**
 * Greets player.
 */
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(2000000);
}

/**
 * Initializes the game's board with tiles numbered 1 through d*d - 1
 * (i.e., fills 2D array with values but does not actually print them).
 */
void init(int x)
{
    int k = 1;
    int max = x * x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            board[i][j] = max - k;

            if (x % 2 == 0)
            {
                if (i == x - 1 && j == x - 3)
                board[i][j] = 1;
                if (i == x - 1 && j == x - 2)
                board[i][j] = 2;
            }

            if (i == x - 1 && j == x - 1)
            {
                board[i][j] = 95;
            }

            k++;
        }

    }
}

/**
 * Prints the board in its current state.
 */
void draw(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {

            if (board[i][j] == 95)
            {
                printf("%2c ", (char) board[i][j]);
            }
            else
            {
                printf("%2i ", board[i][j]);
            }
        }
        printf("\n");
    }
}

/**
 * If tile borders empty space, moves tile and returns true, else
 * returns false.
 */
bool move(int tile, int x)
{
    int a;
    int b;
    int t1;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (board[i][j] == tile)
            {
                a = i;
                b = j;
                t1 = board[a][b];
            }
        }
    }

    int c;
    int d;

    for (int k = 0; k < x; k++)
    {
        for (int l = 0; l < x; l++)
        {
            if (board[k][l] == 95)
            {
                c = k;
                d = l;
            }
        }
    }



    if (((c - 1 == a || c + 1 == a) && d == b) || (c == a && (d - 1 == b || d + 1 == b)))
    {
        board[a][b] = board[c][d];
        board[c][d] = t1;
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * Returns true if game is won (i.e., board is in winning configuration),
 * else false.
 */
bool won(int x)
{
    int ct = 0;

    if (board[x - 1][x - 1] == 95)
    {
        for (int i = 0, k = 1; i < x; i++)
        {
            if (i == x - 1)
            {
                for (int j = 0; j < x - 1; j++)
                {
                    if (board[i][j] != k)
                    {
                        ct++;
                    }
                    k++;
                }
            }
            else
            {
                for (int j = 0; j < x; j++)
                {
                    if (board[i][j] != k)
                    {
                        ct++;
                    }
                    k++;
                }
            }
        }
    }

    else
    {
        ct = 1;
    }

    if (ct == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
