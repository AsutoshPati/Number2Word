#include<stdio.h>
#include<conio.h>
main(){
char *a[9]={"ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"},
     *c[8]={"TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"},
     *b[10]={"TEN","ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETEEN"},ans;
int e[7],i,d,f,g,h,j;
long int n;
printf("WELCOME to WORD CONVERTER\nby ASUTOSH PATI\n");
do{
ans='y';
//************************intialization************************//
e[0]=0;
e[1]=0;
e[2]=0;
e[3]=0;
e[4]=0;
e[5]=0;
e[6]=0;
e[7]=0;
printf("\nplease enter currency value(upto 99,99,999 without coma): ");
scanf("%ld",&n);
i=0;
while(n>=1)
{ d=n%10;
  e[i]=d;
  i++;
  n=n/10;
}
//*****************************no. to word convertion**************************//
f=(e[6]*10)+e[5];
{ if(f>0&&f<=9)
{ printf("%s lakh ",a[e[5]-1]);
}
else if(f>=10&&f<=19)
     { printf("%s lakh ",b[e[5]]);
     }
else if(f==20)
     { printf("TWENTY lakh ");
     }
else if(f>20&&f<=99)
     { printf("%s %s lakh ",c[e[6]-2],a[e[5]-1]);
     }
}
g=(e[4]*10)+e[3];
{ if(g>0&&g<=9)
{ printf("%s thousand ",a[e[3]-1]);
}
else if(g>=10&&g<=19)
     { printf("%s thousand ",b[e[3]]);
     }
else if(g==20)
     { printf("TWENTY thousand ");
     }
else if(g>20&&g<=99)
     { printf("%s %s thousand ",c[e[4]-2],a[e[3]-1]);
     }
}
if(e[2]>0&&e[2]<=9)
{ printf("%s hundred ",a[e[2]-1]);
}
h=(e[1]*10)+e[0];
{ if(h>0&&h<=9)
  { printf("%s ",a[e[0]-1]);
  }
else if(h>=10&&h<=19)
     { printf("%s ",b[e[0]]);
     }
else if(h==20)
     { printf("TWENTY ");
     }
else if(h>20&&h<=99)
     { printf("%s %s ",c[e[1]-2],a[e[0]-1]);
     }
}
//***************************tail*************************************//
printf("rupees only \n");
printf("\ndo you want to continue y/n ??\n");
ans=getch();
}
while(ans=='y'||ans=='Y');
return 0;
}
