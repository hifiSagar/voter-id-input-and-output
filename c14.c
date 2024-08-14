#include<stdio.h>
int main(){
    int age;
    char id;
    printf("Enter your age \n");
    scanf("%d",& age);
    
   if(age<18)
{
    printf("Your not eligible for voting\n");
}   
 else if(age == 18);
    {
        printf("Do you have voter id. if you  have press'y'\n");
        scanf("%s",& id);
if(id == 'y')
{
    printf("you are eligible for voting \n");

}
else{
    printf("Apply for voter id\n");
}

    }

      else if (age > 18)
   {
    printf("Do you have voter id. if you have Press'Y'\n");
    scanf("%s",& id);
    if(id =='y')
    {
        printf("you are eligible for voting\n");
    }
    else{
        printf("you are not eligible for voting\n");
        }
    }
return 0;
}

















// #include<stdio.h>
// int main(){
//     int age;
//     char id;
//     printf("Enter your age\n");
//     scanf("%d,&age");
//     if(age<18)
//     {
//         print("your not eligible for voting\n");
//     }
//     else if(age==18)
//     {
//         printf("do you have voter id if you have press 'y'");
//         scanf("%s",id);
//         if(id=='y')
//         {
//             print("you are eligible for voting\n");
//         }
//         else{
//             printf("apply for voter id\n");
//         }
//     }
//     else if(age>18)
//     {
//         printf("do you have voter id if you have press'y'\n");
//         scanf("%s",&id);
//         if(id=='y')
//         {
//             printf("you are eligible for voting\n");
//         }
//         else{
//             printf("you are not eligible for voting\n");
//         }
//     }
//     return 0;  
// }