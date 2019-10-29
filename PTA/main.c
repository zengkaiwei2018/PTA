//
//  main.c
//  PTA
//
//  Created by s20181105306 on 2019/10/29.
//  Copyright © 2019 s20181105306. All rights reserved.
//

#include<stdio.h>
    int main()
    {
        double n;
        scanf("%lf",&n);
        if(n<0)
            printf("Invalid Value!\n");
        else if(n<=50)
            printf("cost = %.2lf\n",n*0.53);
        else if(n>50)
            printf("cost = %.2lf\n",(50*0.53+(n-50)*0.05));
        return 0;
    }
    
