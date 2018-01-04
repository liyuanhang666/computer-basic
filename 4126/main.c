void liandan(int grass[],int water[],int *xiandan,int n)
{
    int i,con=0;
    for(i=0;i<n;i++)
    {
        if(grass[i]>=10&&water[i]>=grass[i]/2+1)
        {
            con++;
        }

    }
    *xiandan=3*con;
        return ;
}
