#include <stdio.h>
#include <string.h>

struct face {
	char topLeft;
	char topRight;
	char bottomLeft;
	char bottomRight;
};

int main(int argc, char *argv[])
{
	struct face front = {'B', 'B', 'B', 'B'};
    struct face back = {'G', 'G', 'G', 'G'};
    struct face up = {'W', 'W', 'W', 'W'};
    struct face down = {'Y', 'Y', 'Y', 'Y'};
    struct face left = {'R', 'R', 'R', 'R'};
    struct face right = {'O', 'O', 'O', 'O'};
    char temp1, temp2, temp3, temp4;
    char *a = argv[1];
    int j = 0;
    signed int len = strlen(a);

    if(argc > 2)
    {
        printf("Too many arguments\n");
    }

    for(j = 0; j < len; ++j)
    {
        if ((a[j] == 'L' && a[j+1] != '+') || (a[j] == 'L' && a[j+1] != '2'))
        {
            temp1 = front.topLeft;
            temp2 = front.bottomLeft;
            temp3 = left.topLeft;

            front.topLeft = up.topLeft;
            front.bottomLeft = up.bottomLeft;
            up.topLeft = back.topLeft;
            up.bottomLeft = back.bottomLeft;
            back.topLeft = down.topLeft;
            back.bottomLeft = down.bottomLeft;
            down.topLeft = temp1;
            down.bottomLeft = temp2;

            left.topLeft = left.bottomLeft;
            left.bottomLeft = left.bottomRight;
            left.bottomRight = left.topRight;
            left.topRight = temp3;
        }
        if ((a[j] == 'L' && a[j+1] == '+') || (a[j] == 'L' && a[j+1] == '2'))
        {
            int i = 0;
            while (i < 3)
            {
                temp1 = front.topLeft;
                temp2 = front.bottomLeft;
                temp3 = left.topLeft;

                front.topLeft = down.topLeft;
                front.bottomLeft = down.bottomLeft;
                down.topLeft = back.topLeft;
                down.bottomLeft = back.bottomLeft;
                back.topLeft = up.topLeft;
                back.bottomLeft = up.bottomLeft;
                up.topLeft = temp1;
                up.bottomLeft = temp2;

                left.topLeft = left.topRight;
                left.topRight = left.bottomRight;
                left.bottomRight = left.bottomLeft;
                left.bottomLeft = temp3;

                ++i;
                if (a[j+1] == '+' && i == 2)
                    break;
            }
        }
        if ((a[j] == 'R' && a[j+1] != '+') || (a[j] == 'R' && a[j+1] != '2'))
        {
            temp1 = front.topRight;
            temp2 = front.bottomRight;
            temp3 = right.topLeft;

            front.topRight = down.topRight;
            front.bottomRight = down.bottomRight;
            down.topRight = back.topRight;
            down.bottomRight = back.bottomRight;
            back.topRight = up.topRight;
            back.bottomRight = up.bottomRight;
            up.topRight = temp1;
            up.bottomRight = temp2;

            right.topLeft = right.bottomLeft;
            right.bottomLeft = right.bottomRight;
            right.bottomRight = right.topRight;
            right.topRight = temp3;
        }
        if ((a[j] == 'R' && a[j+1] == '+') || (a[j] == 'R' && a[j+1] == '2'))
        {
            int i = 0;
            while (i < 3)
            {
                temp1 = front.topRight;
                temp2 = front.bottomRight;
                temp3 = right.topLeft;

                front.topRight = up.topRight;
                front.bottomRight = up.bottomRight;
                up.topRight = back.topRight;
                up.bottomRight = back.bottomRight;
                back.topRight = down.topRight;
                back.bottomRight = down.bottomRight;
                down.topRight = temp1;
                down.bottomRight = temp2;

                right.topLeft = right.topRight;
                right.topRight = right.bottomRight;
                right.bottomRight = right.bottomLeft;
                right.bottomLeft = temp3;

                ++i;
                if (a[j+1] == '+' && i == 2)
                    break;
            }
        }

        if ((a[j] == 'F' && a[j+1] != '+') || (a[j] == 'F' && a[j+1] != '2'))
        {
            temp1 = up.bottomLeft;
            temp2 = up.bottomRight;
            temp3 = front.topLeft;

            up.bottomLeft = left.bottomRight;
            up.bottomRight = left.topRight;
            left.bottomRight = down.topRight;
            left.topRight = down.topLeft;
            down.topRight = right.topLeft;
            down.topLeft = right.bottomLeft;
            right.topLeft = temp1;
            right.bottomLeft = temp2;

            front.topLeft = front.bottomLeft;
            front.bottomLeft = front.bottomRight;
            front.bottomRight = front.topRight;
            front.topRight = temp3;
        }
        if ((a[j] == 'F' && a[j+1] == '+') || (a[j] == 'F' && a[j+1] == '2'))
        {
            int i = 0;
            while (i < 3)
            {
                temp1 = up.bottomLeft;
                temp2 = up.bottomRight;
                temp3 = front.topLeft;

                up.bottomLeft = right.topLeft;
                up.bottomRight = right.bottomLeft;
                right.topLeft = down.topRight;
                right.bottomLeft = down.topLeft;
                down.topRight = left.bottomRight;
                down.topLeft = left.topRight;
                left.bottomRight = temp1;
                left.topRight = temp2;

                front.topLeft = front.topRight;
                front.topRight = front.bottomRight;
                front.bottomRight = front.bottomLeft;
                front.bottomLeft = temp3;

                ++i;
                if (a[j+1] == '+' && i == 2)
                    break;
            }
        }
        if ((a[j] == 'B' && a[j+1] != '+') || (a[j] == 'B' && a[j+1] != '2'))
        {
            temp1 = right.topRight;
            temp2 = right.bottomRight;
            temp3 = back.bottomRight;

            right.topRight = down.bottomRight;
            right.bottomRight = down.bottomLeft;
            down.bottomRight = left.bottomLeft;
            down.bottomLeft = left.topLeft;
            left.bottomLeft = up.topLeft;
            left.topLeft = up.topRight;
            up.topLeft = temp1;
            up.topRight = temp2;

            back.bottomRight = back.topRight;
            back.topRight = back.topLeft;
            back.topLeft = back.bottomLeft;
            back.bottomLeft = temp3;
        }
        if ((a[j] == 'B' && a[j+1] == '+') || (a[j] == 'B' && a[j+1] == '2'))
        {
            int i = 0;
            while (i < 3)
            {
                temp1 = left.topLeft;
                temp2 = left.bottomLeft;
                temp3 = back.bottomLeft;

                left.topLeft = down.bottomLeft;
                left.bottomLeft = down.bottomRight;
                down.bottomLeft = right.bottomRight;
                down.bottomRight = right.topRight;
                right.bottomRight = up.topRight;
                right.topRight = up.topLeft;
                up.topRight = temp1;
                up.topLeft = temp2;

                back.bottomLeft = back.topLeft;
                back.topLeft = back.topRight;
                back.topRight = back.bottomRight;
                back.bottomRight = temp3;

                ++i;
                if (a[j+1] == '+' && i == 2)
                    break;
            }
        }
        if ((a[j] == 'U' && a[j+1] != '+') || (a[j] == 'U' && a[j+1] != '2'))
        {
            temp1 = right.topLeft;
            temp2 = right.topRight;
            temp3 = up.bottomLeft;

            right.topLeft = back.bottomRight;
            right.topRight = back.bottomLeft;
            back.bottomRight = left.topLeft;
            back.bottomLeft = left.topRight;
            left.topLeft = front.topLeft;
            left.topRight = front.topRight;
            front.topLeft = temp1;
            front.topRight = temp2;

            up.bottomLeft = up.bottomRight;
            up.bottomRight = up.topRight;
            up.topRight = up.topLeft;
            up.topLeft = temp3;
        }
        if ((a[j] == 'U' && a[j+1] == '+') || (a[j] == 'U' && a[j+1] == '2'))
        {
            int i = 0;
            while (i < 3)
            {
                temp1 = left.topLeft;
                temp2 = left.topRight;
                temp3 = up.topRight;

                left.topLeft = back.bottomRight;
                left.topRight = back.bottomLeft;
                back.bottomRight = right.topLeft;
                back.bottomLeft = right.topRight;
                right.topLeft = front.topLeft;
                right.topRight = front.topRight;
                front.topLeft = temp1;
                front.topRight = temp2;

                up.topRight = up.bottomRight;
                up.bottomRight = up.bottomLeft;
                up.bottomLeft = up.topLeft;
                up.topLeft = temp3;

                ++i;
                if (a[j+1] == '+' && i == 2)
                    break;
            }
        }
        if ((a[j] == 'D' && a[j+1] != '+') || (a[j] == 'D' && a[j+1] != '2'))
        {
            temp1 = back.topRight;
            temp2 = back.topLeft;
            temp3 = down.bottomLeft;

            back.topRight = right.bottomLeft;
            back.topLeft = right.bottomRight;
            right.bottomLeft = front.bottomLeft;
            right.bottomRight = front.bottomRight;
            front.bottomLeft = left.bottomLeft;
            front.bottomRight = left.bottomRight;
            left.bottomLeft = temp1;
            left.bottomRight = temp2;

            down.bottomLeft = down.bottomRight;
            down.bottomRight = down.topRight;
            down.topRight = down.topLeft;
            down.topLeft = temp3;
        }
        if ((a[j] == 'D' && a[j+1] == '+') || (a[j] == 'D' && a[j+1] == '2'))
        {
            int i = 0;
            while (i < 3)
            {
                temp1 = front.bottomLeft;
                temp2 = front.bottomRight;
                temp3 = down.topRight;

                front.bottomLeft = right.bottomLeft;
                front.bottomRight = right.bottomRight;
                right.bottomLeft = back.topRight;
                right.bottomRight = back.topLeft;
                back.topRight = left.bottomLeft;
                back.topLeft = left.bottomRight;
                left.bottomLeft = temp1;
                left.bottomRight = temp2;

                down.topRight = down.bottomRight;
                down.bottomRight = down.bottomLeft;
                down.bottomLeft = down.topLeft;
                down.topLeft = temp3;

                ++i;
                if (a[j+1] == '+' && i == 2)
                    break;
            }
        }
        if ((a[j] == 'Y' && a[j+1] != '+') || (a[j] == 'Y' && a[j+1] != '2'))
        {
            temp1 = front.topLeft;
            temp2 = front.topRight;
            temp3 = front.bottomLeft;
            temp4 = front.bottomRight;

            front.topLeft = right.topLeft;
            front.topRight = right.topRight;
            front.bottomLeft = right.bottomLeft;
            front.bottomRight = right.bottomRight;

            right.topLeft = back.bottomRight;
            right.topRight = back.bottomLeft;
            right.bottomLeft = back.topRight;
            right.bottomRight = back.topLeft;

            back.bottomRight = left.topLeft;
            back.bottomLeft = left.topRight;
            back.topRight = left.bottomLeft;
            back.topLeft = left.bottomRight;

            left.topLeft = temp1;
            left.topRight = temp2;
            left.bottomLeft = temp3;
            left.bottomRight = temp4;

            temp1 = up.topLeft;
            up.topLeft = up.bottomLeft;
            up.bottomLeft = up.bottomRight;
            up.bottomRight = up.topRight;
            up.topRight = temp1;

            temp1 = down.topLeft;
            down.topLeft = down.topRight;
            down.topRight = down.bottomRight;
            down.bottomRight = down.bottomLeft;
            down.bottomLeft = temp1;
        }
        if ((a[j] == 'Y' && a[j+1] == '+') || (a[j] == 'Y' && a[j+1] == '2'))
        {
            int i = 0;
            while (i < 3)
            {
                temp1 = front.topLeft;
                temp2 = front.topRight;
                temp3 = front.bottomLeft;
                temp4 = front.bottomRight;

                front.topLeft = left.topLeft;
                front.topRight = left.topRight;
                front.bottomLeft = left.bottomLeft;
                front.bottomRight = left.bottomRight;

                left.topLeft = back.bottomRight;
                left.topRight = back.bottomLeft;
                left.bottomLeft = back.topRight;
                left.bottomRight = back.topLeft;

                back.bottomRight = right.topLeft;
                back.bottomLeft = right.topRight;
                back.topRight = right.bottomLeft;
                back.topLeft = right.bottomRight;

                right.topLeft = temp1;
                right.topRight = temp2;
                right.bottomLeft = temp3;
                right.bottomRight = temp4;

                temp1 = up.topLeft;
                up.topLeft = up.topRight;
                up.topRight = up.bottomRight;
                up.bottomRight = up.bottomLeft;
                up.bottomLeft = temp1;

                temp1 = down.topLeft;
                down.topLeft = down.bottomLeft;
                down.bottomLeft = down.bottomRight;
                down.bottomRight = down.topRight;
                down.topRight = temp1;

                ++i;
                if (a[j+1] == '+' && i == 2)
                    break;
            }
        }
        if ((a[j] == 'Z' && a[j+1] != '+') || (a[j] == 'Z' && a[j+1] != '2'))
        {
            temp1 = up.topLeft;
            temp2 = up.topRight;
            temp3 = up.bottomLeft;
            temp4 = up.bottomRight;

            up.topLeft = left.bottomLeft;
            up.topRight = left.topLeft;
            up.bottomLeft = left.bottomRight;
            up.bottomRight = left.topRight;

            left.bottomLeft = down.bottomRight;
            left.topLeft = down.bottomLeft;
            left.bottomRight = down.topRight;
            left.topRight = down.topLeft;

            down.bottomRight = right.topRight;
            down.bottomLeft = right.bottomRight;
            down.topRight = right.topLeft;
            down.topLeft = right.bottomLeft;

            right.topRight = temp1;
            right.bottomRight = temp2;
            right.topLeft = temp3;
            right.bottomLeft = temp4;

            temp1 = front.topLeft;
            front.topLeft = front.bottomLeft;
            front.bottomLeft = front.bottomRight;
            front.bottomRight = front.topRight;
            front.topRight = temp1;

            temp1 = back.bottomRight;
            back.bottomRight = back.bottomLeft;
            back.bottomLeft = back.topLeft;
            back.topLeft = back.topRight;
            back.topRight = temp1;
        }
        if ((a[j] == 'Z' && a[j+1] == '+') || (a[j] == 'Z' && a[j+1] == '2'))
        {
            int i = 0;
            while (i < 3)
            {
                temp1 = up.topLeft;
                temp2 = up.topRight;
                temp3 = up.bottomLeft;
                temp4 = up.bottomRight;

                up.topLeft = right.topRight;
                up.topRight = right.bottomRight;
                up.bottomLeft = right.topLeft;
                up.bottomRight = right.bottomLeft;

                right.topRight = down.bottomRight;
                right.bottomRight = down.bottomLeft;
                right.topLeft = down.topRight;
                right.bottomLeft = down.topLeft;

                down.bottomRight = left.bottomLeft;
                down.bottomLeft = left.topLeft;
                down.topRight = left.bottomRight;
                down.topLeft = left.topRight;

                left.bottomLeft = temp1;
                left.topLeft = temp2;
                left.bottomRight = temp3;
                left.topRight = temp4;

                temp1 = front.topLeft;
                front.topLeft = front.topRight;
                front.topRight = front.bottomRight;
                front.bottomRight = front.bottomLeft;
                front.bottomLeft = temp1;

                temp1 = back.topLeft;
                back.topLeft = back.bottomLeft;
                back.bottomLeft = back.bottomRight;
                back.bottomRight = back.topRight;
                back.topRight = temp1;

                ++i;
                if (a[j+1] == '+' && i == 2)
                    break;
            }
        }
        if ((a[j] == 'X' && a[j+1] != '+') || (a[j] == 'X' && a[j+1] != '2'))
        {
            temp1 = up.bottomLeft;
            temp2 = up.topLeft;
            temp3 = up.bottomRight;
            temp4 = up.topRight;

            up.bottomLeft = front.bottomLeft;
            up.topLeft = front.topLeft;
            up.bottomRight = front.bottomRight;
            up.topRight = front.topRight;

            front.bottomLeft = down.bottomLeft;
            front.topLeft = down.topLeft;
            front.bottomRight = down.bottomRight;
            front.topRight = down.topRight;

            down.bottomLeft = back.bottomLeft;
            down.topLeft = back.topLeft;
            down.bottomRight = back.bottomRight;
            down.topRight = back.topRight;

            back.bottomLeft = temp1;
            back.topLeft = temp2;
            back.bottomRight = temp3;
            back.topRight = temp4;

            temp1 = right.topLeft;
            right.topLeft = right.bottomLeft;
            right.bottomLeft = right.bottomRight;
            right.bottomRight = right.topRight;
            right.topRight = temp1;

            temp1 = left.topLeft;
            left.topLeft = left.topRight;
            left.topRight = left.bottomRight;
            left.bottomRight = left.bottomLeft;
            left.bottomLeft = temp1;
        }
        if ((a[j] == 'X' && a[j+1] == '+') || (a[j] == 'X' && a[j+1] == '2'))
        {
            int i = 0;
            while (i < 3)
            {
                temp1 = up.topLeft;
                temp2 = up.topRight;
                temp3 = up.bottomLeft;
                temp4 = up.bottomRight;

                up.topLeft = back.topLeft;
                up.topRight = back.topRight;
                up.bottomLeft = back.bottomLeft;
                up.bottomRight = back.bottomRight;

                back.topLeft = down.topLeft;
                back.topRight = down.topRight;
                back.bottomLeft = down.bottomLeft;
                back.bottomRight = down.bottomRight;

                down.topLeft = front.topLeft;
                down.topRight = front.topRight;
                down.bottomLeft = front.bottomLeft;
                down.bottomRight = front.bottomRight;

                front.topLeft = temp1;
                front.topRight = temp2;
                front.bottomLeft = temp3;
                front.bottomRight = temp4;

                temp1 = left.topLeft;
                left.topLeft = left.bottomLeft;
                left.bottomLeft = left.bottomRight;
                left.bottomRight = left.topRight;
                left.topRight = temp1;

                temp1 = right.topLeft;
                right.topLeft = right.topRight;
                right.topRight = right.bottomRight;
                right.bottomRight = right.bottomLeft;
                right.bottomLeft = temp1;

                ++i;
                if (a[j+1] == '+' && i == 2 )
                    break;
            }
        }
    }
	printf("   +------+\n");
    printf("  / %c  %c /|\n", up.topRight, up.bottomRight);
    printf(" / %c  %c /%c|\n", up.topLeft, up.bottomLeft, front.topRight);
    printf("+------+%c |\n", front.topLeft);
    printf("| %c  %c | %c|\n", left.topLeft, left.topRight, front.bottomRight);
    printf("|      |%c +\n", front.bottomLeft);
    printf("| %c  %c | /\n", left.bottomLeft, left.bottomRight);
	printf("+------+\n");

    if(front.topLeft == front.topRight && 
    front.topRight == front.bottomRight && 
    front.bottomRight == front.bottomLeft && 
    up.topLeft == up.topRight && 
    up.topRight == up.bottomRight && 
    up.bottomRight == up.bottomLeft &&
    up.bottomLeft == up.topLeft && 
    left.topLeft == left.topRight && 
    left.topRight == left.bottomRight && 
    left.bottomRight == left.bottomLeft && 
    left.bottomLeft == left.topLeft)
    {
        printf("Hurrah!");
    }

	return 0;
}
