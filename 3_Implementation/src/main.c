/**
 * @file src.c
 * @author Tharageshwari (thara@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>  
#include "outfit.h"

int RectangleChoice(int);
int InvertedTriangleChoice(int);
int TriangleChoice(int);
int SpoonChoice(int);
int BottomHourglassChoice(int);
int TopHourglassChoice(int);
int HourglassChoice(int) ;

int main()  
{  
    int i;
    float bust, waist, highHip, hip; 

    printf("NOTE : Enter all the required values in centimeter. \n") ;
  
    printf("Enter your Bust size - the circumference measured around the chest over the fullest part of the breasts, while wearing a properly fitted bra : \n");  
    scanf("%f", &bust);  

    printf("Enter your Waist size - the smallest circumference measured around the natural waist, just above the belly button : \n");
    scanf("%f", &waist);

    printf("High hip size - the circumference of the upper swell of the hip over the pelvic region. It is around 7 inches (18 cm) below the natural waist : \n");
    scanf("%f", &highHip);

    printf("Enter your Hip size - the largest circumference measured around the hips over the largest part of the buttocks : \n");  
    scanf("%f", &hip);  

    float bh = subract(bust, hip);
    float hb = subract(hip, bust);
    float bw = subract(bust, waist);
    float hw = subract(hip, waist);
  
    if((bh <= 2.54 && hb < 9.144) && (bw >= 22.86 || hw >= 25.4))  
    {  
        printf("Your Body Shape : Hourglass \n");  
        printf("Enter any ONE NUMBER for your choice : \n 1 - Shirts \n 2 - Jeans \n 3 - Shorts \n 4 - Jumpsuits and Playsuits \n 5 - Dresses \n ");
        scanf("%d",&i);
         
        HourglassChoice(i);     
        
    }  
    else if(hb >= 9.144 && hb < 25.4 && hw >= 22.86 && (highHip/waist) < 1.193)  
    {  
        printf("Your Body Shape : Bottom Hourglass \n"); 
        printf("Enter any ONE NUMBER for your choice : \n 1 - Shirts \n 2 - Jeans \n 3 - Shorts \n 4 - Jumpsuits and Playsuits \n 5 - Dresses \n ");
        scanf("%d",&i);
         
        TopHourglassChoice(i) ;
       
    }  
    else if(bh > 2.54 && bh < 25.4 && bw >= 22.86)  
    {  
        printf("Your Body Shape : Top Hourglass \n");  
        printf("Enter any ONE NUMBER for your choice : \n 1 - Shirts \n 2 - Jeans \n 3 - Shorts \n 4 - Jumpsuits and Playsuits \n 5 - Dresses \n ");
        scanf("%d",&i);
         
        BottomHourglassChoice(i);
        
    }  

    else if(hb > 5.08 && hw >= 17.78 && (highHip/waist) >= 1.193)  
    {  
        printf("Your Body Shape : Spoon \n");
        printf("Enter any ONE NUMBER for your choice : \n 1 - Shirts \n 2 - Jeans \n 3 - Shorts \n 4 - Jumpsuits and Playsuits \n 5 - Dresses \n ");
        scanf("%d",&i);
           
        SpoonChoice(i);
        
    }  
    else if(hb >= 9.144 && hw < 22.86)  
    {  
        printf("Your Body Shape : Triangle \n"); 
        printf("Enter any ONE NUMBER for your choice : \n 1 - Shirts \n 2 - Jeans \n 3 - Shorts \n 4 - Jumpsuits and Playsuits \n 5 - Dresses \n ");
        scanf("%d",&i);

        TriangleChoice(i);
    }  
    else if(bh >= 9.144 && bw < 22.86)  

    {  
        printf("Your Body Shape : Inverted triangle \n"); 
        
        //printf("Styling the Inverted Triangle : \n The inverted triangle body shape is heavier on the top due to the wide shoulder line.\n The goal for dressing this shape is to balance the broader shoulders, chest and back with the narrower lower body to create a balanced silhouette.\n This is achieved by choosing clothes that add curves to the hips and bottom while creating a more defined waist and de-emphasising the upper body.");
        //printf("Soften the shoulder line /n Reduce the wide appearance of your shoulders by playing them down and balancing them out with the narrower hips.\n 1.Soften the broad shoulder line with soft, draping, and weighty fabrics \n 2.Avoid wide necklines that broaden the shoulders and other strong shoulder details (eg shoulder pads) \n 3.Steer clear of patterns on your tops and scarves around your neck and shoulders \n 4.Keep your upper body clean and uncluttered");
        //printf("Create curves around your hips : \n Add volume and interest to your hips and bottom to make them look curvier and your shoulders smaller.\n 1.Create the illusion of a waist with waist details \n 2.Select clothes that add volume to the lower body to widen the hips \n 3.Draw attention to your legs by wearing lighter, brighter colours or adding details \n 4.Keep away from skinny and tight trousers as well as narrowing hemlines that visually reduce the lower body");  
        
        printf("Enter any ONE NUMBER for your choice : \n 1 - Shirts \n 2 - Jeans \n 3 - Shorts \n 4 - Jumpsuits and Playsuits \n 5 - Dresses \n ");
        scanf("%d",&i);
         
        InvertedTriangleChoice(i);
    }
    else if(hb < 9.144 && bh < 9.144 && bw < 22.86 && hw < 25.4)  
    {  
        printf("Your Body Shape : Rectangle \n"); 
        printf("Enter any ONE NUMBER for your choice : \n 1 - Shirts \n 2 - Jeans \n 3 - Shorts \n 4 - Jumpsuits and Playsuits \n 5 - Dresses \n ");
        scanf("%d",&i);

        RectangleChoice(i);
        
    }  
    else  
    {  
        printf("Wrong entry\n");  
    }  
    return 0;  
} 
