# Lecture 6 Code Snippets

## Slide 5

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <stdbool.h>
    int main()
    {
        int a, b;
        a==b;
        a<=b;

        //no error
        bool b1;

        b1 = a==b;
        printf("%s\n", b1? "true" : "false");
        b1 = a <= b;
        printf("%s\n", b1? "true" : "false");
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

## Slide 7

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <stdbool.h>
    int main()
    {
        bool a = true , b = false , c;

        c = !a;
        printf("%s\n", c ? "true" : "false");

        c = a && b;
        printf("%s\n", c ? "true" : "false");

        c = a||b;
        printf("%s\n", c ? "true" : "false");

        c = !a || b;
        printf("%s\n", c ? "true" : "false");
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
    #include <stdbool.h>
    int main()
    {
        int a = 10 , b = 20;
        float f = 54.677f;
        double d = 547.775;
        char c1 = 'A' , c2 = 'a';
        bool b1;

        b1 = a == f;
        printf("%s\n", b1 ? "true" : "false");

        b1 = a <= d + 5;
        printf("%s\n", b1 ? "true" : "false");

        b1 = d < c1 * 10;
        printf("%s\n", b1 ? "true" : "false");

        b1 = c1 == c2;
        printf("%s\n", b1 ? "true" : "false");

        b1 = '1' < '2';
        printf("%s\n", b1 ? "true" : "false");

        b1 = c1 + f < d + a;
        printf("%s\n", b1 ? "true" : "false");
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
    #include <stdbool.h>
    int main()
    {
        bool b1,b2;
        int i = 0, j = 20;

        b1 = i && j;
        printf("b1 = %s\n", b1 ? "true" : "false");

        b2 = j || j;
        printf("b2 = %s\n", b2 ? "true" : "false");

        i = b1 + b2;
        printf("i = %d\n",i);

        j = (i < j) + (b1 && b2);
        printf("j = %d\n",j);
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
    #include <stdbool.h>
    #include <math.h>
    int main()
    {
        int i = -1;
        bool a = true, b = false, c = true;

        bool d = a || b || c;
        printf("d = %s\n", d ? "true" : "false");

        bool d = b && (a || c);
        printf("d = %s\n", d ? "true" : "false");

        bool d = (i > 0) && (sqrt(i) > 5.6);
        printf("d = %s\n", d ? "true" : "false");
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
        int number, remainder;
        scanf("%d", &number);

        remainder = number % 2;

        if(remainder == 0)
            printf("The number is even.\n");
        else
            printf("The number is odd.\n");
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
        int num;
        char c;

        printf("Enter a char: ");
        scanf(" %c", &c);

        printf("Enter a number: ");
        scanf("%d", &num);

        if(num > 0)
            printf("Your number is larger than 0\n");
        else
            printf("Your number is less than or equal 0\n");
        
        if( c >= '0' || c <= '9')
            printf("Your char is Numeric\n");
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
    int main()
    {
        int numg;
        char alphag;

        scanf("%d", &numg);

        if(numg < 25)
            alphag = 'D';
        if(numg >= 25 && numg < 50)
            alphag = 'C';
        if(numg >= 50 && numg < 75)
            alphag = 'B';
        if(numg >= 75)
            alphag = 'A';

        printf("%c\n", alphag);
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

## Slide 25

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int numg;
        char alphag;

        scanf("%d", &numg);

        if(numg < 25)
            alphag = 'D';
        else
        {
            if(numg < 50)
                alphag = 'C';
            
            else
            {
                if(numg < 75)
                    alphag = 'B';
                else
                    alphag = 'A';
            }
        }

        printf("%c\n", alphag);
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
        int numg;
        char alphag;

        scanf("%d", &numg);

        if(numg < 25)
            alphag = 'D';
        else if(numg < 50)
            alphag = 'C';
        else if (numg < 75)
            alphag = 'B';
        else
            alphag = 'A';

        printf("%c\n", alphag);
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
        int numg;
        char alphag;

        scanf("%d", &numg);

        if(numg < 50)
        {
            if(numg < 25)
                alphag = 'D';
            else
                alphag = 'C';
        }

        else
        {
            if(numg < 75)
                alphag = 'B';
            else
                alphag = 'A';
        }

        printf("%c\n", alphag);
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
    int main()
    {
        char c;
        scanf(" %c", &c);

        if( c <= 'z' && c>= 'a' || c <= 'Z' && c >= 'A')
        {
            if(c > 'a')
                printf("The char is Lowercase\n");
            else
                printf("The char is Uppercase\n");
        }

        else if( c<= '9' && c>= '1')
        {
            if( c > '5')
                printf("The char is greater than 5\n");
            else
                printf("The char is less than or equal 5\n");
        }

        else
        printf("The char is not either alphabetic or numeric\n");
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
    //duplicate zero
    int main()
    {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        int pw=1, n2 = n;
        while(n > 1)
        {
            pw *= 10;
            n/=10;
        }
        pw/=10;

        while(pw >= 1)
        {
            int c = n2 / pw;

            if(c==0)
                printf("00");
            else
                printf("%d", c);

            n2 %= pw;
            pw /= 10;
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

## Slide 37

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int res, opd1, opd2;
        char opr;
        printf("Operand1 : ");
        scanf("%d", &opd1);
        printf("Operand2 : ");
        scanf("%d", &opd2);
        printf("Operator : ");
        scanf(" %c", &opr);

        switch(opr)
        {
            case '-':
                res = opd1 - opd2;
                break;
            case '+':
                res = opd1 + opd2;
                break;
            case '/':
                res = opd1 / opd2;
                break;
            case '*':
                res = opd1 * opd2;
                break;
            default:
                printf("Invalid operator\n");
                return -1;
        }

        printf("%d %c %d = %d", opd1 , opr, opd2, res);
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

## Slide 43

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <stdbool.h>
    int main()
    {
        bool b;
        int x, y;
        scanf("%d %d", &x, &y);

        switch(x)
        {
            case 0:
                b=0;
                break;
            case 1:
                switch(y)
                {
                    case 0:
                        b=0;
                        break;
                    case 1:
                        b=1;
                        break;
                }
        }

        printf("%s\n", b ? "true" : "false");
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

## Slide 46

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int x, signum;
        scanf("%d", &x);

        signum = (x < 0) ? -1 : ((x==0) ? 0 : 1);

        printf("%d", signum);
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

## Slide 47

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int numg;
        scanf("%d", &numg);
        int d = numg / 25;

        char g = (d==0) ? 'D' : ( (d==1) ? 'C' : ((d==2) ? 'B' : 'A'));

        printf("%c\n", g);
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

## Slide 48

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        double d1, d2;
        d1 = 1e20 + 1;
        d2 = 1e20 - 1;
        if(d1 == d2)
         printf("They are equal :-o \n");
        else
         printf("They are not equal :D \n");
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

## Slide 322

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main(void){
        int n, x1, x2, x3, q1, q2, result;
        printf("Enter a 3-digit number: ");
        scanf("%d", &n);

        if((n < 100) || (n > 999))
        {
            printf("Wrong input\n");
            return -1;
        }

        x1 = n / 100;
        x2 = (n % 100) / 10;
        x3 = n % 10;
        q1 = 100;
        q2 = 10;

        if(x3 == 0)
        {
            q1 *= 10;
            q2 *= 10;
        }

        if(x2 == 0)
            q1 *= 10;

        result = (x1 * q1) + (x2 * q2) + x3;
        printf("result = %d\n", result);
        
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

## Slide 323

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int num;
        scanf("%d", &num);

        int pw=1;
        int res=0;

        while(num!=0)
        {
            if(num % 10)
                pw *= 10;

            res += pw * (num % 10);

            num /= 10;
            pw *= 10;
        }

        printf("%d", res);
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
