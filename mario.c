
#vcpkg install [packages to install]

int main(void);
{
    int height, row, column, spaces;
    do
    {
        height = get_int("enter height");
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (spaces = 0; spaces < height; spaces++) 
        {
            printf("  ");
        }
        for (column = 0; column < height; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}