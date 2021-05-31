 #include <stdio.h>
int main() 
{
	int q, w, e, n;
	int s=0;
	scanf("%d", &q);
	scanf("%d", &w);
	scanf("%d", &e);
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		if(q>=w && q>=e)
		{
			s=s+q;
			q--;
		}
		else if(w>=q && w>=e)
		{			
			s=s+w;
			w--;
		}
		else if(e>=q && e>=w)
		{
			s=s+e;
			e--;
		}		
	} 	
	printf("%d", s); 
	return 0;
}

