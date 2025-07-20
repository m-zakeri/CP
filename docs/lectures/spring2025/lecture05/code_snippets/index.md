# Lecture 5 Code Snippets

## Slide 7

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        printf("%d\n",100);
        printf("%d, %d\n", +1000, -100);
        printf("%i\n", 100);
        printf("%ld, %i\n", +1000, -100);
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

## Slide 8

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        unsigned int i = 26;
        printf("%u\n",i);
        printf("%o\n",i);
        printf("%x\n",i);
        printf("%X\n",i);    
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

## Slide 9

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    int main()
    {
        printf("%f\n", 100.5f);
    
        float f = -2;
        double d = 100;
        printf("%f, %lf\n", f, d);
        printf("%f, %e\n", 1e3, 1e3);
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
        printf("%c\n", 'a');
        printf("%c, %c\n", 'a','b');
        char c1 = 'a';
    
        printf("%c, %c, %c", c1,'b', 65);
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
        printf("This is message\n");
        printf("This is %s\n", "message");
        
        char str1[20] = "This is message";
        printf("%s\n", str1);
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
        printf("|%4d|\n", 1);
        printf("|%4d|\n", 12345);
        printf("|%4d|\n", -12345); 
        printf("|%4f|\n", 1234.0f); 
        printf("|%15f|\n", 1234.0f); 
        printf("|%4c|\n", 'A'); 
        printf("|%-4c|\n", 'A'); 
        printf("|%4s|\n", "ABC"); 
        printf("|%4s|\n", "ABCDE"); 
        printf("|%6d|\n", 1234); 
        printf("|%-6d|\n", 1234);
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
    int main()
    {
        printf("|%.4d|\n", 1);
        printf("|%.4d|\n", 12345);
        printf("|%.4d|\n", -12345);
        printf("|%.4f|\n", 1234.0f);
        printf("|%.8f|\n", 234.0f);
        printf("|%.4s|\n", "ABC");
        printf("|%.4s|\n", "ABCDEF");
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
        printf("|%10.5d|\n", 12);
    
        printf("|%3.5d|\n", 12);
        
        printf("|%10.5lf|\n", 1.234567890123);
        
        printf("|%0.5lf|\n", 1.234567890123);
        
        printf("|%15.10s|\n", "Hello, world");
        
        printf("|%5.10s|\n", "Hello, world");
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
        int i = 30;
        int j = 2;
        float f = 1.23456789;
        printf("%0*.*f\n", i, j ,f);
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
        int i = -60;
        unsigned int j = 4147482648;
        float f = -700.05;
    
        printf("i = %u\n", i);
        printf("j = %d\n", j);
        printf("i = %f\n", i);
        printf("f = %d\n", f);
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
    int main()
    {
        int i;
        unsigned int j;
        long int l;
    
        scanf("%d", &i);
        scanf("%u", &j);
        scanf("%ld", &l);
    
        printf("%d\n",i);
        printf("%u\n",j);
        printf("%ld\n",l);
    
        scanf("%o", &i);
        scanf("%x", &i);
        scanf("%i", &i);
    
        printf("%o\n",i);
        printf("%x\n",i);
        printf("%i\n",i);
    
        float f;
        double d;
        scanf("%f", &f);
        scanf("%lf", &d);
    
        printf("%f\n",f);
        printf("%lf\n",d);
    
        float f1,f2;
        scanf("%f", &f1);
        scanf("%e", &f2);
    
        printf("%f\n",f1);
        printf("%e\n",f2);
    
        char c1, c2, c3;
        scanf("%c", &c1);
        scanf("%c", &c2);
        scanf("%c", &c3);
    
        printf("%c\n",c1);
        printf("%c\n",c2);
        printf("%c\n",c3);
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
    int main()
    {
        int i , j;
        char c;
        scanf("%d%c%d", &i, &c, &j);
        printf("i=%d c=%c j=%d\n", i, c, j);
    
        getchar();
    
        scanf("%d %c%d", &i , &c ,&j);
        printf("i=%d c=%c j=%d\n", i, c, j);
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
        char str[20];
        scanf("%s", str);
        printf("%s\n", str);
    
        scanf("%s", str);
        printf("%s\n", str);
    
        gets(str);
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

## Slide 32

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int i, j;
        scanf("%5d", &i);
        printf("i = %d\n", i);
    
        scanf("%5d%d", &i, &j);
    
        printf("i = %d, j = %d\n", i, j);
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
    int main()
    {
        int sal, mah, rooz;
        scanf("%d/%d/%d", &sal, &mah, &rooz);
        printf("sal = %d, mah = %d, rooz = %d\n", sal, mah, rooz);
    
        int a, b;
        float f;
        scanf("%d--%d%f", &a, &b, &f);
        printf("a = %d, b = %d, f = %f", a, b, f);
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

## Slide 36

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int i;
        unsigned int j;
        unsigned long int k;
        char c;
        float f;
        printf("Enter an int:\n");
        scanf("%d", &i);
    
        printf("Enter an unsigned int:\n");
        scanf("%u", &j);
    
        printf("Enter an unsigned long int:\n");
        scanf("%lu", &k);
    
        printf("Enter a char:\n");
        scanf("%c", &c);
    
        printf("Enter a float\n");
        scanf("%f", &f);
    
        printf("Your inputs are:\n");
        
        printf("int = %d, unsigned int = %u, unsigend long int = %lu, char = %c , float = %f\n",
        i, j, k, c, f);
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

## Slide 38

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        //q1
        double s1, w1, s2, w2, s3, w3;
        
        scanf("%lf %lf %lf %lf %lf %lf", &s1, &w1, &s2, &w2, &s3, &w3);
    
        double avg = (s1*w1 + s2*w2 + s3*w3) / (w1 + w2 + w3);
    
        printf("The average is: %lf\n", avg);
    
        //q2
    
        double c, f;
    
        scanf("%lf", &c);
    
        f= 1.8*c + 32;
        printf("%lf\n", f);
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
