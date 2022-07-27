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

//Merge Sort
void merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int arrL[n1], arrR[n2];

    for (i=0; i<n1; i++){arrL[i]=arr[l+i];}
    for (j=0; j<n2; j++){arrR[j]=arr[m+1+j];}

    i=0;j=0;k=l;

    while (i<n1 && j<n2){
        if (arrL[i]<=arrR[j]){
            arr[k]=arrL[i];
            i++;
        }
        else{
            arr[k]=arrR[j];
            j++;
        }
        k++;
    }

    while (i<n1){arr[k]=arrL[i];i++;k++;}
    while (j<n2){arr[k] = arrR[j];j++;k++;}
    return;
}
 
void mergeSort(int arr[], int l, int r)
{
    if (l<r){
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
    return;
}

//Quick Sort
void quickSort(int arr[], int first, int last){
    int i, j, pivot, temp;
    if(first<last){
        pivot=first;
        i=first;
        j=last;
        while(i<j){
            while(arr[i]<=arr[pivot]&&i<last){i++;}
            while(arr[j]>arr[pivot]){j--;}
            if(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    temp=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=temp;
    quickSort(arr,first,j-1);
    quickSort(arr,j+1,last);
    }
    return;
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

        case 4:
            mergeSort(number, 0, n - 1);
            printf("Sorted list in ascending order:\n");

            for (int c = 0; c < n; c++)
                printf("%d ", number[c]);
            break;

        case 5:
            quickSort(number,0,n-1);
            printf("Sorted list in ascending order:\n");

            for (int c = 0; c < n; c++)
                printf("%d ", number[c]);
            break;    

           
   
    }
    return 0;
}