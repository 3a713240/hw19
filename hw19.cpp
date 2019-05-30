#include<stdio.h> 

#include<stdlib.h> 

#include<math.h>   

int main()

{


	printf("請輸入一連串(最多10個)矩形的左上及右下座標：（輸入完畢後請輸入{*}）\n");  

    char s[5];

    int z=0;

    double map[11][4];

    int cr[11];

      while(1)

      {

          scanf("%s",s);

          if(s[0]=='*') break; 

          if(s[0]=='r') 

          {

            scanf("%lf %lf %lf %lf",&map[z][0],&map[z][1],&map[z][2],&map[z][3]); 

             cr[z]=1;

          } 

          else

          {

            scanf("%lf %lf %lf",&map[z][0],&map[z][1],&map[z][2]);

            cr[z]=0;

          }  

          z++; 

     }

    int q,w,e,r=0;

    double x,y; 

      while(1)

      {

      	printf("請輸入座標(x,y)：");  

        scanf("%lf %lf",&x,&y);

        if(x==9999.9&&y==9999.9) break; 

        int flag=0;

        r++;

          for(q=0;q<z;q++) 

          {

            if(cr[q]==1&&x>map[q][0]&&x<map[q][2]&&y<map[q][1]&&y>map[q][3]) 

              {printf("判斷結果：Point %d is contained in figure %d\n",r,q+1);flag=1;}   

            if(cr[q]==0&&sqrt((x-map[q][0])*(x-map[q][0])+(y-map[q][1])*(y-map[q][1]))<map[q][2]) 

              {printf("判斷結果：Point %d is contained in figure %d\n",r,q+1);flag=1;}  

         }

            if(flag==0)

               printf("判斷結果：Point %d is not contained in any figure\n",r);  

      } 

       return 0;

}
