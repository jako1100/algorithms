

#include <stdio.h>
#include <stdlib.h>
#define SIZE 9
char linear_search(char* arr1,char size,char num);
char binary_search(char* arr1,char size,char num);
void bubble_sort(char* arr1,char size);
void selection_sort(char* arr4,char size);
void mergeSort(char *arr, char Left, char Right) ;
void merge(char *arr, char l, char m, char r) ;



char main(void) {
	char ret=200;
	char arr[SIZE]={2,1,6,7,8,12,10,9,16};
	//ret=binary_search(arr,SIZE,14);
	//printf("%d\n",ret);
mergeSort(arr,0,SIZE-1);
for(char i=0;i<SIZE;i++)   printf("%d ",arr[i]);

	return 0;
}

/**********************/
/****linear_search*****/
/**********************/

char linear_search(char* arr1,char size,char num)
{
	char i=0;
	for(i=0;i<size;i++)
	{
		if(num==arr1[i])
		{

return i;
		}


	}
return -1;
}

char binary_search(char* arr2,char size,char num)
{
char start=0;
char end=size-1;
char middle=(start+end)/2;
while(start<=end)
{
	printf("%d\n",middle);

if(arr2[middle]==num)
{
printf("found!\n");
return middle;
}
else if (arr2[middle]>num)
{
end=middle;
middle=(start+end)/2;

}
else if (arr2[middle]<num)
{
start=middle;
middle=(start+end)/2;

}

}
return -1;
}

void bubble_sort(char* arr3,char size)
{
char i=0,j=0;
char temp=0;
for(i=0;i<size-1;i++)
{
	for(j=0;j<size-1-i;j++)
	{
		if(arr3[j]>arr3[j+1])
		{
			temp= arr3[j];
			arr3[j]=arr3[j+1];
			arr3[j+1]=temp;
		}
	}
}

for(i=0;i<size;i++)
{
printf("%d ",arr3[i]);
}
}


void selection_sort(char* arr4,char size)
{
	char i=0;
	char j=0;
	char temp=0;
	char min=0;
	for(i=0;i<size-1;i++)
	{   min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr4[min]>arr4[j])
			{
				min=j;
			}
					
		}
		temp=arr4[min];
		arr4[min]=arr4[i];
		arr4[i]=temp;
	}
	
	for(i=0;i<size;i++)
{
printf("%d ",arr4[i]);
}
}


void mergeSort(char *arr, char Left, char Right) 
{ 
    if (Left < Right) 
    { 
       
        char mid = Left+(Right-Left)/2; 
  
        mergeSort(arr, Left, mid); 
        mergeSort(arr, mid+1, Right); 
  
        merge(arr, Left, mid, Right); 
    } 
} 
void merge(char *arr, char l, char m, char r) 
{ 
    char i, j, k; 
    char n1 = m - l + 1; 
    char n2 =  r - m; 
  
    char L[n1], R[n2]; 
      for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    
    i = 0; 
    j = 0;
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
   
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
   
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 