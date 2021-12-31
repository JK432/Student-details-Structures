#include <stdio.h>

int main(void) {
struct jk
{
char name[50];
int rollno;
int mark[5];
int total;
}jk[100];
int n;
 
printf("Enter the number of students\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
  printf("Enter the name of student\n");
  scanf("%s",jk[i].name);
  printf("Enter the rollno of student\n");
  scanf("%d",&jk[i].rollno);
  printf("Enter the marks for five subjects out of 100\n");
  int sum =0;
  for(int j=0;j<5;j++){
    scanf("%d",&jk[i].mark[j]);
    sum=sum+jk[i].mark[j];
  }
  float avg = sum/5;
  printf("Total marks is %d\n ",sum);
  if(avg<=100 && avg>=90){
    printf("Grade: A+\n");
  }
    else if(avg<90 && avg>=80){
    printf("Grade: A\n");
  }
    else if(avg<80 && avg>=70){
    printf("Grade: B+ \n");
  }
    else if(avg<70 && avg>=60){
    printf("Grade: B\n");
  }
    else if(avg<60 && avg>=50){
    printf("Grade: C+ \n");
  }
    else if(avg<50 && avg>=40){
    printf("Grade: C \n");
  }
    else if(avg<40 && avg>=30){
    printf("Grade: D+ \n");
  }
    else if(avg<30 && avg>=20){
    printf("Grade: D \n");
  }
    else{
    printf("Grade: Failure is the key to sucess\n");
  }
  
  

}

}