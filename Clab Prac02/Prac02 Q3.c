#include <stdio.h>
          int main()
  {
     float avrgspeed;
      int distance,time;
      printf("Enter the distance travelled in meters");
       scanf("%d",&distance);
      printf("Enter the time taken in seconds");
      scanf("%d",&time);
      avrgspeed=distance/time;
      printf("The average speed is %3fm/s\n",avrgspeed);
       }


