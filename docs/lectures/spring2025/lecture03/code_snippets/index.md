# Lecture 3 Code Snippets

## Slide 30

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <limits.h>
    int main()
    {
        int i;
        unsigned int j;
        
        i = INT_MAX;
        i++;
        printf("i= %d\n", i);

        j = UINT_MAX;
        j++;
        printf("j= %u\n", j);
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
    #include <limits.h>
    int main()
    {
        int i;
        unsigned int j;
        
        i = INT_MIN;
        i--;
        printf("i= %d\n", i);

        j = 0;
        j--;
        printf("j= %u\n", j);
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

## Slide 53

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int i, j = 20;
        i= j;

        printf("i = %d\n", i);

        double d = 65536;
        double b = d;

        printf("d = %.1lf\nb = %.1lf\n", d, b);

        d = b = i = j = 0;

        printf("j = %d, i = %d, b= %.1lf, d = %.1lf", j , i ,b, d);
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

    int main()
    {
        int i;
        short s;
        float f;
        double d;

        s = 'A';
        i = 'B';
        f = 4566;
        d = 5666;

        printf("s=%hu\ni=%d\nf=%.1f\nd=%.1lf",s,i,f,d);
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

## Slide 61

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        float f = 65536;
        double d = 65536;
        short s = 720;

        printf("s=%hu\n",s);
        char c = (char) 65536;
        s = (short) 65536;
        int i = 1.22;
        int j = 1e23;

        printf("f=%.1f\nd=%.1lf\nc=%c\ns=%hu\ni=%d\nj=%d",f,d,c,s,i,j);
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

## Slide 62

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <stdbool.h>
    int main()
    {
        bool b2 = 'a' , b3 = -9 , b4 = 4.5 ;
        bool b5 = 0 , b6 = false , b7 = '\0';

        printf(b2 ? "true" : "false");
        printf("\n");
        printf(b3 ? "true" : "false");
        printf("\n");
        printf(b4 ? "true" : "false");
        printf("\n");
        printf(b5 ? "true" : "false");
        printf("\n");
        printf(b6 ? "true" : "false");
        printf("\n");
        printf(b7 ? "true" : "false");
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
        char cresult , c1, c2,c3;

        c1= 100;
        c2= 90;
        cresult = c1 + c2;

        printf("c1=%c\nc2=%c\ncresult=%c",c1,c2,cresult);
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

## Slide 66

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int i =-3;
        unsigned short u;

        u = i;
        printf("u = %hu\n", u);
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

## Slide 68

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>

    int main()
    {
        const int STUDENTS = 38;
        const long int MAX_GRADE = 20;
        int i;
        i = MAX_GRADE;
        // STUDENTS = 39; // Error: assignment of read-only variable
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

## Slide 69

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #define STUDENTS 38
    int main(void){
        int i;
        i = STUDENTS;
        // STUDENTS = 90; // Error: lvalue required
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
