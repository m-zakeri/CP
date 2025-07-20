# Lecture 2 Code Snippets

## Slide 7

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int x1,x2,x3;
        printf("Please enter the integers: ");
        scanf("%d %d %d", &x1,&x2,&x3);
    
        double average;
    
        average = (x1 + x2 +x3)/3.0;
    
        printf("Average :%lf", average);
    }
    ```


=== "C++"

    ``` c++
    /** By: Negin Eini-pour **/
    #include <iostream>

    int main(void) {
       
      return 0;
    }
    ```

---

## Slide 8

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    int main()
    {
        int number;
        scanf("%d", &number);
    
        if(number%2 == 0)
            printf("Even");
        else
            printf("Odd");
    }
    ```


=== "C++"

    ``` c++
    #include <iostream>

    int main(void) {
       
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
        int number;
        scanf("%d", &number);
    
        if(number<0)
            number *= -1;
        
        while(number>1)
            number -= 2;
        
        if(number == 0)
            printf("Even");
        else
            printf("Odd");
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

## Slide 11

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    int main()
    {
        int number; 
        scanf("%d", &number);
    
        while( number>1 || number<-2)
        {
            if(number <0)
                number +=2;
            else
                number -=2;
        }
    
        if(number == 0 )
            printf("Even");
        else
            printf("Odd");
    
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

## Slide 12

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    int main()
    {
        int num;
        int count_even = 0 , count_odd = 0;
        do
        {
            scanf("%d", &num);
            if( num == 0)
                break;
            else if(num %2 == 0)
                count_even++;
            else
                count_odd++;
        }while(num != 0);
    
        printf("%d Even numbers and %d odd numbers", count_even, count_odd);
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
        int number;
        scanf("%d", &number);
    
        int sum_of_digits=0;
    
        while( number != 0)
        {
            sum_of_digits += (number % 10);
            number/=10;
        }
    
        printf("%d", sum_of_digits);
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
    void cbase(int num, int base)
    {
    
        if(num==0)
            return;
    
        cbase( num/base , base);
        
        printf("%d", num%base);
    
    
        
    
    }
    
    
    int main()
    {
        int decimal;
        scanf("%d", &decimal);
    
        if(decimal == 0)
        {
            printf("0");
            return 0;
        }
    
        cbase(decimal, 8);
    
    
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

## Slide 15

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int num;
        scanf("%d", &num);
    
        if(num == 0)
        {
            printf("0");
            return 0;
        }
    
        int fac=1, i=1;
        while(i <= num)
        {
            fac *= i;
            i++;
        }
    
        printf("%d", fac);
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

## Slide 16

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    int main() {
        int n;
        scanf("%d", &n);
        int arr[15];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    
        int max_length = 0;
        int start = -1;
        int end = -1;
    
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += arr[j];
                if (sum == 0) {
                    int current_length = j - i + 1;
                    if (current_length > max_length) {
                        max_length = current_length;
                        start = i;
                        end = j;
                    }
                }
            }
        }
    
        if (max_length == 0) {
            printf("[]\n");
        } else {
            printf("[");
            for (int i = start; i <= end; i++) {
                printf("%d", arr[i]);
                if (i != end) {
                    printf(", ");
                }
            }
            printf("]\n");
        }
    
        return 0;
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
    
    
    int fac(int num)
    {
        if(num <= 0)
            return 1;
        
        return num * fac( num - 1);
    }
    
    int main()
    {
        int num;
        scanf("%d", &num);
    
    
        printf("%d", fac(num));
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
        int n;
        scanf("%d", &n);
        int arr[n];
        
        int j =0;
        while(j < n)
        {
            scanf("%d", &arr[j]);
            j++;
        }
    
        int start = 0 , end = n-1;
    
        while(start != end )
        {
            int i = start + 1;
    
            while(i <= end)
            {
                if( arr[i] < arr[start])
                {
                    int temp;
                    temp = arr[start];
                    arr[start] =  arr[i];
                    arr[i] = temp; 
                    
                    /*swap2:
                    
                    arr[start] = arr[start] + arr[end];
                    arr[end] = arr[start] - arr[end];
                    arr[start] = arr[start] - arr[end];
                    
                    
                    */            
                }
                i++;
            }
            start ++;
    
        }
    
        int k = 0;
        while(k < n)
        {
            printf("%d ", arr[k]);
            k++;
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

## Slide 20

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        
        int j =0;
        while(j < n)
        {
            scanf("%d", &arr[j]);
            j++;
        }
    
    
        int start = 0 , end = n-1;
        while(start < end)
        {
            int temp;
            temp = arr[start];
            arr[start] =  arr[end];
            arr[end] = temp; 
    
            start++;
            end--;
        }
    
        int k = 0;
        while(k < n)
        {
            printf("%d ", arr[k]);
            k++;
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

## Slide 21

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <math.h>
    
    int main()
    {
        int num;
        scanf("%d", &num);
    
        if( num ==  1)
        {
            printf("Not Prime");
            return 0;
        }
    
        if( num == 2 || num == 3)
        {
            printf("Prime");
            return 0;
        }
    
    
    
        for (int i = 2; i <= sqrt(num); i++)
        {
            if( num %i == 0)
            {
                printf("Not Prime");
                return 0;
            }
        }
    
        printf("Prime");
    
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

## Slide 26

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
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

## Slide 27

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    int main()
    {
        int num1, num2, num3;
        scanf("%d %d %d", &num1 , &num2, &num3);
        int max;
    
        if(num1> num2)
        {
            if(num3 > num1)
                max=num3;
            else
                max= num1;
        }
    
        else
        {
            if(num3 > num2)
                max=num3;
            else
                max= num2;
        }
    
        printf("%d", max);
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
    
    int main()
    {
        int x,n;
        scanf("%d %d", &x, &n);
    
        int sum=0, term=1;
    
        int i=0;
        while(i <= n)
        {
            sum += term;
    
            term *= -x;
            i++;
        }
    
        printf("%d", sum);
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

[file content end]