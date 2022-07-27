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
        

        case 3:
            bubbleSort(number, n);
            break;

          
   
    }
    return 0;
}