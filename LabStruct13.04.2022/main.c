#include <stdio.h>
#include <stdlib.h>
#include<math.h>

typedef struct Point
{
    int x;
    int y;
}point;

int main()
{
    int n = 3;
    double triangleArea=0;
    point points[n];
    for(int i = 0; i<n ; i++)
    {
        printf("[x] Point %d: ", i+1);
        scanf("%d", &points[i].x);

        printf("[y] Point %d: ", i+1);
        scanf("%d", &points[i].y);
        printf("\n");
    }
    double a = sqrt(pow(points[1].x-points[0].x, 2)+(pow(points[1].y-points[0].y,2)));
    printf("side a: %lf\n",a);
    double b = sqrt(pow(points[2].x-points[1].x, 2)+(pow(points[2].y-points[1].y,2)));
    printf("side b: %lf\n",b);
    double c = sqrt(pow(points[2].x-points[0].x, 2)+(pow(points[2].y-points[0].y,2)));
    printf("side c: %lf\n",c);
//    triangleArea+=0.5*fabs(points[0].x * points[1].y
//                           + points[1].x * points[2].y
//                           + points[2].x * points[0].y
//                           - points[0].x * points[2].y
//                           - points[1].x * points[0].y
//                           - points[2].x * points[1].y);
//    printf("The area is: %.2lf\n",triangleArea);
    return 0;
}

