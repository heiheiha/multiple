//
//  main.cpp
//  multiple
//
//  Created by  黄磊 on 15/12/16.
//  Copyright © 2015年  黄磊. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,num1,num2,temp;
    printf("please input two numbers:\n");
    scanf("%d,%d",&num1,&num2);
    if(num1)
    {
        temp=num1;
        num1=num2;
        num2=temp;
    }
    a=num1;b=num2;
    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    printf("gongyueshu:%d\n",a);
    printf("gongbeishu:%d\n",num1*num2/a);
    return 0;
}
