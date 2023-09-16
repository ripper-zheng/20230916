#includestring.h
#includestdio.h
#includestdlib.h
#includemath.h
#define max(a,b) ((a)  (b)  (a)  (b))
#define min(a,b) ((a)  (b)  (a)  (b))

int n;
double X,Y;
double x[10024],y[10024];

int i,j;
typedef struct temp
{
    double t;
    int xiabiao;
}double1;
double1 temp[10025];




int cmp(double a,double b)
{
    return a-b;
    
}


int main()
{    double len,width;
    scanf(%d %lf %lf,&n,&X,&Y);
    for(i=1;i=n;i++)scanf(%lf %lf,&x[i],&y[i]);
    for(i=1;i=n;i++)
    {
        len=x[i]-X;
        width=y[i]-Y;
        if(len0)
        {
            len=0-len;
        }
        if(width0)
        {
            width=-width;
        }
        double temp_s=pow(len,2)+pow(width,2);
        temp[i].t=pow(temp_s,0.5);
        temp[i].xiabiao=i;
    }
    
    for(i=1;i=n-1;i++)冒泡排序优点  多个检测点距离相同时，编号较小的视为更近。
    {
        for(j=0;jn-i;j++)
        {
            if(temp[j].ttemp[j+1].t)
            {    
                double1 temp1=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=temp1;
                
            }
            
            
            
        }
        
    }
    for(i=1;i=3;i++)
        printf(%dn,temp[i].xiabiao);

    
    
    
    return 0;
    
    
    
    
}
