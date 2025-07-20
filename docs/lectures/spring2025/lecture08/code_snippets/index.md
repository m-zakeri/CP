# Lecture 8 Code Snippets

## Slide 17

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    void sub(double a , double b)
    {
        double res = a - b;
        printf("Sub of %f and %f is %f\n", a, b, res);
    }
    
    int main()
    {
        double d1 = 10, d2 = 20;
        sub(56.0, 6.0); 
        sub(d1, d2); 
        sub(d1, d2 + d2);
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

## Slide 22

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    //wrong version
    void add(double a, double b, double res)
    {
        res = a + b;
        return;
    
    }
    int main()
    {
        double d1 = 10.1, d2 = 20.2;
        double result = 0;
        add(56.0, 6.7, result);
        printf("result = %f\n", result);
        add(d1, d2, result);
        printf("result = %f\n", result);
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

## Slide 23

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    int b(int i)
    {
        return i;
    }
    
    int c(int j)
    {
        return j;
    }
    
    int a (int i, int j)
    {
        b(i);
        c(j);
        return 0;
    }
    
    int main()
    {
        a(3,5);
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

## Slide 27

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    double fabs(double x)
    {
        if(x<=0)
            return -x;
        return x;
    }
    int main()
    {
        double d = -10;
        double b;
        b = fabs(d);
        printf("%lf\n", b);
        printf("%lf\n", fabs(-2 * b));
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

## Slide 28

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    double my_fabs( double x)
    {
        double res;
        if(x >= 0)
            res = x;
        else
            res = -x;
    
        return res;
    
    }
    
    int main()
    {
        double d = -10;
        double b;
        b = my_fabs(d);
        printf("b = %lf\n", b);
        b = my_fabs(-2 * d);
        printf("b = %lf\n", b);
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

## Slide 31

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    f1(a)
    {
        printf("a = %d\n", a);
        return a / 2;
    }
    
    f2(int a)
    {
        printf("a = %d\n", a);
        return a / 2;
    }
    
    f3(float a)
    {
        printf("a = %f\n", a);
        return a / 2;
    }
    
    int main()
    {
        printf("%d\n", f1(10.5));
        printf("%d\n", f2(10.5));
        printf("%d\n", f3(10.5));
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

## Slide 33

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #define PRINT_INT(x) printf("%d\n", x); \
                        printf("================\n");
    
    inline int gcd(int a, int b)
    {
        int temp;
        while(b != 0)
        {
            temp = a%b;
            a = b;
            b = temp;
        }
    
        return a;
    }
    
    int main()
    {
        int i = 20, j = 35, g;
        g = gcd(j, i);
        printf("GCD of %d and %d = ", i , j);
        PRINT_INT(g);
        g = gcd(j, i);
        printf("GCD of %d and %d = ", j , i);
        PRINT_INT(g);
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
        int i;
        for(i = 1; i <= 10; i++){
        int number;
        printf("Enter %d-th number: ", i);
        scanf("%d", &number);
        if((number % 2) == 0)
        printf("Your number is even\n");
        else
        printf("Your number is odd\n");
        }
        printf("The last number is %d\n", number);
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
        int j = 20, i = 10, k = 0;
        printf("outer i = %d, %d\n", i, j);
        while(k != 1)
        {
        int i = 100;
        j = 200;
        printf("inner i = %d, %d\n", i, j);
        k++;
        }
        printf("outer i = %d, %d\n", i, j);
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

## Slide 44

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int i, j;
    float f;
    void func(void)
    {
        printf("i = %d\n", i);
        printf("f = %f\n", f);
        i = 20;
    }
    void f1()
    {
        printf("%d", i);
    }
    
    int main()
    {
        f = 1000;
        func();
        f1();
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

## Slide 45

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    double x;
    
    void fabs(void)
    {
        x = (x>=0) ? x : -x;
    }
    
    int main()
    {
        double b, d = -10;
        x = d;
        fabs();
        b = x;
        printf("b  = %f\n", b);
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

## Slide 50

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int x=50;
    int main()
    {
        int x=100;
        {
            extern int x;
            printf("x= %d\n",x);
        }
    
    printf("x= %d\n",x);
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

## Slide 57

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int i = 10, j = 20;
    
    void print(void)
    {
        printf("i = %d, j = %d\n", i , j);
    }
    
    int main()
    {
        extern int i;
        int j;
    
        print();
        i = 1000;
        j = 2000;
        print();
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

## Slide 58

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int i;
    void func(void)
    {
        int j;
        printf("i = %d\n", i);
        printf("j = %d\n", j);
        i= 20;
    }
    
    int main()
    {
        func();
        func();
        i = 30;
        func();
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

## Slide 59

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    void func(void)
    {
        int j;
        static int i = 10;
        printf("i = %d\n", i);
        printf("j = %d\n", j);
        i = 20;
    }
    int main()
    {
        func();
        func();
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

## Slide 60

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    void func(void)
    {
        int j;
        static int i;
        printf("i = %d \n", i);
        printf("j = %d \n", j);
        i = 20;
    }
    
    int main()
    {
        func();
        func();
        i = 30;
        func();
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

## Slide 63

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int i;
        for(i = 0; i < 5; i++)
        {
            int j;
            if(i)
        {
            printf("&j = %p, j = %d\n",&j, j);
            j++;
        }
        else
            j = i;
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

## Slide 64

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int i;
        for(i = 0; i < 5; i++)
        {
            int j[5 * i + 1];
            if(i)
            {
                printf("&j[0] = %p, j[0] = %d\n", &(j[0]), j[0]);
                j[0]++;
            }
            else
                j[0] = i;
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

## Slide 65

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int i;
        for(i = 0; i < 5; i++)
        {
            int j[5 * 3 + 1];
            if(i)
            {
                printf("&j[0] = %p, j[0] = %d\n", &(j[0]), j[0]);
                j[0]++;
            }
            else
                j[0] = i;
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
    ## Slide 67

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <math.h>
    
    int check_prime(int n)
    {
        if( n<=1)
            return 0;
        if(n == 2 || n==3)
            return 1;
        for(int i = 3 ; i<=sqrt(n); i++)
            if(n % i == 0)
                return 0;
        
        return 1;
    }
    
    int next_prime(int n)
    {
        if( n==2)
            return 3;
        
        do
        {
            n+=2;
        }while(check_prime(n) == 0);
    
        return n;
    }
    
    int check_goldbakh(int n)
    {
        int i = 2;
    
        while(i <= n/2)
        {
            int j = n - i;
            if(check_prime(j))
                return 1;
            i = next_prime(i);
        }
    
        return 0;
    }
    
    int main()
    {
        int n;
        scanf("%d", &n);
    
        printf("%s\n", check_goldbakh(n) ? "true" : "false");
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

## Slide 78

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int fact(int n)
    {
        int res, tmp;
        if(n == 1)
            return 1;
        return n * fact(n - 1);  
    }
    
    int main()
    {
        int i = 4; 
        printf("%d\n", fact(i));
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

## Slide 85

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int gcd(int a, int b)
    {
        if(b == 0)
            return a;
        return gcd( b , a%b);
    }
    
    int main()
    {
        printf("gcd(1, 10) = %d \n", gcd(1, 10));
        printf("gcd(10, 1) = %d \n", gcd(10, 1));
        printf("gcd(15, 100) = %d \n", gcd(15, 100));
        printf("gcd(100, 15) = %d \n", gcd(100, 15));
        printf("gcd(201, 27) = %d \n", gcd(201, 27)); 
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

## Slide 86

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int fibo(int n)
    {
        if( n == 1 || n == 2)
            return 1;
        return fibo(n-1) + fibo(n-2);
    }
    
    int main()
    {
        printf("fibo(1) = %d\n", fibo(1));
         printf("fibo(3) = %d\n", fibo(3));
         printf("fibo(5) = %d\n", fibo(5));
         printf("fibo(8) = %d\n", fibo(8));
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

## Slide 87

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    void print_right_left(int n)
    {
        if(n == 0)
            return;
    
        printf("%d", n % 10);
        print_right_left(n/10);
    }
    
    int main()
    {
        printf("\n print_digit_right_left(123): ");
        print_right_left(123); 
        printf("\n print_digit_right_left(1000): ");
        print_right_left (1000);   
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

## Slide 88

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    void print_left_right(int n)
    {
        if(n == 0)
            return;
        print_left_right(n/10);
        printf("%d", n % 10);
    }
    
    int main()
    {
        printf("\n print_digit_left_right(123): ");
        print_left_right(123); 
        printf("\n print_digit_left_right(1000): ");
        print_left_right (1000);   
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

## Slide 89

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    int max(int a, int b)
    {
        return a>b ? a : b;
    }
    
    int find_max(int a[], int n)
    {
        if(n == 1)
            return a[0];
        return max( a[n-1], find_max(a , n-1)); 
        /*
        a[]= {a,b,c,d}
         --> find {a,b,c,d} = max(d , find{a,b,c}) -->max(d,max(c ,max(b, a)))
        --> find {a,b,c}= max(c , find{a,b}) --> max(c ,max(b, a))
        --> find {a,b} = max(b , find{a}) --> max(b, a)
        --> find{a} = a
        */
    }
    
    int main()
    {
        int arr[] = {10, 324, 450, 290, 150};
        int n = sizeof(arr)/sizeof(arr[0]);
        printf("Largest in given array is %d", find_max(arr, n));
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

## Slide 91

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <stdbool.h>
    
    bool is_even(int n);
    bool is_odd(int n);
    
    bool is_even(int n)
    {
        if(n == 0)
            return true;
        if(n == 1)
            return false;
        else
            return is_odd(n - 1);
    }
    
    bool is_odd(int n)
    {
        if(n == 0)
            return false;
        if(n == 1)
            return true;
        else
            return is_even(n - 1);
    }
    
    int main()
    {
        printf("3-->%s, 4-->%s", is_odd(3) ? "odd" : "even", is_odd(4) ? "odd" : "even");
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