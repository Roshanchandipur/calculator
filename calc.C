#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define pi 3.14

void qe(){
    
    float a,b,c,d,r1,r2;
    
    system("cls");
    printf("\t\t\t\t\t\t\tCreated by RK\n\n");
    printf("Quadratic equation\n\n");
    printf("Enter a, b and c of the quadratic equarion\n\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0){

    r1=(-b-sqrt(d))/(2*a);
     r2=(-b+sqrt(d))/(2*a);
    printf("First and second roots are  % .2f  and  % .2f",r1,r2);
    } 
    else
    {
        d=sqrt(-d);
        printf("Real roots are not possible\nimagionary roots are:\n\n");
        printf("First and second roots are          (% .2f - % .2f i)/% .2f and (% .2f + % .2f i)/% .2f",-b,d,2*a,-b,d,2*a);

    }
    
    
}
void li(){
 int ch=0;
 float x1,y1,z1,x2,y2,z2,x3,y3,z3,a1,a2,a3,c1,c2,c3,d;

system("cls");
printf("\t\t\t\t\t\t\tCreated by RK\n\n");
printf("Linear equations:\n\n1.Two Variables\n2.Three Variables\n\nEnter your choice ");
scanf("%d",&ch);
system("cls");
printf("\t\t\t\t\t\t\tCreated by RK\n\n");

switch (ch)
{
case 1:
    printf("Linear equations in %d Variables",ch+1);
    printf("\n\nEnter\n\n");
    printf("x1=");
    scanf("%f",&x1);
    printf("y1=");
    scanf("%f",&y1);
    printf("c1=");
    scanf("%f",&c1);
    printf("x2=");
    scanf("\n%f",&x2);
    printf("y2=");
    scanf("%f",&y2);
    printf("c2=");
    scanf("%f",&c2);
    
    if((y2*x1-y1*x2)==0||(x1*y2-x2*y1))
      printf("\nsystem is inconistent\nHas infinite or NO solution");
    else{
    a1=(y2*c1-y1*c2)/(y2*x1-y1*x2);
    a2=(x1*c2-x2*c1)/(x1*y2-x2*y1);
    printf("\n\nAnswes are : X=% .2f and  Y=% .2f",a1,a2);
    }
    break;
 case 2:
    printf("Linear equations in %d Variables",ch+1);
    printf("\n\nEnter\n\n");
    printf("x1=");
    scanf("%f",&x1);
    printf("y1=");
    scanf("%f",&y1);
    printf("z1=");
    scanf("%f",&z1);
    printf("c1=");
    scanf("%f",&c1);
    printf("\nx2=");
    scanf("%f",&x2);
    printf("y2=");
    scanf("%f",&y2);
    printf("z2=");
    scanf("%f",&z2);
    printf("c2=");
    scanf("%f",&c2);
    printf("\nx3=");
    scanf("%f",&x3);
    printf("y3=");
    scanf("%f",&y3);
    printf("z3=");
    scanf("%f",&z3);
    printf("c3=");
    scanf("%f",&c3);

    d=(x1*(y2*z3-z2*y3))-(y1*(x2*z3-z2*x3))+(z1*(x2*y3-y2*x3));
    if(d==0)
       printf("\nsystem is inconistent\nHas infinite ot NO solution");
    else{
        a1=(c1*(y2*z3-z2*y3))-(y1*(c2*z3-z2*c3))+(z1*(c2*y3-y2*c3));
        a2=(x1*(c2*z3-z2*c3))-(c1*(x2*z3-z2*x3))+(z1*(x2*c3-c2*x3));
        a3=(x1*(y2*c3-c2*y3))-(y1*(x2*c3-x3*c2))+(c1*(x2*y3-y2*x3));
        printf("\n\nAnswes are : X=% .2f ,  Y=% .2f  and  Z=% .2f",a1/d,a2/d,a3/d);
    }   
    break;

default:
    printf("\nInvalid choice");
    
}
}
void t(){
    
    int ch=0;
    float q;
    float ans;
    system("cls");
    printf("\t\t\t\t\t\t\tCreated by RK\n\n");
    printf("Roots\n\n1.Square root\n2.Cube root\n3.4th root\n\nEnter your choice  ");
    scanf("%d",&ch);
    system("cls");
    if(ch==1)
    printf("Square root");
    else if(ch==2)
    printf("Cube root");
    else if(ch==3)
    printf("4th root");
    switch (ch)
    {
    case 1:
        printf("\n\nEnter number  ");
        scanf("%f",&q);
        if(q<0)
        printf("\nAns is % .2f i",sqrt(-q));
        else
        printf("\nAns is % .2f ",sqrt(q));
        break;
    case 2:
        printf("\n\nEnter number  ");
        scanf("%f",&q);
        if(q<0)
        printf("\nThe number must be positive");
        else
        printf("\nAns is % .2f",exp(log(q)/3));
        break;
    case 3:
        printf("\n\nEnter number  ");
        scanf("%f",&q);
        if(q<0)
        printf("\nThe number must be positive");
        else
        printf("\nAns is % .2f",exp(log(q)/4));
        break;
    default:
        printf("\nInvalid choice");
    }
}
void car(){
   
   int ans,mode,a=3;
   double angle,r,x,y,angle1;

    
    system("cls");
    printf("\t\t\t\t\t\t\tCreated by RK\n\n");
    printf("\n1.Polar ---> Cartesian\n2.Cartesian ---> Polar\n\nSelect from above\n");
    scanf("%d",&ans);

    switch (ans)
    {
    case 1:
     
      system("cls");
      printf("\t\t\t\t\t\t\tCreated by RK\n\n");
      printf("Conversions  \nPolar ---> Cartesian");
      printf("\nChoose mode of angle\n1.Degree(s)\n2.Radian    ");
      while (a>0)
      {   
          scanf("%d",&mode);
          if(mode==1 || mode==2)
             break;
          else
          {
              printf("\ninvalid mode you have %d more attempt(s)  ",--a);
              if(a>=1)
             printf("\n\ntry again      ");
          }
      }
      if(a==0)
      {
          printf("\nYou have exceeded the limit");
          goto end;
      }
      else{
         system("cls");
         printf("\t\t\t\t\t\t\tCreated by RK\n\n");
         printf("Conversions  \nPolar ---> Cartesian");
         printf("\n\nEnter 'r' and angle\n");
         scanf("%lf%lf",&r,&angle);
         if(mode==1)
           angle1=(pi/180)*angle;
          else
          {
              angle1=angle;
          }
          x=r*cos(angle1);
          y=r*sin(angle1);
          if(mode==1){
            printf("\n\n(%.2lf,%.2lf) in cartesian form is : x = %.2lf and",r,angle,x);
            printf("\n\t\t\t\t   y = %.2lf",y);
          } 
          else
          {
            printf("\n\n(%.2lf,%.2lf) in cartesian form is : x = %.2lf and\n\t\t\t\ty = %.2lf",r,angle1,x,y);
          }
          

      }
    break;

    case 2:
      
      system("cls");
      printf("\t\t\t\t\t\t\tCreated by RK\n\n");
      printf("Conversions  \nCartesian ---> Polar");
      printf("\nChoose mode of angle\n1.Degree(s)\n2.Radian    ");
      while (a>0)
      {   
          scanf("%d",&mode);
          if(mode==1 || mode==2)
             break;
          else
          {
             printf("\ninvalid mode you have %d more attempt(s)  ",--a);
             if(a>=1)
             printf("\ntry again      ");
          }
      }
      if(a==0)
      {
          printf("\n\nYou have exceeded the limit");
          goto end;
      }
      else{
         system("cls");
         printf("\t\t\t\t\t\t\tCreated by RK\n\n");
         printf("Conversions  \nCartesian ---> Polar");
         printf("\n\nEnter x and y\n");
         scanf("%lf%lf",&x,&y);
         r=sqrt((x*x)+(y*y));
         angle=atan2l(y,x);
         if(mode==1)
           printf("\n\n(%.2lf,%.2lf) in polar form is  r = %.2lf and angle = %.2lf degrees",x,y,r,angle*(180/pi));
         else
         {
           printf("\n\n(%.2lf,%.2lf) in polar form is  r = %.2lf and angle = %.2lf radian",x,y,r,angle);
         }
}

    break;  
    default:
        printf("\nInvalid choice");
    }

   end: 
   printf("");
}
void act(){
    int ch;
   system("cls"); 
  printf("\t\t\t\t\t\t\tCreated by RK\n\n");
   printf("1.Quadratic eq 1 var\n2.Linear Equation\n3.Roots\n4.Polar  <--->  Cartesian\n\nEnter your choice ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        qe();
        break;
    case 2:
       li();
        break;
    case 3:
        t();
        break;
    case 4:
        car();
        break;
    default:
        printf("\nInvalid choice");      
   }
}
int main()
{   
    char choice='y';
    system("cls");
    printf("\t\t\t\t\t\t\tCreated by RK\n\n");
    
   while(choice=='y'||choice=='Y')
  {

   act();
   printf("\n\n                               Press y to continue anything else to quit  ");
   scanf("%s",&choice);
  }
  system("cls");
  printf("\t\t\t\t\t\t\tCreated by RK\n\n");
  printf("\n\nPlz give your feedback");
  printf("\n\nPress any key to exit");
  getch();
  return 0;
}