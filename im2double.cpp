#include &lt;malloc.h&gt;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

double **im2double(image,numrows,numcolumns)
unsigned char *image;
int numrows,numcolumns;
{
double **orig_im;
int i,row,col;

if ((orig_im=(double **)malloc(numrows*sizeof(double *)))==NULL)
{
printf("Not enough memory.\n");
exit(1);
}

i=0;
for (row=0; row&lt;numrows; row++)
{
if ((orig_im[row]=(double *)malloc(numcolumns*sizeof(double)))==NULL)
{
printf("Not enough memory.\n");
exit(1);
}
for (col=0; col&lt;numcolumns; col++) {
orig_im[row][col]=((double)(image[i++]));
}
}
return(orig_im);
}