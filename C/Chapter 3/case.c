#include<stdio.h>
#include<math.h>
int main() {
    char day ;
    printf("Enter day(m,t,w,tu,f,s,sun): ");
    scanf("%s",&day);
    switch(day){
        case 'm' : printf("monday \n");
  
                 break;
        case 't' : printf("tuesday \n");
                 break;
        case 'w' : printf("wednesday \n");
                 break;
        case 'd' : printf("thursday \n");
                 break;
        case 'f' : printf("friday \n");
                 break;
        case 's' : printf("saturday \n");
                 break;
        case 'n' : printf("sunday \n");
                 break;
        default:printf("Not a valid day! \n");
    }
return 0;
}
