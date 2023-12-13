#include <stdio.h>
int main(){
   int even,odd,i,n,a[50];
    printf("Enter the number of terms: ");
    scanf("%d",&n);
/*input*/
for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&a[i]);
        }
printf("\nOdd\tEven\n");
for(i=0;i<n;i++){
        if(i%2==0)
        /*array index starts from 0*/
        printf("\n%d\t",a[i]);
        else
        printf("%d\t",a[i]);
              }
 return 0;
}