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
    
        if(number%2 == 0)
            printf("Even");
        else
            printf("Odd");
    }
    ```

