#include <stdio.h>

int swap;

  
// Bubble sort
void bubbleSort(int array[], int n)
{
    for (int c = 0 ; c < n - 1; c++){
        for (int d = 0 ; d < n - c - 1; d++)
        {
          if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
          {
            swap       = array[d];
            array[d]   = array[d+1];
            array[d+1] = swap;
          }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (int c = 0; c < n; c++)
        printf("%d ", array[c]);
}
  
//Insertion sort
void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        // Compare key with each element on the left of it until an element smaller than
        // it is found.
        // For descending order, change key<array[j] to key>array[j].
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
    printf("Sorted list in ascending order:\n");

    for (int c = 0; c < size; c++)
        printf("%d ", array[c]);
}

//Selection Sort
void selectionSort(int array[], int n) {
    for (int c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
    {
        int position = c;

        for (int d = c + 1; d < n; d++)
        {
            if (array[position] > array[d])
                position = d;
        }
        if (position != c)
        {
            int t = array[c];
            array[c] = array[position];
            array[position] = t;
        }
    }

    printf("Sorted list in ascending order:\n");

    for (int c = 0; c < n; c++)
        printf("%d ", array[c]);
}



int main(){
 

    int i, j, a, n, number[30];

    printf("Enter the value of N \n");
    scanf("%d", &n);
    
    printf("Enter the numbers \n");

    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    printf("Choose the type of sorting \n 1.Insertion sort\n 2.Selection sort\n 3.Bubble sort\n 4.Merge Sort\n 5.Quick sort\n");
    int x;
    scanf("%d",&x);
        
    
    switch(x){
        case 1:
            insertionSort(number,n);
            break;

        case 2:
            selectionSort(number,n);
            break;

        case 3:
            bubbleSort(number, n);
            break;

          
   
    }
    return 0;
}