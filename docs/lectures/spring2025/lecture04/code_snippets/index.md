# Lecture 4 Code Snippets

## Slide 5

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        printf("%d\n", 5%4);
        printf("%d\n", 7%88);
        printf("%d\n", -20%7);
        printf("%d\n", 20%-7);
        printf("%d", -20%-7);
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
    int main(void)
    {
        float num1, num2, num3, sum, average;
        printf("Enter 3 number: \n");
        scanf("%f",&num1);
        scanf("%f",&num2);
        scanf("%f",&num3);
        sum = num1 + num2 + num3;
        average = sum / 3;
        printf("Miangin = ");
        printf("%f\n", average);
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

## Slide 14

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    
    /*
    ()
    --   ++
    -    +
    ! 
    (type casting)
    *   /   %
    +   -
    >   >=  <   <=
    ==  !=
    &&
    ||
    = *= += /= -+ %=
    */
    
    int main()
    {
        double x = -5 + 2/4.0 * (-7/8);
        printf("%.1lf\n",x);
    
        double y = 
        (7 + (float) (2 + (int) 1.005)) / (int) 20;
    
        printf("%.1lf\n",y);
    
        double z = 5 + 
        (double)(7 / (int)8.5 / 7.0 * 6);
    
        printf("%.1lf\n",z);
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
    int main(void)
    {
        float num1, num2; 
        int sum;
        printf("Enter 2 number: \n");
        scanf("%f",&num1);
        scanf("%f",&num2);
        sum = (int)num1 + (int)num2;
        printf("%d\n", sum);
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
    int main(void)
    {
        float num1, num2, fpart1, fpart2, sum;
        printf("Enter 2 numbers: \n");
        scanf("%f",&num1);
        scanf("%f",&num2);
        fpart1 = num1 -(int)num1;
        fpart2 = num2 -(int)num2;
        sum = fpart1 +fpart2;
        printf("%f\n",sum);
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

## Slide 19

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        int i = 10;
        i = i+1;
        printf("%d\n",i);
        i++;
        printf("%d\n",i);
        ++i;
        printf("%d\n",i);
        i--;
        printf("%d\n",i);
        --i;
        printf("%d\n",i);
        i=i-1;
        printf("%d\n",i);
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
        int i = 10, j;
        j = i + 1;
        printf("i = %d, j = %d\n", i , j);
        j = i++;
        printf("i = %d, j = %d\n", i , j);
        j = ++i;
        printf("i = %d, j = %d\n", i , j);
        j = i--;
        printf("i = %d, j = %d\n", i , j);
        j = --i;
        printf("i = %d, j = %d\n", i , j);
        j = i - 1;
        printf("i = %d, j = %d", i , j);
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
    int main()
    {
        int i = 9 , j = 20;
        i+= 1;
        j /= i;
    
        printf("i = %d\nj = %d\n", i , j);
    
        i *= i + j - 6 + i / j;
        printf("i = %d\n", i);
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
        int i, j, k, l;
        i = j = k = l = 1;
        i += j *= --k -= 3 / l ;
    
    /*      → i += j *= --k -= 3
            → i += j *= --(k -= 3) [k = -2]
            → i += j *= --k [k = -3]
            → i += j *= -3 [j = -3]
            → i += -3 [i = -2]
            i = -2, j = -3, k = -3, l = 1
    */
    
        printf("i = %d, j = %d, k = %d, l = %d", i , j , k, l);
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

## Slide 24

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    int main()
    {
        char c = 'A', ch;
        int i;
        c++;
        printf("c = %d, c = %c\n", c, c);
        ch = c;
        ch +=3;
        printf("ch = %d, ch = %c\n", ch, ch);
        i = c - ch + 'X' - 'Z';
        printf("%d", i);
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
        int size, i = 10;
        size = sizeof i;
        printf("%d\n", size);
        size = sizeof(i);
        printf("%d\n", size);
        size = sizeof(2000);
        printf("%d\n", size);
        size = sizeof(char);
        printf("%d\n", size);
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
        int i, j, k, n;
        i=j=k=n=1;
        i = sizeof(int) + sizeof(char) + sizeof 10;
    
        printf("i:%d\n",i);
    
        i=j=k=n=1;
        i += j * k++ + sizeof n;
        printf("i:%d j:%d k:%d n:%d\n",i, j , k , n);
    
        i=j=k=n=2;
        i = j + (k = ++n); 
        printf("i:%d j:%d k:%d n:%d\n",i, j , k , n);
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
        int i, j, k;
        k =i =10;
        j = i++ + k + --i;
        printf("j = %d\n", j);
    
        i = j =10;
        i = j + i++;
        printf("i = %d\n", i);
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
    int main(void)
    {
        float a, b, c, x, result;
        printf("Enter a, b, c, x: ");
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        scanf("%f",&x);
        result = a * x * x + b * x + c;
        printf("%f\n", result);
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
    #include <math.h>
    
    int main()
    {
        double f = 36;
        printf("%lf\n", fabs(-f));
    
        printf("%lf\n", sqrt(f));
    
        printf("%lf\n", pow(f, 0.5));
    
        printf("%lf\n", ceil(-10.2));
    
        printf("%lf\n", ceil(10.2));
    
        printf("%lf\n", floor(-10.2));
    
        printf("%lf\n", floor(10.2));
    
        printf("%lf\n", fmax(10.1, 20.2));
    
        printf("%lf\n", fmin(10.1, 20.2));
    
        //رندش میکنه
    
        printf("%lf\n", rint(10.5));
    
        printf("%lf\n", rint(-10.2));
    
        printf("%lf\n", rint(20.6));
    
        printf("%lf\n", rint(-20.6));
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

## Slide 34

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <math.h>
    int main()
    {
        const double PI = 3.141592653589793;
        const double E = 2.7182818284590451;
    
        printf("%lf\n", sin(PI));
    
        printf("%lf\n", cos(PI/2));
    
        printf("%lf\n", acos(1));
    
        printf("%lf\n", log(E));
    
        printf("%lf\n", log(10));
    
        printf("%lf\n", exp(1));
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

## Slide 35

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <math.h>
    #define PI 3.141592653589793
    
    int main(void)
    {
        float r;
        printf("Enter shoa");
        scanf("%f",&r);
        double masahat = PI * pow(r, 2);
        double mohit = 2*PI*r;
        printf("masahat = %f\n", masahat);
        printf("mohit = %f\n", mohit);
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

## Slide 36

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <math.h>
    int main(void)
    {
        float a, b, c, delta, root1, root2;
        printf("Enter a, b, c: ");
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);    
        delta =sqrt((b * b)-(4 * a * c));
        root1 =(-b + delta)/(2 * a);
        root2 =(-b - delta)/(2 * a);
        printf("root1 = ");
        printf("%f\n", root1);
        printf("root2 = ");
        printf("%f\n", root2);
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

## Slide 40

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    int main(void)
    {
        int r1, r2;
        srand(0);
        r1 = rand();
        printf("r1 = %d\n", r1);
        time_t t = time(NULL);
        srand(t);
        r2 = rand();
        printf("r2 = %d\n", r2);
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

## Slide 41

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    int main(void)
    {
        time_t t = time(NULL);
        srand(t);
        int ir = rand();
        double fr =(ir + 1)/(RAND_MAX + 2.0);
        printf("%f\n", fr);
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

## Slide 42

=== "C"
    
    ``` C
    /** By: Negin Eini-pour **/
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    int main ()
    {
        int i, n;
        time_t t;
        srand((unsigned) time(&t));
        
        printf("%d\n",rand() % 50);
        printf("%d\n",rand() % 50);
        printf("%d\n",rand() % 50);
        return(0);
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