#include &lt;stdio.h&gt;
#define rows 4
#define cols 4

void main()
{
// DEclare the Array
int x[rows][cols] , i , j , sum = 0 , sumd = 0 , sumnd = 0;

// Accept the data
for (i = 0 ; i &lt; rows ; i++)
{
for (j = 0 ; j &lt; cols ; j++)
{
printf(&quot;\nPlease Enter Element at Row %d and Col %d : &quot; , i , j);
scanf(&quot;%d&quot; , &amp;x[i][j]);
}
}

// Display the Array / Matrix
printf(&quot;\nMatrix is .... \n&quot;);
for (i = 0 ; i &lt; rows ; i++)
{
for (j = 0 ; j &lt; cols ; j++)

{
printf(&quot;%d\t&quot; , x[i][j]);
}
printf(&quot;\n&quot;);
}

// Sum ....
for (i = 0 ; i &lt; rows ; i++)
{
for (j = 0 ; j &lt; cols ; j++)
{
sum = sum + x[i][j];
// Diagonal Elements : i == j

if (i == j)
sumd = sumd + x[i][j];
else
sumnd = sumnd