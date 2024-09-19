#include<stdio.h>
int main(){
    int age;
    printf("Enter your age Pathetic Human:");
    scanf("%d", &age);

    if(age<0){
        printf("WTF!!..You are %d years old? What kind of joke is this!!..You Moron!!", age);
    }else if(age==0){
        printf("Funny..You are just born yet??..TF is wrong with you humans?!!");
    }else if(age>=1 && age<=5){
        printf("What are you doing here you little Kid!!");
    }else if(age>5 && age<=10){
        printf("Get the F out of here Kid!!");
    }else if(age>=18 && age<70){
        printf("You are Signed Up...Stupid!!");
    }else if(age>=70 && age<90){
        printf("Fuck you are old!!..Anyway you are signed up");
    }else if(age>=90 && age<=120){
        printf("If you are really %d years old, Congrats you lived a very long Life ", age);
    }else if(age>120){
        printf("Human beings can't possibly live that long!! You are Joking!!");
    }else{
        printf("You are a Minor Human, get out of here!!");
    }
    return 0;
}