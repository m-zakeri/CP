# Lecture 7 Code Snippets

## Slide 9

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int number = 0 , n;
        printf("Enter n: ");
        scanf("%d", &n);
        while(number <= n)
        {
            printf("%d\n", number);
            number++;
        }
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 10

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int negative=0, positive=0 , number;
    
        printf("Enter Zero to stop \n");
    
        scanf("%d", &number);
        if(number> 0)
                positive++;
            else if(number< 0)
                negative++;
    
        while(number != 0)
        {
            scanf("%d", &number);
            if(number> 0)
                positive++;
            else if(number< 0)
                negative++;
        }
    
        printf("The number of positive numbers = %d\n", positive);
        printf("The number of negative numbers = %d\n", negative);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 13

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n);
    
        double i = 1.0;
        double sum = 0;
    
        while(i <= n)
        {
            sum += i/ (i+1);
            i++;
        }
    
        printf("sum = %lf\n", sum);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 14

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int negative=0, positive=0 , number;
    
        printf("Enter Zero to stop \n");
    
        do
        {
            scanf("%d", &number);
            if(number> 0)
                    positive++;
                else if(number< 0)
                    negative++;
        }while(number != 0);
        
    
        printf("The number of positive numbers = %d\n", positive);
        printf("The number of negative numbers = %d\n", negative);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 17

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int grade , count, i=0;
        double sum = 0;
    
        scanf("%d", &count);
    
        while(i < count)
        {
            scanf("%d", &grade);
            sum += grade;
            i++;
        }
    
        printf("The average of your class is %0.3lf\n", sum/count);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 18

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int number;
        scanf("%d", &number);
    
        for(int i = 0 ; i <= number ; i+=2)
            printf("%d\n", i);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 19

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int number;
        scanf("%d", &number);
    
        for(int i = 0 ; i <= number ; i++)
            if(i % 2 == 0)
                printf("%d\n", i);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 21

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <math.h>
    int main()
    {
        int n;
        printf ("Enter a natural number:\n");
        scanf ("%d", &n);
    
        int flag = 1;
        
        if((n == 1) ||( (n != 2) && n % 2 == 0))
            flag = 0;
    
        for(int i = 3 ; i< sqrt(n) ; i+=2)
            if(n % i == 0)
                flag = 0;
    
        if(flag)
            printf ("%d is prime\n", n);
        else
            printf ("%d is not prime\n", n);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 29

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <math.h>
    int main()
    {
        int arr[20];
        double sum = 0;
        
        for(int i = 0 ; i < 20 ; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
    
        double avg = sum / 20;
        int lower = 0, higher = 0 ;
        for(int i = 0; i < 20 ; i++)
        {
            if(arr[i] >= sum)
                higher ++;
            else 
                lower ++;
        }
    
        printf("average = %lf\n", avg);
        printf("Small Size = %d, Large Size = %d\n", lower, higher);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 30

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <math.h>
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        double sum = 0;
        
        for(int i = 0 ; i < n ; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
    
        double avg = sum / n;
        int lower = 0, higher = 0 ;
        for(int i = 0; i < n ; i++)
        {
            if(arr[i] >= sum)
                higher ++;
            else 
                lower ++;
        }
    
        printf("average = %lf\n", avg);
        printf("Small Size = %d, Large Size = %d\n", lower, higher);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 37

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int n, m;
        scanf("%d %d", &m , &n);
    
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
                printf("*");
    
            if(i == n)
                break;
            printf("\n");
        }
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 39

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);
    
        for(int i = 1; i <= n ; i++)
        {
            for(int j = 1; j<=i ; j++)
                printf("*");
    
            if(i != n)
                printf("\n");
        }
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 41

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int n; 
        scanf("%d", &n);
    
        for(int i = 1; i <= n ; i++)
        {
            for(int j = 1 ; j< i ; j++)
                printf(" ");
            for(int j = 1; j<= i ; j++)
                printf("*");
            
            printf("\n");
        }
    
        for(int i = n-1; i >= 1 ; i--)
        {
            for(int j = 1 ; j< i ; j++)
                printf(" ");
            for(int j = 1; j<= i ; j++)
                printf("*");
            
            printf("\n");
        }
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```

---

## Slide 49

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    int main(void) {
        int row, col;
        do
        {
            scanf("%d %d", &row , & col);
        }while( row < 1 || col < 1 || row < col);
    
        row--;
        col--;
        if(col > row - col)
            col = row - col;
    
        long long res=1;
        for(int i = 1; i<= col ; i++)
            res *= (row - col + i) / i;
    
        printf("%lld", res);
    }
    ```

=== "C++"

    ``` c++
    #include <iostream>
    
    int main() {
        // Your code here
        return 0;
    }
    ```