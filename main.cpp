//
//  main.cpp
//  Shamir_threshold
//
//  Created by Zaid Bhat on 17/01/19.
//  Copyright © 2019 Zaid Bhat. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int k,i,j,t,w;
    float x=0,y=0;
    printf("ENTER KEY :\n");
    scanf("%d",&k);
    printf("ENTER THRESHOLD  :\n");
    scanf("%d",&t);
    printf("ENTER PARTICIPANTS:\n");
    scanf("%d",&w);
    int a[t];
    for(i=1;i<t;i++){
        a[i]=rand()%10000;
        printf("%d\n",a[i]);
        
    }
    a[0]=k;
    
    
    int s[w];
    
    
    
    for(i=0;i<w;i++)
    {
        for(j=1;j<t;j++)
        {
            y=(i+1);
            for(k=1;k<j;k++){
                y*=(i+1);
                
            }
            
            x+=a[j]*y;
            
            
        }
        x+=a[0];
        s[i]=x;
        printf("%d\n",s[i]);
        x=0;
        
        
    }
    
    y=0;
    
    for(k=2;k<=t+1;k++){
        x=s[k-1];
        
        for(i=2;i<=t+1;i++){
            if(i!=k){
                
                x*=((float)i/(i-k));
                
            }
            else
            {
                
            }
            
            
            
            
            
            
            
            
        }
        
        y+=x;
        
    }
    printf("%f\n",y);
}
