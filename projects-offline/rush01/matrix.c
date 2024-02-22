#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_delete(char *string, char c, char w);

void    ft_fill_matrix(char matrix[6][6][5])  //fills the matrix with arrays of possible num
{
    int col;
    int row;
    int i;
    col = 0;
    i = 1;
    while(col <= 5)
    {
        row = 0;
        while(row <= 5)
        {
            matrix[row][col][0] = '-';
            while(i < 5)
            {
                matrix[row][col][i] = i + 48;
                i++;
            }
            i = 1;
            row++;
        }
        col++;
    }
}
void    ft_input_matrix(char matrix[6][6][5], char input[]) //puts the number of the input
{
    int i;
    
    i = 0;
    /*if(input[i] < '1' && input[i] > '4')
        ft_error();*/
    while(i < 4)
    {
        matrix[0][i + 1][0] = input[i];  //fills top
        i++;
    }
    i = 0;
    while(i < 4)
    {
        matrix[i + 1][5][0] = input[i + 4]; //fills right
        i++;
    }
    i = 0;
    while(i < 4)
    {
        matrix[i + 1][0][0] = input[i + 8]; //fills left
        i++;
    }
    i = 0;
    while(i < 4)
    {
        matrix[5][i + 1][0] = input[i + 12]; //fills not
        i++;
    }
}
char    ft_is_in_string(char string[], char c) //checks if a character is inside a string
{
    int i;
    i = 0;
    while(string[i] = '\0')
    {
        if(string[i] == c)
            return ('t');
    }
    return ('f');
}
void    ft_show_matrix(char matrix[6][6][5])    //shows matrix
{
    int col;
    int row;
    row = 0;
    while (row <= 5)
    {
        col = 0;
        while (col <= 5)
        {
            write(1, &matrix[row][col][0], 1);
            write(1, " | ", 3);
            col++;
        }
        write(1, "\n", 1);
        row++;
    }
    write(1, "\n", 1);
}
/*int ft_error()
{
    write(1, "Error", 5);
    write(1, "\n", 1);
    exit(1);
}*/
void overwrite(char *wri, char over)
{
    if (*wri != over && *wri != '-') //PROBLEEEM
    {
        /*ft_error();*/
    }else
    {
        *wri = over;
    }
}
void    ft_create_fixed_numbers(char matrix[6][6][5])   //creates fixed
{
    int row;
    int col;
    int temp;
    int nm;
    row = 0;
    col = 0;
    while(col < 5)
    {
        nm = matrix[row][col][0];
        if(nm == '4')
        {   temp = row;
            row++;
            while(row < 5)
            {
                overwrite(&matrix[row][col][0], row + 48);
                row++;
            }
            row = temp;
        }else if(nm == '1')
        {
            overwrite(&matrix[row + 1][col][0], '4');
        } else if(nm == '2' || nm == '3')
        {
            temp = row;
            while(row < nm - 48)
            {
                ft_delete(&matrix[row + 1][col][0], '4', '-');
                row++;
            }
            row = temp;
        }
        col++;
    }
    while(row < 5)
    {
        nm = matrix[row][col][0];
        if(nm == '4')
        {   temp = col;
            col--;
            while(col > 0)
            {
                overwrite(&matrix[row][col][0],  -(col-5) + 48);
                col--;
            }
            col = temp;
        }else if(nm == '1')
        {
            overwrite(&matrix[row][col - 1][0], '4');
        } else if(nm == '2' || nm == '3')
        {
            temp = col;
            while(col != 5 + 1 - (nm - 48))
            {
                ft_delete(&matrix[row][col - 1][0], '4', '-');
                col--;
            }
            col = temp;
        }
        row++;
    }
    while(col > 0)
    {
        if(matrix[row][col][0] == '4')
        {   temp = row;
            row--;
            while(row > 0)
            {
                overwrite(&matrix[row][col][0], -(row-5) + 48);
                row--;
            }
            row = temp;
        }else if(matrix[row][col][0] == '1')
        {
            overwrite(&matrix[row -  1][col][0], '4');
        } else if(nm == '2' || nm == '3')
        {
            temp = row;
            while(row != 5 + 1 - (nm - 48))
            {
                ft_delete(&matrix[row - 1][col][0], '4', '-');
                row--;
            }
            row = temp;
        }
        col--;
    }
    while(row > 0)
    {
        if(matrix[row][col][0] == '4')
        {   temp = col;
            col++;
            while(col < 5)
            {
                overwrite(&matrix[row][col][0], col + 48);
                col++;
            }
            col = temp;
        }else if(matrix[row][col][0] == '1')
        {
            overwrite(&matrix[row][col + 1][0], '4');
        } else if(nm == '2' || nm == '3')
        {
            temp = col;
            while(col < nm - 48)
            {
                ft_delete(&matrix[row][col + 1][0], '4', '-');
                col++;
            }
            col = temp;
        }
        row--;
    }
}
void ft_delete(char *str, char c, char w)
{
    while (*str)
    {
        if (w == '-')
        {
            if (*str == c && c != *str)
                *str = '-';
        }
        else if (w == '1')
        {
            if (*str != c)
                *str = '-';
        }
        str++;
    }
}
void ft_delete_array(char *sou, char el[])
{
    int i;

    i = 0;
    while (el[i] != '\0')
    {
        sou[el[i] - '0'] = '-'; // Delete the character
        i++;
    }
}

void ft_search_delete(char matrix[6][6][5])
{
    int row;
    int col;
    char num[4];
    int temp[2];
    int i;
    
    row = 1;
    col = 1;
    i = 0;

    while (row < 5)
    {
        while (col < 5)
        {   
            if (matrix[row][col][0] == '-')
            {
                temp[0] = 1;
                while(temp[0] < 5)  //seaches values on the same column so top-bottom
                {
                    if(matrix[temp[0]][col][0] != '-')
                    {
                        if(ft_is_in_string(num, matrix[temp[0]][col][0]) == 'f')
                        {
                            num[i] = matrix[temp[0]][col][0];
                            if(i<4)
                                i++;
                        }
                    }
                    temp[0]++;
                }
                ft_delete_array(&matrix[row][col][0], num);
                i = 0;
                temp[1] = 1; 
                while(temp[1] < 5)  //seaches values on the same column so left right
                {
                    if(matrix[row][temp[1]][0] != '-')
                    {
                        if(ft_is_in_string(num, matrix[row][temp[1]][0]) == 'f')
                        {
                            num[i] = matrix[row][temp[1]][0];
                            if(i<4)
                                i++;
                        }
                    }
                    temp[1]++;
                }
                ft_delete_array(&matrix[row][col][0], num);
                i = 0; 
            }
            col++;
        }
        col = 1; 
        row++; 
    }
}


char *input_without_spaces(const char *in)
{
    int i = 0;
    char *inws = (char *)malloc(16 * 8); // creates memory for the characters

    if (inws == NULL) {
        return NULL; 
    }

    while (*in)
    {
        if (*in != ' ')
        {
            inws[i] = *in;
            i++;
        }
        in++;
    }
    if (i != 16)
    {
        free(inws); // if the imput is not long 16 characters it frees the memory
        return NULL; 
    }
    return (inws);
}

int main(/*int argc, char *argv[]*/)
{
    /*if (argc < 2) {
        write(1, "Error", 5);
        write(1, "\n", 1);
        return (1);
    }*/
    char matrix[6][6][5];
    //char *input = input_without_spaces(argv[1]);
    //"top","right","left","bot"
    ft_fill_matrix(matrix);
    char input[] = {'4', '3', '2', '1', '1', '2', '2', '2', '4', '3', '2', '1', '1', '2', '2', '2'};
    ft_input_matrix(matrix, input);
    //free(input);
    ft_show_matrix(matrix);
    ft_create_fixed_numbers(matrix);
    ft_show_matrix(matrix);
    ft_search_delete(matrix);
    printf("%c", matrix[2][2][4]);
    return 0;
}
