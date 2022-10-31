#include<stdio.h>
#include<math.h>
void main() {
float btech=3100,mtech=350,ms=150,phd;
float total=4000;
phd=total-(btech+mtech+ms);
printf("phd students:%f\n",phd);
float btechper=(btech/total)*100;
printf("b.tech per is:%.2f\n",btechper);
float mtechper=(mtech/total)*100;
printf("m.tech per is:%.2f\n",mtechper);
float msper=(ms/total)*100;
printf("ms per is:%.2f\n",msper);
float phdper=(phd/total)*100;
printf("phd per is:%.2f\n",phdper);

//return 0;
}

