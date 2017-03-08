struct point
{
    int x;
    int y;
    int pixel_val;
    // use flag when the point is assumed center of location pattern
    // flag==0: the point is not grouped 
    // flag==1: the point is  grouped 
    int flag;
};

// Function to test: say hello to Jack
void say_hello();