#include <stdio.h>
void hanoi( int n , char A, char B, char C)
{
    if (n <= 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", A , B);
        return;
    }
        

    hanoi( n-1, A , C, B);
    printf("\n Move disk %d from rod %c to rod %c", n , A , B);

    hanoi(n-1 , C, B, A);   
}


int main()
{
    int num_disk;
    scanf("%d", &num_disk);
    hanoi( num_disk, 'A', 'B', 'C');
}