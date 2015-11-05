#include <stdio.h>
int a, b, c, max, min, entre;

int main(){
  while(1){
    entre=0;

    printf("\n\nEntrez la val de a: ");
    scanf("%d",&a);
    printf("Entrez la val de b: ");
    scanf("%d",&b);
    printf("Entrez la val de c: ");
    scanf("%d",&c);
    printf("\na -> %d\nb -> %d\nc -> %d\n",a,b,c);

    //test meme nombre
    if(a==b && a==c){
      printf("Les valeurs sont les même, donc\na = b = c\n%d = %d = %d\n\n",a,b,c);
      continue;
    }

    //max
    if (a>=b && a>=c){
      printf("\nMax : a -> %d\n",a);
      max=a;
      entre=1;
    }
    else if (b>=a && b>=c){
      printf("\nMax : b -> %d\n",b);
      max=b;
      entre=2;
    }
    else{                               //if (c>=a && c>=b){
      printf("\nMax : c -> %d\n",c);
      max=c;
      entre=3;
    }
    //min

    if (a<=b && a<=c){
      printf("Min : a -> %d\n",a);
      min=a;
      entre=entre+1;
    }
    else if (b<=a && b<=c){
      printf("Min : b -> %d\n",b);
      min=b;
      entre=entre+2;
    }
    else{                            //if (c<=a && c<=b){
      printf("Min : c -> %d\n",c);
      min=c;
      entre=entre+3;
    }

    //entre
    switch (entre)
    {
      case 3:
        printf("Milieu : c -> %d\n\n",c);
        entre=c;
        break;

      case 4:
        printf("Milieu : b -> %d\n\n",b);
        entre=b;
        break;

      case 5:
        printf("Milieu : a -> %d\n\n",a);
        entre=a;
        break;
    }

    //on remet dans l'ordre
    a=min;
    b=entre;
    c=max;
    printf("Maintenant a vaut %d, b vaut %d, c vaut %d\n",a,b,c);
    printf("Et remis dans l'ordre : \na < b < c\n");
    printf("%d < %d < %d\n\n",a,b,c);
    }
    return 0;
    }
